// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysql.tb_role_farm.proto

#ifndef PROTOBUF_mysql_2etb_5frole_5ffarm_2eproto__INCLUDED
#define PROTOBUF_mysql_2etb_5frole_5ffarm_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace mysql {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mysql_2etb_5frole_5ffarm_2eproto();
void protobuf_AssignDesc_mysql_2etb_5frole_5ffarm_2eproto();
void protobuf_ShutdownFile_mysql_2etb_5frole_5ffarm_2eproto();

class tb_role_farm;

// ===================================================================

class tb_role_farm : public ::google::protobuf::Message {
 public:
  tb_role_farm();
  virtual ~tb_role_farm();

  tb_role_farm(const tb_role_farm& from);

  inline tb_role_farm& operator=(const tb_role_farm& from) {
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
  static const tb_role_farm& default_instance();

  void Swap(tb_role_farm* other);

  // implements Message ----------------------------------------------

  tb_role_farm* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const tb_role_farm& from);
  void MergeFrom(const tb_role_farm& from);
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

  // required uint32 role_id = 1;
  inline bool has_role_id() const;
  inline void clear_role_id();
  static const int kRoleIdFieldNumber = 1;
  inline ::google::protobuf::uint32 role_id() const;
  inline void set_role_id(::google::protobuf::uint32 value);

  // required bytes farm = 2;
  inline bool has_farm() const;
  inline void clear_farm();
  static const int kFarmFieldNumber = 2;
  inline const ::std::string& farm() const;
  inline void set_farm(const ::std::string& value);
  inline void set_farm(const char* value);
  inline void set_farm(const void* value, size_t size);
  inline ::std::string* mutable_farm();
  inline ::std::string* release_farm();
  inline void set_allocated_farm(::std::string* farm);

  // @@protoc_insertion_point(class_scope:mysql.tb_role_farm)
 private:
  inline void set_has_role_id();
  inline void clear_has_role_id();
  inline void set_has_farm();
  inline void clear_has_farm();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* farm_;
  ::google::protobuf::uint32 role_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_mysql_2etb_5frole_5ffarm_2eproto();
  friend void protobuf_AssignDesc_mysql_2etb_5frole_5ffarm_2eproto();
  friend void protobuf_ShutdownFile_mysql_2etb_5frole_5ffarm_2eproto();

  void InitAsDefaultInstance();
  static tb_role_farm* default_instance_;
};
// ===================================================================


// ===================================================================

// tb_role_farm

// required uint32 role_id = 1;
inline bool tb_role_farm::has_role_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void tb_role_farm::set_has_role_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void tb_role_farm::clear_has_role_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void tb_role_farm::clear_role_id() {
  role_id_ = 0u;
  clear_has_role_id();
}
inline ::google::protobuf::uint32 tb_role_farm::role_id() const {
  return role_id_;
}
inline void tb_role_farm::set_role_id(::google::protobuf::uint32 value) {
  set_has_role_id();
  role_id_ = value;
}

// required bytes farm = 2;
inline bool tb_role_farm::has_farm() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void tb_role_farm::set_has_farm() {
  _has_bits_[0] |= 0x00000002u;
}
inline void tb_role_farm::clear_has_farm() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void tb_role_farm::clear_farm() {
  if (farm_ != &::google::protobuf::internal::kEmptyString) {
    farm_->clear();
  }
  clear_has_farm();
}
inline const ::std::string& tb_role_farm::farm() const {
  return *farm_;
}
inline void tb_role_farm::set_farm(const ::std::string& value) {
  set_has_farm();
  if (farm_ == &::google::protobuf::internal::kEmptyString) {
    farm_ = new ::std::string;
  }
  farm_->assign(value);
}
inline void tb_role_farm::set_farm(const char* value) {
  set_has_farm();
  if (farm_ == &::google::protobuf::internal::kEmptyString) {
    farm_ = new ::std::string;
  }
  farm_->assign(value);
}
inline void tb_role_farm::set_farm(const void* value, size_t size) {
  set_has_farm();
  if (farm_ == &::google::protobuf::internal::kEmptyString) {
    farm_ = new ::std::string;
  }
  farm_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* tb_role_farm::mutable_farm() {
  set_has_farm();
  if (farm_ == &::google::protobuf::internal::kEmptyString) {
    farm_ = new ::std::string;
  }
  return farm_;
}
inline ::std::string* tb_role_farm::release_farm() {
  clear_has_farm();
  if (farm_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = farm_;
    farm_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void tb_role_farm::set_allocated_farm(::std::string* farm) {
  if (farm_ != &::google::protobuf::internal::kEmptyString) {
    delete farm_;
  }
  if (farm) {
    set_has_farm();
    farm_ = farm;
  } else {
    clear_has_farm();
    farm_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mysql

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mysql_2etb_5frole_5ffarm_2eproto__INCLUDED