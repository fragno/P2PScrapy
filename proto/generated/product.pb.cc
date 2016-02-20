// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: product.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "product.pb.h"

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

namespace p2pscrapy {

namespace {

const ::google::protobuf::Descriptor* Product_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Product_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_product_2eproto() {
  protobuf_AddDesc_product_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "product.proto");
  GOOGLE_CHECK(file != NULL);
  Product_descriptor_ = file->message_type(0);
  static const int Product_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, amount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, source_),
  };
  Product_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Product_descriptor_,
      Product::default_instance_,
      Product_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Product, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Product));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_product_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Product_descriptor_, &Product::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_product_2eproto() {
  delete Product::default_instance_;
  delete Product_reflection_;
}

void protobuf_AddDesc_product_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rproduct.proto\022\tp2pscrapy\"W\n\007Product\022\014\n"
    "\004name\030\001 \002(\t\022\014\n\004rate\030\002 \002(\002\022\020\n\010duration\030\003 "
    "\002(\002\022\016\n\006amount\030\004 \002(\002\022\016\n\006source\030\005 \002(\t", 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "product.proto", &protobuf_RegisterTypes);
  Product::default_instance_ = new Product();
  Product::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_product_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_product_2eproto {
  StaticDescriptorInitializer_product_2eproto() {
    protobuf_AddDesc_product_2eproto();
  }
} static_descriptor_initializer_product_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Product::kNameFieldNumber;
const int Product::kRateFieldNumber;
const int Product::kDurationFieldNumber;
const int Product::kAmountFieldNumber;
const int Product::kSourceFieldNumber;
#endif  // !_MSC_VER

Product::Product()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:p2pscrapy.Product)
}

void Product::InitAsDefaultInstance() {
}

Product::Product(const Product& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:p2pscrapy.Product)
}

void Product::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rate_ = 0;
  duration_ = 0;
  amount_ = 0;
  source_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Product::~Product() {
  // @@protoc_insertion_point(destructor:p2pscrapy.Product)
  SharedDtor();
}

void Product::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (source_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete source_;
  }
  if (this != default_instance_) {
  }
}

void Product::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Product::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Product_descriptor_;
}

const Product& Product::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_product_2eproto();
  return *default_instance_;
}

Product* Product::default_instance_ = NULL;

Product* Product::New() const {
  return new Product;
}

void Product::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Product*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(rate_, duration_);
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    amount_ = 0;
    if (has_source()) {
      if (source_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        source_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Product::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:p2pscrapy.Product)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_rate;
        break;
      }

      // required float rate = 2;
      case 2: {
        if (tag == 21) {
         parse_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rate_)));
          set_has_rate();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_duration;
        break;
      }

      // required float duration = 3;
      case 3: {
        if (tag == 29) {
         parse_duration:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &duration_)));
          set_has_duration();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_amount;
        break;
      }

      // required float amount = 4;
      case 4: {
        if (tag == 37) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &amount_)));
          set_has_amount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_source;
        break;
      }

      // required string source = 5;
      case 5: {
        if (tag == 42) {
         parse_source:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->source().data(), this->source().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "source");
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
  // @@protoc_insertion_point(parse_success:p2pscrapy.Product)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:p2pscrapy.Product)
  return false;
#undef DO_
}

void Product::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:p2pscrapy.Product)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required float rate = 2;
  if (has_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->rate(), output);
  }

  // required float duration = 3;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->duration(), output);
  }

  // required float amount = 4;
  if (has_amount()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->amount(), output);
  }

  // required string source = 5;
  if (has_source()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source().data(), this->source().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "source");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->source(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:p2pscrapy.Product)
}

::google::protobuf::uint8* Product::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:p2pscrapy.Product)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required float rate = 2;
  if (has_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->rate(), target);
  }

  // required float duration = 3;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->duration(), target);
  }

  // required float amount = 4;
  if (has_amount()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->amount(), target);
  }

  // required string source = 5;
  if (has_source()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source().data(), this->source().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "source");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->source(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:p2pscrapy.Product)
  return target;
}

int Product::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required float rate = 2;
    if (has_rate()) {
      total_size += 1 + 4;
    }

    // required float duration = 3;
    if (has_duration()) {
      total_size += 1 + 4;
    }

    // required float amount = 4;
    if (has_amount()) {
      total_size += 1 + 4;
    }

    // required string source = 5;
    if (has_source()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->source());
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

void Product::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Product* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Product*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Product::MergeFrom(const Product& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_rate()) {
      set_rate(from.rate());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_amount()) {
      set_amount(from.amount());
    }
    if (from.has_source()) {
      set_source(from.source());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Product::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Product::CopyFrom(const Product& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Product::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void Product::Swap(Product* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(rate_, other->rate_);
    std::swap(duration_, other->duration_);
    std::swap(amount_, other->amount_);
    std::swap(source_, other->source_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Product::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Product_descriptor_;
  metadata.reflection = Product_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace p2pscrapy

// @@protoc_insertion_point(global_scope)