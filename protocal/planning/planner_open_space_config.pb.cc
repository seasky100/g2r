// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: planning/planner_open_space_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "planning/planner_open_space_config.pb.h"

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
namespace planning {

namespace {

const ::google::protobuf::Descriptor* PlannerOpenSpaceConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlannerOpenSpaceConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() {
  protobuf_AddDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "planning/planner_open_space_config.proto");
  GOOGLE_CHECK(file != NULL);
  PlannerOpenSpaceConfig_descriptor_ = file->message_type(0);
  static const int PlannerOpenSpaceConfig_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlannerOpenSpaceConfig, planning_horizon_),
  };
  PlannerOpenSpaceConfig_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PlannerOpenSpaceConfig_descriptor_,
      PlannerOpenSpaceConfig::default_instance_,
      PlannerOpenSpaceConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlannerOpenSpaceConfig, _has_bits_[0]),
      -1,
      -1,
      sizeof(PlannerOpenSpaceConfig),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlannerOpenSpaceConfig, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PlannerOpenSpaceConfig_descriptor_, &PlannerOpenSpaceConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() {
  delete PlannerOpenSpaceConfig::default_instance_;
  delete PlannerOpenSpaceConfig_reflection_;
}

void protobuf_AddDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(planning/planner_open_space_config.pro"
    "to\022\017apollo.planning\"6\n\026PlannerOpenSpaceC"
    "onfig\022\034\n\020planning_horizon\030\001 \001(\r:\00210", 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "planning/planner_open_space_config.proto", &protobuf_RegisterTypes);
  PlannerOpenSpaceConfig::default_instance_ = new PlannerOpenSpaceConfig();
  PlannerOpenSpaceConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto {
  StaticDescriptorInitializer_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto() {
    protobuf_AddDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto();
  }
} static_descriptor_initializer_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PlannerOpenSpaceConfig::kPlanningHorizonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PlannerOpenSpaceConfig::PlannerOpenSpaceConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.PlannerOpenSpaceConfig)
}

void PlannerOpenSpaceConfig::InitAsDefaultInstance() {
}

PlannerOpenSpaceConfig::PlannerOpenSpaceConfig(const PlannerOpenSpaceConfig& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.planning.PlannerOpenSpaceConfig)
}

void PlannerOpenSpaceConfig::SharedCtor() {
  _cached_size_ = 0;
  planning_horizon_ = 10u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlannerOpenSpaceConfig::~PlannerOpenSpaceConfig() {
  // @@protoc_insertion_point(destructor:apollo.planning.PlannerOpenSpaceConfig)
  SharedDtor();
}

void PlannerOpenSpaceConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PlannerOpenSpaceConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlannerOpenSpaceConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlannerOpenSpaceConfig_descriptor_;
}

const PlannerOpenSpaceConfig& PlannerOpenSpaceConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_planning_2fplanner_5fopen_5fspace_5fconfig_2eproto();
  return *default_instance_;
}

PlannerOpenSpaceConfig* PlannerOpenSpaceConfig::default_instance_ = NULL;

PlannerOpenSpaceConfig* PlannerOpenSpaceConfig::New(::google::protobuf::Arena* arena) const {
  PlannerOpenSpaceConfig* n = new PlannerOpenSpaceConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PlannerOpenSpaceConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.PlannerOpenSpaceConfig)
  planning_horizon_ = 10u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PlannerOpenSpaceConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.planning.PlannerOpenSpaceConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 planning_horizon = 1 [default = 10];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &planning_horizon_)));
          set_has_planning_horizon();
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
  // @@protoc_insertion_point(parse_success:apollo.planning.PlannerOpenSpaceConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.planning.PlannerOpenSpaceConfig)
  return false;
#undef DO_
}

void PlannerOpenSpaceConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.planning.PlannerOpenSpaceConfig)
  // optional uint32 planning_horizon = 1 [default = 10];
  if (has_planning_horizon()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->planning_horizon(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.planning.PlannerOpenSpaceConfig)
}

::google::protobuf::uint8* PlannerOpenSpaceConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.PlannerOpenSpaceConfig)
  // optional uint32 planning_horizon = 1 [default = 10];
  if (has_planning_horizon()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->planning_horizon(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.PlannerOpenSpaceConfig)
  return target;
}

int PlannerOpenSpaceConfig::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.PlannerOpenSpaceConfig)
  int total_size = 0;

  // optional uint32 planning_horizon = 1 [default = 10];
  if (has_planning_horizon()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->planning_horizon());
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

void PlannerOpenSpaceConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.PlannerOpenSpaceConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PlannerOpenSpaceConfig* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PlannerOpenSpaceConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.PlannerOpenSpaceConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.PlannerOpenSpaceConfig)
    MergeFrom(*source);
  }
}

void PlannerOpenSpaceConfig::MergeFrom(const PlannerOpenSpaceConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.PlannerOpenSpaceConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_planning_horizon()) {
      set_planning_horizon(from.planning_horizon());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PlannerOpenSpaceConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.PlannerOpenSpaceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlannerOpenSpaceConfig::CopyFrom(const PlannerOpenSpaceConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.PlannerOpenSpaceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlannerOpenSpaceConfig::IsInitialized() const {

  return true;
}

void PlannerOpenSpaceConfig::Swap(PlannerOpenSpaceConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PlannerOpenSpaceConfig::InternalSwap(PlannerOpenSpaceConfig* other) {
  std::swap(planning_horizon_, other->planning_horizon_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PlannerOpenSpaceConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlannerOpenSpaceConfig_descriptor_;
  metadata.reflection = PlannerOpenSpaceConfig_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PlannerOpenSpaceConfig

// optional uint32 planning_horizon = 1 [default = 10];
bool PlannerOpenSpaceConfig::has_planning_horizon() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PlannerOpenSpaceConfig::set_has_planning_horizon() {
  _has_bits_[0] |= 0x00000001u;
}
void PlannerOpenSpaceConfig::clear_has_planning_horizon() {
  _has_bits_[0] &= ~0x00000001u;
}
void PlannerOpenSpaceConfig::clear_planning_horizon() {
  planning_horizon_ = 10u;
  clear_has_planning_horizon();
}
 ::google::protobuf::uint32 PlannerOpenSpaceConfig::planning_horizon() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PlannerOpenSpaceConfig.planning_horizon)
  return planning_horizon_;
}
 void PlannerOpenSpaceConfig::set_planning_horizon(::google::protobuf::uint32 value) {
  set_has_planning_horizon();
  planning_horizon_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PlannerOpenSpaceConfig.planning_horizon)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
