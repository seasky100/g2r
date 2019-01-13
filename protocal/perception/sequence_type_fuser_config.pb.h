// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception/sequence_type_fuser_config.proto

#ifndef PROTOBUF_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto__INCLUDED
#define PROTOBUF_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto__INCLUDED

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
namespace sequence_type_fuser_config {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();
void protobuf_AssignDesc_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();
void protobuf_ShutdownFile_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();

class ModelConfigs;

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.sequence_type_fuser_config.ModelConfigs) */ {
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

  // optional string name = 1 [default = "SequenceTypeFuser"];
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

  // optional string version = 2 [default = "1.1.0"];
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

  // optional float temporal_window = 3 [default = 20];
  bool has_temporal_window() const;
  void clear_temporal_window();
  static const int kTemporalWindowFieldNumber = 3;
  float temporal_window() const;
  void set_temporal_window(float value);

  // optional string classifiers_property_file_path = 4 [default = "perception/model/sequence_type_fuser/classifiers.property"];
  bool has_classifiers_property_file_path() const;
  void clear_classifiers_property_file_path();
  static const int kClassifiersPropertyFilePathFieldNumber = 4;
  const ::std::string& classifiers_property_file_path() const;
  void set_classifiers_property_file_path(const ::std::string& value);
  void set_classifiers_property_file_path(const char* value);
  void set_classifiers_property_file_path(const char* value, size_t size);
  ::std::string* mutable_classifiers_property_file_path();
  ::std::string* release_classifiers_property_file_path();
  void set_allocated_classifiers_property_file_path(::std::string* classifiers_property_file_path);

  // optional string transition_property_file_path = 5 [default = "perception/model/sequence_type_fuser/transition.property"];
  bool has_transition_property_file_path() const;
  void clear_transition_property_file_path();
  static const int kTransitionPropertyFilePathFieldNumber = 5;
  const ::std::string& transition_property_file_path() const;
  void set_transition_property_file_path(const ::std::string& value);
  void set_transition_property_file_path(const char* value);
  void set_transition_property_file_path(const char* value, size_t size);
  ::std::string* mutable_transition_property_file_path();
  ::std::string* release_transition_property_file_path();
  void set_allocated_transition_property_file_path(::std::string* transition_property_file_path);

  // @@protoc_insertion_point(class_scope:apollo.perception.sequence_type_fuser_config.ModelConfigs)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_temporal_window();
  inline void clear_has_temporal_window();
  inline void set_has_classifiers_property_file_path();
  inline void clear_has_classifiers_property_file_path();
  inline void set_has_transition_property_file_path();
  inline void clear_has_transition_property_file_path();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  static ::std::string* _default_classifiers_property_file_path_;
  ::google::protobuf::internal::ArenaStringPtr classifiers_property_file_path_;
  static ::std::string* _default_transition_property_file_path_;
  ::google::protobuf::internal::ArenaStringPtr transition_property_file_path_;
  float temporal_window_;
  friend void  protobuf_AddDesc_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ModelConfigs* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "SequenceTypeFuser"];
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
  // @@protoc_insertion_point(field_get:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
  return name_.GetNoArena(_default_name_);
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
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
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.sequence_type_fuser_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.1.0"];
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
  // @@protoc_insertion_point(field_get:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
  return version_.GetNoArena(_default_version_);
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
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
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.sequence_type_fuser_config.ModelConfigs.version)
}

// optional float temporal_window = 3 [default = 20];
inline bool ModelConfigs::has_temporal_window() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_temporal_window() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_temporal_window() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_temporal_window() {
  temporal_window_ = 20;
  clear_has_temporal_window();
}
inline float ModelConfigs::temporal_window() const {
  // @@protoc_insertion_point(field_get:apollo.perception.sequence_type_fuser_config.ModelConfigs.temporal_window)
  return temporal_window_;
}
inline void ModelConfigs::set_temporal_window(float value) {
  set_has_temporal_window();
  temporal_window_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.sequence_type_fuser_config.ModelConfigs.temporal_window)
}

// optional string classifiers_property_file_path = 4 [default = "perception/model/sequence_type_fuser/classifiers.property"];
inline bool ModelConfigs::has_classifiers_property_file_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ModelConfigs::set_has_classifiers_property_file_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ModelConfigs::clear_has_classifiers_property_file_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ModelConfigs::clear_classifiers_property_file_path() {
  classifiers_property_file_path_.ClearToDefaultNoArena(_default_classifiers_property_file_path_);
  clear_has_classifiers_property_file_path();
}
inline const ::std::string& ModelConfigs::classifiers_property_file_path() const {
  // @@protoc_insertion_point(field_get:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
  return classifiers_property_file_path_.GetNoArena(_default_classifiers_property_file_path_);
}
inline void ModelConfigs::set_classifiers_property_file_path(const ::std::string& value) {
  set_has_classifiers_property_file_path();
  classifiers_property_file_path_.SetNoArena(_default_classifiers_property_file_path_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
}
inline void ModelConfigs::set_classifiers_property_file_path(const char* value) {
  set_has_classifiers_property_file_path();
  classifiers_property_file_path_.SetNoArena(_default_classifiers_property_file_path_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
}
inline void ModelConfigs::set_classifiers_property_file_path(const char* value, size_t size) {
  set_has_classifiers_property_file_path();
  classifiers_property_file_path_.SetNoArena(_default_classifiers_property_file_path_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
}
inline ::std::string* ModelConfigs::mutable_classifiers_property_file_path() {
  set_has_classifiers_property_file_path();
  // @@protoc_insertion_point(field_mutable:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
  return classifiers_property_file_path_.MutableNoArena(_default_classifiers_property_file_path_);
}
inline ::std::string* ModelConfigs::release_classifiers_property_file_path() {
  // @@protoc_insertion_point(field_release:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
  clear_has_classifiers_property_file_path();
  return classifiers_property_file_path_.ReleaseNoArena(_default_classifiers_property_file_path_);
}
inline void ModelConfigs::set_allocated_classifiers_property_file_path(::std::string* classifiers_property_file_path) {
  if (classifiers_property_file_path != NULL) {
    set_has_classifiers_property_file_path();
  } else {
    clear_has_classifiers_property_file_path();
  }
  classifiers_property_file_path_.SetAllocatedNoArena(_default_classifiers_property_file_path_, classifiers_property_file_path);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.sequence_type_fuser_config.ModelConfigs.classifiers_property_file_path)
}

// optional string transition_property_file_path = 5 [default = "perception/model/sequence_type_fuser/transition.property"];
inline bool ModelConfigs::has_transition_property_file_path() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ModelConfigs::set_has_transition_property_file_path() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ModelConfigs::clear_has_transition_property_file_path() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ModelConfigs::clear_transition_property_file_path() {
  transition_property_file_path_.ClearToDefaultNoArena(_default_transition_property_file_path_);
  clear_has_transition_property_file_path();
}
inline const ::std::string& ModelConfigs::transition_property_file_path() const {
  // @@protoc_insertion_point(field_get:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
  return transition_property_file_path_.GetNoArena(_default_transition_property_file_path_);
}
inline void ModelConfigs::set_transition_property_file_path(const ::std::string& value) {
  set_has_transition_property_file_path();
  transition_property_file_path_.SetNoArena(_default_transition_property_file_path_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
}
inline void ModelConfigs::set_transition_property_file_path(const char* value) {
  set_has_transition_property_file_path();
  transition_property_file_path_.SetNoArena(_default_transition_property_file_path_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
}
inline void ModelConfigs::set_transition_property_file_path(const char* value, size_t size) {
  set_has_transition_property_file_path();
  transition_property_file_path_.SetNoArena(_default_transition_property_file_path_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
}
inline ::std::string* ModelConfigs::mutable_transition_property_file_path() {
  set_has_transition_property_file_path();
  // @@protoc_insertion_point(field_mutable:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
  return transition_property_file_path_.MutableNoArena(_default_transition_property_file_path_);
}
inline ::std::string* ModelConfigs::release_transition_property_file_path() {
  // @@protoc_insertion_point(field_release:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
  clear_has_transition_property_file_path();
  return transition_property_file_path_.ReleaseNoArena(_default_transition_property_file_path_);
}
inline void ModelConfigs::set_allocated_transition_property_file_path(::std::string* transition_property_file_path) {
  if (transition_property_file_path != NULL) {
    set_has_transition_property_file_path();
  } else {
    clear_has_transition_property_file_path();
  }
  transition_property_file_path_.SetAllocatedNoArena(_default_transition_property_file_path_, transition_property_file_path);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.sequence_type_fuser_config.ModelConfigs.transition_property_file_path)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sequence_type_fuser_config
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perception_2fsequence_5ftype_5ffuser_5fconfig_2eproto__INCLUDED
