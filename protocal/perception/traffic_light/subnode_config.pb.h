// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception/traffic_light/subnode_config.proto

#ifndef PROTOBUF_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto__INCLUDED
#define PROTOBUF_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto__INCLUDED

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
namespace perception {
namespace traffic_light {
namespace subnode_config {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
void protobuf_AssignDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();

class SubnodeConfig;
class TLPreprocessorSubnodeConfig;
class TLProcSubnodeConfig;

// ===================================================================

class TLPreprocessorSubnodeConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig) */ {
 public:
  TLPreprocessorSubnodeConfig();
  virtual ~TLPreprocessorSubnodeConfig();

  TLPreprocessorSubnodeConfig(const TLPreprocessorSubnodeConfig& from);

  inline TLPreprocessorSubnodeConfig& operator=(const TLPreprocessorSubnodeConfig& from) {
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
  static const TLPreprocessorSubnodeConfig& default_instance();

  void Swap(TLPreprocessorSubnodeConfig* other);

  // implements Message ----------------------------------------------

  inline TLPreprocessorSubnodeConfig* New() const { return New(NULL); }

  TLPreprocessorSubnodeConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TLPreprocessorSubnodeConfig& from);
  void MergeFrom(const TLPreprocessorSubnodeConfig& from);
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
  void InternalSwap(TLPreprocessorSubnodeConfig* other);
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

  // optional string name = 1 [default = "TLPreprocessorSubnode"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional float max_ahead_seconds = 3 [default = 0.3];
  bool has_max_ahead_seconds() const;
  void clear_max_ahead_seconds();
  static const int kMaxAheadSecondsFieldNumber = 3;
  float max_ahead_seconds() const;
  void set_max_ahead_seconds(float value);

  // optional float max_process_image_fps = 4 [default = 8];
  bool has_max_process_image_fps() const;
  void clear_max_process_image_fps();
  static const int kMaxProcessImageFpsFieldNumber = 4;
  float max_process_image_fps() const;
  void set_max_process_image_fps(float value);

  // optional float query_tf_inverval_seconds = 5 [default = 0.2];
  bool has_query_tf_inverval_seconds() const;
  void clear_query_tf_inverval_seconds();
  static const int kQueryTfInvervalSecondsFieldNumber = 5;
  float query_tf_inverval_seconds() const;
  void set_query_tf_inverval_seconds(float value);

  // @@protoc_insertion_point(class_scope:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_max_ahead_seconds();
  inline void clear_has_max_ahead_seconds();
  inline void set_has_max_process_image_fps();
  inline void clear_has_max_process_image_fps();
  inline void set_has_query_tf_inverval_seconds();
  inline void clear_has_query_tf_inverval_seconds();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  float max_ahead_seconds_;
  float max_process_image_fps_;
  float query_tf_inverval_seconds_;
  friend void  protobuf_AddDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static TLPreprocessorSubnodeConfig* default_instance_;
};
// -------------------------------------------------------------------

class TLProcSubnodeConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig) */ {
 public:
  TLProcSubnodeConfig();
  virtual ~TLProcSubnodeConfig();

  TLProcSubnodeConfig(const TLProcSubnodeConfig& from);

  inline TLProcSubnodeConfig& operator=(const TLProcSubnodeConfig& from) {
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
  static const TLProcSubnodeConfig& default_instance();

  void Swap(TLProcSubnodeConfig* other);

  // implements Message ----------------------------------------------

  inline TLProcSubnodeConfig* New() const { return New(NULL); }

  TLProcSubnodeConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TLProcSubnodeConfig& from);
  void MergeFrom(const TLProcSubnodeConfig& from);
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
  void InternalSwap(TLProcSubnodeConfig* other);
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

  // optional string name = 1 [default = "TLProcSubnode"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional int32 image_border = 3 [default = 100];
  bool has_image_border() const;
  void clear_image_border();
  static const int kImageBorderFieldNumber = 3;
  ::google::protobuf::int32 image_border() const;
  void set_image_border(::google::protobuf::int32 value);

  // optional float valid_ts_interval = 4 [default = 0.5];
  bool has_valid_ts_interval() const;
  void clear_valid_ts_interval();
  static const int kValidTsIntervalFieldNumber = 4;
  float valid_ts_interval() const;
  void set_valid_ts_interval(float value);

  // @@protoc_insertion_point(class_scope:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_image_border();
  inline void clear_has_image_border();
  inline void set_has_valid_ts_interval();
  inline void clear_has_valid_ts_interval();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  ::google::protobuf::int32 image_border_;
  float valid_ts_interval_;
  friend void  protobuf_AddDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static TLProcSubnodeConfig* default_instance_;
};
// -------------------------------------------------------------------

class SubnodeConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.traffic_light.subnode_config.SubnodeConfig) */ {
 public:
  SubnodeConfig();
  virtual ~SubnodeConfig();

  SubnodeConfig(const SubnodeConfig& from);

  inline SubnodeConfig& operator=(const SubnodeConfig& from) {
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
  static const SubnodeConfig& default_instance();

  void Swap(SubnodeConfig* other);

  // implements Message ----------------------------------------------

  inline SubnodeConfig* New() const { return New(NULL); }

  SubnodeConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SubnodeConfig& from);
  void MergeFrom(const SubnodeConfig& from);
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
  void InternalSwap(SubnodeConfig* other);
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

  // optional .apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig tl_preprocessor_subnode_config = 1;
  bool has_tl_preprocessor_subnode_config() const;
  void clear_tl_preprocessor_subnode_config();
  static const int kTlPreprocessorSubnodeConfigFieldNumber = 1;
  const ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig& tl_preprocessor_subnode_config() const;
  ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* mutable_tl_preprocessor_subnode_config();
  ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* release_tl_preprocessor_subnode_config();
  void set_allocated_tl_preprocessor_subnode_config(::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* tl_preprocessor_subnode_config);

  // optional .apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig tl_proc_subnode_config = 2;
  bool has_tl_proc_subnode_config() const;
  void clear_tl_proc_subnode_config();
  static const int kTlProcSubnodeConfigFieldNumber = 2;
  const ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig& tl_proc_subnode_config() const;
  ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* mutable_tl_proc_subnode_config();
  ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* release_tl_proc_subnode_config();
  void set_allocated_tl_proc_subnode_config(::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* tl_proc_subnode_config);

  // @@protoc_insertion_point(class_scope:apollo.perception.traffic_light.subnode_config.SubnodeConfig)
 private:
  inline void set_has_tl_preprocessor_subnode_config();
  inline void clear_has_tl_preprocessor_subnode_config();
  inline void set_has_tl_proc_subnode_config();
  inline void clear_has_tl_proc_subnode_config();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* tl_preprocessor_subnode_config_;
  ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* tl_proc_subnode_config_;
  friend void  protobuf_AddDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static SubnodeConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TLPreprocessorSubnodeConfig

// optional string name = 1 [default = "TLPreprocessorSubnode"];
inline bool TLPreprocessorSubnodeConfig::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TLPreprocessorSubnodeConfig::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TLPreprocessorSubnodeConfig::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TLPreprocessorSubnodeConfig::clear_name() {
  name_.ClearToDefaultNoArena(_default_name_);
  clear_has_name();
}
inline const ::std::string& TLPreprocessorSubnodeConfig::name() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
  return name_.GetNoArena(_default_name_);
}
inline void TLPreprocessorSubnodeConfig::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
}
inline void TLPreprocessorSubnodeConfig::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
}
inline void TLPreprocessorSubnodeConfig::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
}
inline ::std::string* TLPreprocessorSubnodeConfig::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* TLPreprocessorSubnodeConfig::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
  clear_has_name();
  return name_.ReleaseNoArena(_default_name_);
}
inline void TLPreprocessorSubnodeConfig::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(_default_name_, name);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool TLPreprocessorSubnodeConfig::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TLPreprocessorSubnodeConfig::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TLPreprocessorSubnodeConfig::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TLPreprocessorSubnodeConfig::clear_version() {
  version_.ClearToDefaultNoArena(_default_version_);
  clear_has_version();
}
inline const ::std::string& TLPreprocessorSubnodeConfig::version() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
  return version_.GetNoArena(_default_version_);
}
inline void TLPreprocessorSubnodeConfig::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
}
inline void TLPreprocessorSubnodeConfig::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
}
inline void TLPreprocessorSubnodeConfig::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
}
inline ::std::string* TLPreprocessorSubnodeConfig::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* TLPreprocessorSubnodeConfig::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
  clear_has_version();
  return version_.ReleaseNoArena(_default_version_);
}
inline void TLPreprocessorSubnodeConfig::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(_default_version_, version);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.version)
}

// optional float max_ahead_seconds = 3 [default = 0.3];
inline bool TLPreprocessorSubnodeConfig::has_max_ahead_seconds() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TLPreprocessorSubnodeConfig::set_has_max_ahead_seconds() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TLPreprocessorSubnodeConfig::clear_has_max_ahead_seconds() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TLPreprocessorSubnodeConfig::clear_max_ahead_seconds() {
  max_ahead_seconds_ = 0.3f;
  clear_has_max_ahead_seconds();
}
inline float TLPreprocessorSubnodeConfig::max_ahead_seconds() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.max_ahead_seconds)
  return max_ahead_seconds_;
}
inline void TLPreprocessorSubnodeConfig::set_max_ahead_seconds(float value) {
  set_has_max_ahead_seconds();
  max_ahead_seconds_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.max_ahead_seconds)
}

// optional float max_process_image_fps = 4 [default = 8];
inline bool TLPreprocessorSubnodeConfig::has_max_process_image_fps() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TLPreprocessorSubnodeConfig::set_has_max_process_image_fps() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TLPreprocessorSubnodeConfig::clear_has_max_process_image_fps() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TLPreprocessorSubnodeConfig::clear_max_process_image_fps() {
  max_process_image_fps_ = 8;
  clear_has_max_process_image_fps();
}
inline float TLPreprocessorSubnodeConfig::max_process_image_fps() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.max_process_image_fps)
  return max_process_image_fps_;
}
inline void TLPreprocessorSubnodeConfig::set_max_process_image_fps(float value) {
  set_has_max_process_image_fps();
  max_process_image_fps_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.max_process_image_fps)
}

// optional float query_tf_inverval_seconds = 5 [default = 0.2];
inline bool TLPreprocessorSubnodeConfig::has_query_tf_inverval_seconds() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TLPreprocessorSubnodeConfig::set_has_query_tf_inverval_seconds() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TLPreprocessorSubnodeConfig::clear_has_query_tf_inverval_seconds() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TLPreprocessorSubnodeConfig::clear_query_tf_inverval_seconds() {
  query_tf_inverval_seconds_ = 0.2f;
  clear_has_query_tf_inverval_seconds();
}
inline float TLPreprocessorSubnodeConfig::query_tf_inverval_seconds() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.query_tf_inverval_seconds)
  return query_tf_inverval_seconds_;
}
inline void TLPreprocessorSubnodeConfig::set_query_tf_inverval_seconds(float value) {
  set_has_query_tf_inverval_seconds();
  query_tf_inverval_seconds_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig.query_tf_inverval_seconds)
}

// -------------------------------------------------------------------

// TLProcSubnodeConfig

// optional string name = 1 [default = "TLProcSubnode"];
inline bool TLProcSubnodeConfig::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TLProcSubnodeConfig::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TLProcSubnodeConfig::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TLProcSubnodeConfig::clear_name() {
  name_.ClearToDefaultNoArena(_default_name_);
  clear_has_name();
}
inline const ::std::string& TLProcSubnodeConfig::name() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
  return name_.GetNoArena(_default_name_);
}
inline void TLProcSubnodeConfig::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
}
inline void TLProcSubnodeConfig::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
}
inline void TLProcSubnodeConfig::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
}
inline ::std::string* TLProcSubnodeConfig::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* TLProcSubnodeConfig::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
  clear_has_name();
  return name_.ReleaseNoArena(_default_name_);
}
inline void TLProcSubnodeConfig::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(_default_name_, name);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool TLProcSubnodeConfig::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TLProcSubnodeConfig::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TLProcSubnodeConfig::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TLProcSubnodeConfig::clear_version() {
  version_.ClearToDefaultNoArena(_default_version_);
  clear_has_version();
}
inline const ::std::string& TLProcSubnodeConfig::version() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
  return version_.GetNoArena(_default_version_);
}
inline void TLProcSubnodeConfig::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
}
inline void TLProcSubnodeConfig::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
}
inline void TLProcSubnodeConfig::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
}
inline ::std::string* TLProcSubnodeConfig::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* TLProcSubnodeConfig::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
  clear_has_version();
  return version_.ReleaseNoArena(_default_version_);
}
inline void TLProcSubnodeConfig::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(_default_version_, version);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.version)
}

// optional int32 image_border = 3 [default = 100];
inline bool TLProcSubnodeConfig::has_image_border() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TLProcSubnodeConfig::set_has_image_border() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TLProcSubnodeConfig::clear_has_image_border() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TLProcSubnodeConfig::clear_image_border() {
  image_border_ = 100;
  clear_has_image_border();
}
inline ::google::protobuf::int32 TLProcSubnodeConfig::image_border() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.image_border)
  return image_border_;
}
inline void TLProcSubnodeConfig::set_image_border(::google::protobuf::int32 value) {
  set_has_image_border();
  image_border_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.image_border)
}

// optional float valid_ts_interval = 4 [default = 0.5];
inline bool TLProcSubnodeConfig::has_valid_ts_interval() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TLProcSubnodeConfig::set_has_valid_ts_interval() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TLProcSubnodeConfig::clear_has_valid_ts_interval() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TLProcSubnodeConfig::clear_valid_ts_interval() {
  valid_ts_interval_ = 0.5f;
  clear_has_valid_ts_interval();
}
inline float TLProcSubnodeConfig::valid_ts_interval() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.valid_ts_interval)
  return valid_ts_interval_;
}
inline void TLProcSubnodeConfig::set_valid_ts_interval(float value) {
  set_has_valid_ts_interval();
  valid_ts_interval_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig.valid_ts_interval)
}

// -------------------------------------------------------------------

// SubnodeConfig

// optional .apollo.perception.traffic_light.subnode_config.TLPreprocessorSubnodeConfig tl_preprocessor_subnode_config = 1;
inline bool SubnodeConfig::has_tl_preprocessor_subnode_config() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SubnodeConfig::set_has_tl_preprocessor_subnode_config() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SubnodeConfig::clear_has_tl_preprocessor_subnode_config() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SubnodeConfig::clear_tl_preprocessor_subnode_config() {
  if (tl_preprocessor_subnode_config_ != NULL) tl_preprocessor_subnode_config_->::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig::Clear();
  clear_has_tl_preprocessor_subnode_config();
}
inline const ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig& SubnodeConfig::tl_preprocessor_subnode_config() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_preprocessor_subnode_config)
  return tl_preprocessor_subnode_config_ != NULL ? *tl_preprocessor_subnode_config_ : *default_instance_->tl_preprocessor_subnode_config_;
}
inline ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* SubnodeConfig::mutable_tl_preprocessor_subnode_config() {
  set_has_tl_preprocessor_subnode_config();
  if (tl_preprocessor_subnode_config_ == NULL) {
    tl_preprocessor_subnode_config_ = new ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig;
  }
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_preprocessor_subnode_config)
  return tl_preprocessor_subnode_config_;
}
inline ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* SubnodeConfig::release_tl_preprocessor_subnode_config() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_preprocessor_subnode_config)
  clear_has_tl_preprocessor_subnode_config();
  ::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* temp = tl_preprocessor_subnode_config_;
  tl_preprocessor_subnode_config_ = NULL;
  return temp;
}
inline void SubnodeConfig::set_allocated_tl_preprocessor_subnode_config(::apollo::perception::traffic_light::subnode_config::TLPreprocessorSubnodeConfig* tl_preprocessor_subnode_config) {
  delete tl_preprocessor_subnode_config_;
  tl_preprocessor_subnode_config_ = tl_preprocessor_subnode_config;
  if (tl_preprocessor_subnode_config) {
    set_has_tl_preprocessor_subnode_config();
  } else {
    clear_has_tl_preprocessor_subnode_config();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_preprocessor_subnode_config)
}

// optional .apollo.perception.traffic_light.subnode_config.TLProcSubnodeConfig tl_proc_subnode_config = 2;
inline bool SubnodeConfig::has_tl_proc_subnode_config() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SubnodeConfig::set_has_tl_proc_subnode_config() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SubnodeConfig::clear_has_tl_proc_subnode_config() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SubnodeConfig::clear_tl_proc_subnode_config() {
  if (tl_proc_subnode_config_ != NULL) tl_proc_subnode_config_->::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig::Clear();
  clear_has_tl_proc_subnode_config();
}
inline const ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig& SubnodeConfig::tl_proc_subnode_config() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_proc_subnode_config)
  return tl_proc_subnode_config_ != NULL ? *tl_proc_subnode_config_ : *default_instance_->tl_proc_subnode_config_;
}
inline ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* SubnodeConfig::mutable_tl_proc_subnode_config() {
  set_has_tl_proc_subnode_config();
  if (tl_proc_subnode_config_ == NULL) {
    tl_proc_subnode_config_ = new ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig;
  }
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_proc_subnode_config)
  return tl_proc_subnode_config_;
}
inline ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* SubnodeConfig::release_tl_proc_subnode_config() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_proc_subnode_config)
  clear_has_tl_proc_subnode_config();
  ::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* temp = tl_proc_subnode_config_;
  tl_proc_subnode_config_ = NULL;
  return temp;
}
inline void SubnodeConfig::set_allocated_tl_proc_subnode_config(::apollo::perception::traffic_light::subnode_config::TLProcSubnodeConfig* tl_proc_subnode_config) {
  delete tl_proc_subnode_config_;
  tl_proc_subnode_config_ = tl_proc_subnode_config;
  if (tl_proc_subnode_config) {
    set_has_tl_proc_subnode_config();
  } else {
    clear_has_tl_proc_subnode_config();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.subnode_config.SubnodeConfig.tl_proc_subnode_config)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace subnode_config
}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perception_2ftraffic_5flight_2fsubnode_5fconfig_2eproto__INCLUDED
