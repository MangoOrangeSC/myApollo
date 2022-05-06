// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_junction.proto

#ifndef PROTOBUF_map_5fjunction_2eproto__INCLUDED
#define PROTOBUF_map_5fjunction_2eproto__INCLUDED

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
#include "map_id.pb.h"
#include "map_geometry.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace hdmap {
class Junction;
class JunctionDefaultTypeInternal;
extern JunctionDefaultTypeInternal _Junction_default_instance_;
}  // namespace hdmap
}  // namespace apollo

namespace apollo {
namespace hdmap {

namespace protobuf_map_5fjunction_2eproto {
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
}  // namespace protobuf_map_5fjunction_2eproto

enum Junction_Type {
  Junction_Type_UNKNOWN = 0,
  Junction_Type_IN_ROAD = 1,
  Junction_Type_CROSS_ROAD = 2,
  Junction_Type_FORK_ROAD = 3,
  Junction_Type_MAIN_SIDE = 4,
  Junction_Type_DEAD_END = 5
};
bool Junction_Type_IsValid(int value);
const Junction_Type Junction_Type_Type_MIN = Junction_Type_UNKNOWN;
const Junction_Type Junction_Type_Type_MAX = Junction_Type_DEAD_END;
const int Junction_Type_Type_ARRAYSIZE = Junction_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Junction_Type_descriptor();
inline const ::std::string& Junction_Type_Name(Junction_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Junction_Type_descriptor(), value);
}
inline bool Junction_Type_Parse(
    const ::std::string& name, Junction_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Junction_Type>(
    Junction_Type_descriptor(), name, value);
}
// ===================================================================

class Junction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.Junction) */ {
 public:
  Junction();
  virtual ~Junction();

  Junction(const Junction& from);

  inline Junction& operator=(const Junction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Junction(Junction&& from) noexcept
    : Junction() {
    *this = ::std::move(from);
  }

  inline Junction& operator=(Junction&& from) noexcept {
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
  static const Junction& default_instance();

  static inline const Junction* internal_default_instance() {
    return reinterpret_cast<const Junction*>(
               &_Junction_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Junction* other);
  friend void swap(Junction& a, Junction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Junction* New() const PROTOBUF_FINAL { return New(NULL); }

  Junction* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Junction& from);
  void MergeFrom(const Junction& from);
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
  void InternalSwap(Junction* other);
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

  typedef Junction_Type Type;
  static const Type UNKNOWN =
    Junction_Type_UNKNOWN;
  static const Type IN_ROAD =
    Junction_Type_IN_ROAD;
  static const Type CROSS_ROAD =
    Junction_Type_CROSS_ROAD;
  static const Type FORK_ROAD =
    Junction_Type_FORK_ROAD;
  static const Type MAIN_SIDE =
    Junction_Type_MAIN_SIDE;
  static const Type DEAD_END =
    Junction_Type_DEAD_END;
  static inline bool Type_IsValid(int value) {
    return Junction_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Junction_Type_Type_MIN;
  static const Type Type_MAX =
    Junction_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Junction_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Junction_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Junction_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Junction_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .apollo.hdmap.Id overlap_id = 3;
  int overlap_id_size() const;
  void clear_overlap_id();
  static const int kOverlapIdFieldNumber = 3;
  const ::apollo::hdmap::Id& overlap_id(int index) const;
  ::apollo::hdmap::Id* mutable_overlap_id(int index);
  ::apollo::hdmap::Id* add_overlap_id();
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
      mutable_overlap_id();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
      overlap_id() const;

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::apollo::hdmap::Id& id() const;
  ::apollo::hdmap::Id* mutable_id();
  ::apollo::hdmap::Id* release_id();
  void set_allocated_id(::apollo::hdmap::Id* id);

  // optional .apollo.hdmap.Polygon polygon = 2;
  bool has_polygon() const;
  void clear_polygon();
  static const int kPolygonFieldNumber = 2;
  const ::apollo::hdmap::Polygon& polygon() const;
  ::apollo::hdmap::Polygon* mutable_polygon();
  ::apollo::hdmap::Polygon* release_polygon();
  void set_allocated_polygon(::apollo::hdmap::Polygon* polygon);

  // optional .apollo.hdmap.Junction.Type type = 4;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::apollo::hdmap::Junction_Type type() const;
  void set_type(::apollo::hdmap::Junction_Type value);

  // @@protoc_insertion_point(class_scope:apollo.hdmap.Junction)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_polygon();
  void clear_has_polygon();
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id > overlap_id_;
  ::apollo::hdmap::Id* id_;
  ::apollo::hdmap::Polygon* polygon_;
  int type_;
  friend struct protobuf_map_5fjunction_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Junction

// optional .apollo.hdmap.Id id = 1;
inline bool Junction::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Junction::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Junction::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Junction::clear_id() {
  if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  clear_has_id();
}
inline const ::apollo::hdmap::Id& Junction::id() const {
  const ::apollo::hdmap::Id* p = id_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Junction.id)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Id*>(
      &::apollo::hdmap::_Id_default_instance_);
}
inline ::apollo::hdmap::Id* Junction::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::apollo::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Junction.id)
  return id_;
}
inline ::apollo::hdmap::Id* Junction::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Junction.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline void Junction::set_allocated_id(::apollo::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Junction.id)
}

// optional .apollo.hdmap.Polygon polygon = 2;
inline bool Junction::has_polygon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Junction::set_has_polygon() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Junction::clear_has_polygon() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Junction::clear_polygon() {
  if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
  clear_has_polygon();
}
inline const ::apollo::hdmap::Polygon& Junction::polygon() const {
  const ::apollo::hdmap::Polygon* p = polygon_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Junction.polygon)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Polygon*>(
      &::apollo::hdmap::_Polygon_default_instance_);
}
inline ::apollo::hdmap::Polygon* Junction::mutable_polygon() {
  set_has_polygon();
  if (polygon_ == NULL) {
    polygon_ = new ::apollo::hdmap::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Junction.polygon)
  return polygon_;
}
inline ::apollo::hdmap::Polygon* Junction::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Junction.polygon)
  clear_has_polygon();
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
inline void Junction::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    set_has_polygon();
  } else {
    clear_has_polygon();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Junction.polygon)
}

// repeated .apollo.hdmap.Id overlap_id = 3;
inline int Junction::overlap_id_size() const {
  return overlap_id_.size();
}
inline void Junction::clear_overlap_id() {
  overlap_id_.Clear();
}
inline const ::apollo::hdmap::Id& Junction::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Junction.overlap_id)
  return overlap_id_.Get(index);
}
inline ::apollo::hdmap::Id* Junction::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Junction.overlap_id)
  return overlap_id_.Mutable(index);
}
inline ::apollo::hdmap::Id* Junction::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Junction.overlap_id)
  return overlap_id_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
Junction::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Junction.overlap_id)
  return &overlap_id_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
Junction::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Junction.overlap_id)
  return overlap_id_;
}

// optional .apollo.hdmap.Junction.Type type = 4;
inline bool Junction::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Junction::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Junction::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Junction::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::apollo::hdmap::Junction_Type Junction::type() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Junction.type)
  return static_cast< ::apollo::hdmap::Junction_Type >(type_);
}
inline void Junction::set_type(::apollo::hdmap::Junction_Type value) {
  assert(::apollo::hdmap::Junction_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.Junction.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace hdmap
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::hdmap::Junction_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::hdmap::Junction_Type>() {
  return ::apollo::hdmap::Junction_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_map_5fjunction_2eproto__INCLUDED
