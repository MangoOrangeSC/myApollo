// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: navigation.proto

#ifndef PROTOBUF_navigation_2eproto__INCLUDED
#define PROTOBUF_navigation_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
#include "pnc_point.pb.h"
#include "localization.pb.h"
#include "map.pb.h"
#include "perception_obstacle.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace relative_map {
class MapMsg;
class MapMsgDefaultTypeInternal;
extern MapMsgDefaultTypeInternal _MapMsg_default_instance_;
class MapMsg_NavigationPathEntry;
class MapMsg_NavigationPathEntryDefaultTypeInternal;
extern MapMsg_NavigationPathEntryDefaultTypeInternal _MapMsg_NavigationPathEntry_default_instance_;
class NavigationInfo;
class NavigationInfoDefaultTypeInternal;
extern NavigationInfoDefaultTypeInternal _NavigationInfo_default_instance_;
class NavigationPath;
class NavigationPathDefaultTypeInternal;
extern NavigationPathDefaultTypeInternal _NavigationPath_default_instance_;
}  // namespace relative_map
}  // namespace apollo

namespace apollo {
namespace relative_map {

namespace protobuf_navigation_2eproto {
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
}  // namespace protobuf_navigation_2eproto

// ===================================================================

class NavigationPath : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.relative_map.NavigationPath) */ {
 public:
  NavigationPath();
  virtual ~NavigationPath();

  NavigationPath(const NavigationPath& from);

  inline NavigationPath& operator=(const NavigationPath& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavigationPath(NavigationPath&& from) noexcept
    : NavigationPath() {
    *this = ::std::move(from);
  }

  inline NavigationPath& operator=(NavigationPath&& from) noexcept {
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
  static const NavigationPath& default_instance();

  static inline const NavigationPath* internal_default_instance() {
    return reinterpret_cast<const NavigationPath*>(
               &_NavigationPath_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(NavigationPath* other);
  friend void swap(NavigationPath& a, NavigationPath& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavigationPath* New() const PROTOBUF_FINAL { return New(NULL); }

  NavigationPath* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NavigationPath& from);
  void MergeFrom(const NavigationPath& from);
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
  void InternalSwap(NavigationPath* other);
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

  // optional .apollo.common.Path path = 1;
  bool has_path() const;
  void clear_path();
  static const int kPathFieldNumber = 1;
  const ::apollo::common::Path& path() const;
  ::apollo::common::Path* mutable_path();
  ::apollo::common::Path* release_path();
  void set_allocated_path(::apollo::common::Path* path);

  // optional uint32 path_priority = 2;
  bool has_path_priority() const;
  void clear_path_priority();
  static const int kPathPriorityFieldNumber = 2;
  ::google::protobuf::uint32 path_priority() const;
  void set_path_priority(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.relative_map.NavigationPath)
 private:
  void set_has_path();
  void clear_has_path();
  void set_has_path_priority();
  void clear_has_path_priority();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::apollo::common::Path* path_;
  ::google::protobuf::uint32 path_priority_;
  friend struct protobuf_navigation_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NavigationInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.relative_map.NavigationInfo) */ {
 public:
  NavigationInfo();
  virtual ~NavigationInfo();

  NavigationInfo(const NavigationInfo& from);

  inline NavigationInfo& operator=(const NavigationInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavigationInfo(NavigationInfo&& from) noexcept
    : NavigationInfo() {
    *this = ::std::move(from);
  }

  inline NavigationInfo& operator=(NavigationInfo&& from) noexcept {
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
  static const NavigationInfo& default_instance();

  static inline const NavigationInfo* internal_default_instance() {
    return reinterpret_cast<const NavigationInfo*>(
               &_NavigationInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(NavigationInfo* other);
  friend void swap(NavigationInfo& a, NavigationInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavigationInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  NavigationInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NavigationInfo& from);
  void MergeFrom(const NavigationInfo& from);
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
  void InternalSwap(NavigationInfo* other);
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

  // repeated .apollo.relative_map.NavigationPath navigation_path = 2;
  int navigation_path_size() const;
  void clear_navigation_path();
  static const int kNavigationPathFieldNumber = 2;
  const ::apollo::relative_map::NavigationPath& navigation_path(int index) const;
  ::apollo::relative_map::NavigationPath* mutable_navigation_path(int index);
  ::apollo::relative_map::NavigationPath* add_navigation_path();
  ::google::protobuf::RepeatedPtrField< ::apollo::relative_map::NavigationPath >*
      mutable_navigation_path();
  const ::google::protobuf::RepeatedPtrField< ::apollo::relative_map::NavigationPath >&
      navigation_path() const;

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // @@protoc_insertion_point(class_scope:apollo.relative_map.NavigationInfo)
 private:
  void set_has_header();
  void clear_has_header();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::relative_map::NavigationPath > navigation_path_;
  ::apollo::common::Header* header_;
  friend struct protobuf_navigation_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------

class MapMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.relative_map.MapMsg) */ {
 public:
  MapMsg();
  virtual ~MapMsg();

  MapMsg(const MapMsg& from);

  inline MapMsg& operator=(const MapMsg& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MapMsg(MapMsg&& from) noexcept
    : MapMsg() {
    *this = ::std::move(from);
  }

  inline MapMsg& operator=(MapMsg&& from) noexcept {
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
  static const MapMsg& default_instance();

  static inline const MapMsg* internal_default_instance() {
    return reinterpret_cast<const MapMsg*>(
               &_MapMsg_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(MapMsg* other);
  friend void swap(MapMsg& a, MapMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MapMsg* New() const PROTOBUF_FINAL { return New(NULL); }

  MapMsg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MapMsg& from);
  void MergeFrom(const MapMsg& from);
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
  void InternalSwap(MapMsg* other);
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

  // map<string, .apollo.relative_map.NavigationPath> navigation_path = 3;
  int navigation_path_size() const;
  void clear_navigation_path();
  static const int kNavigationPathFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::apollo::relative_map::NavigationPath >&
      navigation_path() const;
  ::google::protobuf::Map< ::std::string, ::apollo::relative_map::NavigationPath >*
      mutable_navigation_path();

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional .apollo.hdmap.Map hdmap = 2;
  bool has_hdmap() const;
  void clear_hdmap();
  static const int kHdmapFieldNumber = 2;
  const ::apollo::hdmap::Map& hdmap() const;
  ::apollo::hdmap::Map* mutable_hdmap();
  ::apollo::hdmap::Map* release_hdmap();
  void set_allocated_hdmap(::apollo::hdmap::Map* hdmap);

  // optional .apollo.perception.LaneMarkers lane_marker = 4;
  bool has_lane_marker() const;
  void clear_lane_marker();
  static const int kLaneMarkerFieldNumber = 4;
  const ::apollo::perception::LaneMarkers& lane_marker() const;
  ::apollo::perception::LaneMarkers* mutable_lane_marker();
  ::apollo::perception::LaneMarkers* release_lane_marker();
  void set_allocated_lane_marker(::apollo::perception::LaneMarkers* lane_marker);

  // optional .apollo.localization.LocalizationEstimate localization = 5;
  bool has_localization() const;
  void clear_localization();
  static const int kLocalizationFieldNumber = 5;
  const ::apollo::localization::LocalizationEstimate& localization() const;
  ::apollo::localization::LocalizationEstimate* mutable_localization();
  ::apollo::localization::LocalizationEstimate* release_localization();
  void set_allocated_localization(::apollo::localization::LocalizationEstimate* localization);

  // @@protoc_insertion_point(class_scope:apollo.relative_map.MapMsg)
 private:
  void set_has_header();
  void clear_has_header();
  void set_has_hdmap();
  void clear_has_hdmap();
  void set_has_lane_marker();
  void clear_has_lane_marker();
  void set_has_localization();
  void clear_has_localization();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  public:
  class MapMsg_NavigationPathEntry : public ::google::protobuf::internal::MapEntry<MapMsg_NavigationPathEntry, 
      ::std::string, ::apollo::relative_map::NavigationPath,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<MapMsg_NavigationPathEntry, 
      ::std::string, ::apollo::relative_map::NavigationPath,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > SuperType;
    MapMsg_NavigationPathEntry();
    MapMsg_NavigationPathEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const MapMsg_NavigationPathEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_MapMsg_NavigationPathEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      MapMsg_NavigationPathEntry,
      ::std::string, ::apollo::relative_map::NavigationPath,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > navigation_path_;
  private:
  ::apollo::common::Header* header_;
  ::apollo::hdmap::Map* hdmap_;
  ::apollo::perception::LaneMarkers* lane_marker_;
  ::apollo::localization::LocalizationEstimate* localization_;
  friend struct protobuf_navigation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationPath

// optional .apollo.common.Path path = 1;
inline bool NavigationPath::has_path() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NavigationPath::set_has_path() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NavigationPath::clear_has_path() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NavigationPath::clear_path() {
  if (path_ != NULL) path_->::apollo::common::Path::Clear();
  clear_has_path();
}
inline const ::apollo::common::Path& NavigationPath::path() const {
  const ::apollo::common::Path* p = path_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.NavigationPath.path)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Path*>(
      &::apollo::common::_Path_default_instance_);
}
inline ::apollo::common::Path* NavigationPath::mutable_path() {
  set_has_path();
  if (path_ == NULL) {
    path_ = new ::apollo::common::Path;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.NavigationPath.path)
  return path_;
}
inline ::apollo::common::Path* NavigationPath::release_path() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.NavigationPath.path)
  clear_has_path();
  ::apollo::common::Path* temp = path_;
  path_ = NULL;
  return temp;
}
inline void NavigationPath::set_allocated_path(::apollo::common::Path* path) {
  delete path_;
  path_ = path;
  if (path) {
    set_has_path();
  } else {
    clear_has_path();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.NavigationPath.path)
}

// optional uint32 path_priority = 2;
inline bool NavigationPath::has_path_priority() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NavigationPath::set_has_path_priority() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NavigationPath::clear_has_path_priority() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NavigationPath::clear_path_priority() {
  path_priority_ = 0u;
  clear_has_path_priority();
}
inline ::google::protobuf::uint32 NavigationPath::path_priority() const {
  // @@protoc_insertion_point(field_get:apollo.relative_map.NavigationPath.path_priority)
  return path_priority_;
}
inline void NavigationPath::set_path_priority(::google::protobuf::uint32 value) {
  set_has_path_priority();
  path_priority_ = value;
  // @@protoc_insertion_point(field_set:apollo.relative_map.NavigationPath.path_priority)
}

// -------------------------------------------------------------------

// NavigationInfo

// optional .apollo.common.Header header = 1;
inline bool NavigationInfo::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NavigationInfo::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NavigationInfo::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NavigationInfo::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& NavigationInfo::header() const {
  const ::apollo::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.NavigationInfo.header)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Header*>(
      &::apollo::common::_Header_default_instance_);
}
inline ::apollo::common::Header* NavigationInfo::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.NavigationInfo.header)
  return header_;
}
inline ::apollo::common::Header* NavigationInfo::release_header() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.NavigationInfo.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void NavigationInfo::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.NavigationInfo.header)
}

// repeated .apollo.relative_map.NavigationPath navigation_path = 2;
inline int NavigationInfo::navigation_path_size() const {
  return navigation_path_.size();
}
inline void NavigationInfo::clear_navigation_path() {
  navigation_path_.Clear();
}
inline const ::apollo::relative_map::NavigationPath& NavigationInfo::navigation_path(int index) const {
  // @@protoc_insertion_point(field_get:apollo.relative_map.NavigationInfo.navigation_path)
  return navigation_path_.Get(index);
}
inline ::apollo::relative_map::NavigationPath* NavigationInfo::mutable_navigation_path(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.NavigationInfo.navigation_path)
  return navigation_path_.Mutable(index);
}
inline ::apollo::relative_map::NavigationPath* NavigationInfo::add_navigation_path() {
  // @@protoc_insertion_point(field_add:apollo.relative_map.NavigationInfo.navigation_path)
  return navigation_path_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::relative_map::NavigationPath >*
NavigationInfo::mutable_navigation_path() {
  // @@protoc_insertion_point(field_mutable_list:apollo.relative_map.NavigationInfo.navigation_path)
  return &navigation_path_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::relative_map::NavigationPath >&
NavigationInfo::navigation_path() const {
  // @@protoc_insertion_point(field_list:apollo.relative_map.NavigationInfo.navigation_path)
  return navigation_path_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// MapMsg

// optional .apollo.common.Header header = 1;
inline bool MapMsg::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapMsg::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapMsg::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapMsg::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& MapMsg::header() const {
  const ::apollo::common::Header* p = header_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.MapMsg.header)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Header*>(
      &::apollo::common::_Header_default_instance_);
}
inline ::apollo::common::Header* MapMsg::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.MapMsg.header)
  return header_;
}
inline ::apollo::common::Header* MapMsg::release_header() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.MapMsg.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void MapMsg::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.MapMsg.header)
}

// optional .apollo.hdmap.Map hdmap = 2;
inline bool MapMsg::has_hdmap() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MapMsg::set_has_hdmap() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MapMsg::clear_has_hdmap() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MapMsg::clear_hdmap() {
  if (hdmap_ != NULL) hdmap_->::apollo::hdmap::Map::Clear();
  clear_has_hdmap();
}
inline const ::apollo::hdmap::Map& MapMsg::hdmap() const {
  const ::apollo::hdmap::Map* p = hdmap_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.MapMsg.hdmap)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Map*>(
      &::apollo::hdmap::_Map_default_instance_);
}
inline ::apollo::hdmap::Map* MapMsg::mutable_hdmap() {
  set_has_hdmap();
  if (hdmap_ == NULL) {
    hdmap_ = new ::apollo::hdmap::Map;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.MapMsg.hdmap)
  return hdmap_;
}
inline ::apollo::hdmap::Map* MapMsg::release_hdmap() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.MapMsg.hdmap)
  clear_has_hdmap();
  ::apollo::hdmap::Map* temp = hdmap_;
  hdmap_ = NULL;
  return temp;
}
inline void MapMsg::set_allocated_hdmap(::apollo::hdmap::Map* hdmap) {
  delete hdmap_;
  hdmap_ = hdmap;
  if (hdmap) {
    set_has_hdmap();
  } else {
    clear_has_hdmap();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.MapMsg.hdmap)
}

// map<string, .apollo.relative_map.NavigationPath> navigation_path = 3;
inline int MapMsg::navigation_path_size() const {
  return navigation_path_.size();
}
inline void MapMsg::clear_navigation_path() {
  navigation_path_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::apollo::relative_map::NavigationPath >&
MapMsg::navigation_path() const {
  // @@protoc_insertion_point(field_map:apollo.relative_map.MapMsg.navigation_path)
  return navigation_path_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::apollo::relative_map::NavigationPath >*
MapMsg::mutable_navigation_path() {
  // @@protoc_insertion_point(field_mutable_map:apollo.relative_map.MapMsg.navigation_path)
  return navigation_path_.MutableMap();
}

// optional .apollo.perception.LaneMarkers lane_marker = 4;
inline bool MapMsg::has_lane_marker() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MapMsg::set_has_lane_marker() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MapMsg::clear_has_lane_marker() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MapMsg::clear_lane_marker() {
  if (lane_marker_ != NULL) lane_marker_->::apollo::perception::LaneMarkers::Clear();
  clear_has_lane_marker();
}
inline const ::apollo::perception::LaneMarkers& MapMsg::lane_marker() const {
  const ::apollo::perception::LaneMarkers* p = lane_marker_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.MapMsg.lane_marker)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::perception::LaneMarkers*>(
      &::apollo::perception::_LaneMarkers_default_instance_);
}
inline ::apollo::perception::LaneMarkers* MapMsg::mutable_lane_marker() {
  set_has_lane_marker();
  if (lane_marker_ == NULL) {
    lane_marker_ = new ::apollo::perception::LaneMarkers;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.MapMsg.lane_marker)
  return lane_marker_;
}
inline ::apollo::perception::LaneMarkers* MapMsg::release_lane_marker() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.MapMsg.lane_marker)
  clear_has_lane_marker();
  ::apollo::perception::LaneMarkers* temp = lane_marker_;
  lane_marker_ = NULL;
  return temp;
}
inline void MapMsg::set_allocated_lane_marker(::apollo::perception::LaneMarkers* lane_marker) {
  delete lane_marker_;
  lane_marker_ = lane_marker;
  if (lane_marker) {
    set_has_lane_marker();
  } else {
    clear_has_lane_marker();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.MapMsg.lane_marker)
}

// optional .apollo.localization.LocalizationEstimate localization = 5;
inline bool MapMsg::has_localization() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MapMsg::set_has_localization() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MapMsg::clear_has_localization() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MapMsg::clear_localization() {
  if (localization_ != NULL) localization_->::apollo::localization::LocalizationEstimate::Clear();
  clear_has_localization();
}
inline const ::apollo::localization::LocalizationEstimate& MapMsg::localization() const {
  const ::apollo::localization::LocalizationEstimate* p = localization_;
  // @@protoc_insertion_point(field_get:apollo.relative_map.MapMsg.localization)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::localization::LocalizationEstimate*>(
      &::apollo::localization::_LocalizationEstimate_default_instance_);
}
inline ::apollo::localization::LocalizationEstimate* MapMsg::mutable_localization() {
  set_has_localization();
  if (localization_ == NULL) {
    localization_ = new ::apollo::localization::LocalizationEstimate;
  }
  // @@protoc_insertion_point(field_mutable:apollo.relative_map.MapMsg.localization)
  return localization_;
}
inline ::apollo::localization::LocalizationEstimate* MapMsg::release_localization() {
  // @@protoc_insertion_point(field_release:apollo.relative_map.MapMsg.localization)
  clear_has_localization();
  ::apollo::localization::LocalizationEstimate* temp = localization_;
  localization_ = NULL;
  return temp;
}
inline void MapMsg::set_allocated_localization(::apollo::localization::LocalizationEstimate* localization) {
  delete localization_;
  localization_ = localization;
  if (localization) {
    set_has_localization();
  } else {
    clear_has_localization();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.relative_map.MapMsg.localization)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace relative_map
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_navigation_2eproto__INCLUDED
