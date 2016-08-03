// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server.team_notify.proto

#ifndef PROTOBUF_server_2eteam_5fnotify_2eproto__INCLUDED
#define PROTOBUF_server_2eteam_5fnotify_2eproto__INCLUDED

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
void  protobuf_AddDesc_server_2eteam_5fnotify_2eproto();
void protobuf_AssignDesc_server_2eteam_5fnotify_2eproto();
void protobuf_ShutdownFile_server_2eteam_5fnotify_2eproto();

class team_notify;

enum TEAM_NOTIFY_OPERATE_TYPE_E {
  TNOTE_ENTER_TEAM = 1,
  TNOTE_LEAVE_TEAM = 2
};
bool TEAM_NOTIFY_OPERATE_TYPE_E_IsValid(int value);
const TEAM_NOTIFY_OPERATE_TYPE_E TEAM_NOTIFY_OPERATE_TYPE_E_MIN = TNOTE_ENTER_TEAM;
const TEAM_NOTIFY_OPERATE_TYPE_E TEAM_NOTIFY_OPERATE_TYPE_E_MAX = TNOTE_LEAVE_TEAM;
const int TEAM_NOTIFY_OPERATE_TYPE_E_ARRAYSIZE = TEAM_NOTIFY_OPERATE_TYPE_E_MAX + 1;

const ::google::protobuf::EnumDescriptor* TEAM_NOTIFY_OPERATE_TYPE_E_descriptor();
inline const ::std::string& TEAM_NOTIFY_OPERATE_TYPE_E_Name(TEAM_NOTIFY_OPERATE_TYPE_E value) {
  return ::google::protobuf::internal::NameOfEnum(
    TEAM_NOTIFY_OPERATE_TYPE_E_descriptor(), value);
}
inline bool TEAM_NOTIFY_OPERATE_TYPE_E_Parse(
    const ::std::string& name, TEAM_NOTIFY_OPERATE_TYPE_E* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TEAM_NOTIFY_OPERATE_TYPE_E>(
    TEAM_NOTIFY_OPERATE_TYPE_E_descriptor(), name, value);
}
// ===================================================================

class team_notify : public ::google::protobuf::Message {
 public:
  team_notify();
  virtual ~team_notify();

  team_notify(const team_notify& from);

  inline team_notify& operator=(const team_notify& from) {
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
  static const team_notify& default_instance();

  void Swap(team_notify* other);

  // implements Message ----------------------------------------------

  team_notify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const team_notify& from);
  void MergeFrom(const team_notify& from);
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

  // required .server.TEAM_NOTIFY_OPERATE_TYPE_E type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::server::TEAM_NOTIFY_OPERATE_TYPE_E type() const;
  inline void set_type(::server::TEAM_NOTIFY_OPERATE_TYPE_E value);

  // required uint32 role_id = 2;
  inline bool has_role_id() const;
  inline void clear_role_id();
  static const int kRoleIdFieldNumber = 2;
  inline ::google::protobuf::uint32 role_id() const;
  inline void set_role_id(::google::protobuf::uint32 value);

  // required uint32 team_id = 3;
  inline bool has_team_id() const;
  inline void clear_team_id();
  static const int kTeamIdFieldNumber = 3;
  inline ::google::protobuf::uint32 team_id() const;
  inline void set_team_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:server.team_notify)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_role_id();
  inline void clear_has_role_id();
  inline void set_has_team_id();
  inline void clear_has_team_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int type_;
  ::google::protobuf::uint32 role_id_;
  ::google::protobuf::uint32 team_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_server_2eteam_5fnotify_2eproto();
  friend void protobuf_AssignDesc_server_2eteam_5fnotify_2eproto();
  friend void protobuf_ShutdownFile_server_2eteam_5fnotify_2eproto();

  void InitAsDefaultInstance();
  static team_notify* default_instance_;
};
// ===================================================================


// ===================================================================

// team_notify

// required .server.TEAM_NOTIFY_OPERATE_TYPE_E type = 1;
inline bool team_notify::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void team_notify::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void team_notify::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void team_notify::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::server::TEAM_NOTIFY_OPERATE_TYPE_E team_notify::type() const {
  return static_cast< ::server::TEAM_NOTIFY_OPERATE_TYPE_E >(type_);
}
inline void team_notify::set_type(::server::TEAM_NOTIFY_OPERATE_TYPE_E value) {
  assert(::server::TEAM_NOTIFY_OPERATE_TYPE_E_IsValid(value));
  set_has_type();
  type_ = value;
}

// required uint32 role_id = 2;
inline bool team_notify::has_role_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void team_notify::set_has_role_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void team_notify::clear_has_role_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void team_notify::clear_role_id() {
  role_id_ = 0u;
  clear_has_role_id();
}
inline ::google::protobuf::uint32 team_notify::role_id() const {
  return role_id_;
}
inline void team_notify::set_role_id(::google::protobuf::uint32 value) {
  set_has_role_id();
  role_id_ = value;
}

// required uint32 team_id = 3;
inline bool team_notify::has_team_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void team_notify::set_has_team_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void team_notify::clear_has_team_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void team_notify::clear_team_id() {
  team_id_ = 0u;
  clear_has_team_id();
}
inline ::google::protobuf::uint32 team_notify::team_id() const {
  return team_id_;
}
inline void team_notify::set_team_id(::google::protobuf::uint32 value) {
  set_has_team_id();
  team_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace server

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::server::TEAM_NOTIFY_OPERATE_TYPE_E>() {
  return ::server::TEAM_NOTIFY_OPERATE_TYPE_E_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_server_2eteam_5fnotify_2eproto__INCLUDED