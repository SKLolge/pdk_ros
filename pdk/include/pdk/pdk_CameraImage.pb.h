// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pdk_CameraImage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pdk_5fCameraImage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pdk_5fCameraImage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_pdk_5fCameraImage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pdk_5fCameraImage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pdk_5fCameraImage_2eproto;
namespace pb {
namespace PDK {
class CameraImage;
struct CameraImageDefaultTypeInternal;
extern CameraImageDefaultTypeInternal _CameraImage_default_instance_;
}  // namespace PDK
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::PDK::CameraImage* Arena::CreateMaybeMessage<::pb::PDK::CameraImage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {
namespace PDK {

// ===================================================================

class CameraImage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.PDK.CameraImage) */ {
 public:
  inline CameraImage() : CameraImage(nullptr) {}
  ~CameraImage() override;
  explicit constexpr CameraImage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraImage(const CameraImage& from);
  CameraImage(CameraImage&& from) noexcept
    : CameraImage() {
    *this = ::std::move(from);
  }

  inline CameraImage& operator=(const CameraImage& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraImage& operator=(CameraImage&& from) noexcept {
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
  static const CameraImage& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraImage* internal_default_instance() {
    return reinterpret_cast<const CameraImage*>(
               &_CameraImage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CameraImage& a, CameraImage& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraImage* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CameraImage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CameraImage* New() const final {
    return new CameraImage();
  }

  CameraImage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CameraImage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraImage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CameraImage& from);
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
  void InternalSwap(CameraImage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.PDK.CameraImage";
  }
  protected:
  explicit CameraImage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRawImageFieldNumber = 5,
    kJpegDataFieldNumber = 6,
    kH264ImageFieldNumber = 8,
    kHeaderFieldNumber = 1,
    kWidthFieldNumber = 2,
    kHeightFieldNumber = 3,
    kBitPerPixelFieldNumber = 4,
    kJpegSizeFieldNumber = 7,
    kSensorIdFieldNumber = 9,
  };
  // optional bytes raw_image = 5;
  bool has_raw_image() const;
  private:
  bool _internal_has_raw_image() const;
  public:
  void clear_raw_image();
  const std::string& raw_image() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_raw_image(ArgT0&& arg0, ArgT... args);
  std::string* mutable_raw_image();
  PROTOBUF_MUST_USE_RESULT std::string* release_raw_image();
  void set_allocated_raw_image(std::string* raw_image);
  private:
  const std::string& _internal_raw_image() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_raw_image(const std::string& value);
  std::string* _internal_mutable_raw_image();
  public:

  // optional bytes jpeg_data = 6;
  bool has_jpeg_data() const;
  private:
  bool _internal_has_jpeg_data() const;
  public:
  void clear_jpeg_data();
  const std::string& jpeg_data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_jpeg_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_jpeg_data();
  PROTOBUF_MUST_USE_RESULT std::string* release_jpeg_data();
  void set_allocated_jpeg_data(std::string* jpeg_data);
  private:
  const std::string& _internal_jpeg_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_jpeg_data(const std::string& value);
  std::string* _internal_mutable_jpeg_data();
  public:

  // optional bytes h264_image = 8;
  bool has_h264_image() const;
  private:
  bool _internal_has_h264_image() const;
  public:
  void clear_h264_image();
  const std::string& h264_image() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_h264_image(ArgT0&& arg0, ArgT... args);
  std::string* mutable_h264_image();
  PROTOBUF_MUST_USE_RESULT std::string* release_h264_image();
  void set_allocated_h264_image(std::string* h264_image);
  private:
  const std::string& _internal_h264_image() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_h264_image(const std::string& value);
  std::string* _internal_mutable_h264_image();
  public:

  // optional .pb.PDK.MsgHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::pb::PDK::MsgHeader& header() const;
  PROTOBUF_MUST_USE_RESULT ::pb::PDK::MsgHeader* release_header();
  ::pb::PDK::MsgHeader* mutable_header();
  void set_allocated_header(::pb::PDK::MsgHeader* header);
  private:
  const ::pb::PDK::MsgHeader& _internal_header() const;
  ::pb::PDK::MsgHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::pb::PDK::MsgHeader* header);
  ::pb::PDK::MsgHeader* unsafe_arena_release_header();

  // optional uint32 width = 2 [default = 0];
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::uint32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 height = 3 [default = 0];
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::uint32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 bit_per_pixel = 4 [default = 0];
  bool has_bit_per_pixel() const;
  private:
  bool _internal_has_bit_per_pixel() const;
  public:
  void clear_bit_per_pixel();
  ::PROTOBUF_NAMESPACE_ID::uint32 bit_per_pixel() const;
  void set_bit_per_pixel(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_bit_per_pixel() const;
  void _internal_set_bit_per_pixel(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 jpeg_size = 7 [default = 0];
  bool has_jpeg_size() const;
  private:
  bool _internal_has_jpeg_size() const;
  public:
  void clear_jpeg_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 jpeg_size() const;
  void set_jpeg_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_jpeg_size() const;
  void _internal_set_jpeg_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 sensor_id = 9 [default = 0];
  bool has_sensor_id() const;
  private:
  bool _internal_has_sensor_id() const;
  public:
  void clear_sensor_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 sensor_id() const;
  void set_sensor_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_sensor_id() const;
  void _internal_set_sensor_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.PDK.CameraImage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr raw_image_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr jpeg_data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr h264_image_;
  ::pb::PDK::MsgHeader* header_;
  ::PROTOBUF_NAMESPACE_ID::uint32 width_;
  ::PROTOBUF_NAMESPACE_ID::uint32 height_;
  ::PROTOBUF_NAMESPACE_ID::uint32 bit_per_pixel_;
  ::PROTOBUF_NAMESPACE_ID::uint32 jpeg_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 sensor_id_;
  friend struct ::TableStruct_pdk_5fCameraImage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CameraImage

// optional .pb.PDK.MsgHeader header = 1;
inline bool CameraImage::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool CameraImage::has_header() const {
  return _internal_has_header();
}
inline const ::pb::PDK::MsgHeader& CameraImage::_internal_header() const {
  const ::pb::PDK::MsgHeader* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::pb::PDK::MsgHeader&>(
      ::pb::PDK::_MsgHeader_default_instance_);
}
inline const ::pb::PDK::MsgHeader& CameraImage::header() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.header)
  return _internal_header();
}
inline void CameraImage::unsafe_arena_set_allocated_header(
    ::pb::PDK::MsgHeader* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:pb.PDK.CameraImage.header)
}
inline ::pb::PDK::MsgHeader* CameraImage::release_header() {
  _has_bits_[0] &= ~0x00000008u;
  ::pb::PDK::MsgHeader* temp = header_;
  header_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::pb::PDK::MsgHeader* CameraImage::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:pb.PDK.CameraImage.header)
  _has_bits_[0] &= ~0x00000008u;
  ::pb::PDK::MsgHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::pb::PDK::MsgHeader* CameraImage::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000008u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::PDK::MsgHeader>(GetArenaForAllocation());
    header_ = p;
  }
  return header_;
}
inline ::pb::PDK::MsgHeader* CameraImage::mutable_header() {
  ::pb::PDK::MsgHeader* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:pb.PDK.CameraImage.header)
  return _msg;
}
inline void CameraImage::set_allocated_header(::pb::PDK::MsgHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header));
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:pb.PDK.CameraImage.header)
}

// optional uint32 width = 2 [default = 0];
inline bool CameraImage::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CameraImage::has_width() const {
  return _internal_has_width();
}
inline void CameraImage::clear_width() {
  width_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::width() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.width)
  return _internal_width();
}
inline void CameraImage::_internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  width_ = value;
}
inline void CameraImage::set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.width)
}

// optional uint32 height = 3 [default = 0];
inline bool CameraImage::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CameraImage::has_height() const {
  return _internal_has_height();
}
inline void CameraImage::clear_height() {
  height_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::height() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.height)
  return _internal_height();
}
inline void CameraImage::_internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  height_ = value;
}
inline void CameraImage::set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.height)
}

// optional uint32 bit_per_pixel = 4 [default = 0];
inline bool CameraImage::_internal_has_bit_per_pixel() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CameraImage::has_bit_per_pixel() const {
  return _internal_has_bit_per_pixel();
}
inline void CameraImage::clear_bit_per_pixel() {
  bit_per_pixel_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::_internal_bit_per_pixel() const {
  return bit_per_pixel_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::bit_per_pixel() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.bit_per_pixel)
  return _internal_bit_per_pixel();
}
inline void CameraImage::_internal_set_bit_per_pixel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  bit_per_pixel_ = value;
}
inline void CameraImage::set_bit_per_pixel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_bit_per_pixel(value);
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.bit_per_pixel)
}

// optional bytes raw_image = 5;
inline bool CameraImage::_internal_has_raw_image() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CameraImage::has_raw_image() const {
  return _internal_has_raw_image();
}
inline void CameraImage::clear_raw_image() {
  raw_image_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CameraImage::raw_image() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.raw_image)
  return _internal_raw_image();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CameraImage::set_raw_image(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 raw_image_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.raw_image)
}
inline std::string* CameraImage::mutable_raw_image() {
  std::string* _s = _internal_mutable_raw_image();
  // @@protoc_insertion_point(field_mutable:pb.PDK.CameraImage.raw_image)
  return _s;
}
inline const std::string& CameraImage::_internal_raw_image() const {
  return raw_image_.Get();
}
inline void CameraImage::_internal_set_raw_image(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  raw_image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CameraImage::_internal_mutable_raw_image() {
  _has_bits_[0] |= 0x00000001u;
  return raw_image_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CameraImage::release_raw_image() {
  // @@protoc_insertion_point(field_release:pb.PDK.CameraImage.raw_image)
  if (!_internal_has_raw_image()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return raw_image_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CameraImage::set_allocated_raw_image(std::string* raw_image) {
  if (raw_image != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  raw_image_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), raw_image,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:pb.PDK.CameraImage.raw_image)
}

// optional bytes jpeg_data = 6;
inline bool CameraImage::_internal_has_jpeg_data() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CameraImage::has_jpeg_data() const {
  return _internal_has_jpeg_data();
}
inline void CameraImage::clear_jpeg_data() {
  jpeg_data_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& CameraImage::jpeg_data() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.jpeg_data)
  return _internal_jpeg_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CameraImage::set_jpeg_data(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 jpeg_data_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.jpeg_data)
}
inline std::string* CameraImage::mutable_jpeg_data() {
  std::string* _s = _internal_mutable_jpeg_data();
  // @@protoc_insertion_point(field_mutable:pb.PDK.CameraImage.jpeg_data)
  return _s;
}
inline const std::string& CameraImage::_internal_jpeg_data() const {
  return jpeg_data_.Get();
}
inline void CameraImage::_internal_set_jpeg_data(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  jpeg_data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CameraImage::_internal_mutable_jpeg_data() {
  _has_bits_[0] |= 0x00000002u;
  return jpeg_data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CameraImage::release_jpeg_data() {
  // @@protoc_insertion_point(field_release:pb.PDK.CameraImage.jpeg_data)
  if (!_internal_has_jpeg_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return jpeg_data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CameraImage::set_allocated_jpeg_data(std::string* jpeg_data) {
  if (jpeg_data != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  jpeg_data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), jpeg_data,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:pb.PDK.CameraImage.jpeg_data)
}

// optional uint32 jpeg_size = 7 [default = 0];
inline bool CameraImage::_internal_has_jpeg_size() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool CameraImage::has_jpeg_size() const {
  return _internal_has_jpeg_size();
}
inline void CameraImage::clear_jpeg_size() {
  jpeg_size_ = 0u;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::_internal_jpeg_size() const {
  return jpeg_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::jpeg_size() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.jpeg_size)
  return _internal_jpeg_size();
}
inline void CameraImage::_internal_set_jpeg_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000080u;
  jpeg_size_ = value;
}
inline void CameraImage::set_jpeg_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_jpeg_size(value);
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.jpeg_size)
}

// optional bytes h264_image = 8;
inline bool CameraImage::_internal_has_h264_image() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CameraImage::has_h264_image() const {
  return _internal_has_h264_image();
}
inline void CameraImage::clear_h264_image() {
  h264_image_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& CameraImage::h264_image() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.h264_image)
  return _internal_h264_image();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CameraImage::set_h264_image(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 h264_image_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.h264_image)
}
inline std::string* CameraImage::mutable_h264_image() {
  std::string* _s = _internal_mutable_h264_image();
  // @@protoc_insertion_point(field_mutable:pb.PDK.CameraImage.h264_image)
  return _s;
}
inline const std::string& CameraImage::_internal_h264_image() const {
  return h264_image_.Get();
}
inline void CameraImage::_internal_set_h264_image(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  h264_image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CameraImage::_internal_mutable_h264_image() {
  _has_bits_[0] |= 0x00000004u;
  return h264_image_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CameraImage::release_h264_image() {
  // @@protoc_insertion_point(field_release:pb.PDK.CameraImage.h264_image)
  if (!_internal_has_h264_image()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return h264_image_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CameraImage::set_allocated_h264_image(std::string* h264_image) {
  if (h264_image != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  h264_image_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), h264_image,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:pb.PDK.CameraImage.h264_image)
}

// optional uint32 sensor_id = 9 [default = 0];
inline bool CameraImage::_internal_has_sensor_id() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool CameraImage::has_sensor_id() const {
  return _internal_has_sensor_id();
}
inline void CameraImage::clear_sensor_id() {
  sensor_id_ = 0u;
  _has_bits_[0] &= ~0x00000100u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::_internal_sensor_id() const {
  return sensor_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CameraImage::sensor_id() const {
  // @@protoc_insertion_point(field_get:pb.PDK.CameraImage.sensor_id)
  return _internal_sensor_id();
}
inline void CameraImage::_internal_set_sensor_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000100u;
  sensor_id_ = value;
}
inline void CameraImage::set_sensor_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_sensor_id(value);
  // @@protoc_insertion_point(field_set:pb.PDK.CameraImage.sensor_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace PDK
}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pdk_5fCameraImage_2eproto
