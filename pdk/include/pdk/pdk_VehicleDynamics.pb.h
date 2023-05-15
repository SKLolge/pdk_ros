// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pdk_VehicleDynamics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pdk_5fVehicleDynamics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pdk_5fVehicleDynamics_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "pdk_MsgHeader.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pdk_5fVehicleDynamics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pdk_5fVehicleDynamics_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pdk_5fVehicleDynamics_2eproto;
namespace pb {
namespace PDK {
class VehicleDynamics;
struct VehicleDynamicsDefaultTypeInternal;
extern VehicleDynamicsDefaultTypeInternal _VehicleDynamics_default_instance_;
}  // namespace PDK
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::PDK::VehicleDynamics* Arena::CreateMaybeMessage<::pb::PDK::VehicleDynamics>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {
namespace PDK {

// ===================================================================

class VehicleDynamics final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.PDK.VehicleDynamics) */ {
 public:
  inline VehicleDynamics() : VehicleDynamics(nullptr) {}
  ~VehicleDynamics() override;
  explicit constexpr VehicleDynamics(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VehicleDynamics(const VehicleDynamics& from);
  VehicleDynamics(VehicleDynamics&& from) noexcept
    : VehicleDynamics() {
    *this = ::std::move(from);
  }

  inline VehicleDynamics& operator=(const VehicleDynamics& from) {
    CopyFrom(from);
    return *this;
  }
  inline VehicleDynamics& operator=(VehicleDynamics&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const VehicleDynamics& default_instance() {
    return *internal_default_instance();
  }
  static inline const VehicleDynamics* internal_default_instance() {
    return reinterpret_cast<const VehicleDynamics*>(
               &_VehicleDynamics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VehicleDynamics& a, VehicleDynamics& b) {
    a.Swap(&b);
  }
  inline void Swap(VehicleDynamics* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VehicleDynamics* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VehicleDynamics* New() const final {
    return new VehicleDynamics();
  }

  VehicleDynamics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VehicleDynamics>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const VehicleDynamics& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const VehicleDynamics& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VehicleDynamics* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.PDK.VehicleDynamics";
  }
  protected:
  explicit VehicleDynamics(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTHeaderFieldNumber = 1,
    kFLongVelFieldNumber = 3,
    kFLongAccelFieldNumber = 4,
    kFYawRateFieldNumber = 5,
    kFLatAccelFieldNumber = 6,
  };
  // optional .pb.PDK.MsgHeader t_Header = 1;
  bool has_t_header() const;
  private:
  bool _internal_has_t_header() const;
  public:
  void clear_t_header();
  const ::pb::PDK::MsgHeader& t_header() const;
  PROTOBUF_MUST_USE_RESULT ::pb::PDK::MsgHeader* release_t_header();
  ::pb::PDK::MsgHeader* mutable_t_header();
  void set_allocated_t_header(::pb::PDK::MsgHeader* t_header);
  private:
  const ::pb::PDK::MsgHeader& _internal_t_header() const;
  ::pb::PDK::MsgHeader* _internal_mutable_t_header();
  public:
  void unsafe_arena_set_allocated_t_header(
      ::pb::PDK::MsgHeader* t_header);
  ::pb::PDK::MsgHeader* unsafe_arena_release_t_header();

  // optional float f_LongVel = 3;
  bool has_f_longvel() const;
  private:
  bool _internal_has_f_longvel() const;
  public:
  void clear_f_longvel();
  float f_longvel() const;
  void set_f_longvel(float value);
  private:
  float _internal_f_longvel() const;
  void _internal_set_f_longvel(float value);
  public:

  // optional float f_LongAccel = 4;
  bool has_f_longaccel() const;
  private:
  bool _internal_has_f_longaccel() const;
  public:
  void clear_f_longaccel();
  float f_longaccel() const;
  void set_f_longaccel(float value);
  private:
  float _internal_f_longaccel() const;
  void _internal_set_f_longaccel(float value);
  public:

  // optional float f_YawRate = 5;
  bool has_f_yawrate() const;
  private:
  bool _internal_has_f_yawrate() const;
  public:
  void clear_f_yawrate();
  float f_yawrate() const;
  void set_f_yawrate(float value);
  private:
  float _internal_f_yawrate() const;
  void _internal_set_f_yawrate(float value);
  public:

  // optional float f_LatAccel = 6;
  bool has_f_lataccel() const;
  private:
  bool _internal_has_f_lataccel() const;
  public:
  void clear_f_lataccel();
  float f_lataccel() const;
  void set_f_lataccel(float value);
  private:
  float _internal_f_lataccel() const;
  void _internal_set_f_lataccel(float value);
  public:

  // @@protoc_insertion_point(class_scope:pb.PDK.VehicleDynamics)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::pb::PDK::MsgHeader* t_header_;
  float f_longvel_;
  float f_longaccel_;
  float f_yawrate_;
  float f_lataccel_;
  friend struct ::TableStruct_pdk_5fVehicleDynamics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleDynamics

// optional .pb.PDK.MsgHeader t_Header = 1;
inline bool VehicleDynamics::_internal_has_t_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || t_header_ != nullptr);
  return value;
}
inline bool VehicleDynamics::has_t_header() const {
  return _internal_has_t_header();
}
inline const ::pb::PDK::MsgHeader& VehicleDynamics::_internal_t_header() const {
  const ::pb::PDK::MsgHeader* p = t_header_;
  return p != nullptr ? *p : reinterpret_cast<const ::pb::PDK::MsgHeader&>(
      ::pb::PDK::_MsgHeader_default_instance_);
}
inline const ::pb::PDK::MsgHeader& VehicleDynamics::t_header() const {
  // @@protoc_insertion_point(field_get:pb.PDK.VehicleDynamics.t_Header)
  return _internal_t_header();
}
inline void VehicleDynamics::unsafe_arena_set_allocated_t_header(
    ::pb::PDK::MsgHeader* t_header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(t_header_);
  }
  t_header_ = t_header;
  if (t_header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:pb.PDK.VehicleDynamics.t_Header)
}
inline ::pb::PDK::MsgHeader* VehicleDynamics::release_t_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::pb::PDK::MsgHeader* temp = t_header_;
  t_header_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::pb::PDK::MsgHeader* VehicleDynamics::unsafe_arena_release_t_header() {
  // @@protoc_insertion_point(field_release:pb.PDK.VehicleDynamics.t_Header)
  _has_bits_[0] &= ~0x00000001u;
  ::pb::PDK::MsgHeader* temp = t_header_;
  t_header_ = nullptr;
  return temp;
}
inline ::pb::PDK::MsgHeader* VehicleDynamics::_internal_mutable_t_header() {
  _has_bits_[0] |= 0x00000001u;
  if (t_header_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::PDK::MsgHeader>(GetArenaForAllocation());
    t_header_ = p;
  }
  return t_header_;
}
inline ::pb::PDK::MsgHeader* VehicleDynamics::mutable_t_header() {
  ::pb::PDK::MsgHeader* _msg = _internal_mutable_t_header();
  // @@protoc_insertion_point(field_mutable:pb.PDK.VehicleDynamics.t_Header)
  return _msg;
}
inline void VehicleDynamics::set_allocated_t_header(::pb::PDK::MsgHeader* t_header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(t_header_);
  }
  if (t_header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(t_header));
    if (message_arena != submessage_arena) {
      t_header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, t_header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  t_header_ = t_header;
  // @@protoc_insertion_point(field_set_allocated:pb.PDK.VehicleDynamics.t_Header)
}

// optional float f_LongVel = 3;
inline bool VehicleDynamics::_internal_has_f_longvel() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool VehicleDynamics::has_f_longvel() const {
  return _internal_has_f_longvel();
}
inline void VehicleDynamics::clear_f_longvel() {
  f_longvel_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float VehicleDynamics::_internal_f_longvel() const {
  return f_longvel_;
}
inline float VehicleDynamics::f_longvel() const {
  // @@protoc_insertion_point(field_get:pb.PDK.VehicleDynamics.f_LongVel)
  return _internal_f_longvel();
}
inline void VehicleDynamics::_internal_set_f_longvel(float value) {
  _has_bits_[0] |= 0x00000002u;
  f_longvel_ = value;
}
inline void VehicleDynamics::set_f_longvel(float value) {
  _internal_set_f_longvel(value);
  // @@protoc_insertion_point(field_set:pb.PDK.VehicleDynamics.f_LongVel)
}

// optional float f_LongAccel = 4;
inline bool VehicleDynamics::_internal_has_f_longaccel() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool VehicleDynamics::has_f_longaccel() const {
  return _internal_has_f_longaccel();
}
inline void VehicleDynamics::clear_f_longaccel() {
  f_longaccel_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float VehicleDynamics::_internal_f_longaccel() const {
  return f_longaccel_;
}
inline float VehicleDynamics::f_longaccel() const {
  // @@protoc_insertion_point(field_get:pb.PDK.VehicleDynamics.f_LongAccel)
  return _internal_f_longaccel();
}
inline void VehicleDynamics::_internal_set_f_longaccel(float value) {
  _has_bits_[0] |= 0x00000004u;
  f_longaccel_ = value;
}
inline void VehicleDynamics::set_f_longaccel(float value) {
  _internal_set_f_longaccel(value);
  // @@protoc_insertion_point(field_set:pb.PDK.VehicleDynamics.f_LongAccel)
}

// optional float f_YawRate = 5;
inline bool VehicleDynamics::_internal_has_f_yawrate() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool VehicleDynamics::has_f_yawrate() const {
  return _internal_has_f_yawrate();
}
inline void VehicleDynamics::clear_f_yawrate() {
  f_yawrate_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float VehicleDynamics::_internal_f_yawrate() const {
  return f_yawrate_;
}
inline float VehicleDynamics::f_yawrate() const {
  // @@protoc_insertion_point(field_get:pb.PDK.VehicleDynamics.f_YawRate)
  return _internal_f_yawrate();
}
inline void VehicleDynamics::_internal_set_f_yawrate(float value) {
  _has_bits_[0] |= 0x00000008u;
  f_yawrate_ = value;
}
inline void VehicleDynamics::set_f_yawrate(float value) {
  _internal_set_f_yawrate(value);
  // @@protoc_insertion_point(field_set:pb.PDK.VehicleDynamics.f_YawRate)
}

// optional float f_LatAccel = 6;
inline bool VehicleDynamics::_internal_has_f_lataccel() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool VehicleDynamics::has_f_lataccel() const {
  return _internal_has_f_lataccel();
}
inline void VehicleDynamics::clear_f_lataccel() {
  f_lataccel_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float VehicleDynamics::_internal_f_lataccel() const {
  return f_lataccel_;
}
inline float VehicleDynamics::f_lataccel() const {
  // @@protoc_insertion_point(field_get:pb.PDK.VehicleDynamics.f_LatAccel)
  return _internal_f_lataccel();
}
inline void VehicleDynamics::_internal_set_f_lataccel(float value) {
  _has_bits_[0] |= 0x00000010u;
  f_lataccel_ = value;
}
inline void VehicleDynamics::set_f_lataccel(float value) {
  _internal_set_f_lataccel(value);
  // @@protoc_insertion_point(field_set:pb.PDK.VehicleDynamics.f_LatAccel)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace PDK
}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pdk_5fVehicleDynamics_2eproto