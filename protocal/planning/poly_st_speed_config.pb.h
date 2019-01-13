// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: planning/poly_st_speed_config.proto

#ifndef PROTOBUF_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto__INCLUDED
#define PROTOBUF_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto__INCLUDED

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
#include "planning/st_boundary_config.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace planning {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();
void protobuf_AssignDesc_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();
void protobuf_ShutdownFile_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();

class PolyStSpeedConfig;

// ===================================================================

class PolyStSpeedConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.planning.PolyStSpeedConfig) */ {
 public:
  PolyStSpeedConfig();
  virtual ~PolyStSpeedConfig();

  PolyStSpeedConfig(const PolyStSpeedConfig& from);

  inline PolyStSpeedConfig& operator=(const PolyStSpeedConfig& from) {
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
  static const PolyStSpeedConfig& default_instance();

  void Swap(PolyStSpeedConfig* other);

  // implements Message ----------------------------------------------

  inline PolyStSpeedConfig* New() const { return New(NULL); }

  PolyStSpeedConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PolyStSpeedConfig& from);
  void MergeFrom(const PolyStSpeedConfig& from);
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
  void InternalSwap(PolyStSpeedConfig* other);
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

  // optional double total_path_length = 1;
  bool has_total_path_length() const;
  void clear_total_path_length();
  static const int kTotalPathLengthFieldNumber = 1;
  double total_path_length() const;
  void set_total_path_length(double value);

  // optional double total_time = 2;
  bool has_total_time() const;
  void clear_total_time();
  static const int kTotalTimeFieldNumber = 2;
  double total_time() const;
  void set_total_time(double value);

  // optional double preferred_accel = 3;
  bool has_preferred_accel() const;
  void clear_preferred_accel();
  static const int kPreferredAccelFieldNumber = 3;
  double preferred_accel() const;
  void set_preferred_accel(double value);

  // optional double preferred_decel = 4;
  bool has_preferred_decel() const;
  void clear_preferred_decel();
  static const int kPreferredDecelFieldNumber = 4;
  double preferred_decel() const;
  void set_preferred_decel(double value);

  // optional double max_accel = 5;
  bool has_max_accel() const;
  void clear_max_accel();
  static const int kMaxAccelFieldNumber = 5;
  double max_accel() const;
  void set_max_accel(double value);

  // optional double min_decel = 6;
  bool has_min_decel() const;
  void clear_min_decel();
  static const int kMinDecelFieldNumber = 6;
  double min_decel() const;
  void set_min_decel(double value);

  // optional double speed_limit_buffer = 7;
  bool has_speed_limit_buffer() const;
  void clear_speed_limit_buffer();
  static const int kSpeedLimitBufferFieldNumber = 7;
  double speed_limit_buffer() const;
  void set_speed_limit_buffer(double value);

  // optional double speed_weight = 8;
  bool has_speed_weight() const;
  void clear_speed_weight();
  static const int kSpeedWeightFieldNumber = 8;
  double speed_weight() const;
  void set_speed_weight(double value);

  // optional double jerk_weight = 9;
  bool has_jerk_weight() const;
  void clear_jerk_weight();
  static const int kJerkWeightFieldNumber = 9;
  double jerk_weight() const;
  void set_jerk_weight(double value);

  // optional double obstacle_weight = 10;
  bool has_obstacle_weight() const;
  void clear_obstacle_weight();
  static const int kObstacleWeightFieldNumber = 10;
  double obstacle_weight() const;
  void set_obstacle_weight(double value);

  // optional double unblocking_obstacle_cost = 11;
  bool has_unblocking_obstacle_cost() const;
  void clear_unblocking_obstacle_cost();
  static const int kUnblockingObstacleCostFieldNumber = 11;
  double unblocking_obstacle_cost() const;
  void set_unblocking_obstacle_cost(double value);

  // optional .apollo.planning.StBoundaryConfig st_boundary_config = 12;
  bool has_st_boundary_config() const;
  void clear_st_boundary_config();
  static const int kStBoundaryConfigFieldNumber = 12;
  const ::apollo::planning::StBoundaryConfig& st_boundary_config() const;
  ::apollo::planning::StBoundaryConfig* mutable_st_boundary_config();
  ::apollo::planning::StBoundaryConfig* release_st_boundary_config();
  void set_allocated_st_boundary_config(::apollo::planning::StBoundaryConfig* st_boundary_config);

  // @@protoc_insertion_point(class_scope:apollo.planning.PolyStSpeedConfig)
 private:
  inline void set_has_total_path_length();
  inline void clear_has_total_path_length();
  inline void set_has_total_time();
  inline void clear_has_total_time();
  inline void set_has_preferred_accel();
  inline void clear_has_preferred_accel();
  inline void set_has_preferred_decel();
  inline void clear_has_preferred_decel();
  inline void set_has_max_accel();
  inline void clear_has_max_accel();
  inline void set_has_min_decel();
  inline void clear_has_min_decel();
  inline void set_has_speed_limit_buffer();
  inline void clear_has_speed_limit_buffer();
  inline void set_has_speed_weight();
  inline void clear_has_speed_weight();
  inline void set_has_jerk_weight();
  inline void clear_has_jerk_weight();
  inline void set_has_obstacle_weight();
  inline void clear_has_obstacle_weight();
  inline void set_has_unblocking_obstacle_cost();
  inline void clear_has_unblocking_obstacle_cost();
  inline void set_has_st_boundary_config();
  inline void clear_has_st_boundary_config();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double total_path_length_;
  double total_time_;
  double preferred_accel_;
  double preferred_decel_;
  double max_accel_;
  double min_decel_;
  double speed_limit_buffer_;
  double speed_weight_;
  double jerk_weight_;
  double obstacle_weight_;
  double unblocking_obstacle_cost_;
  ::apollo::planning::StBoundaryConfig* st_boundary_config_;
  friend void  protobuf_AddDesc_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();
  friend void protobuf_AssignDesc_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static PolyStSpeedConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PolyStSpeedConfig

// optional double total_path_length = 1;
inline bool PolyStSpeedConfig::has_total_path_length() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PolyStSpeedConfig::set_has_total_path_length() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PolyStSpeedConfig::clear_has_total_path_length() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PolyStSpeedConfig::clear_total_path_length() {
  total_path_length_ = 0;
  clear_has_total_path_length();
}
inline double PolyStSpeedConfig::total_path_length() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.total_path_length)
  return total_path_length_;
}
inline void PolyStSpeedConfig::set_total_path_length(double value) {
  set_has_total_path_length();
  total_path_length_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.total_path_length)
}

// optional double total_time = 2;
inline bool PolyStSpeedConfig::has_total_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PolyStSpeedConfig::set_has_total_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PolyStSpeedConfig::clear_has_total_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PolyStSpeedConfig::clear_total_time() {
  total_time_ = 0;
  clear_has_total_time();
}
inline double PolyStSpeedConfig::total_time() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.total_time)
  return total_time_;
}
inline void PolyStSpeedConfig::set_total_time(double value) {
  set_has_total_time();
  total_time_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.total_time)
}

// optional double preferred_accel = 3;
inline bool PolyStSpeedConfig::has_preferred_accel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PolyStSpeedConfig::set_has_preferred_accel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PolyStSpeedConfig::clear_has_preferred_accel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PolyStSpeedConfig::clear_preferred_accel() {
  preferred_accel_ = 0;
  clear_has_preferred_accel();
}
inline double PolyStSpeedConfig::preferred_accel() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.preferred_accel)
  return preferred_accel_;
}
inline void PolyStSpeedConfig::set_preferred_accel(double value) {
  set_has_preferred_accel();
  preferred_accel_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.preferred_accel)
}

// optional double preferred_decel = 4;
inline bool PolyStSpeedConfig::has_preferred_decel() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PolyStSpeedConfig::set_has_preferred_decel() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PolyStSpeedConfig::clear_has_preferred_decel() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PolyStSpeedConfig::clear_preferred_decel() {
  preferred_decel_ = 0;
  clear_has_preferred_decel();
}
inline double PolyStSpeedConfig::preferred_decel() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.preferred_decel)
  return preferred_decel_;
}
inline void PolyStSpeedConfig::set_preferred_decel(double value) {
  set_has_preferred_decel();
  preferred_decel_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.preferred_decel)
}

// optional double max_accel = 5;
inline bool PolyStSpeedConfig::has_max_accel() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PolyStSpeedConfig::set_has_max_accel() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PolyStSpeedConfig::clear_has_max_accel() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PolyStSpeedConfig::clear_max_accel() {
  max_accel_ = 0;
  clear_has_max_accel();
}
inline double PolyStSpeedConfig::max_accel() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.max_accel)
  return max_accel_;
}
inline void PolyStSpeedConfig::set_max_accel(double value) {
  set_has_max_accel();
  max_accel_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.max_accel)
}

// optional double min_decel = 6;
inline bool PolyStSpeedConfig::has_min_decel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PolyStSpeedConfig::set_has_min_decel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PolyStSpeedConfig::clear_has_min_decel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PolyStSpeedConfig::clear_min_decel() {
  min_decel_ = 0;
  clear_has_min_decel();
}
inline double PolyStSpeedConfig::min_decel() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.min_decel)
  return min_decel_;
}
inline void PolyStSpeedConfig::set_min_decel(double value) {
  set_has_min_decel();
  min_decel_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.min_decel)
}

// optional double speed_limit_buffer = 7;
inline bool PolyStSpeedConfig::has_speed_limit_buffer() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PolyStSpeedConfig::set_has_speed_limit_buffer() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PolyStSpeedConfig::clear_has_speed_limit_buffer() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PolyStSpeedConfig::clear_speed_limit_buffer() {
  speed_limit_buffer_ = 0;
  clear_has_speed_limit_buffer();
}
inline double PolyStSpeedConfig::speed_limit_buffer() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.speed_limit_buffer)
  return speed_limit_buffer_;
}
inline void PolyStSpeedConfig::set_speed_limit_buffer(double value) {
  set_has_speed_limit_buffer();
  speed_limit_buffer_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.speed_limit_buffer)
}

// optional double speed_weight = 8;
inline bool PolyStSpeedConfig::has_speed_weight() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void PolyStSpeedConfig::set_has_speed_weight() {
  _has_bits_[0] |= 0x00000080u;
}
inline void PolyStSpeedConfig::clear_has_speed_weight() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void PolyStSpeedConfig::clear_speed_weight() {
  speed_weight_ = 0;
  clear_has_speed_weight();
}
inline double PolyStSpeedConfig::speed_weight() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.speed_weight)
  return speed_weight_;
}
inline void PolyStSpeedConfig::set_speed_weight(double value) {
  set_has_speed_weight();
  speed_weight_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.speed_weight)
}

// optional double jerk_weight = 9;
inline bool PolyStSpeedConfig::has_jerk_weight() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void PolyStSpeedConfig::set_has_jerk_weight() {
  _has_bits_[0] |= 0x00000100u;
}
inline void PolyStSpeedConfig::clear_has_jerk_weight() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void PolyStSpeedConfig::clear_jerk_weight() {
  jerk_weight_ = 0;
  clear_has_jerk_weight();
}
inline double PolyStSpeedConfig::jerk_weight() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.jerk_weight)
  return jerk_weight_;
}
inline void PolyStSpeedConfig::set_jerk_weight(double value) {
  set_has_jerk_weight();
  jerk_weight_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.jerk_weight)
}

// optional double obstacle_weight = 10;
inline bool PolyStSpeedConfig::has_obstacle_weight() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void PolyStSpeedConfig::set_has_obstacle_weight() {
  _has_bits_[0] |= 0x00000200u;
}
inline void PolyStSpeedConfig::clear_has_obstacle_weight() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void PolyStSpeedConfig::clear_obstacle_weight() {
  obstacle_weight_ = 0;
  clear_has_obstacle_weight();
}
inline double PolyStSpeedConfig::obstacle_weight() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.obstacle_weight)
  return obstacle_weight_;
}
inline void PolyStSpeedConfig::set_obstacle_weight(double value) {
  set_has_obstacle_weight();
  obstacle_weight_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.obstacle_weight)
}

// optional double unblocking_obstacle_cost = 11;
inline bool PolyStSpeedConfig::has_unblocking_obstacle_cost() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void PolyStSpeedConfig::set_has_unblocking_obstacle_cost() {
  _has_bits_[0] |= 0x00000400u;
}
inline void PolyStSpeedConfig::clear_has_unblocking_obstacle_cost() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void PolyStSpeedConfig::clear_unblocking_obstacle_cost() {
  unblocking_obstacle_cost_ = 0;
  clear_has_unblocking_obstacle_cost();
}
inline double PolyStSpeedConfig::unblocking_obstacle_cost() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.unblocking_obstacle_cost)
  return unblocking_obstacle_cost_;
}
inline void PolyStSpeedConfig::set_unblocking_obstacle_cost(double value) {
  set_has_unblocking_obstacle_cost();
  unblocking_obstacle_cost_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.PolyStSpeedConfig.unblocking_obstacle_cost)
}

// optional .apollo.planning.StBoundaryConfig st_boundary_config = 12;
inline bool PolyStSpeedConfig::has_st_boundary_config() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void PolyStSpeedConfig::set_has_st_boundary_config() {
  _has_bits_[0] |= 0x00000800u;
}
inline void PolyStSpeedConfig::clear_has_st_boundary_config() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void PolyStSpeedConfig::clear_st_boundary_config() {
  if (st_boundary_config_ != NULL) st_boundary_config_->::apollo::planning::StBoundaryConfig::Clear();
  clear_has_st_boundary_config();
}
inline const ::apollo::planning::StBoundaryConfig& PolyStSpeedConfig::st_boundary_config() const {
  // @@protoc_insertion_point(field_get:apollo.planning.PolyStSpeedConfig.st_boundary_config)
  return st_boundary_config_ != NULL ? *st_boundary_config_ : *default_instance_->st_boundary_config_;
}
inline ::apollo::planning::StBoundaryConfig* PolyStSpeedConfig::mutable_st_boundary_config() {
  set_has_st_boundary_config();
  if (st_boundary_config_ == NULL) {
    st_boundary_config_ = new ::apollo::planning::StBoundaryConfig;
  }
  // @@protoc_insertion_point(field_mutable:apollo.planning.PolyStSpeedConfig.st_boundary_config)
  return st_boundary_config_;
}
inline ::apollo::planning::StBoundaryConfig* PolyStSpeedConfig::release_st_boundary_config() {
  // @@protoc_insertion_point(field_release:apollo.planning.PolyStSpeedConfig.st_boundary_config)
  clear_has_st_boundary_config();
  ::apollo::planning::StBoundaryConfig* temp = st_boundary_config_;
  st_boundary_config_ = NULL;
  return temp;
}
inline void PolyStSpeedConfig::set_allocated_st_boundary_config(::apollo::planning::StBoundaryConfig* st_boundary_config) {
  delete st_boundary_config_;
  st_boundary_config_ = st_boundary_config;
  if (st_boundary_config) {
    set_has_st_boundary_config();
  } else {
    clear_has_st_boundary_config();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.planning.PolyStSpeedConfig.st_boundary_config)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_planning_2fpoly_5fst_5fspeed_5fconfig_2eproto__INCLUDED
