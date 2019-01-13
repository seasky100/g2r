// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: planning/waypoint_sampler_config.proto

#ifndef PROTOBUF_planning_2fwaypoint_5fsampler_5fconfig_2eproto__INCLUDED
#define PROTOBUF_planning_2fwaypoint_5fsampler_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace planning {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_planning_2fwaypoint_5fsampler_5fconfig_2eproto();
void protobuf_AssignDesc_planning_2fwaypoint_5fsampler_5fconfig_2eproto();
void protobuf_ShutdownFile_planning_2fwaypoint_5fsampler_5fconfig_2eproto();

class WaypointSamplerConfig;

// ===================================================================

class WaypointSamplerConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.planning.WaypointSamplerConfig) */ {
 public:
  WaypointSamplerConfig();
  virtual ~WaypointSamplerConfig();

  WaypointSamplerConfig(const WaypointSamplerConfig& from);

  inline WaypointSamplerConfig& operator=(const WaypointSamplerConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const WaypointSamplerConfig& default_instance();

  void Swap(WaypointSamplerConfig* other);

  // implements Message ----------------------------------------------

  inline WaypointSamplerConfig* New() const { return New(NULL); }

  WaypointSamplerConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WaypointSamplerConfig& from);
  void MergeFrom(const WaypointSamplerConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(WaypointSamplerConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 sample_points_num_each_level = 1 [default = 9];
  bool has_sample_points_num_each_level() const;
  void clear_sample_points_num_each_level();
  static const int kSamplePointsNumEachLevelFieldNumber = 1;
  ::google::protobuf::uint32 sample_points_num_each_level() const;
  void set_sample_points_num_each_level(::google::protobuf::uint32 value);

  // optional double step_length_max = 2 [default = 15];
  bool has_step_length_max() const;
  void clear_step_length_max();
  static const int kStepLengthMaxFieldNumber = 2;
  double step_length_max() const;
  void set_step_length_max(double value);

  // optional double step_length_min = 3 [default = 8];
  bool has_step_length_min() const;
  void clear_step_length_min();
  static const int kStepLengthMinFieldNumber = 3;
  double step_length_min() const;
  void set_step_length_min(double value);

  // optional double lateral_sample_offset = 4 [default = 0.5];
  bool has_lateral_sample_offset() const;
  void clear_lateral_sample_offset();
  static const int kLateralSampleOffsetFieldNumber = 4;
  double lateral_sample_offset() const;
  void set_lateral_sample_offset(double value);

  // optional double lateral_adjust_coeff = 5 [default = 0.5];
  bool has_lateral_adjust_coeff() const;
  void clear_lateral_adjust_coeff();
  static const int kLateralAdjustCoeffFieldNumber = 5;
  double lateral_adjust_coeff() const;
  void set_lateral_adjust_coeff(double value);

  // optional double sidepass_distance = 6;
  bool has_sidepass_distance() const;
  void clear_sidepass_distance();
  static const int kSidepassDistanceFieldNumber = 6;
  double sidepass_distance() const;
  void set_sidepass_distance(double value);

  // optional uint32 navigator_sample_num_each_level = 7;
  bool has_navigator_sample_num_each_level() const;
  void clear_navigator_sample_num_each_level();
  static const int kNavigatorSampleNumEachLevelFieldNumber = 7;
  ::google::protobuf::uint32 navigator_sample_num_each_level() const;
  void set_navigator_sample_num_each_level(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.planning.WaypointSamplerConfig)
 private:
  inline void set_has_sample_points_num_each_level();
  inline void clear_has_sample_points_num_each_level();
  inline void set_has_step_length_max();
  inline void clear_has_step_length_max();
  inline void set_has_step_length_min();
  inline void clear_has_step_length_min();
  inline void set_has_lateral_sample_offset();
  inline void clear_has_lateral_sample_offset();
  inline void set_has_lateral_adjust_coeff();
  inline void clear_has_lateral_adjust_coeff();
  inline void set_has_sidepass_distance();
  inline void clear_has_sidepass_distance();
  inline void set_has_navigator_sample_num_each_level();
  inline void clear_has_navigator_sample_num_each_level();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double step_length_max_;
  double step_length_min_;
  double lateral_sample_offset_;
  ::google::protobuf::uint32 sample_points_num_each_level_;
  ::google::protobuf::uint32 navigator_sample_num_each_level_;
  double lateral_adjust_coeff_;
  double sidepass_distance_;
  friend void  protobuf_AddDesc_planning_2fwaypoint_5fsampler_5fconfig_2eproto();
  friend void protobuf_AssignDesc_planning_2fwaypoint_5fsampler_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_planning_2fwaypoint_5fsampler_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static WaypointSamplerConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WaypointSamplerConfig

// optional uint32 sample_points_num_each_level = 1 [default = 9];
inline bool WaypointSamplerConfig::has_sample_points_num_each_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WaypointSamplerConfig::set_has_sample_points_num_each_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WaypointSamplerConfig::clear_has_sample_points_num_each_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WaypointSamplerConfig::clear_sample_points_num_each_level() {
  sample_points_num_each_level_ = 9u;
  clear_has_sample_points_num_each_level();
}
inline ::google::protobuf::uint32 WaypointSamplerConfig::sample_points_num_each_level() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.sample_points_num_each_level)
  return sample_points_num_each_level_;
}
inline void WaypointSamplerConfig::set_sample_points_num_each_level(::google::protobuf::uint32 value) {
  set_has_sample_points_num_each_level();
  sample_points_num_each_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.sample_points_num_each_level)
}

// optional double step_length_max = 2 [default = 15];
inline bool WaypointSamplerConfig::has_step_length_max() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WaypointSamplerConfig::set_has_step_length_max() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WaypointSamplerConfig::clear_has_step_length_max() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WaypointSamplerConfig::clear_step_length_max() {
  step_length_max_ = 15;
  clear_has_step_length_max();
}
inline double WaypointSamplerConfig::step_length_max() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.step_length_max)
  return step_length_max_;
}
inline void WaypointSamplerConfig::set_step_length_max(double value) {
  set_has_step_length_max();
  step_length_max_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.step_length_max)
}

// optional double step_length_min = 3 [default = 8];
inline bool WaypointSamplerConfig::has_step_length_min() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WaypointSamplerConfig::set_has_step_length_min() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WaypointSamplerConfig::clear_has_step_length_min() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WaypointSamplerConfig::clear_step_length_min() {
  step_length_min_ = 8;
  clear_has_step_length_min();
}
inline double WaypointSamplerConfig::step_length_min() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.step_length_min)
  return step_length_min_;
}
inline void WaypointSamplerConfig::set_step_length_min(double value) {
  set_has_step_length_min();
  step_length_min_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.step_length_min)
}

// optional double lateral_sample_offset = 4 [default = 0.5];
inline bool WaypointSamplerConfig::has_lateral_sample_offset() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WaypointSamplerConfig::set_has_lateral_sample_offset() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WaypointSamplerConfig::clear_has_lateral_sample_offset() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WaypointSamplerConfig::clear_lateral_sample_offset() {
  lateral_sample_offset_ = 0.5;
  clear_has_lateral_sample_offset();
}
inline double WaypointSamplerConfig::lateral_sample_offset() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.lateral_sample_offset)
  return lateral_sample_offset_;
}
inline void WaypointSamplerConfig::set_lateral_sample_offset(double value) {
  set_has_lateral_sample_offset();
  lateral_sample_offset_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.lateral_sample_offset)
}

// optional double lateral_adjust_coeff = 5 [default = 0.5];
inline bool WaypointSamplerConfig::has_lateral_adjust_coeff() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WaypointSamplerConfig::set_has_lateral_adjust_coeff() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WaypointSamplerConfig::clear_has_lateral_adjust_coeff() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WaypointSamplerConfig::clear_lateral_adjust_coeff() {
  lateral_adjust_coeff_ = 0.5;
  clear_has_lateral_adjust_coeff();
}
inline double WaypointSamplerConfig::lateral_adjust_coeff() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.lateral_adjust_coeff)
  return lateral_adjust_coeff_;
}
inline void WaypointSamplerConfig::set_lateral_adjust_coeff(double value) {
  set_has_lateral_adjust_coeff();
  lateral_adjust_coeff_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.lateral_adjust_coeff)
}

// optional double sidepass_distance = 6;
inline bool WaypointSamplerConfig::has_sidepass_distance() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WaypointSamplerConfig::set_has_sidepass_distance() {
  _has_bits_[0] |= 0x00000020u;
}
inline void WaypointSamplerConfig::clear_has_sidepass_distance() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void WaypointSamplerConfig::clear_sidepass_distance() {
  sidepass_distance_ = 0;
  clear_has_sidepass_distance();
}
inline double WaypointSamplerConfig::sidepass_distance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.sidepass_distance)
  return sidepass_distance_;
}
inline void WaypointSamplerConfig::set_sidepass_distance(double value) {
  set_has_sidepass_distance();
  sidepass_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.sidepass_distance)
}

// optional uint32 navigator_sample_num_each_level = 7;
inline bool WaypointSamplerConfig::has_navigator_sample_num_each_level() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void WaypointSamplerConfig::set_has_navigator_sample_num_each_level() {
  _has_bits_[0] |= 0x00000040u;
}
inline void WaypointSamplerConfig::clear_has_navigator_sample_num_each_level() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void WaypointSamplerConfig::clear_navigator_sample_num_each_level() {
  navigator_sample_num_each_level_ = 0u;
  clear_has_navigator_sample_num_each_level();
}
inline ::google::protobuf::uint32 WaypointSamplerConfig::navigator_sample_num_each_level() const {
  // @@protoc_insertion_point(field_get:apollo.planning.WaypointSamplerConfig.navigator_sample_num_each_level)
  return navigator_sample_num_each_level_;
}
inline void WaypointSamplerConfig::set_navigator_sample_num_each_level(::google::protobuf::uint32 value) {
  set_has_navigator_sample_num_each_level();
  navigator_sample_num_each_level_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.WaypointSamplerConfig.navigator_sample_num_each_level)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_planning_2fwaypoint_5fsampler_5fconfig_2eproto__INCLUDED
