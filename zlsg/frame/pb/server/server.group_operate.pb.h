// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server.group_operate.proto

#ifndef PROTOBUF_server_2egroup_5foperate_2eproto__INCLUDED
#define PROTOBUF_server_2egroup_5foperate_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace server {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_server_2egroup_5foperate_2eproto();
void protobuf_AssignDesc_server_2egroup_5foperate_2eproto();
void protobuf_ShutdownFile_server_2egroup_5foperate_2eproto();

class group_operate;
class scene_ready;

enum group_operate_TYPE {
  group_operate_TYPE_create = 0,
  group_operate_TYPE_enter = 1,
  group_operate_TYPE_leave = 2,
  group_operate_TYPE_clear = 3,
  group_operate_TYPE_broadcast = 4
};
bool group_operate_TYPE_IsValid(int value);
const group_operate_TYPE group_operate_TYPE_TYPE_MIN = group_operate_TYPE_create;
const group_operate_TYPE group_operate_TYPE_TYPE_MAX = group_operate_TYPE_broadcast;
const int group_operate_TYPE_TYPE_ARRAYSIZE = group_operate_TYPE_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* group_operate_TYPE_descriptor();
inline const ::std::string& group_operate_TYPE_Name(group_operate_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    group_operate_TYPE_descriptor(), value);
}
inline bool group_operate_TYPE_Parse(
    const ::std::string& name, group_operate_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<group_operate_TYPE>(
    group_operate_TYPE_descriptor(), name, value);
}
// ===================================================================

class group_operate : public ::google::protobuf::Message {
 public:
  group_operate();
  virtual ~group_operate();

  group_operate(const group_operate& from);

  inline group_operate& operator=(const group_operate& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const group_operate& default_instance();

  void Swap(group_operate* other);

  // implements Message ----------------------------------------------

  group_operate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const group_operate& from);
  void MergeFrom(const group_operate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef group_operate_TYPE TYPE;
  static const TYPE create = group_operate_TYPE_create;
  static const TYPE enter = group_operate_TYPE_enter;
  static const TYPE leave = group_operate_TYPE_leave;
  static const TYPE clear = group_operate_TYPE_clear;
  static const TYPE broadcast = group_operate_TYPE_broadcast;
  static inline bool TYPE_IsValid(int value) {
    return group_operate_TYPE_IsValid(value);
  }
  static const TYPE TYPE_MIN =
    group_operate_TYPE_TYPE_MIN;
  static const TYPE TYPE_MAX =
    group_operate_TYPE_TYPE_MAX;
  static const int TYPE_ARRAYSIZE =
    group_operate_TYPE_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TYPE_descriptor() {
    return group_operate_TYPE_descriptor();
  }
  static inline const ::std::string& TYPE_Name(TYPE value) {
    return group_operate_TYPE_Name(value);
  }
  static inline bool TYPE_Parse(const ::std::string& name,
      TYPE* value) {
    return group_operate_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required uint32 service_id = 2;
  inline bool has_service_id() const;
  inline void clear_service_id();
  static const int kServiceIdFieldNumber = 2;
  inline ::google::protobuf::uint32 service_id() const;
  inline void set_service_id(::google::protobuf::uint32 value);

  // required .server.group_operate.TYPE opt_type = 3;
  inline bool has_opt_type() const;
  inline void clear_opt_type();
  static const int kOptTypeFieldNumber = 3;
  inline ::server::group_operate_TYPE opt_type() const;
  inline void set_opt_type(::server::group_operate_TYPE value);

  // @@protoc_insertion_point(class_scope:server.group_operate)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_service_id();
  inline void clear_has_service_id();
  inline void set_has_opt_type();
  inline void clear_has_opt_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::uint32 service_id_;
  int opt_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_server_2egroup_5foperate_2eproto();
  friend void protobuf_AssignDesc_server_2egroup_5foperate_2eproto();
  friend void protobuf_ShutdownFile_server_2egroup_5foperate_2eproto();

  void InitAsDefaultInstance();
  static group_operate* default_instance_;
};
// -------------------------------------------------------------------

class scene_ready : public ::google::protobuf::Message {
 public:
  scene_ready();
  virtual ~scene_ready();

  scene_ready(const scene_ready& from);

  inline scene_ready& operator=(const scene_ready& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const scene_ready& default_instance();

  void Swap(scene_ready* other);

  // implements Message ----------------------------------------------

  scene_ready* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const scene_ready& from);
  void MergeFrom(const scene_ready& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 time_now = 1;
  inline bool has_time_now() const;
  inline void clear_time_now();
  static const int kTimeNowFieldNumber = 1;
  inline ::google::protobuf::uint32 time_now() const;
  inline void set_time_now(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:server.scene_ready)
 private:
  inline void set_has_time_now();
  inline void clear_has_time_now();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 time_now_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_server_2egroup_5foperate_2eproto();
  friend void protobuf_AssignDesc_server_2egroup_5foperate_2eproto();
  friend void protobuf_ShutdownFile_server_2egroup_5foperate_2eproto();

  void InitAsDefaultInstance();
  static scene_ready* default_instance_;
};
// ===================================================================


// ===================================================================

// group_operate

// required int32 id = 1;
inline bool group_operate::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void group_operate::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void group_operate::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void group_operate::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 group_operate::id() const {
  return id_;
}
inline void group_operate::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required uint32 service_id = 2;
inline bool group_operate::has_service_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void group_operate::set_has_service_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void group_operate::clear_has_service_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void group_operate::clear_service_id() {
  service_id_ = 0u;
  clear_has_service_id();
}
inline ::google::protobuf::uint32 group_operate::service_id() const {
  return service_id_;
}
inline void group_operate::set_service_id(::google::protobuf::uint32 value) {
  set_has_service_id();
  service_id_ = value;
}

// required .server.group_operate.TYPE opt_type = 3;
inline bool group_operate::has_opt_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void group_operate::set_has_opt_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void group_operate::clear_has_opt_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void group_operate::clear_opt_type() {
  opt_type_ = 0;
  clear_has_opt_type();
}
inline ::server::group_operate_TYPE group_operate::opt_type() const {
  return static_cast< ::server::group_operate_TYPE >(opt_type_);
}
inline void group_operate::set_opt_type(::server::group_operate_TYPE value) {
  assert(::server::group_operate_TYPE_IsValid(value));
  set_has_opt_type();
  opt_type_ = value;
}

// -------------------------------------------------------------------

// scene_ready

// required uint32 time_now = 1;
inline bool scene_ready::has_time_now() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void scene_ready::set_has_time_now() {
  _has_bits_[0] |= 0x00000001u;
}
inline void scene_ready::clear_has_time_now() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void scene_ready::clear_time_now() {
  time_now_ = 0u;
  clear_has_time_now();
}
inline ::google::protobuf::uint32 scene_ready::time_now() const {
  return time_now_;
}
inline void scene_ready::set_time_now(::google::protobuf::uint32 value) {
  set_has_time_now();
  time_now_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace server

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::server::group_operate_TYPE>() {
  return ::server::group_operate_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_server_2egroup_5foperate_2eproto__INCLUDED
