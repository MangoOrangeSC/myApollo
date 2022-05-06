// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_speed_control.proto

#ifndef PROTOBUF_map_5fspeed_5fcontrol_2eproto__INCLUDED
#define PROTOBUF_map_5fspeed_5fcontrol_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "map_geometry.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace hdmap {
class SpeedControl;
class SpeedControlDefaultTypeInternal;
extern SpeedControlDefaultTypeInternal _SpeedControl_default_instance_;
class SpeedControls;
class SpeedControlsDefaultTypeInternal;
extern SpeedControlsDefaultTypeInternal _SpeedControls_default_instance_;
}  // namespace hdmap
}  // namespace apollo

namespace apollo {
namespace hdmap {

namespace protobuf_map_5fspeed_5fcontrol_2eproto {
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
}  // namespace protobuf_map_5fspeed_5fcontrol_2eproto

// ===================================================================

class SpeedControl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.SpeedControl) */ {
 public:
  SpeedControl();
  virtual ~SpeedControl();

  SpeedControl(const SpeedControl& from);

  inline SpeedControl& operator=(const SpeedControl& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpeedControl(SpeedControl&& from) noexcept
    : SpeedControl() {
    *this = ::std::move(from);
  }

  inline SpeedControl& operator=(SpeedControl&& from) noexcept {
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
  static const SpeedControl& default_instance();

  static inline const SpeedControl* internal_default_instance() {
    return reinterpret_cast<const SpeedControl*>(
               &_SpeedControl_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SpeedControl* other);
  friend void swap(SpeedControl& a, SpeedControl& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpeedControl* New() const PROTOBUF_FINAL { return New(NULL); }

  SpeedControl* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SpeedControl& from);
  void MergeFrom(const SpeedControl& from);
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
  void InternalSwap(SpeedControl* other);
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

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .apollo.hdmap.Polygon polygon = 2;
  bool has_polygon() const;
  void clear_polygon();
  static const int kPolygonFieldNumber = 2;
  const ::apollo::hdmap::Polygon& polygon() const;
  ::apollo::hdmap::Polygon* mutable_polygon();
  ::apollo::hdmap::Polygon* release_polygon();
  void set_allocated_polygon(::apollo::hdmap::Polygon* polygon);

  // optional double speed_limit = 3;
  bool has_speed_limit() const;
  void clear_speed_limit();
  static const int kSpeedLimitFieldNumber = 3;
  double speed_limit() const;
  void set_speed_limit(double value);

  // @@protoc_insertion_point(class_scope:apollo.hdmap.SpeedControl)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_polygon();
  void clear_has_polygon();
  void set_has_speed_limit();
  void clear_has_speed_limit();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::apollo::hdmap::Polygon* polygon_;
  double speed_limit_;
  friend struct protobuf_map_5fspeed_5fcontrol_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SpeedControls : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.SpeedControls) */ {
 public:
  SpeedControls();
  virtual ~SpeedControls();

  SpeedControls(const SpeedControls& from);

  inline SpeedControls& operator=(const SpeedControls& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SpeedControls(SpeedControls&& from) noexcept
    : SpeedControls() {
    *this = ::std::move(from);
  }

  inline SpeedControls& operator=(SpeedControls&& from) noexcept {
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
  static const SpeedControls& default_instance();

  static inline const SpeedControls* internal_default_instance() {
    return reinterpret_cast<const SpeedControls*>(
               &_SpeedControls_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SpeedControls* other);
  friend void swap(SpeedControls& a, SpeedControls& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SpeedControls* New() const PROTOBUF_FINAL { return New(NULL); }

  SpeedControls* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SpeedControls& from);
  void MergeFrom(const SpeedControls& from);
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
  void InternalSwap(SpeedControls* other);
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

  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  int speed_control_size() const;
  void clear_speed_control();
  static const int kSpeedControlFieldNumber = 1;
  const ::apollo::hdmap::SpeedControl& speed_control(int index) const;
  ::apollo::hdmap::SpeedControl* mutable_speed_control(int index);
  ::apollo::hdmap::SpeedControl* add_speed_control();
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >*
      mutable_speed_control();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >&
      speed_control() const;

  // @@protoc_insertion_point(class_scope:apollo.hdmap.SpeedControls)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl > speed_control_;
  friend struct protobuf_map_5fspeed_5fcontrol_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpeedControl

// optional string name = 1;
inline bool SpeedControl::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpeedControl::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpeedControl::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpeedControl::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& SpeedControl::name() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.name)
  return name_.GetNoArena();
}
inline void SpeedControl::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.name)
}
#if LANG_CXX11
inline void SpeedControl::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.hdmap.SpeedControl.name)
}
#endif
inline void SpeedControl::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.hdmap.SpeedControl.name)
}
inline void SpeedControl::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.hdmap.SpeedControl.name)
}
inline ::std::string* SpeedControl::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SpeedControl::release_name() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SpeedControl::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedControl.name)
}

// optional .apollo.hdmap.Polygon polygon = 2;
inline bool SpeedControl::has_polygon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SpeedControl::set_has_polygon() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SpeedControl::clear_has_polygon() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SpeedControl::clear_polygon() {
  if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
  clear_has_polygon();
}
inline const ::apollo::hdmap::Polygon& SpeedControl::polygon() const {
  const ::apollo::hdmap::Polygon* p = polygon_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.polygon)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Polygon*>(
      &::apollo::hdmap::_Polygon_default_instance_);
}
inline ::apollo::hdmap::Polygon* SpeedControl::mutable_polygon() {
  set_has_polygon();
  if (polygon_ == NULL) {
    polygon_ = new ::apollo::hdmap::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.polygon)
  return polygon_;
}
inline ::apollo::hdmap::Polygon* SpeedControl::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.polygon)
  clear_has_polygon();
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
inline void SpeedControl::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    set_has_polygon();
  } else {
    clear_has_polygon();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedControl.polygon)
}

// optional double speed_limit = 3;
inline bool SpeedControl::has_speed_limit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SpeedControl::set_has_speed_limit() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SpeedControl::clear_has_speed_limit() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SpeedControl::clear_speed_limit() {
  speed_limit_ = 0;
  clear_has_speed_limit();
}
inline double SpeedControl::speed_limit() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.speed_limit)
  return speed_limit_;
}
inline void SpeedControl::set_speed_limit(double value) {
  set_has_speed_limit();
  speed_limit_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.speed_limit)
}

// -------------------------------------------------------------------

// SpeedControls

// repeated .apollo.hdmap.SpeedControl speed_control = 1;
inline int SpeedControls::speed_control_size() const {
  return speed_control_.size();
}
inline void SpeedControls::clear_speed_control() {
  speed_control_.Clear();
}
inline const ::apollo::hdmap::SpeedControl& SpeedControls::speed_control(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Get(index);
}
inline ::apollo::hdmap::SpeedControl* SpeedControls::mutable_speed_control(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Mutable(index);
}
inline ::apollo::hdmap::SpeedControl* SpeedControls::add_speed_control() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >*
SpeedControls::mutable_speed_control() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedControls.speed_control)
  return &speed_control_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >&
SpeedControls::speed_control() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_map_5fspeed_5fcontrol_2eproto__INCLUDED