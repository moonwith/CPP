// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.heart.proto

#ifndef PROTOBUF_client_2eheart_2eproto__INCLUDED
#define PROTOBUF_client_2eheart_2eproto__INCLUDED

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

namespace client {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client_2eheart_2eproto();
void protobuf_AssignDesc_client_2eheart_2eproto();
void protobuf_ShutdownFile_client_2eheart_2eproto();

class heart;

// ===================================================================

class heart : public ::google::protobuf::Message {
 public:
  heart();
  virtual ~heart();

  heart(const heart& from);

  inline heart& operator=(const heart& from) {
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
  static const heart& default_instance();

  void Swap(heart* other);

  // implements Message ----------------------------------------------

  heart* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const heart& from);
  void MergeFrom(const heart& from);
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

  // required uint32 now = 1;
  inline bool has_now() const;
  inline void clear_now();
  static const int kNowFieldNumber = 1;
  inline ::google::protobuf::uint32 now() const;
  inline void set_now(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:client.heart)
 private:
  inline void set_has_now();
  inline void clear_has_now();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 now_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_client_2eheart_2eproto();
  friend void protobuf_AssignDesc_client_2eheart_2eproto();
  friend void protobuf_ShutdownFile_client_2eheart_2eproto();

  void InitAsDefaultInstance();
  static heart* default_instance_;
};
// ===================================================================


// ===================================================================

// heart

// required uint32 now = 1;
inline bool heart::has_now() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void heart::set_has_now() {
  _has_bits_[0] |= 0x00000001u;
}
inline void heart::clear_has_now() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void heart::clear_now() {
  now_ = 0u;
  clear_has_now();
}
inline ::google::protobuf::uint32 heart::now() const {
  return now_;
}
inline void heart::set_now(::google::protobuf::uint32 value) {
  set_has_now();
  now_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_2eheart_2eproto__INCLUDED