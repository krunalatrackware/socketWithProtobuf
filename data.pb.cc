// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "data.pb.h"

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

namespace Demo {

namespace {

const ::google::protobuf::Descriptor* myData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  myData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_data_2eproto() {
  protobuf_AddDesc_data_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "data.proto");
  GOOGLE_CHECK(file != NULL);
  myData_descriptor_ = file->message_type(0);
  static const int myData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myData, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myData, length_),
  };
  myData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      myData_descriptor_,
      myData::default_instance_,
      myData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(myData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(myData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_data_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    myData_descriptor_, &myData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_data_2eproto() {
  delete myData::default_instance_;
  delete myData_reflection_;
}

void protobuf_AddDesc_data_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ndata.proto\022\004Demo\"%\n\006myData\022\013\n\003str\030\001 \001("
    "\t\022\016\n\006length\030\002 \001(\r", 57);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "data.proto", &protobuf_RegisterTypes);
  myData::default_instance_ = new myData();
  myData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_data_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_data_2eproto {
  StaticDescriptorInitializer_data_2eproto() {
    protobuf_AddDesc_data_2eproto();
  }
} static_descriptor_initializer_data_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int myData::kStrFieldNumber;
const int myData::kLengthFieldNumber;
#endif  // !_MSC_VER

myData::myData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Demo.myData)
}

void myData::InitAsDefaultInstance() {
}

myData::myData(const myData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Demo.myData)
}

void myData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  length_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

myData::~myData() {
  // @@protoc_insertion_point(destructor:Demo.myData)
  SharedDtor();
}

void myData::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
  }
}

void myData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* myData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return myData_descriptor_;
}

const myData& myData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_data_2eproto();
  return *default_instance_;
}

myData* myData::default_instance_ = NULL;

myData* myData::New() const {
  return new myData;
}

void myData::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_str()) {
      if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        str_->clear();
      }
    }
    length_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool myData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Demo.myData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string str = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_length;
        break;
      }

      // optional uint32 length = 2;
      case 2: {
        if (tag == 16) {
         parse_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &length_)));
          set_has_length();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Demo.myData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Demo.myData)
  return false;
#undef DO_
}

void myData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Demo.myData)
  // optional string str = 1;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->str(), output);
  }

  // optional uint32 length = 2;
  if (has_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->length(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Demo.myData)
}

::google::protobuf::uint8* myData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Demo.myData)
  // optional string str = 1;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->str(), target);
  }

  // optional uint32 length = 2;
  if (has_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->length(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Demo.myData)
  return target;
}

int myData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string str = 1;
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

    // optional uint32 length = 2;
    if (has_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->length());
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

void myData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const myData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const myData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void myData::MergeFrom(const myData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_str()) {
      set_str(from.str());
    }
    if (from.has_length()) {
      set_length(from.length());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void myData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void myData::CopyFrom(const myData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool myData::IsInitialized() const {

  return true;
}

void myData::Swap(myData* other) {
  if (other != this) {
    std::swap(str_, other->str_);
    std::swap(length_, other->length_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata myData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = myData_descriptor_;
  metadata.reflection = myData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Demo

// @@protoc_insertion_point(global_scope)
