// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/error_code.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common/error_code.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace common {

namespace {

const ::google::protobuf::Descriptor* StatusPb_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StatusPb_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2ferror_5fcode_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_common_2ferror_5fcode_2eproto() {
  protobuf_AddDesc_common_2ferror_5fcode_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common/error_code.proto");
  GOOGLE_CHECK(file != NULL);
  StatusPb_descriptor_ = file->message_type(0);
  static const int StatusPb_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatusPb, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatusPb, msg_),
  };
  StatusPb_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StatusPb_descriptor_,
      StatusPb::default_instance_,
      StatusPb_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatusPb, _has_bits_[0]),
      -1,
      -1,
      sizeof(StatusPb),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatusPb, _internal_metadata_),
      -1);
  ErrorCode_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2ferror_5fcode_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StatusPb_descriptor_, &StatusPb::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_common_2ferror_5fcode_2eproto() {
  delete StatusPb::default_instance_;
  delete StatusPb_reflection_;
}

void protobuf_AddDesc_common_2ferror_5fcode_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_common_2ferror_5fcode_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027common/error_code.proto\022\rapollo.common"
    "\"I\n\010StatusPb\0220\n\nerror_code\030\001 \001(\0162\030.apoll"
    "o.common.ErrorCode:\002OK\022\013\n\003msg\030\002 \001(\t*\360\006\n\t"
    "ErrorCode\022\006\n\002OK\020\000\022\022\n\rCONTROL_ERROR\020\350\007\022\027\n"
    "\022CONTROL_INIT_ERROR\020\351\007\022\032\n\025CONTROL_COMPUT"
    "E_ERROR\020\352\007\022\021\n\014CANBUS_ERROR\020\320\017\022\032\n\025CAN_CLI"
    "ENT_ERROR_BASE\020\264\020\022(\n#CAN_CLIENT_ERROR_OP"
    "EN_DEVICE_FAILED\020\265\020\022\037\n\032CAN_CLIENT_ERROR_"
    "FRAME_NUM\020\266\020\022!\n\034CAN_CLIENT_ERROR_SEND_FA"
    "ILED\020\267\020\022!\n\034CAN_CLIENT_ERROR_RECV_FAILED\020"
    "\270\020\022\027\n\022LOCALIZATION_ERROR\020\270\027\022\033\n\026LOCALIZAT"
    "ION_ERROR_MSG\020\234\030\022\035\n\030LOCALIZATION_ERROR_L"
    "IDAR\020\200\031\022\035\n\030LOCALIZATION_ERROR_INTEG\020\344\031\022\034"
    "\n\027LOCALIZATION_ERROR_GNSS\020\310\032\022\025\n\020PERCEPTI"
    "ON_ERROR\020\240\037\022\030\n\023PERCEPTION_ERROR_TF\020\241\037\022\035\n"
    "\030PERCEPTION_ERROR_PROCESS\020\242\037\022\025\n\020PERCEPTI"
    "ON_FATAL\020\243\037\022\025\n\020PREDICTION_ERROR\020\210\'\022\023\n\016PL"
    "ANNING_ERROR\020\360.\022\025\n\020HDMAP_DATA_ERROR\020\3306\022\022"
    "\n\rROUTING_ERROR\020\300>\022\032\n\025ROUTING_ERROR_REQU"
    "EST\020\301>\022\033\n\026ROUTING_ERROR_RESPONSE\020\302>\022\034\n\027R"
    "OUTING_ERROR_NOT_READY\020\303>\022\021\n\014END_OF_INPU"
    "T\020\250F\022\025\n\020HTTP_LOGIC_ERROR\020\220N\022\027\n\022HTTP_RUNT"
    "IME_ERROR\020\221N\022\027\n\022RELATIVE_MAP_ERROR\020\370U\022\033\n"
    "\026RELATIVE_MAP_NOT_READY\020\371U\022\026\n\021DRIVER_ERR"
    "OR_GNSS\020\340]\022\032\n\025DRIVER_ERROR_VELODYNE\020\310e", 998);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common/error_code.proto", &protobuf_RegisterTypes);
  StatusPb::default_instance_ = new StatusPb();
  StatusPb::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2ferror_5fcode_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2ferror_5fcode_2eproto {
  StaticDescriptorInitializer_common_2ferror_5fcode_2eproto() {
    protobuf_AddDesc_common_2ferror_5fcode_2eproto();
  }
} static_descriptor_initializer_common_2ferror_5fcode_2eproto_;
const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrorCode_descriptor_;
}
bool ErrorCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1000:
    case 1001:
    case 1002:
    case 2000:
    case 2100:
    case 2101:
    case 2102:
    case 2103:
    case 2104:
    case 3000:
    case 3100:
    case 3200:
    case 3300:
    case 3400:
    case 4000:
    case 4001:
    case 4002:
    case 4003:
    case 5000:
    case 6000:
    case 7000:
    case 8000:
    case 8001:
    case 8002:
    case 8003:
    case 9000:
    case 10000:
    case 10001:
    case 11000:
    case 11001:
    case 12000:
    case 13000:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StatusPb::kErrorCodeFieldNumber;
const int StatusPb::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StatusPb::StatusPb()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.StatusPb)
}

void StatusPb::InitAsDefaultInstance() {
}

StatusPb::StatusPb(const StatusPb& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.common.StatusPb)
}

void StatusPb::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  error_code_ = 0;
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StatusPb::~StatusPb() {
  // @@protoc_insertion_point(destructor:apollo.common.StatusPb)
  SharedDtor();
}

void StatusPb::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void StatusPb::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StatusPb::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatusPb_descriptor_;
}

const StatusPb& StatusPb::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2ferror_5fcode_2eproto();
  return *default_instance_;
}

StatusPb* StatusPb::default_instance_ = NULL;

StatusPb* StatusPb::New(::google::protobuf::Arena* arena) const {
  StatusPb* n = new StatusPb;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StatusPb::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.StatusPb)
  if (_has_bits_[0 / 32] & 3u) {
    error_code_ = 0;
    if (has_msg()) {
      msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool StatusPb::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.StatusPb)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::common::ErrorCode_IsValid(value)) {
            set_error_code(static_cast< ::apollo::common::ErrorCode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_msg;
        break;
      }

      // optional string msg = 2;
      case 2: {
        if (tag == 18) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.common.StatusPb.msg");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.common.StatusPb)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.StatusPb)
  return false;
#undef DO_
}

void StatusPb::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.StatusPb)
  // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->error_code(), output);
  }

  // optional string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.common.StatusPb.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.common.StatusPb)
}

::google::protobuf::uint8* StatusPb::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.StatusPb)
  // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->error_code(), target);
  }

  // optional string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.common.StatusPb.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.StatusPb)
  return target;
}

int StatusPb::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.StatusPb)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
    if (has_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->error_code());
    }

    // optional string msg = 2;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StatusPb::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.StatusPb)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const StatusPb* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const StatusPb>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.StatusPb)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.StatusPb)
    MergeFrom(*source);
  }
}

void StatusPb::MergeFrom(const StatusPb& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.StatusPb)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_msg()) {
      set_has_msg();
      msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void StatusPb::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.StatusPb)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatusPb::CopyFrom(const StatusPb& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.StatusPb)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatusPb::IsInitialized() const {

  return true;
}

void StatusPb::Swap(StatusPb* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StatusPb::InternalSwap(StatusPb* other) {
  std::swap(error_code_, other->error_code_);
  msg_.Swap(&other->msg_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StatusPb::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StatusPb_descriptor_;
  metadata.reflection = StatusPb_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StatusPb

// optional .apollo.common.ErrorCode error_code = 1 [default = OK];
bool StatusPb::has_error_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void StatusPb::set_has_error_code() {
  _has_bits_[0] |= 0x00000001u;
}
void StatusPb::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000001u;
}
void StatusPb::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
 ::apollo::common::ErrorCode StatusPb::error_code() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.error_code)
  return static_cast< ::apollo::common::ErrorCode >(error_code_);
}
 void StatusPb::set_error_code(::apollo::common::ErrorCode value) {
  assert(::apollo::common::ErrorCode_IsValid(value));
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.error_code)
}

// optional string msg = 2;
bool StatusPb::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void StatusPb::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
void StatusPb::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
void StatusPb::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
 const ::std::string& StatusPb::msg() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StatusPb::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.msg)
}
 void StatusPb::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.StatusPb.msg)
}
 void StatusPb::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.StatusPb.msg)
}
 ::std::string* StatusPb::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:apollo.common.StatusPb.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* StatusPb::release_msg() {
  // @@protoc_insertion_point(field_release:apollo.common.StatusPb.msg)
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StatusPb::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.StatusPb.msg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
