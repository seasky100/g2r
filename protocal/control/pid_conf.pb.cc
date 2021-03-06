// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control/pid_conf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "control/pid_conf.pb.h"

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

const ::google::protobuf::Descriptor* PidConf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PidConf_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_control_2fpid_5fconf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_control_2fpid_5fconf_2eproto() {
  protobuf_AddDesc_control_2fpid_5fconf_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "control/pid_conf.proto");
  GOOGLE_CHECK(file != NULL);
  PidConf_descriptor_ = file->message_type(0);
  static const int PidConf_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, integrator_enable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, integrator_saturation_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, ki_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, kaw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, output_saturation_level_),
  };
  PidConf_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PidConf_descriptor_,
      PidConf::default_instance_,
      PidConf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, _has_bits_[0]),
      -1,
      -1,
      sizeof(PidConf),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PidConf, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_control_2fpid_5fconf_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PidConf_descriptor_, &PidConf::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_control_2fpid_5fconf_2eproto() {
  delete PidConf::default_instance_;
  delete PidConf_reflection_;
}

void protobuf_AddDesc_control_2fpid_5fconf_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_control_2fpid_5fconf_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026control/pid_conf.proto\022\016apollo.control"
    "\"\236\001\n\007PidConf\022\031\n\021integrator_enable\030\001 \001(\010\022"
    "#\n\033integrator_saturation_level\030\002 \001(\001\022\n\n\002"
    "kp\030\003 \001(\001\022\n\n\002ki\030\004 \001(\001\022\n\n\002kd\030\005 \001(\001\022\016\n\003kaw\030"
    "\006 \001(\001:\0010\022\037\n\027output_saturation_level\030\007 \001("
    "\001", 201);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "control/pid_conf.proto", &protobuf_RegisterTypes);
  PidConf::default_instance_ = new PidConf();
  PidConf::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_control_2fpid_5fconf_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_control_2fpid_5fconf_2eproto {
  StaticDescriptorInitializer_control_2fpid_5fconf_2eproto() {
    protobuf_AddDesc_control_2fpid_5fconf_2eproto();
  }
} static_descriptor_initializer_control_2fpid_5fconf_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PidConf::kIntegratorEnableFieldNumber;
const int PidConf::kIntegratorSaturationLevelFieldNumber;
const int PidConf::kKpFieldNumber;
const int PidConf::kKiFieldNumber;
const int PidConf::kKdFieldNumber;
const int PidConf::kKawFieldNumber;
const int PidConf::kOutputSaturationLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PidConf::PidConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.control.PidConf)
}

void PidConf::InitAsDefaultInstance() {
}

PidConf::PidConf(const PidConf& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.control.PidConf)
}

void PidConf::SharedCtor() {
  _cached_size_ = 0;
  integrator_enable_ = false;
  integrator_saturation_level_ = 0;
  kp_ = 0;
  ki_ = 0;
  kd_ = 0;
  kaw_ = 0;
  output_saturation_level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PidConf::~PidConf() {
  // @@protoc_insertion_point(destructor:apollo.control.PidConf)
  SharedDtor();
}

void PidConf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PidConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PidConf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PidConf_descriptor_;
}

const PidConf& PidConf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_control_2fpid_5fconf_2eproto();
  return *default_instance_;
}

PidConf* PidConf::default_instance_ = NULL;

PidConf* PidConf::New(::google::protobuf::Arena* arena) const {
  PidConf* n = new PidConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PidConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PidConf)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PidConf, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PidConf*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 127u) {
    ZR_(integrator_saturation_level_, integrator_enable_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PidConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.control.PidConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool integrator_enable = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &integrator_enable_)));
          set_has_integrator_enable();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_integrator_saturation_level;
        break;
      }

      // optional double integrator_saturation_level = 2;
      case 2: {
        if (tag == 17) {
         parse_integrator_saturation_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &integrator_saturation_level_)));
          set_has_integrator_saturation_level();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_kp;
        break;
      }

      // optional double kp = 3;
      case 3: {
        if (tag == 25) {
         parse_kp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kp_)));
          set_has_kp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_ki;
        break;
      }

      // optional double ki = 4;
      case 4: {
        if (tag == 33) {
         parse_ki:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &ki_)));
          set_has_ki();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_kd;
        break;
      }

      // optional double kd = 5;
      case 5: {
        if (tag == 41) {
         parse_kd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kd_)));
          set_has_kd();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_kaw;
        break;
      }

      // optional double kaw = 6 [default = 0];
      case 6: {
        if (tag == 49) {
         parse_kaw:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &kaw_)));
          set_has_kaw();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_output_saturation_level;
        break;
      }

      // optional double output_saturation_level = 7;
      case 7: {
        if (tag == 57) {
         parse_output_saturation_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &output_saturation_level_)));
          set_has_output_saturation_level();
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
  // @@protoc_insertion_point(parse_success:apollo.control.PidConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.control.PidConf)
  return false;
#undef DO_
}

void PidConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.control.PidConf)
  // optional bool integrator_enable = 1;
  if (has_integrator_enable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->integrator_enable(), output);
  }

  // optional double integrator_saturation_level = 2;
  if (has_integrator_saturation_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->integrator_saturation_level(), output);
  }

  // optional double kp = 3;
  if (has_kp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->kp(), output);
  }

  // optional double ki = 4;
  if (has_ki()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->ki(), output);
  }

  // optional double kd = 5;
  if (has_kd()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->kd(), output);
  }

  // optional double kaw = 6 [default = 0];
  if (has_kaw()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->kaw(), output);
  }

  // optional double output_saturation_level = 7;
  if (has_output_saturation_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->output_saturation_level(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.control.PidConf)
}

::google::protobuf::uint8* PidConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PidConf)
  // optional bool integrator_enable = 1;
  if (has_integrator_enable()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->integrator_enable(), target);
  }

  // optional double integrator_saturation_level = 2;
  if (has_integrator_saturation_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->integrator_saturation_level(), target);
  }

  // optional double kp = 3;
  if (has_kp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->kp(), target);
  }

  // optional double ki = 4;
  if (has_ki()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->ki(), target);
  }

  // optional double kd = 5;
  if (has_kd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->kd(), target);
  }

  // optional double kaw = 6 [default = 0];
  if (has_kaw()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->kaw(), target);
  }

  // optional double output_saturation_level = 7;
  if (has_output_saturation_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->output_saturation_level(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PidConf)
  return target;
}

int PidConf::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PidConf)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 127u) {
    // optional bool integrator_enable = 1;
    if (has_integrator_enable()) {
      total_size += 1 + 1;
    }

    // optional double integrator_saturation_level = 2;
    if (has_integrator_saturation_level()) {
      total_size += 1 + 8;
    }

    // optional double kp = 3;
    if (has_kp()) {
      total_size += 1 + 8;
    }

    // optional double ki = 4;
    if (has_ki()) {
      total_size += 1 + 8;
    }

    // optional double kd = 5;
    if (has_kd()) {
      total_size += 1 + 8;
    }

    // optional double kaw = 6 [default = 0];
    if (has_kaw()) {
      total_size += 1 + 8;
    }

    // optional double output_saturation_level = 7;
    if (has_output_saturation_level()) {
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

void PidConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PidConf)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PidConf* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PidConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PidConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PidConf)
    MergeFrom(*source);
  }
}

void PidConf::MergeFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PidConf)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_integrator_enable()) {
      set_integrator_enable(from.integrator_enable());
    }
    if (from.has_integrator_saturation_level()) {
      set_integrator_saturation_level(from.integrator_saturation_level());
    }
    if (from.has_kp()) {
      set_kp(from.kp());
    }
    if (from.has_ki()) {
      set_ki(from.ki());
    }
    if (from.has_kd()) {
      set_kd(from.kd());
    }
    if (from.has_kaw()) {
      set_kaw(from.kaw());
    }
    if (from.has_output_saturation_level()) {
      set_output_saturation_level(from.output_saturation_level());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PidConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PidConf::CopyFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PidConf::IsInitialized() const {

  return true;
}

void PidConf::Swap(PidConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PidConf::InternalSwap(PidConf* other) {
  std::swap(integrator_enable_, other->integrator_enable_);
  std::swap(integrator_saturation_level_, other->integrator_saturation_level_);
  std::swap(kp_, other->kp_);
  std::swap(ki_, other->ki_);
  std::swap(kd_, other->kd_);
  std::swap(kaw_, other->kaw_);
  std::swap(output_saturation_level_, other->output_saturation_level_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PidConf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PidConf_descriptor_;
  metadata.reflection = PidConf_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PidConf

// optional bool integrator_enable = 1;
bool PidConf::has_integrator_enable() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PidConf::set_has_integrator_enable() {
  _has_bits_[0] |= 0x00000001u;
}
void PidConf::clear_has_integrator_enable() {
  _has_bits_[0] &= ~0x00000001u;
}
void PidConf::clear_integrator_enable() {
  integrator_enable_ = false;
  clear_has_integrator_enable();
}
 bool PidConf::integrator_enable() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.integrator_enable)
  return integrator_enable_;
}
 void PidConf::set_integrator_enable(bool value) {
  set_has_integrator_enable();
  integrator_enable_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.integrator_enable)
}

// optional double integrator_saturation_level = 2;
bool PidConf::has_integrator_saturation_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PidConf::set_has_integrator_saturation_level() {
  _has_bits_[0] |= 0x00000002u;
}
void PidConf::clear_has_integrator_saturation_level() {
  _has_bits_[0] &= ~0x00000002u;
}
void PidConf::clear_integrator_saturation_level() {
  integrator_saturation_level_ = 0;
  clear_has_integrator_saturation_level();
}
 double PidConf::integrator_saturation_level() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.integrator_saturation_level)
  return integrator_saturation_level_;
}
 void PidConf::set_integrator_saturation_level(double value) {
  set_has_integrator_saturation_level();
  integrator_saturation_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.integrator_saturation_level)
}

// optional double kp = 3;
bool PidConf::has_kp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PidConf::set_has_kp() {
  _has_bits_[0] |= 0x00000004u;
}
void PidConf::clear_has_kp() {
  _has_bits_[0] &= ~0x00000004u;
}
void PidConf::clear_kp() {
  kp_ = 0;
  clear_has_kp();
}
 double PidConf::kp() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kp)
  return kp_;
}
 void PidConf::set_kp(double value) {
  set_has_kp();
  kp_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kp)
}

// optional double ki = 4;
bool PidConf::has_ki() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void PidConf::set_has_ki() {
  _has_bits_[0] |= 0x00000008u;
}
void PidConf::clear_has_ki() {
  _has_bits_[0] &= ~0x00000008u;
}
void PidConf::clear_ki() {
  ki_ = 0;
  clear_has_ki();
}
 double PidConf::ki() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.ki)
  return ki_;
}
 void PidConf::set_ki(double value) {
  set_has_ki();
  ki_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.ki)
}

// optional double kd = 5;
bool PidConf::has_kd() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void PidConf::set_has_kd() {
  _has_bits_[0] |= 0x00000010u;
}
void PidConf::clear_has_kd() {
  _has_bits_[0] &= ~0x00000010u;
}
void PidConf::clear_kd() {
  kd_ = 0;
  clear_has_kd();
}
 double PidConf::kd() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kd)
  return kd_;
}
 void PidConf::set_kd(double value) {
  set_has_kd();
  kd_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kd)
}

// optional double kaw = 6 [default = 0];
bool PidConf::has_kaw() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void PidConf::set_has_kaw() {
  _has_bits_[0] |= 0x00000020u;
}
void PidConf::clear_has_kaw() {
  _has_bits_[0] &= ~0x00000020u;
}
void PidConf::clear_kaw() {
  kaw_ = 0;
  clear_has_kaw();
}
 double PidConf::kaw() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.kaw)
  return kaw_;
}
 void PidConf::set_kaw(double value) {
  set_has_kaw();
  kaw_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.kaw)
}

// optional double output_saturation_level = 7;
bool PidConf::has_output_saturation_level() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void PidConf::set_has_output_saturation_level() {
  _has_bits_[0] |= 0x00000040u;
}
void PidConf::clear_has_output_saturation_level() {
  _has_bits_[0] &= ~0x00000040u;
}
void PidConf::clear_output_saturation_level() {
  output_saturation_level_ = 0;
  clear_has_output_saturation_level();
}
 double PidConf::output_saturation_level() const {
  // @@protoc_insertion_point(field_get:apollo.control.PidConf.output_saturation_level)
  return output_saturation_level_;
}
 void PidConf::set_output_saturation_level(double value) {
  set_has_output_saturation_level();
  output_saturation_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.PidConf.output_saturation_level)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
