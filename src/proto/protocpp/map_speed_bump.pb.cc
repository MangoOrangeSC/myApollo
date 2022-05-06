// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_speed_bump.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map_speed_bump.pb.h"

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
class SpeedBumpDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SpeedBump>
     _instance;
} _SpeedBump_default_instance_;

namespace protobuf_map_5fspeed_5fbump_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, overlap_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedBump, position_),
  0,
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(SpeedBump)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SpeedBump_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "map_speed_bump.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::hdmap::protobuf_map_5fid_2eproto::InitDefaults();
  ::apollo::hdmap::protobuf_map_5fgeometry_2eproto::InitDefaults();
  _SpeedBump_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SpeedBump_default_instance_);_SpeedBump_default_instance_._instance.get_mutable()->id_ = const_cast< ::apollo::hdmap::Id*>(
      ::apollo::hdmap::Id::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024map_speed_bump.proto\022\014apollo.hdmap\032\014ma"
      "p_id.proto\032\022map_geometry.proto\"v\n\tSpeedB"
      "ump\022\034\n\002id\030\001 \001(\0132\020.apollo.hdmap.Id\022$\n\nove"
      "rlap_id\030\002 \003(\0132\020.apollo.hdmap.Id\022%\n\010posit"
      "ion\030\003 \003(\0132\023.apollo.hdmap.Curve"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 190);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map_speed_bump.proto", &protobuf_RegisterTypes);
  ::apollo::hdmap::protobuf_map_5fid_2eproto::AddDescriptors();
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

}  // namespace protobuf_map_5fspeed_5fbump_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedBump::kIdFieldNumber;
const int SpeedBump::kOverlapIdFieldNumber;
const int SpeedBump::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedBump::SpeedBump()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_map_5fspeed_5fbump_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedBump)
}
SpeedBump::SpeedBump(const SpeedBump& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      overlap_id_(from.overlap_id_),
      position_(from.position_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_id()) {
    id_ = new ::apollo::hdmap::Id(*from.id_);
  } else {
    id_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedBump)
}

void SpeedBump::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
}

SpeedBump::~SpeedBump() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedBump)
  SharedDtor();
}

void SpeedBump::SharedDtor() {
  if (this != internal_default_instance()) delete id_;
}

void SpeedBump::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedBump::descriptor() {
  protobuf_map_5fspeed_5fbump_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fbump_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SpeedBump& SpeedBump::default_instance() {
  protobuf_map_5fspeed_5fbump_2eproto::InitDefaults();
  return *internal_default_instance();
}

SpeedBump* SpeedBump::New(::google::protobuf::Arena* arena) const {
  SpeedBump* n = new SpeedBump;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedBump::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedBump)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  overlap_id_.Clear();
  position_.Clear();
  if (has_id()) {
    GOOGLE_DCHECK(id_ != NULL);
    id_->::apollo::hdmap::Id::Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SpeedBump::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedBump)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.hdmap.Id id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Id overlap_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_overlap_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Curve position = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_position()));
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
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedBump)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedBump)
  return false;
#undef DO_
}

void SpeedBump::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedBump)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->id_, output);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->overlap_id(static_cast<int>(i)), output);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->position_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->position(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedBump)
}

::google::protobuf::uint8* SpeedBump::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedBump)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->id_, deterministic, target);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->overlap_id(static_cast<int>(i)), deterministic, target);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->position_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->position(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedBump)
  return target;
}

size_t SpeedBump::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedBump)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .apollo.hdmap.Id overlap_id = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->overlap_id_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->overlap_id(static_cast<int>(i)));
    }
  }

  // repeated .apollo.hdmap.Curve position = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->position_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->position(static_cast<int>(i)));
    }
  }

  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->id_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeedBump::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedBump)
  GOOGLE_DCHECK_NE(&from, this);
  const SpeedBump* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedBump>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedBump)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedBump)
    MergeFrom(*source);
  }
}

void SpeedBump::MergeFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedBump)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  overlap_id_.MergeFrom(from.overlap_id_);
  position_.MergeFrom(from.position_);
  if (from.has_id()) {
    mutable_id()->::apollo::hdmap::Id::MergeFrom(from.id());
  }
}

void SpeedBump::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedBump::CopyFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedBump::IsInitialized() const {
  return true;
}

void SpeedBump::Swap(SpeedBump* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedBump::InternalSwap(SpeedBump* other) {
  using std::swap;
  overlap_id_.InternalSwap(&other->overlap_id_);
  position_.InternalSwap(&other->position_);
  swap(id_, other->id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedBump::GetMetadata() const {
  protobuf_map_5fspeed_5fbump_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_map_5fspeed_5fbump_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedBump

// optional .apollo.hdmap.Id id = 1;
bool SpeedBump::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SpeedBump::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void SpeedBump::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void SpeedBump::clear_id() {
  if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  clear_has_id();
}
const ::apollo::hdmap::Id& SpeedBump::id() const {
  const ::apollo::hdmap::Id* p = id_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.id)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Id*>(
      &::apollo::hdmap::_Id_default_instance_);
}
::apollo::hdmap::Id* SpeedBump::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::apollo::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.id)
  return id_;
}
::apollo::hdmap::Id* SpeedBump::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedBump.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
void SpeedBump::set_allocated_id(::apollo::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedBump.id)
}

// repeated .apollo.hdmap.Id overlap_id = 2;
int SpeedBump::overlap_id_size() const {
  return overlap_id_.size();
}
void SpeedBump::clear_overlap_id() {
  overlap_id_.Clear();
}
const ::apollo::hdmap::Id& SpeedBump::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Get(index);
}
::apollo::hdmap::Id* SpeedBump::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Mutable(index);
}
::apollo::hdmap::Id* SpeedBump::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
SpeedBump::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.overlap_id)
  return &overlap_id_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
SpeedBump::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_;
}

// repeated .apollo.hdmap.Curve position = 3;
int SpeedBump::position_size() const {
  return position_.size();
}
void SpeedBump::clear_position() {
  position_.Clear();
}
const ::apollo::hdmap::Curve& SpeedBump::position(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.position)
  return position_.Get(index);
}
::apollo::hdmap::Curve* SpeedBump::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.position)
  return position_.Mutable(index);
}
::apollo::hdmap::Curve* SpeedBump::add_position() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.position)
  return position_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
SpeedBump::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.position)
  return &position_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
SpeedBump::position() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.position)
  return position_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
