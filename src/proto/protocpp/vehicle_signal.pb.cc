// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vehicle_signal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vehicle_signal.pb.h"

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
namespace common {
class VehicleSignalDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<VehicleSignal>
     _instance;
} _VehicleSignal_default_instance_;

namespace protobuf_vehicle_5fsignal_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, turn_signal_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, high_beam_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, low_beam_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, horn_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleSignal, emergency_light_),
  0,
  1,
  2,
  3,
  4,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(VehicleSignal)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_VehicleSignal_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "vehicle_signal.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  _VehicleSignal_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_VehicleSignal_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024vehicle_signal.proto\022\rapollo.common\"\325\001"
      "\n\rVehicleSignal\022<\n\013turn_signal\030\001 \001(\0162\'.a"
      "pollo.common.VehicleSignal.TurnSignal\022\021\n"
      "\thigh_beam\030\002 \001(\010\022\020\n\010low_beam\030\003 \001(\010\022\014\n\004ho"
      "rn\030\004 \001(\010\022\027\n\017emergency_light\030\005 \001(\010\":\n\nTur"
      "nSignal\022\r\n\tTURN_NONE\020\000\022\r\n\tTURN_LEFT\020\001\022\016\n"
      "\nTURN_RIGHT\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 253);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vehicle_signal.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_vehicle_5fsignal_2eproto

const ::google::protobuf::EnumDescriptor* VehicleSignal_TurnSignal_descriptor() {
  protobuf_vehicle_5fsignal_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vehicle_5fsignal_2eproto::file_level_enum_descriptors[0];
}
bool VehicleSignal_TurnSignal_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const VehicleSignal_TurnSignal VehicleSignal::TURN_NONE;
const VehicleSignal_TurnSignal VehicleSignal::TURN_LEFT;
const VehicleSignal_TurnSignal VehicleSignal::TURN_RIGHT;
const VehicleSignal_TurnSignal VehicleSignal::TurnSignal_MIN;
const VehicleSignal_TurnSignal VehicleSignal::TurnSignal_MAX;
const int VehicleSignal::TurnSignal_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VehicleSignal::kTurnSignalFieldNumber;
const int VehicleSignal::kHighBeamFieldNumber;
const int VehicleSignal::kLowBeamFieldNumber;
const int VehicleSignal::kHornFieldNumber;
const int VehicleSignal::kEmergencyLightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VehicleSignal::VehicleSignal()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vehicle_5fsignal_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.VehicleSignal)
}
VehicleSignal::VehicleSignal(const VehicleSignal& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&turn_signal_, &from.turn_signal_,
    static_cast<size_t>(reinterpret_cast<char*>(&emergency_light_) -
    reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
  // @@protoc_insertion_point(copy_constructor:apollo.common.VehicleSignal)
}

void VehicleSignal::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&turn_signal_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&emergency_light_) -
      reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
}

VehicleSignal::~VehicleSignal() {
  // @@protoc_insertion_point(destructor:apollo.common.VehicleSignal)
  SharedDtor();
}

void VehicleSignal::SharedDtor() {
}

void VehicleSignal::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VehicleSignal::descriptor() {
  protobuf_vehicle_5fsignal_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vehicle_5fsignal_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VehicleSignal& VehicleSignal::default_instance() {
  protobuf_vehicle_5fsignal_2eproto::InitDefaults();
  return *internal_default_instance();
}

VehicleSignal* VehicleSignal::New(::google::protobuf::Arena* arena) const {
  VehicleSignal* n = new VehicleSignal;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VehicleSignal::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.VehicleSignal)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    ::memset(&turn_signal_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&emergency_light_) -
        reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VehicleSignal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.VehicleSignal)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::common::VehicleSignal_TurnSignal_IsValid(value)) {
            set_turn_signal(static_cast< ::apollo::common::VehicleSignal_TurnSignal >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool high_beam = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_high_beam();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &high_beam_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool low_beam = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_low_beam();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &low_beam_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool horn = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_horn();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &horn_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool emergency_light = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_emergency_light();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &emergency_light_)));
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
  // @@protoc_insertion_point(parse_success:apollo.common.VehicleSignal)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.VehicleSignal)
  return false;
#undef DO_
}

void VehicleSignal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.VehicleSignal)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->turn_signal(), output);
  }

  // optional bool high_beam = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->high_beam(), output);
  }

  // optional bool low_beam = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->low_beam(), output);
  }

  // optional bool horn = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->horn(), output);
  }

  // optional bool emergency_light = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->emergency_light(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.common.VehicleSignal)
}

::google::protobuf::uint8* VehicleSignal::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.VehicleSignal)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->turn_signal(), target);
  }

  // optional bool high_beam = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->high_beam(), target);
  }

  // optional bool low_beam = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->low_beam(), target);
  }

  // optional bool horn = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->horn(), target);
  }

  // optional bool emergency_light = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->emergency_light(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.VehicleSignal)
  return target;
}

size_t VehicleSignal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.VehicleSignal)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
    if (has_turn_signal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->turn_signal());
    }

    // optional bool high_beam = 2;
    if (has_high_beam()) {
      total_size += 1 + 1;
    }

    // optional bool low_beam = 3;
    if (has_low_beam()) {
      total_size += 1 + 1;
    }

    // optional bool horn = 4;
    if (has_horn()) {
      total_size += 1 + 1;
    }

    // optional bool emergency_light = 5;
    if (has_emergency_light()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VehicleSignal::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.VehicleSignal)
  GOOGLE_DCHECK_NE(&from, this);
  const VehicleSignal* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VehicleSignal>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.VehicleSignal)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.VehicleSignal)
    MergeFrom(*source);
  }
}

void VehicleSignal::MergeFrom(const VehicleSignal& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.VehicleSignal)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      turn_signal_ = from.turn_signal_;
    }
    if (cached_has_bits & 0x00000002u) {
      high_beam_ = from.high_beam_;
    }
    if (cached_has_bits & 0x00000004u) {
      low_beam_ = from.low_beam_;
    }
    if (cached_has_bits & 0x00000008u) {
      horn_ = from.horn_;
    }
    if (cached_has_bits & 0x00000010u) {
      emergency_light_ = from.emergency_light_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VehicleSignal::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.VehicleSignal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleSignal::CopyFrom(const VehicleSignal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.VehicleSignal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleSignal::IsInitialized() const {
  return true;
}

void VehicleSignal::Swap(VehicleSignal* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VehicleSignal::InternalSwap(VehicleSignal* other) {
  using std::swap;
  swap(turn_signal_, other->turn_signal_);
  swap(high_beam_, other->high_beam_);
  swap(low_beam_, other->low_beam_);
  swap(horn_, other->horn_);
  swap(emergency_light_, other->emergency_light_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VehicleSignal::GetMetadata() const {
  protobuf_vehicle_5fsignal_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vehicle_5fsignal_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleSignal

// optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
bool VehicleSignal::has_turn_signal() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VehicleSignal::set_has_turn_signal() {
  _has_bits_[0] |= 0x00000001u;
}
void VehicleSignal::clear_has_turn_signal() {
  _has_bits_[0] &= ~0x00000001u;
}
void VehicleSignal::clear_turn_signal() {
  turn_signal_ = 0;
  clear_has_turn_signal();
}
::apollo::common::VehicleSignal_TurnSignal VehicleSignal::turn_signal() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.turn_signal)
  return static_cast< ::apollo::common::VehicleSignal_TurnSignal >(turn_signal_);
}
void VehicleSignal::set_turn_signal(::apollo::common::VehicleSignal_TurnSignal value) {
  assert(::apollo::common::VehicleSignal_TurnSignal_IsValid(value));
  set_has_turn_signal();
  turn_signal_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.turn_signal)
}

// optional bool high_beam = 2;
bool VehicleSignal::has_high_beam() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VehicleSignal::set_has_high_beam() {
  _has_bits_[0] |= 0x00000002u;
}
void VehicleSignal::clear_has_high_beam() {
  _has_bits_[0] &= ~0x00000002u;
}
void VehicleSignal::clear_high_beam() {
  high_beam_ = false;
  clear_has_high_beam();
}
bool VehicleSignal::high_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.high_beam)
  return high_beam_;
}
void VehicleSignal::set_high_beam(bool value) {
  set_has_high_beam();
  high_beam_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.high_beam)
}

// optional bool low_beam = 3;
bool VehicleSignal::has_low_beam() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void VehicleSignal::set_has_low_beam() {
  _has_bits_[0] |= 0x00000004u;
}
void VehicleSignal::clear_has_low_beam() {
  _has_bits_[0] &= ~0x00000004u;
}
void VehicleSignal::clear_low_beam() {
  low_beam_ = false;
  clear_has_low_beam();
}
bool VehicleSignal::low_beam() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.low_beam)
  return low_beam_;
}
void VehicleSignal::set_low_beam(bool value) {
  set_has_low_beam();
  low_beam_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.low_beam)
}

// optional bool horn = 4;
bool VehicleSignal::has_horn() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void VehicleSignal::set_has_horn() {
  _has_bits_[0] |= 0x00000008u;
}
void VehicleSignal::clear_has_horn() {
  _has_bits_[0] &= ~0x00000008u;
}
void VehicleSignal::clear_horn() {
  horn_ = false;
  clear_has_horn();
}
bool VehicleSignal::horn() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.horn)
  return horn_;
}
void VehicleSignal::set_horn(bool value) {
  set_has_horn();
  horn_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.horn)
}

// optional bool emergency_light = 5;
bool VehicleSignal::has_emergency_light() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void VehicleSignal::set_has_emergency_light() {
  _has_bits_[0] |= 0x00000010u;
}
void VehicleSignal::clear_has_emergency_light() {
  _has_bits_[0] &= ~0x00000010u;
}
void VehicleSignal::clear_emergency_light() {
  emergency_light_ = false;
  clear_has_emergency_light();
}
bool VehicleSignal::emergency_light() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleSignal.emergency_light)
  return emergency_light_;
}
void VehicleSignal::set_emergency_light(bool value) {
  set_has_emergency_light();
  emergency_light_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleSignal.emergency_light)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
