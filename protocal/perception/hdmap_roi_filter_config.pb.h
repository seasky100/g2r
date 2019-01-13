// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception/hdmap_roi_filter_config.proto

#ifndef PROTOBUF_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto__INCLUDED
#define PROTOBUF_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto__INCLUDED

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
namespace hdmap_roi_filter_config {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();
void protobuf_AssignDesc_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();
void protobuf_ShutdownFile_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();

class ModelConfigs;

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.hdmap_roi_filter_config.ModelConfigs) */ {
 public:
  ModelConfigs();
  virtual ~ModelConfigs();

  ModelConfigs(const ModelConfigs& from);

  inline ModelConfigs& operator=(const ModelConfigs& from) {
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
  static const ModelConfigs& default_instance();

  void Swap(ModelConfigs* other);

  // implements Message ----------------------------------------------

  inline ModelConfigs* New() const { return New(NULL); }

  ModelConfigs* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ModelConfigs& from);
  void MergeFrom(const ModelConfigs& from);
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
  void InternalSwap(ModelConfigs* other);
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

  // optional string name = 1 [default = "HdmapROIFilter"];
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

  // optional double range = 3 [default = 70];
  bool has_range() const;
  void clear_range();
  static const int kRangeFieldNumber = 3;
  double range() const;
  void set_range(double value);

  // optional double cell_size = 4 [default = 0.25];
  bool has_cell_size() const;
  void clear_cell_size();
  static const int kCellSizeFieldNumber = 4;
  double cell_size() const;
  void set_cell_size(double value);

  // optional double extend_dist = 5 [default = 0];
  bool has_extend_dist() const;
  void clear_extend_dist();
  static const int kExtendDistFieldNumber = 5;
  double extend_dist() const;
  void set_extend_dist(double value);

  // @@protoc_insertion_point(class_scope:apollo.perception.hdmap_roi_filter_config.ModelConfigs)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_range();
  inline void clear_has_range();
  inline void set_has_cell_size();
  inline void clear_has_cell_size();
  inline void set_has_extend_dist();
  inline void clear_has_extend_dist();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  double range_;
  double cell_size_;
  double extend_dist_;
  friend void  protobuf_AddDesc_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ModelConfigs* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "HdmapROIFilter"];
inline bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(_default_name_);
  clear_has_name();
}
inline const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
  return name_.GetNoArena(_default_name_);
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(_default_name_);
}
inline void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(_default_name_, name);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.hdmap_roi_filter_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(_default_version_);
  clear_has_version();
}
inline const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
  return version_.GetNoArena(_default_version_);
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(_default_version_);
}
inline void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(_default_version_, version);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.hdmap_roi_filter_config.ModelConfigs.version)
}

// optional double range = 3 [default = 70];
inline bool ModelConfigs::has_range() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_range() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_range() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_range() {
  range_ = 70;
  clear_has_range();
}
inline double ModelConfigs::range() const {
  // @@protoc_insertion_point(field_get:apollo.perception.hdmap_roi_filter_config.ModelConfigs.range)
  return range_;
}
inline void ModelConfigs::set_range(double value) {
  set_has_range();
  range_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.hdmap_roi_filter_config.ModelConfigs.range)
}

// optional double cell_size = 4 [default = 0.25];
inline bool ModelConfigs::has_cell_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ModelConfigs::set_has_cell_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ModelConfigs::clear_has_cell_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ModelConfigs::clear_cell_size() {
  cell_size_ = 0.25;
  clear_has_cell_size();
}
inline double ModelConfigs::cell_size() const {
  // @@protoc_insertion_point(field_get:apollo.perception.hdmap_roi_filter_config.ModelConfigs.cell_size)
  return cell_size_;
}
inline void ModelConfigs::set_cell_size(double value) {
  set_has_cell_size();
  cell_size_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.hdmap_roi_filter_config.ModelConfigs.cell_size)
}

// optional double extend_dist = 5 [default = 0];
inline bool ModelConfigs::has_extend_dist() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ModelConfigs::set_has_extend_dist() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ModelConfigs::clear_has_extend_dist() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ModelConfigs::clear_extend_dist() {
  extend_dist_ = 0;
  clear_has_extend_dist();
}
inline double ModelConfigs::extend_dist() const {
  // @@protoc_insertion_point(field_get:apollo.perception.hdmap_roi_filter_config.ModelConfigs.extend_dist)
  return extend_dist_;
}
inline void ModelConfigs::set_extend_dist(double value) {
  set_has_extend_dist();
  extend_dist_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.hdmap_roi_filter_config.ModelConfigs.extend_dist)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap_roi_filter_config
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perception_2fhdmap_5froi_5ffilter_5fconfig_2eproto__INCLUDED
