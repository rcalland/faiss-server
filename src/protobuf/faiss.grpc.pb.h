// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: faiss.proto
#ifndef GRPC_faiss_2eproto__INCLUDED
#define GRPC_faiss_2eproto__INCLUDED

#include "faiss.pb.h"

#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace faiss {

class FaissService final {
 public:
  static constexpr char const* service_full_name() {
    return "faiss.FaissService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status HealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::faiss::HealthCheckResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>> AsyncHealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>>(AsyncHealthCheckRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>> PrepareAsyncHealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>>(PrepareAsyncHealthCheckRaw(context, request, cq));
    }
    virtual ::grpc::Status Search(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::faiss::SearchResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>> AsyncSearch(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>>(AsyncSearchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>> PrepareAsyncSearch(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>>(PrepareAsyncSearchRaw(context, request, cq));
    }
    virtual ::grpc::Status SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::faiss::SearchByIdResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>> AsyncSearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>>(AsyncSearchByIdRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>> PrepareAsyncSearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>>(PrepareAsyncSearchByIdRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>* AsyncHealthCheckRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::HealthCheckResponse>* PrepareAsyncHealthCheckRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>* AsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchResponse>* PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>* AsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss::SearchByIdResponse>* PrepareAsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status HealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::faiss::HealthCheckResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>> AsyncHealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>>(AsyncHealthCheckRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>> PrepareAsyncHealthCheck(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>>(PrepareAsyncHealthCheckRaw(context, request, cq));
    }
    ::grpc::Status Search(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::faiss::SearchResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>> AsyncSearch(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>>(AsyncSearchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>> PrepareAsyncSearch(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>>(PrepareAsyncSearchRaw(context, request, cq));
    }
    ::grpc::Status SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::faiss::SearchByIdResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>> AsyncSearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>>(AsyncSearchByIdRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>> PrepareAsyncSearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>>(PrepareAsyncSearchByIdRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>* AsyncHealthCheckRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faiss::HealthCheckResponse>* PrepareAsyncHealthCheckRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* AsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* AsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* PrepareAsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_HealthCheck_;
    const ::grpc::internal::RpcMethod rpcmethod_Search_;
    const ::grpc::internal::RpcMethod rpcmethod_SearchById_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status HealthCheck(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HealthCheckResponse* response);
    virtual ::grpc::Status Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response);
    virtual ::grpc::Status SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_HealthCheck : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HealthCheck() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_HealthCheck() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HealthCheck(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HealthCheckResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHealthCheck(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::faiss::HealthCheckResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Search() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearch(::grpc::ServerContext* context, ::faiss::SearchRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss::SearchResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SearchById : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SearchById() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SearchById() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearchById(::grpc::ServerContext* context, ::faiss::SearchByIdRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss::SearchByIdResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_HealthCheck<WithAsyncMethod_Search<WithAsyncMethod_SearchById<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_HealthCheck : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HealthCheck() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_HealthCheck() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HealthCheck(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HealthCheckResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Search() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SearchById : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SearchById() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SearchById() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_HealthCheck : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_HealthCheck() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_HealthCheck() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HealthCheck(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HealthCheckResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHealthCheck(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Search() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearch(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SearchById : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SearchById() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_SearchById() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearchById(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HealthCheck : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HealthCheck() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::protobuf::Empty, ::faiss::HealthCheckResponse>(std::bind(&WithStreamedUnaryMethod_HealthCheck<BaseClass>::StreamedHealthCheck, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HealthCheck() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HealthCheck(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HealthCheckResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHealthCheck(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::faiss::HealthCheckResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Search() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::faiss::SearchRequest, ::faiss::SearchResponse>(std::bind(&WithStreamedUnaryMethod_Search<BaseClass>::StreamedSearch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSearch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss::SearchRequest,::faiss::SearchResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SearchById : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SearchById() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse>(std::bind(&WithStreamedUnaryMethod_SearchById<BaseClass>::StreamedSearchById, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SearchById() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSearchById(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss::SearchByIdRequest,::faiss::SearchByIdResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_HealthCheck<WithStreamedUnaryMethod_Search<WithStreamedUnaryMethod_SearchById<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_HealthCheck<WithStreamedUnaryMethod_Search<WithStreamedUnaryMethod_SearchById<Service > > > StreamedService;
};

}  // namespace faiss


#endif  // GRPC_faiss_2eproto__INCLUDED
