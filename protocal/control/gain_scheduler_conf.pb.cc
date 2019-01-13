// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control/gain_scheduler_conf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "control/gain_scheduler_conf.pb.h"

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
namespace control {

namespace {

const ::google::protobuf::Descriptor* GainScheduler_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GainScheduler_reflection_ = NULL;
const ::google::protobuf::Descriptor* GainSchedulerInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GainSchedulerInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_control_2fgain_5fscheduler_5fconf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_control_2fgain_5fscheduler_5fconf_2eproto() {
  protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "control/gain_scheduler_conf.proto");
  GOOGLE_CHECK(file != NULL);
  GainScheduler_descriptor_ = file->message_type(0);
  static const int GainScheduler_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainScheduler, scheduler_),
  };
  GainScheduler_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GainScheduler_descriptor_,
      GainScheduler::default_instance_,
      GainScheduler_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainScheduler, _has_bits_[0]),
      -1,
      -1,
      sizeof(GainScheduler),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainScheduler, _internal_metadata_),
      -1);
  GainSchedulerInfo_descriptor_ = file->message_type(1);
  static const int GainSchedulerInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainSchedulerInfo, speed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainSchedulerInfo, ratio_),
  };
  GainSchedulerInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GainSchedulerInfo_descriptor_,
      GainSchedulerInfo::default_instance_,
      GainSchedulerInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainSchedulerInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(GainSchedulerInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GainSchedulerInfo, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_control_2fgain_5fscheduler_5fconf_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GainScheduler_descriptor_, &GainScheduler::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GainSchedulerInfo_descriptor_, &GainSchedulerInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_control_2fgain_5fscheduler_5fconf_2eproto() {
  delete GainScheduler::default_instance_;
  delete GainScheduler_reflection_;
  delete GainSchedulerInfo::default_instance_;
  delete GainSchedulerInfo_reflection_;
}

void protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!control/gain_scheduler_conf.proto\022\016apo"
    "llo.control\"E\n\rGainScheduler\0224\n\tschedule"
    "r\030\001 \003(\0132!.apollo.control.GainSchedulerIn"
    "fo\"1\n\021GainSchedulerInfo\022\r\n\005speed\030\001 \001(\001\022\r"
    "\n\005ratio\030\002 \001(\001", 173);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "control/gain_scheduler_conf.proto", &protobuf_RegisterTypes);
  GainScheduler::default_instance_ = new GainScheduler();
  GainSchedulerInfo::default_instance_ = new GainSchedulerInfo();
  GainScheduler::default_instance_->InitAsDefaultInstance();
  GainSchedulerInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_control_2fgain_5fscheduler_5fconf_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_control_2fgain_5fscheduler_5fconf_2eproto {
  StaticDescriptorInitializer_control_2fgain_5fscheduler_5fconf_2eproto() {
    protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto();
  }
} static_descriptor_initializer_control_2fgain_5fscheduler_5fconf_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GainScheduler::kSchedulerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GainScheduler::GainScheduler()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.GainScheduler)
}

void GainScheduler::InitAsDefaultInstance() {
}

GainScheduler::GainScheduler(const GainScheduler& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.control.GainScheduler)
}

void GainScheduler::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GainScheduler::~GainScheduler() {
  // @@protoc_insertion_point(destructor:apollo.control.GainScheduler)
  SharedDtor();
}

void GainScheduler::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GainScheduler::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GainScheduler::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GainScheduler_descriptor_;
}

const GainScheduler& GainScheduler::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto();
  return *default_instance_;
}

GainScheduler* GainScheduler::default_instance_ = NULL;

GainScheduler* GainScheduler::New(::google::protobuf::Arena* arena) const {
  GainScheduler* n = new GainScheduler;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GainScheduler::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.GainScheduler)
  scheduler_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GainScheduler::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.GainScheduler)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .apollo.control.GainSchedulerInfo scheduler = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_scheduler:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_scheduler()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_scheduler;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:apollo.control.GainScheduler)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.GainScheduler)
  return false;
#undef DO_
}

void GainScheduler::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.GainScheduler)
  // repeated .apollo.control.GainSchedulerInfo scheduler = 1;
  for (unsigned int i = 0, n = this->scheduler_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->scheduler(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.GainScheduler)
}

::google::protobuf::uint8* GainScheduler::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.GainScheduler)
  // repeated .apollo.control.GainSchedulerInfo scheduler = 1;
  for (unsigned int i = 0, n = this->scheduler_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->scheduler(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.GainScheduler)
  return target;
}

int GainScheduler::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.GainScheduler)
  int total_size = 0;

  // repeated .apollo.control.GainSchedulerInfo scheduler = 1;
  total_size += 1 * this->scheduler_size();
  for (int i = 0; i < this->scheduler_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->scheduler(i));
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

void GainScheduler::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.GainScheduler)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GainScheduler* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GainScheduler>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.GainScheduler)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.GainScheduler)
    MergeFrom(*source);
  }
}

void GainScheduler::MergeFrom(const GainScheduler& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.GainScheduler)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  scheduler_.MergeFrom(from.scheduler_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GainScheduler::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.GainScheduler)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GainScheduler::CopyFrom(const GainScheduler& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.GainScheduler)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GainScheduler::IsInitialized() const {

  return true;
}

void GainScheduler::Swap(GainScheduler* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GainScheduler::InternalSwap(GainScheduler* other) {
  scheduler_.UnsafeArenaSwap(&other->scheduler_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GainScheduler::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GainScheduler_descriptor_;
  metadata.reflection = GainScheduler_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GainScheduler

// repeated .apollo.control.GainSchedulerInfo scheduler = 1;
int GainScheduler::scheduler_size() const {
  return scheduler_.size();
}
void GainScheduler::clear_scheduler() {
  scheduler_.Clear();
}
const ::apollo::control::GainSchedulerInfo& GainScheduler::scheduler(int index) const {
  // @@protoc_insertion_point(field_get:apollo.control.GainScheduler.scheduler)
  return scheduler_.Get(index);
}
::apollo::control::GainSchedulerInfo* GainScheduler::mutable_scheduler(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.control.GainScheduler.scheduler)
  return scheduler_.Mutable(index);
}
::apollo::control::GainSchedulerInfo* GainScheduler::add_scheduler() {
  // @@protoc_insertion_point(field_add:apollo.control.GainScheduler.scheduler)
  return scheduler_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >*
GainScheduler::mutable_scheduler() {
  // @@protoc_insertion_point(field_mutable_list:apollo.control.GainScheduler.scheduler)
  return &scheduler_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >&
GainScheduler::scheduler() const {
  // @@protoc_insertion_point(field_list:apollo.control.GainScheduler.scheduler)
  return scheduler_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GainSchedulerInfo::kSpeedFieldNumber;
const int GainSchedulerInfo::kRatioFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GainSchedulerInfo::GainSchedulerInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.GainSchedulerInfo)
}

void GainSchedulerInfo::InitAsDefaultInstance() {
}

GainSchedulerInfo::GainSchedulerInfo(const GainSchedulerInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.control.GainSchedulerInfo)
}

void GainSchedulerInfo::SharedCtor() {
  _cached_size_ = 0;
  speed_ = 0;
  ratio_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GainSchedulerInfo::~GainSchedulerInfo() {
  // @@protoc_insertion_point(destructor:apollo.control.GainSchedulerInfo)
  SharedDtor();
}

void GainSchedulerInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GainSchedulerInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GainSchedulerInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GainSchedulerInfo_descriptor_;
}

const GainSchedulerInfo& GainSchedulerInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_control_2fgain_5fscheduler_5fconf_2eproto();
  return *default_instance_;
}

GainSchedulerInfo* GainSchedulerInfo::default_instance_ = NULL;

GainSchedulerInfo* GainSchedulerInfo::New(::google::protobuf::Arena* arena) const {
  GainSchedulerInfo* n = new GainSchedulerInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GainSchedulerInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.GainSchedulerInfo)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(GainSchedulerInfo, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GainSchedulerInfo*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(speed_, ratio_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GainSchedulerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.GainSchedulerInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double speed = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_)));
          set_has_speed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_ratio;
        break;
      }

      // optional double ratio = 2;
      case 2: {
        if (tag == 17) {
         parse_ratio:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &ratio_)));
          set_has_ratio();
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
  // @@protoc_insertion_point(parse_success:apollo.control.GainSchedulerInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.GainSchedulerInfo)
  return false;
#undef DO_
}

void GainSchedulerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.GainSchedulerInfo)
  // optional double speed = 1;
  if (has_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->speed(), output);
  }

  // optional double ratio = 2;
  if (has_ratio()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->ratio(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.GainSchedulerInfo)
}

::google::protobuf::uint8* GainSchedulerInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.GainSchedulerInfo)
  // optional double speed = 1;
  if (has_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->speed(), target);
  }

  // optional double ratio = 2;
  if (has_ratio()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->ratio(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.GainSchedulerInfo)
  return target;
}

int GainSchedulerInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.GainSchedulerInfo)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional double speed = 1;
    if (has_speed()) {
      total_size += 1 + 8;
    }

    // optional double ratio = 2;
    if (has_ratio()) {
      total_size += 1 + 8;
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

void GainSchedulerInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.GainSchedulerInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GainSchedulerInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GainSchedulerInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.GainSchedulerInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.GainSchedulerInfo)
    MergeFrom(*source);
  }
}

void GainSchedulerInfo::MergeFrom(const GainSchedulerInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.GainSchedulerInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_speed()) {
      set_speed(from.speed());
    }
    if (from.has_ratio()) {
      set_ratio(from.ratio());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GainSchedulerInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.GainSchedulerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GainSchedulerInfo::CopyFrom(const GainSchedulerInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.GainSchedulerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GainSchedulerInfo::IsInitialized() const {

  return true;
}

void GainSchedulerInfo::Swap(GainSchedulerInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GainSchedulerInfo::InternalSwap(GainSchedulerInfo* other) {
  std::swap(speed_, other->speed_);
  std::swap(ratio_, other->ratio_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GainSchedulerInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GainSchedulerInfo_descriptor_;
  metadata.reflection = GainSchedulerInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GainSchedulerInfo

// optional double speed = 1;
bool GainSchedulerInfo::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void GainSchedulerInfo::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
void GainSchedulerInfo::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
void GainSchedulerInfo::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
 double GainSchedulerInfo::speed() const {
  // @@protoc_insertion_point(field_get:apollo.control.GainSchedulerInfo.speed)
  return speed_;
}
 void GainSchedulerInfo::set_speed(double value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.GainSchedulerInfo.speed)
}

// optional double ratio = 2;
bool GainSchedulerInfo::has_ratio() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void GainSchedulerInfo::set_has_ratio() {
  _has_bits_[0] |= 0x00000002u;
}
void GainSchedulerInfo::clear_has_ratio() {
  _has_bits_[0] &= ~0x00000002u;
}
void GainSchedulerInfo::clear_ratio() {
  ratio_ = 0;
  clear_has_ratio();
}
 double GainSchedulerInfo::ratio() const {
  // @@protoc_insertion_point(field_get:apollo.control.GainSchedulerInfo.ratio)
  return ratio_;
}
 void GainSchedulerInfo::set_ratio(double value) {
  set_has_ratio();
  ratio_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.GainSchedulerInfo.ratio)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)