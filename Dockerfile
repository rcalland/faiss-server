FROM nvidia/cuda:8.0-devel-ubuntu16.04

RUN apt-get update -y && \
    apt-get install -y \
    curl git libssl-dev libopenblas-dev automake autoconf libtool

ENV BLASLDFLAGS /usr/lib/libopenblas.so.0

ENV GRPC_VERSION=1.16.0 \
        GRPC_JAVA_VERSION=1.16.1 \
        GRPC_WEB_VERSION=1.0.0 \
        PROTOBUF_VERSION=3.6.1 \
        PROTOBUF_C_VERSION=1.3.1 \
        PROTOC_GEN_DOC_VERSION=1.1.0

RUN mkdir -p /protobuf && \
        curl -L https://github.com/google/protobuf/archive/v${PROTOBUF_VERSION}.tar.gz | tar xvz --strip-components=1 -C /protobuf
RUN cd /protobuf && \
        autoreconf -f -i -Wall,no-obsolete && \
        ./configure --prefix=/usr --enable-static=no && \
        make -j2 && make install

# cmake
RUN curl https://cmake.org/files/v3.11/cmake-3.11.4-Linux-x86_64.sh -o /tmp/curl-install.sh \
      && chmod u+x /tmp/curl-install.sh \
      && mkdir /usr/bin/cmake \
      && /tmp/curl-install.sh --skip-license --prefix=/usr/bin/cmake \
      && rm /tmp/curl-install.sh
ENV PATH="/usr/bin/cmake/bin:${PATH}"

WORKDIR /builder
COPY . .
RUN mkdir build

WORKDIR /builder/build
RUN cmake ..
RUN make

ENV LD_LIBRARY_PATH $LD_LIBRARY_PATH:/builder/build/faiss/src/faiss

ENTRYPOINT ["/builder/build/bin/faiss_server"]
CMD ["--help"]
