// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/admin/project_domain_attributes.proto

#ifndef PROTOBUF_INCLUDED_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto
#define PROTOBUF_INCLUDED_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "flyteidl/core/tasks.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto();
namespace flyteidl {
namespace admin {
class ProjectDomainAttributes;
class ProjectDomainAttributesDefaultTypeInternal;
extern ProjectDomainAttributesDefaultTypeInternal _ProjectDomainAttributes_default_instance_;
class ProjectDomainAttributesUpdateRequest;
class ProjectDomainAttributesUpdateRequestDefaultTypeInternal;
extern ProjectDomainAttributesUpdateRequestDefaultTypeInternal _ProjectDomainAttributesUpdateRequest_default_instance_;
class ProjectDomainAttributesUpdateResponse;
class ProjectDomainAttributesUpdateResponseDefaultTypeInternal;
extern ProjectDomainAttributesUpdateResponseDefaultTypeInternal _ProjectDomainAttributesUpdateResponse_default_instance_;
class ProjectDomainAttributes_AttributesEntry_DoNotUse;
class ProjectDomainAttributes_AttributesEntry_DoNotUseDefaultTypeInternal;
extern ProjectDomainAttributes_AttributesEntry_DoNotUseDefaultTypeInternal _ProjectDomainAttributes_AttributesEntry_DoNotUse_default_instance_;
}  // namespace admin
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> ::flyteidl::admin::ProjectDomainAttributes* Arena::CreateMaybeMessage<::flyteidl::admin::ProjectDomainAttributes>(Arena*);
template<> ::flyteidl::admin::ProjectDomainAttributesUpdateRequest* Arena::CreateMaybeMessage<::flyteidl::admin::ProjectDomainAttributesUpdateRequest>(Arena*);
template<> ::flyteidl::admin::ProjectDomainAttributesUpdateResponse* Arena::CreateMaybeMessage<::flyteidl::admin::ProjectDomainAttributesUpdateResponse>(Arena*);
template<> ::flyteidl::admin::ProjectDomainAttributes_AttributesEntry_DoNotUse* Arena::CreateMaybeMessage<::flyteidl::admin::ProjectDomainAttributes_AttributesEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace flyteidl {
namespace admin {

// ===================================================================

class ProjectDomainAttributes_AttributesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<ProjectDomainAttributes_AttributesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
static bool _ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  typedef ::google::protobuf::internal::MapEntry<ProjectDomainAttributes_AttributesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  ProjectDomainAttributes_AttributesEntry_DoNotUse();
  ProjectDomainAttributes_AttributesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const ProjectDomainAttributes_AttributesEntry_DoNotUse& other);
  static const ProjectDomainAttributes_AttributesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const ProjectDomainAttributes_AttributesEntry_DoNotUse*>(&_ProjectDomainAttributes_AttributesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class ProjectDomainAttributes final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.ProjectDomainAttributes) */ {
 public:
  ProjectDomainAttributes();
  virtual ~ProjectDomainAttributes();

  ProjectDomainAttributes(const ProjectDomainAttributes& from);

  inline ProjectDomainAttributes& operator=(const ProjectDomainAttributes& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProjectDomainAttributes(ProjectDomainAttributes&& from) noexcept
    : ProjectDomainAttributes() {
    *this = ::std::move(from);
  }

  inline ProjectDomainAttributes& operator=(ProjectDomainAttributes&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ProjectDomainAttributes& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProjectDomainAttributes* internal_default_instance() {
    return reinterpret_cast<const ProjectDomainAttributes*>(
               &_ProjectDomainAttributes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ProjectDomainAttributes* other);
  friend void swap(ProjectDomainAttributes& a, ProjectDomainAttributes& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProjectDomainAttributes* New() const final {
    return CreateMaybeMessage<ProjectDomainAttributes>(nullptr);
  }

  ProjectDomainAttributes* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProjectDomainAttributes>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProjectDomainAttributes& from);
  void MergeFrom(const ProjectDomainAttributes& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProjectDomainAttributes* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> attributes = 3;
  int attributes_size() const;
  void clear_attributes();
  static const int kAttributesFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      attributes() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_attributes();

  // repeated string tags = 5;
  int tags_size() const;
  void clear_tags();
  static const int kTagsFieldNumber = 5;
  const ::std::string& tags(int index) const;
  ::std::string* mutable_tags(int index);
  void set_tags(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_tags(int index, ::std::string&& value);
  #endif
  void set_tags(int index, const char* value);
  void set_tags(int index, const char* value, size_t size);
  ::std::string* add_tags();
  void add_tags(const ::std::string& value);
  #if LANG_CXX11
  void add_tags(::std::string&& value);
  #endif
  void add_tags(const char* value);
  void add_tags(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& tags() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_tags();

  // string project = 1;
  void clear_project();
  static const int kProjectFieldNumber = 1;
  const ::std::string& project() const;
  void set_project(const ::std::string& value);
  #if LANG_CXX11
  void set_project(::std::string&& value);
  #endif
  void set_project(const char* value);
  void set_project(const char* value, size_t size);
  ::std::string* mutable_project();
  ::std::string* release_project();
  void set_allocated_project(::std::string* project);

  // string domain = 2;
  void clear_domain();
  static const int kDomainFieldNumber = 2;
  const ::std::string& domain() const;
  void set_domain(const ::std::string& value);
  #if LANG_CXX11
  void set_domain(::std::string&& value);
  #endif
  void set_domain(const char* value);
  void set_domain(const char* value, size_t size);
  ::std::string* mutable_domain();
  ::std::string* release_domain();
  void set_allocated_domain(::std::string* domain);

  // .flyteidl.core.Resources task_resource_attributes = 4;
  bool has_task_resource_attributes() const;
  void clear_task_resource_attributes();
  static const int kTaskResourceAttributesFieldNumber = 4;
  const ::flyteidl::core::Resources& task_resource_attributes() const;
  ::flyteidl::core::Resources* release_task_resource_attributes();
  ::flyteidl::core::Resources* mutable_task_resource_attributes();
  void set_allocated_task_resource_attributes(::flyteidl::core::Resources* task_resource_attributes);

  // @@protoc_insertion_point(class_scope:flyteidl.admin.ProjectDomainAttributes)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      ProjectDomainAttributes_AttributesEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > attributes_;
  ::google::protobuf::RepeatedPtrField<::std::string> tags_;
  ::google::protobuf::internal::ArenaStringPtr project_;
  ::google::protobuf::internal::ArenaStringPtr domain_;
  ::flyteidl::core::Resources* task_resource_attributes_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto;
};
// -------------------------------------------------------------------

class ProjectDomainAttributesUpdateRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.ProjectDomainAttributesUpdateRequest) */ {
 public:
  ProjectDomainAttributesUpdateRequest();
  virtual ~ProjectDomainAttributesUpdateRequest();

  ProjectDomainAttributesUpdateRequest(const ProjectDomainAttributesUpdateRequest& from);

  inline ProjectDomainAttributesUpdateRequest& operator=(const ProjectDomainAttributesUpdateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProjectDomainAttributesUpdateRequest(ProjectDomainAttributesUpdateRequest&& from) noexcept
    : ProjectDomainAttributesUpdateRequest() {
    *this = ::std::move(from);
  }

  inline ProjectDomainAttributesUpdateRequest& operator=(ProjectDomainAttributesUpdateRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ProjectDomainAttributesUpdateRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProjectDomainAttributesUpdateRequest* internal_default_instance() {
    return reinterpret_cast<const ProjectDomainAttributesUpdateRequest*>(
               &_ProjectDomainAttributesUpdateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ProjectDomainAttributesUpdateRequest* other);
  friend void swap(ProjectDomainAttributesUpdateRequest& a, ProjectDomainAttributesUpdateRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProjectDomainAttributesUpdateRequest* New() const final {
    return CreateMaybeMessage<ProjectDomainAttributesUpdateRequest>(nullptr);
  }

  ProjectDomainAttributesUpdateRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProjectDomainAttributesUpdateRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProjectDomainAttributesUpdateRequest& from);
  void MergeFrom(const ProjectDomainAttributesUpdateRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProjectDomainAttributesUpdateRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .flyteidl.admin.ProjectDomainAttributes attributes = 1;
  bool has_attributes() const;
  void clear_attributes();
  static const int kAttributesFieldNumber = 1;
  const ::flyteidl::admin::ProjectDomainAttributes& attributes() const;
  ::flyteidl::admin::ProjectDomainAttributes* release_attributes();
  ::flyteidl::admin::ProjectDomainAttributes* mutable_attributes();
  void set_allocated_attributes(::flyteidl::admin::ProjectDomainAttributes* attributes);

  // @@protoc_insertion_point(class_scope:flyteidl.admin.ProjectDomainAttributesUpdateRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::flyteidl::admin::ProjectDomainAttributes* attributes_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto;
};
// -------------------------------------------------------------------

class ProjectDomainAttributesUpdateResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.ProjectDomainAttributesUpdateResponse) */ {
 public:
  ProjectDomainAttributesUpdateResponse();
  virtual ~ProjectDomainAttributesUpdateResponse();

  ProjectDomainAttributesUpdateResponse(const ProjectDomainAttributesUpdateResponse& from);

  inline ProjectDomainAttributesUpdateResponse& operator=(const ProjectDomainAttributesUpdateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProjectDomainAttributesUpdateResponse(ProjectDomainAttributesUpdateResponse&& from) noexcept
    : ProjectDomainAttributesUpdateResponse() {
    *this = ::std::move(from);
  }

  inline ProjectDomainAttributesUpdateResponse& operator=(ProjectDomainAttributesUpdateResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ProjectDomainAttributesUpdateResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProjectDomainAttributesUpdateResponse* internal_default_instance() {
    return reinterpret_cast<const ProjectDomainAttributesUpdateResponse*>(
               &_ProjectDomainAttributesUpdateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(ProjectDomainAttributesUpdateResponse* other);
  friend void swap(ProjectDomainAttributesUpdateResponse& a, ProjectDomainAttributesUpdateResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProjectDomainAttributesUpdateResponse* New() const final {
    return CreateMaybeMessage<ProjectDomainAttributesUpdateResponse>(nullptr);
  }

  ProjectDomainAttributesUpdateResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProjectDomainAttributesUpdateResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProjectDomainAttributesUpdateResponse& from);
  void MergeFrom(const ProjectDomainAttributesUpdateResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProjectDomainAttributesUpdateResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:flyteidl.admin.ProjectDomainAttributesUpdateResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ProjectDomainAttributes

// string project = 1;
inline void ProjectDomainAttributes::clear_project() {
  project_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProjectDomainAttributes::project() const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.ProjectDomainAttributes.project)
  return project_.GetNoArena();
}
inline void ProjectDomainAttributes::set_project(const ::std::string& value) {
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.admin.ProjectDomainAttributes.project)
}
#if LANG_CXX11
inline void ProjectDomainAttributes::set_project(::std::string&& value) {
  
  project_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.admin.ProjectDomainAttributes.project)
}
#endif
inline void ProjectDomainAttributes::set_project(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.admin.ProjectDomainAttributes.project)
}
inline void ProjectDomainAttributes::set_project(const char* value, size_t size) {
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.admin.ProjectDomainAttributes.project)
}
inline ::std::string* ProjectDomainAttributes::mutable_project() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ProjectDomainAttributes.project)
  return project_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProjectDomainAttributes::release_project() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ProjectDomainAttributes.project)
  
  return project_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectDomainAttributes::set_allocated_project(::std::string* project) {
  if (project != nullptr) {
    
  } else {
    
  }
  project_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), project);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ProjectDomainAttributes.project)
}

// string domain = 2;
inline void ProjectDomainAttributes::clear_domain() {
  domain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProjectDomainAttributes::domain() const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.ProjectDomainAttributes.domain)
  return domain_.GetNoArena();
}
inline void ProjectDomainAttributes::set_domain(const ::std::string& value) {
  
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.admin.ProjectDomainAttributes.domain)
}
#if LANG_CXX11
inline void ProjectDomainAttributes::set_domain(::std::string&& value) {
  
  domain_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.admin.ProjectDomainAttributes.domain)
}
#endif
inline void ProjectDomainAttributes::set_domain(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.admin.ProjectDomainAttributes.domain)
}
inline void ProjectDomainAttributes::set_domain(const char* value, size_t size) {
  
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.admin.ProjectDomainAttributes.domain)
}
inline ::std::string* ProjectDomainAttributes::mutable_domain() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ProjectDomainAttributes.domain)
  return domain_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProjectDomainAttributes::release_domain() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ProjectDomainAttributes.domain)
  
  return domain_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProjectDomainAttributes::set_allocated_domain(::std::string* domain) {
  if (domain != nullptr) {
    
  } else {
    
  }
  domain_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), domain);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ProjectDomainAttributes.domain)
}

// map<string, string> attributes = 3;
inline int ProjectDomainAttributes::attributes_size() const {
  return attributes_.size();
}
inline void ProjectDomainAttributes::clear_attributes() {
  attributes_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
ProjectDomainAttributes::attributes() const {
  // @@protoc_insertion_point(field_map:flyteidl.admin.ProjectDomainAttributes.attributes)
  return attributes_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
ProjectDomainAttributes::mutable_attributes() {
  // @@protoc_insertion_point(field_mutable_map:flyteidl.admin.ProjectDomainAttributes.attributes)
  return attributes_.MutableMap();
}

// .flyteidl.core.Resources task_resource_attributes = 4;
inline bool ProjectDomainAttributes::has_task_resource_attributes() const {
  return this != internal_default_instance() && task_resource_attributes_ != nullptr;
}
inline const ::flyteidl::core::Resources& ProjectDomainAttributes::task_resource_attributes() const {
  const ::flyteidl::core::Resources* p = task_resource_attributes_;
  // @@protoc_insertion_point(field_get:flyteidl.admin.ProjectDomainAttributes.task_resource_attributes)
  return p != nullptr ? *p : *reinterpret_cast<const ::flyteidl::core::Resources*>(
      &::flyteidl::core::_Resources_default_instance_);
}
inline ::flyteidl::core::Resources* ProjectDomainAttributes::release_task_resource_attributes() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ProjectDomainAttributes.task_resource_attributes)
  
  ::flyteidl::core::Resources* temp = task_resource_attributes_;
  task_resource_attributes_ = nullptr;
  return temp;
}
inline ::flyteidl::core::Resources* ProjectDomainAttributes::mutable_task_resource_attributes() {
  
  if (task_resource_attributes_ == nullptr) {
    auto* p = CreateMaybeMessage<::flyteidl::core::Resources>(GetArenaNoVirtual());
    task_resource_attributes_ = p;
  }
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ProjectDomainAttributes.task_resource_attributes)
  return task_resource_attributes_;
}
inline void ProjectDomainAttributes::set_allocated_task_resource_attributes(::flyteidl::core::Resources* task_resource_attributes) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(task_resource_attributes_);
  }
  if (task_resource_attributes) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      task_resource_attributes = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, task_resource_attributes, submessage_arena);
    }
    
  } else {
    
  }
  task_resource_attributes_ = task_resource_attributes;
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ProjectDomainAttributes.task_resource_attributes)
}

// repeated string tags = 5;
inline int ProjectDomainAttributes::tags_size() const {
  return tags_.size();
}
inline void ProjectDomainAttributes::clear_tags() {
  tags_.Clear();
}
inline const ::std::string& ProjectDomainAttributes::tags(int index) const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.ProjectDomainAttributes.tags)
  return tags_.Get(index);
}
inline ::std::string* ProjectDomainAttributes::mutable_tags(int index) {
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ProjectDomainAttributes.tags)
  return tags_.Mutable(index);
}
inline void ProjectDomainAttributes::set_tags(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:flyteidl.admin.ProjectDomainAttributes.tags)
  tags_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void ProjectDomainAttributes::set_tags(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:flyteidl.admin.ProjectDomainAttributes.tags)
  tags_.Mutable(index)->assign(std::move(value));
}
#endif
inline void ProjectDomainAttributes::set_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:flyteidl.admin.ProjectDomainAttributes.tags)
}
inline void ProjectDomainAttributes::set_tags(int index, const char* value, size_t size) {
  tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:flyteidl.admin.ProjectDomainAttributes.tags)
}
inline ::std::string* ProjectDomainAttributes::add_tags() {
  // @@protoc_insertion_point(field_add_mutable:flyteidl.admin.ProjectDomainAttributes.tags)
  return tags_.Add();
}
inline void ProjectDomainAttributes::add_tags(const ::std::string& value) {
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:flyteidl.admin.ProjectDomainAttributes.tags)
}
#if LANG_CXX11
inline void ProjectDomainAttributes::add_tags(::std::string&& value) {
  tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:flyteidl.admin.ProjectDomainAttributes.tags)
}
#endif
inline void ProjectDomainAttributes::add_tags(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:flyteidl.admin.ProjectDomainAttributes.tags)
}
inline void ProjectDomainAttributes::add_tags(const char* value, size_t size) {
  tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:flyteidl.admin.ProjectDomainAttributes.tags)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
ProjectDomainAttributes::tags() const {
  // @@protoc_insertion_point(field_list:flyteidl.admin.ProjectDomainAttributes.tags)
  return tags_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
ProjectDomainAttributes::mutable_tags() {
  // @@protoc_insertion_point(field_mutable_list:flyteidl.admin.ProjectDomainAttributes.tags)
  return &tags_;
}

// -------------------------------------------------------------------

// ProjectDomainAttributesUpdateRequest

// .flyteidl.admin.ProjectDomainAttributes attributes = 1;
inline bool ProjectDomainAttributesUpdateRequest::has_attributes() const {
  return this != internal_default_instance() && attributes_ != nullptr;
}
inline void ProjectDomainAttributesUpdateRequest::clear_attributes() {
  if (GetArenaNoVirtual() == nullptr && attributes_ != nullptr) {
    delete attributes_;
  }
  attributes_ = nullptr;
}
inline const ::flyteidl::admin::ProjectDomainAttributes& ProjectDomainAttributesUpdateRequest::attributes() const {
  const ::flyteidl::admin::ProjectDomainAttributes* p = attributes_;
  // @@protoc_insertion_point(field_get:flyteidl.admin.ProjectDomainAttributesUpdateRequest.attributes)
  return p != nullptr ? *p : *reinterpret_cast<const ::flyteidl::admin::ProjectDomainAttributes*>(
      &::flyteidl::admin::_ProjectDomainAttributes_default_instance_);
}
inline ::flyteidl::admin::ProjectDomainAttributes* ProjectDomainAttributesUpdateRequest::release_attributes() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ProjectDomainAttributesUpdateRequest.attributes)
  
  ::flyteidl::admin::ProjectDomainAttributes* temp = attributes_;
  attributes_ = nullptr;
  return temp;
}
inline ::flyteidl::admin::ProjectDomainAttributes* ProjectDomainAttributesUpdateRequest::mutable_attributes() {
  
  if (attributes_ == nullptr) {
    auto* p = CreateMaybeMessage<::flyteidl::admin::ProjectDomainAttributes>(GetArenaNoVirtual());
    attributes_ = p;
  }
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ProjectDomainAttributesUpdateRequest.attributes)
  return attributes_;
}
inline void ProjectDomainAttributesUpdateRequest::set_allocated_attributes(::flyteidl::admin::ProjectDomainAttributes* attributes) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete attributes_;
  }
  if (attributes) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      attributes = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, attributes, submessage_arena);
    }
    
  } else {
    
  }
  attributes_ = attributes;
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ProjectDomainAttributesUpdateRequest.attributes)
}

// -------------------------------------------------------------------

// ProjectDomainAttributesUpdateResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace admin
}  // namespace flyteidl

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto
