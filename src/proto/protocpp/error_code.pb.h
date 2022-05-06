// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error_code.proto

#ifndef PROTOBUF_error_5fcode_2eproto__INCLUDED
#define PROTOBUF_error_5fcode_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace apollo {
namespace common {
class StatusPb;
class StatusPbDefaultTypeInternal;
extern StatusPbDefaultTypeInternal _StatusPb_default_instance_;
}  // namespace common
}  // namespace apollo

namespace apollo {
namespace common {

namespace protobuf_error_5fcode_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_error_5fcode_2eproto

enum ErrorCode {
  OK = 0,
  CONTROL_ERROR = 1000,
  CONTROL_INIT_ERROR = 1001,
  CONTROL_COMPUTE_ERROR = 1002,
  CONTROL_ESTOP_ERROR = 1003,
  PERFECT_CONTROL_ERROR = 1004,
  CANBUS_ERROR = 2000,
  CAN_CLIENT_ERROR_BASE = 2100,
  CAN_CLIENT_ERROR_OPEN_DEVICE_FAILED = 2101,
  CAN_CLIENT_ERROR_FRAME_NUM = 2102,
  CAN_CLIENT_ERROR_SEND_FAILED = 2103,
  CAN_CLIENT_ERROR_RECV_FAILED = 2104,
  LOCALIZATION_ERROR = 3000,
  LOCALIZATION_ERROR_MSG = 3100,
  LOCALIZATION_ERROR_LIDAR = 3200,
  LOCALIZATION_ERROR_INTEG = 3300,
  LOCALIZATION_ERROR_GNSS = 3400,
  PERCEPTION_ERROR = 4000,
  PERCEPTION_ERROR_TF = 4001,
  PERCEPTION_ERROR_PROCESS = 4002,
  PERCEPTION_FATAL = 4003,
  PERCEPTION_ERROR_NONE = 4004,
  PERCEPTION_ERROR_UNKNOWN = 4005,
  PREDICTION_ERROR = 5000,
  PLANNING_ERROR = 6000,
  PLANNING_ERROR_NOT_READY = 6001,
  HDMAP_DATA_ERROR = 7000,
  ROUTING_ERROR = 8000,
  ROUTING_ERROR_REQUEST = 8001,
  ROUTING_ERROR_RESPONSE = 8002,
  ROUTING_ERROR_NOT_READY = 8003,
  END_OF_INPUT = 9000,
  HTTP_LOGIC_ERROR = 10000,
  HTTP_RUNTIME_ERROR = 10001,
  RELATIVE_MAP_ERROR = 11000,
  RELATIVE_MAP_NOT_READY = 11001,
  DRIVER_ERROR_GNSS = 12000,
  DRIVER_ERROR_VELODYNE = 13000,
  STORYTELLING_ERROR = 14000
};
bool ErrorCode_IsValid(int value);
const ErrorCode ErrorCode_MIN = OK;
const ErrorCode ErrorCode_MAX = STORYTELLING_ERROR;
const int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor();
inline const ::std::string& ErrorCode_Name(ErrorCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ErrorCode_descriptor(), value);
}
inline bool ErrorCode_Parse(
    const ::std::string& name, ErrorCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ErrorCode>(
    ErrorCode_descriptor(), name, value);
}
// ===================================================================

class StatusPb : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.StatusPb) */ {
 public:
  StatusPb();
  virtual ~StatusPb();

  StatusPb(const StatusPb& from);

  inline StatusPb& operator=(const StatusPb& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StatusPb(StatusPb&& from) noexcept
    : StatusPb() {
    *this = ::std::move(from);
  }

  inline StatusPb& operator=(StatusPb&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StatusPb& default_instance();

  static inline const StatusPb* internal_default_instance() {
    return reinterpret_cast<const StatusPb*>(
               &_StatusPb_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StatusPb* other);
  friend void swap(StatusPb& a, StatusPb& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StatusPb* New() const PROTOBUF_FINAL { return New(NULL); }

  StatusPb* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StatusPb& from);
  void MergeFrom(const StatusPb& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(StatusPb* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string msg = 2;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
  bool has_error_code() const;
  void clear_error_code();
  static const int kErrorCodeFieldNumber = 1;
  ::apollo::common::ErrorCode error_code() const;
  void set_error_code(::apollo::common::ErrorCode value);

  // @@protoc_insertion_point(class_scope:apollo.common.StatusPb)
 private:
  void set_has_error_code();
  void clear_has_error_code();
  void set_has_msg();
  void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  int error_code_;
  friend struct protobuf_error_5fcode_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatusPb

// optional .apollo.common.ErrorCode error_code = 1 [default = OK];
inline bool StatusPb::has_error_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StatusPb::set_has_error_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StatusPb::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StatusPb::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
inline ::apollo::common::ErrorCode StatusPb::error_code() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.error_code)
  return static_cast< ::apollo::common::ErrorCode >(error_code_);
}
inline void StatusPb::set_error_code(::apollo::common::ErrorCode value) {
  assert(::apollo::common::ErrorCode_IsValid(value));
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.error_code)
}

// optional string msg = 2;
inline bool StatusPb::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StatusPb::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StatusPb::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StatusPb::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& StatusPb::msg() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.msg)
  return msg_.GetNoArena();
}
inline void StatusPb::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.msg)
}
#if LANG_CXX11
inline void StatusPb::set_msg(::std::string&& value) {
  set_has_msg();
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.common.StatusPb.msg)
}
#endif
inline void StatusPb::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.StatusPb.msg)
}
inline void StatusPb::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.StatusPb.msg)
}
inline ::std::string* StatusPb::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:apollo.common.StatusPb.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StatusPb::release_msg() {
  // @@protoc_insertion_point(field_release:apollo.common.StatusPb.msg)
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StatusPb::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.StatusPb.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace common
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::common::ErrorCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::ErrorCode>() {
  return ::apollo::common::ErrorCode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_error_5fcode_2eproto__INCLUDED
