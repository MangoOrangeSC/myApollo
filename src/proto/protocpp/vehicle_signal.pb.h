// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vehicle_signal.proto

#ifndef PROTOBUF_vehicle_5fsignal_2eproto__INCLUDED
#define PROTOBUF_vehicle_5fsignal_2eproto__INCLUDED

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
class VehicleSignal;
class VehicleSignalDefaultTypeInternal;
extern VehicleSignalDefaultTypeInternal _VehicleSignal_default_instance_;
}  // namespace common
}  // namespace apollo

namespace apollo {
namespace common {

namespace protobuf_vehicle_5fsignal_2eproto {
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
}  // namespace protobuf_vehicle_5fsignal_2eproto

enum VehicleSignal_TurnSignal {
  VehicleSignal_TurnSignal_TURN_NONE = 0,
  VehicleSignal_TurnSignal_TURN_LEFT = 1,
  VehicleSignal_TurnSignal_TURN_RIGHT = 2
};
bool VehicleSignal_TurnSignal_IsValid(int value);
const VehicleSignal_TurnSignal VehicleSignal_TurnSignal_TurnSignal_MIN = VehicleSignal_TurnSignal_TURN_NONE;
const VehicleSignal_TurnSignal VehicleSignal_TurnSignal_TurnSignal_MAX = VehicleSignal_TurnSignal_TURN_RIGHT;
const int VehicleSignal_TurnSignal_TurnSignal_ARRAYSIZE = VehicleSignal_TurnSignal_TurnSignal_MAX + 1;

const ::google::protobuf::EnumDescriptor* VehicleSignal_TurnSignal_descriptor();
inline const ::std::string& VehicleSignal_TurnSignal_Name(VehicleSignal_TurnSignal value) {
  return ::google::protobuf::internal::NameOfEnum(
    VehicleSignal_TurnSignal_descriptor(), value);
}
inline bool VehicleSignal_TurnSignal_Parse(
    const ::std::string& name, VehicleSignal_TurnSignal* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VehicleSignal_TurnSignal>(
    VehicleSignal_TurnSignal_descriptor(), name, value);
}
// ===================================================================

class VehicleSignal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.VehicleSignal) */ {
 public:
  VehicleSignal();
  virtual ~VehicleSignal();

  VehicleSignal(const VehicleSignal& from);

  inline VehicleSignal& operator=(const VehicleSignal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VehicleSignal(VehicleSignal&& from) noexcept
    : VehicleSignal() {
    *this = ::std::move(from);
  }

  inline VehicleSignal& operator=(VehicleSignal&& from) noexcept {
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
  static const VehicleSignal& default_instance();

  static inline const VehicleSignal* internal_default_instance() {
    return reinterpret_cast<const VehicleSignal*>(
               &_VehicleSignal_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VehicleSignal* other);
  friend void swap(VehicleSignal& a, VehicleSignal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VehicleSignal* New() const PROTOBUF_FINAL { return New(NULL); }

  VehicleSignal* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VehicleSignal& from);
  void MergeFrom(const VehicleSignal& from);
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
  void InternalSwap(VehicleSignal* other);
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

  typedef VehicleSignal_TurnSignal TurnSignal;
  static const TurnSignal TURN_NONE =
    VehicleSignal_TurnSignal_TURN_NONE;
  static const TurnSignal TURN_LEFT =
    VehicleSignal_TurnSignal_TURN_LEFT;
  static const TurnSignal TURN_RIGHT =
    VehicleSignal_TurnSignal_TURN_RIGHT;
  static inline bool TurnSignal_IsValid(int value) {
    return VehicleSignal_TurnSignal_IsValid(value);
  }
  static const TurnSignal TurnSignal_MIN =
    VehicleSignal_TurnSignal_TurnSignal_MIN;
  static const TurnSignal TurnSignal_MAX =
    VehicleSignal_TurnSignal_TurnSignal_MAX;
  static const int TurnSignal_ARRAYSIZE =
    VehicleSignal_TurnSignal_TurnSignal_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TurnSignal_descriptor() {
    return VehicleSignal_TurnSignal_descriptor();
  }
  static inline const ::std::string& TurnSignal_Name(TurnSignal value) {
    return VehicleSignal_TurnSignal_Name(value);
  }
  static inline bool TurnSignal_Parse(const ::std::string& name,
      TurnSignal* value) {
    return VehicleSignal_TurnSignal_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  bool has_turn_signal() const;
  void clear_turn_signal();
  static const int kTurnSignalFieldNumber = 1;
  ::apollo::common::VehicleSignal_TurnSignal turn_signal() const;
  void set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value);

  // optional bool high_beam = 2;
  bool has_high_beam() const;
  void clear_high_beam();
  static const int kHighBeamFieldNumber = 2;
  bool high_beam() const;
  void set_high_beam(bool value);

  // optional bool low_beam = 3;
  bool has_low_beam() const;
  void clear_low_beam();
  static const int kLowBeamFieldNumber = 3;
  bool low_beam() const;
  void set_low_beam(bool value);

  // optional bool horn = 4;
  bool has_horn() const;
  void clear_horn();
  static const int kHornFieldNumber = 4;
  bool horn() const;
  void set_horn(bool value);

  // optional bool emergency_light = 5;
  bool has_emergency_light() const;
  void clear_emergency_light();
  static const int kEmergencyLightFieldNumber = 5;
  bool emergency_light() const;
  void set_emergency_light(bool value);

  // @@protoc_insertion_point(class_scope:apollo.common.VehicleSignal)
 private:
  void set_has_turn_signal();
  void clear_has_turn_signal();
  void set_has_high_beam();
  void clear_has_high_beam();
  void set_has_low_beam();
  void clear_has_low_beam();
  void set_has_horn();
  void clear_has_horn();
  void set_has_emergency_light();
  void clear_has_emergency_light();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int turn_signal_;
  bool high_beam_;
  bool low_beam_;
  bool horn_;
  bool emergency_light_;
  friend struct protobuf_vehicle_5fsignal_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleSignal

// optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
inline bool VehicleSignal::has_turn_signal() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VehicleSignal::set_has_turn_signal() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VehicleSignal::clear_has_turn_signal() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VehicleSignal::clear_turn_signal() {
  turn_signal_ = 0;
  clear_has_turn_signal();
}
inline ::apollo::common::VehicleSignal_TurnSignal VehicleSignal::turn_signal() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.turn_signal)
  return static_cast< ::apollo::common::VehicleSignal_TurnSignal >(turn_signal_);
}
inline void VehicleSignal::set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value) {
  assert(::apollo::common::VehicleSignal_TurnSignal_IsValid(value));
  set_has_turn_signal();
  turn_signal_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.turn_signal)
}

// optional bool high_beam = 2;
inline bool VehicleSignal::has_high_beam() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VehicleSignal::set_has_high_beam() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VehicleSignal::clear_has_high_beam() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VehicleSignal::clear_high_beam() {
  high_beam_ = false;
  clear_has_high_beam();
}
inline bool VehicleSignal::high_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.high_beam)
  return high_beam_;
}
inline void VehicleSignal::set_high_beam(bool value) {
  set_has_high_beam();
  high_beam_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.high_beam)
}

// optional bool low_beam = 3;
inline bool VehicleSignal::has_low_beam() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VehicleSignal::set_has_low_beam() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VehicleSignal::clear_has_low_beam() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VehicleSignal::clear_low_beam() {
  low_beam_ = false;
  clear_has_low_beam();
}
inline bool VehicleSignal::low_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.low_beam)
  return low_beam_;
}
inline void VehicleSignal::set_low_beam(bool value) {
  set_has_low_beam();
  low_beam_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.low_beam)
}

// optional bool horn = 4;
inline bool VehicleSignal::has_horn() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VehicleSignal::set_has_horn() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VehicleSignal::clear_has_horn() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VehicleSignal::clear_horn() {
  horn_ = false;
  clear_has_horn();
}
inline bool VehicleSignal::horn() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.horn)
  return horn_;
}
inline void VehicleSignal::set_horn(bool value) {
  set_has_horn();
  horn_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.horn)
}

// optional bool emergency_light = 5;
inline bool VehicleSignal::has_emergency_light() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VehicleSignal::set_has_emergency_light() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VehicleSignal::clear_has_emergency_light() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VehicleSignal::clear_emergency_light() {
  emergency_light_ = false;
  clear_has_emergency_light();
}
inline bool VehicleSignal::emergency_light() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.emergency_light)
  return emergency_light_;
}
inline void VehicleSignal::set_emergency_light(bool value) {
  set_has_emergency_light();
  emergency_light_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.emergency_light)
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

template <> struct is_proto_enum< ::apollo::common::VehicleSignal_TurnSignal> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::VehicleSignal_TurnSignal>() {
  return ::apollo::common::VehicleSignal_TurnSignal_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_vehicle_5fsignal_2eproto__INCLUDED
