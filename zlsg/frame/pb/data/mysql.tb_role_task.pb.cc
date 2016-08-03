// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysql.tb_role_task.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mysql.tb_role_task.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace mysql {

namespace {

const ::google::protobuf::Descriptor* tb_role_task_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  tb_role_task_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_mysql_2etb_5frole_5ftask_2eproto() {
  protobuf_AddDesc_mysql_2etb_5frole_5ftask_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mysql.tb_role_task.proto");
  GOOGLE_CHECK(file != NULL);
  tb_role_task_descriptor_ = file->message_type(0);
  static const int tb_role_task_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, role_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, acpt_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, comp_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, fresh_task_),
  };
  tb_role_task_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      tb_role_task_descriptor_,
      tb_role_task::default_instance_,
      tb_role_task_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_role_task, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(tb_role_task));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mysql_2etb_5frole_5ftask_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    tb_role_task_descriptor_, &tb_role_task::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mysql_2etb_5frole_5ftask_2eproto() {
  delete tb_role_task::default_instance_;
  delete tb_role_task_reflection_;
}

void protobuf_AddDesc_mysql_2etb_5frole_5ftask_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030mysql.tb_role_task.proto\022\005mysql\"Y\n\014tb_"
    "role_task\022\017\n\007role_id\030\001 \002(\r\022\021\n\tacpt_task\030"
    "\002 \002(\014\022\021\n\tcomp_task\030\003 \002(\014\022\022\n\nfresh_task\030\004"
    " \002(\014", 124);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mysql.tb_role_task.proto", &protobuf_RegisterTypes);
  tb_role_task::default_instance_ = new tb_role_task();
  tb_role_task::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mysql_2etb_5frole_5ftask_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mysql_2etb_5frole_5ftask_2eproto {
  StaticDescriptorInitializer_mysql_2etb_5frole_5ftask_2eproto() {
    protobuf_AddDesc_mysql_2etb_5frole_5ftask_2eproto();
  }
} static_descriptor_initializer_mysql_2etb_5frole_5ftask_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int tb_role_task::kRoleIdFieldNumber;
const int tb_role_task::kAcptTaskFieldNumber;
const int tb_role_task::kCompTaskFieldNumber;
const int tb_role_task::kFreshTaskFieldNumber;
#endif  // !_MSC_VER

tb_role_task::tb_role_task()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void tb_role_task::InitAsDefaultInstance() {
}

tb_role_task::tb_role_task(const tb_role_task& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void tb_role_task::SharedCtor() {
  _cached_size_ = 0;
  role_id_ = 0u;
  acpt_task_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  comp_task_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  fresh_task_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

tb_role_task::~tb_role_task() {
  SharedDtor();
}

void tb_role_task::SharedDtor() {
  if (acpt_task_ != &::google::protobuf::internal::kEmptyString) {
    delete acpt_task_;
  }
  if (comp_task_ != &::google::protobuf::internal::kEmptyString) {
    delete comp_task_;
  }
  if (fresh_task_ != &::google::protobuf::internal::kEmptyString) {
    delete fresh_task_;
  }
  if (this != default_instance_) {
  }
}

void tb_role_task::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* tb_role_task::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return tb_role_task_descriptor_;
}

const tb_role_task& tb_role_task::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mysql_2etb_5frole_5ftask_2eproto();
  return *default_instance_;
}

tb_role_task* tb_role_task::default_instance_ = NULL;

tb_role_task* tb_role_task::New() const {
  return new tb_role_task;
}

void tb_role_task::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    role_id_ = 0u;
    if (has_acpt_task()) {
      if (acpt_task_ != &::google::protobuf::internal::kEmptyString) {
        acpt_task_->clear();
      }
    }
    if (has_comp_task()) {
      if (comp_task_ != &::google::protobuf::internal::kEmptyString) {
        comp_task_->clear();
      }
    }
    if (has_fresh_task()) {
      if (fresh_task_ != &::google::protobuf::internal::kEmptyString) {
        fresh_task_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool tb_role_task::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 role_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &role_id_)));
          set_has_role_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_acpt_task;
        break;
      }

      // required bytes acpt_task = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_acpt_task:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_acpt_task()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_comp_task;
        break;
      }

      // required bytes comp_task = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_comp_task:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_comp_task()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_fresh_task;
        break;
      }

      // required bytes fresh_task = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_fresh_task:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_fresh_task()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void tb_role_task::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 role_id = 1;
  if (has_role_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->role_id(), output);
  }

  // required bytes acpt_task = 2;
  if (has_acpt_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->acpt_task(), output);
  }

  // required bytes comp_task = 3;
  if (has_comp_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->comp_task(), output);
  }

  // required bytes fresh_task = 4;
  if (has_fresh_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->fresh_task(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* tb_role_task::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 role_id = 1;
  if (has_role_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->role_id(), target);
  }

  // required bytes acpt_task = 2;
  if (has_acpt_task()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->acpt_task(), target);
  }

  // required bytes comp_task = 3;
  if (has_comp_task()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->comp_task(), target);
  }

  // required bytes fresh_task = 4;
  if (has_fresh_task()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->fresh_task(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int tb_role_task::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 role_id = 1;
    if (has_role_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->role_id());
    }

    // required bytes acpt_task = 2;
    if (has_acpt_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->acpt_task());
    }

    // required bytes comp_task = 3;
    if (has_comp_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->comp_task());
    }

    // required bytes fresh_task = 4;
    if (has_fresh_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->fresh_task());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void tb_role_task::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const tb_role_task* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const tb_role_task*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void tb_role_task::MergeFrom(const tb_role_task& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_role_id()) {
      set_role_id(from.role_id());
    }
    if (from.has_acpt_task()) {
      set_acpt_task(from.acpt_task());
    }
    if (from.has_comp_task()) {
      set_comp_task(from.comp_task());
    }
    if (from.has_fresh_task()) {
      set_fresh_task(from.fresh_task());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void tb_role_task::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void tb_role_task::CopyFrom(const tb_role_task& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool tb_role_task::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void tb_role_task::Swap(tb_role_task* other) {
  if (other != this) {
    std::swap(role_id_, other->role_id_);
    std::swap(acpt_task_, other->acpt_task_);
    std::swap(comp_task_, other->comp_task_);
    std::swap(fresh_task_, other->fresh_task_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata tb_role_task::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = tb_role_task_descriptor_;
  metadata.reflection = tb_role_task_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mysql

// @@protoc_insertion_point(global_scope)