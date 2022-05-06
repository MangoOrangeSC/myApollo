// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_speed_control.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map_speed_control.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace hdmap {
class SpeedControlDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SpeedControl>
     _instance;
} _SpeedControl_default_instance_;
class SpeedControlsDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SpeedControls>
     _instance;
} _SpeedControls_default_instance_;

namespace protobuf_map_5fspeed_5fcontrol_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, polygon_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, speed_limit_),
  0,
  1,
  2,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, speed_control_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(SpeedControl)},
  { 11, 17, sizeof(SpeedControls)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SpeedControl_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_SpeedControls_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "map_speed_control.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::hdmap::protobuf_map_5fgeometry_2eproto::InitDefaults();
  _SpeedControl_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SpeedControl_default_instance_);_SpeedControls_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SpeedControls_default_instance_);_SpeedControl_default_instance_._instance.get_mutable()->polygon_ = const_cast< ::apollo::hdmap::Polygon*>(
      ::apollo::hdmap::Polygon::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027map_speed_control.proto\022\014apollo.hdmap\032"
      "\022map_geometry.proto\"Y\n\014SpeedControl\022\014\n\004n"
      "ame\030\001 \001(\t\022&\n\007polygon\030\002 \001(\0132\025.apollo.hdma"
      "p.Polygon\022\023\n\013speed_limit\030\003 \001(\001\"B\n\rSpeedC"
      "ontrols\0221\n\rspeed_control\030\001 \003(\0132\032.apollo."
      "hdmap.SpeedControl"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map_speed_control.proto", &protobuf_RegisterTypes);
  ::apollo::hdmap::protobuf_map_5fgeometry_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_map_5fspeed_5fcontrol_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedControl::kNameFieldNumber;
const int SpeedControl::kPolygonFieldNumber;
const int SpeedControl::kSpeedLimitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedControl::SpeedControl()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_map_5fspeed_5fcontrol_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedControl)
}
SpeedControl::SpeedControl(const SpeedControl& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_polygon()) {
    polygon_ = new ::apollo::hdmap::Polygon(*from.polygon_);
  } else {
    polygon_ = NULL;
  }
  speed_limit_ = from.speed_limit_;
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedControl)
}

void SpeedControl::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&polygon_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&speed_limit_) -
      reinterpret_cast<char*>(&polygon_)) + sizeof(speed_limit_));
}

SpeedControl::~SpeedControl() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedControl)
  SharedDtor();
}

void SpeedControl::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete polygon_;
}

void SpeedControl::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedControl::descriptor() {
  protobuf_map_5fspeed_5fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fcontrol_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpeedControl& SpeedControl::default_instance() {
  protobuf_map_5fspeed_5fcontrol_2eproto::InitDefaults();
  return *internal_default_instance();
}

SpeedControl* SpeedControl::New(::google::protobuf::Arena* arena) const {
  SpeedControl* n = new SpeedControl;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedControl::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedControl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(polygon_ != NULL);
      polygon_->::apollo::hdmap::Polygon::Clear();
    }
  }
  speed_limit_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SpeedControl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedControl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.hdmap.SpeedControl.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.hdmap.Polygon polygon = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_polygon()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double speed_limit = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          set_has_speed_limit();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedControl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedControl)
  return false;
#undef DO_
}

void SpeedControl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedControl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.SpeedControl.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional .apollo.hdmap.Polygon polygon = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->polygon_, output);
  }

  // optional double speed_limit = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->speed_limit(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedControl)
}

::google::protobuf::uint8* SpeedControl::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedControl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.SpeedControl.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .apollo.hdmap.Polygon polygon = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->polygon_, deterministic, target);
  }

  // optional double speed_limit = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->speed_limit(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedControl)
  return target;
}

size_t SpeedControl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedControl)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .apollo.hdmap.Polygon polygon = 2;
    if (has_polygon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->polygon_);
    }

    // optional double speed_limit = 3;
    if (has_speed_limit()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeedControl::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedControl)
  GOOGLE_DCHECK_NE(&from, this);
  const SpeedControl* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedControl>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedControl)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedControl)
    MergeFrom(*source);
  }
}

void SpeedControl::MergeFrom(const SpeedControl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedControl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_polygon()->::apollo::hdmap::Polygon::MergeFrom(from.polygon());
    }
    if (cached_has_bits & 0x00000004u) {
      speed_limit_ = from.speed_limit_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SpeedControl::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedControl::CopyFrom(const SpeedControl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedControl::IsInitialized() const {
  return true;
}

void SpeedControl::Swap(SpeedControl* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedControl::InternalSwap(SpeedControl* other) {
  using std::swap;
  name_.Swap(&other->name_);
  swap(polygon_, other->polygon_);
  swap(speed_limit_, other->speed_limit_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedControl::GetMetadata() const {
  protobuf_map_5fspeed_5fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fcontrol_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedControl

// optional string name = 1;
bool SpeedControl::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SpeedControl::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void SpeedControl::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void SpeedControl::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& SpeedControl::name() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.name)
  return name_.GetNoArena();
}
void SpeedControl::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.name)
}
#if LANG_CXX11
void SpeedControl::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.hdmap.SpeedControl.name)
}
#endif
void SpeedControl::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.hdmap.SpeedControl.name)
}
void SpeedControl::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.hdmap.SpeedControl.name)
}
::std::string* SpeedControl::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SpeedControl::release_name() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SpeedControl::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedControl.name)
}

// optional .apollo.hdmap.Polygon polygon = 2;
bool SpeedControl::has_polygon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SpeedControl::set_has_polygon() {
  _has_bits_[0] |= 0x00000002u;
}
void SpeedControl::clear_has_polygon() {
  _has_bits_[0] &= ~0x00000002u;
}
void SpeedControl::clear_polygon() {
  if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
  clear_has_polygon();
}
const ::apollo::hdmap::Polygon& SpeedControl::polygon() const {
  const ::apollo::hdmap::Polygon* p = polygon_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.polygon)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Polygon*>(
      &::apollo::hdmap::_Polygon_default_instance_);
}
::apollo::hdmap::Polygon* SpeedControl::mutable_polygon() {
  set_has_polygon();
  if (polygon_ == NULL) {
    polygon_ = new ::apollo::hdmap::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.polygon)
  return polygon_;
}
::apollo::hdmap::Polygon* SpeedControl::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.polygon)
  clear_has_polygon();
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
void SpeedControl::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
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
bool SpeedControl::has_speed_limit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SpeedControl::set_has_speed_limit() {
  _has_bits_[0] |= 0x00000004u;
}
void SpeedControl::clear_has_speed_limit() {
  _has_bits_[0] &= ~0x00000004u;
}
void SpeedControl::clear_speed_limit() {
  speed_limit_ = 0;
  clear_has_speed_limit();
}
double SpeedControl::speed_limit() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.speed_limit)
  return speed_limit_;
}
void SpeedControl::set_speed_limit(double value) {
  set_has_speed_limit();
  speed_limit_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.speed_limit)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedControls::kSpeedControlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedControls::SpeedControls()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_map_5fspeed_5fcontrol_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedControls)
}
SpeedControls::SpeedControls(const SpeedControls& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      speed_control_(from.speed_control_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedControls)
}

void SpeedControls::SharedCtor() {
  _cached_size_ = 0;
}

SpeedControls::~SpeedControls() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedControls)
  SharedDtor();
}

void SpeedControls::SharedDtor() {
}

void SpeedControls::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedControls::descriptor() {
  protobuf_map_5fspeed_5fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fcontrol_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpeedControls& SpeedControls::default_instance() {
  protobuf_map_5fspeed_5fcontrol_2eproto::InitDefaults();
  return *internal_default_instance();
}

SpeedControls* SpeedControls::New(::google::protobuf::Arena* arena) const {
  SpeedControls* n = new SpeedControls;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedControls::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedControls)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  speed_control_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SpeedControls::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedControls)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .apollo.hdmap.SpeedControl speed_control = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_speed_control()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedControls)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedControls)
  return false;
#undef DO_
}

void SpeedControls::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedControls)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->speed_control_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->speed_control(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedControls)
}

::google::protobuf::uint8* SpeedControls::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedControls)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->speed_control_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->speed_control(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedControls)
  return target;
}

size_t SpeedControls::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedControls)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->speed_control_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->speed_control(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeedControls::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedControls)
  GOOGLE_DCHECK_NE(&from, this);
  const SpeedControls* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedControls>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedControls)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedControls)
    MergeFrom(*source);
  }
}

void SpeedControls::MergeFrom(const SpeedControls& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedControls)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  speed_control_.MergeFrom(from.speed_control_);
}

void SpeedControls::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedControls)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedControls::CopyFrom(const SpeedControls& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedControls)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedControls::IsInitialized() const {
  return true;
}

void SpeedControls::Swap(SpeedControls* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedControls::InternalSwap(SpeedControls* other) {
  using std::swap;
  speed_control_.InternalSwap(&other->speed_control_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedControls::GetMetadata() const {
  protobuf_map_5fspeed_5fcontrol_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fcontrol_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedControls

// repeated .apollo.hdmap.SpeedControl speed_control = 1;
int SpeedControls::speed_control_size() const {
  return speed_control_.size();
}
void SpeedControls::clear_speed_control() {
  speed_control_.Clear();
}
const ::apollo::hdmap::SpeedControl& SpeedControls::speed_control(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Get(index);
}
::apollo::hdmap::SpeedControl* SpeedControls::mutable_speed_control(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Mutable(index);
}
::apollo::hdmap::SpeedControl* SpeedControls::add_speed_control() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >*
SpeedControls::mutable_speed_control() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedControls.speed_control)
  return &speed_control_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >&
SpeedControls::speed_control() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
