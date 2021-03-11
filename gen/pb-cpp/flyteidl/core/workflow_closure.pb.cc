// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/core/workflow_closure.proto

#include "flyteidl/core/workflow_closure.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2ftasks_2eproto ::google::protobuf::internal::SCCInfo<7> scc_info_TaskTemplate_flyteidl_2fcore_2ftasks_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2fworkflow_2eproto ::google::protobuf::internal::SCCInfo<6> scc_info_WorkflowTemplate_flyteidl_2fcore_2fworkflow_2eproto;
namespace flyteidl {
namespace core {
class WorkflowClosureDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WorkflowClosure> _instance;
} _WorkflowClosure_default_instance_;
}  // namespace core
}  // namespace flyteidl
static void InitDefaultsWorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::core::_WorkflowClosure_default_instance_;
    new (ptr) ::flyteidl::core::WorkflowClosure();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::core::WorkflowClosure::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_WorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsWorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto}, {
      &scc_info_WorkflowTemplate_flyteidl_2fcore_2fworkflow_2eproto.base,
      &scc_info_TaskTemplate_flyteidl_2fcore_2ftasks_2eproto.base,}};

void InitDefaults_flyteidl_2fcore_2fworkflow_5fclosure_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_WorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_flyteidl_2fcore_2fworkflow_5fclosure_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_flyteidl_2fcore_2fworkflow_5fclosure_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::WorkflowClosure, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::WorkflowClosure, workflow_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::WorkflowClosure, tasks_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::flyteidl::core::WorkflowClosure)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::core::_WorkflowClosure_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fcore_2fworkflow_5fclosure_2eproto = {
  {}, AddDescriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, "flyteidl/core/workflow_closure.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fcore_2fworkflow_5fclosure_2eproto::offsets,
  file_level_metadata_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, 1, file_level_enum_descriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, file_level_service_descriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fcore_2fworkflow_5fclosure_2eproto[] =
  "\n$flyteidl/core/workflow_closure.proto\022\r"
  "flyteidl.core\032\034flyteidl/core/workflow.pr"
  "oto\032\031flyteidl/core/tasks.proto\"p\n\017Workfl"
  "owClosure\0221\n\010workflow\030\001 \001(\0132\037.flyteidl.c"
  "ore.WorkflowTemplate\022*\n\005tasks\030\002 \003(\0132\033.fl"
  "yteidl.core.TaskTemplateB6Z4github.com/f"
  "lyteorg/flyteidl/gen/pb-go/flyteidl/core"
  "b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fcore_2fworkflow_5fclosure_2eproto = {
  false, InitDefaults_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, 
  descriptor_table_protodef_flyteidl_2fcore_2fworkflow_5fclosure_2eproto,
  "flyteidl/core/workflow_closure.proto", &assign_descriptors_table_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, 288,
};

void AddDescriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[2] =
  {
    ::AddDescriptors_flyteidl_2fcore_2fworkflow_2eproto,
    ::AddDescriptors_flyteidl_2fcore_2ftasks_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fcore_2fworkflow_5fclosure_2eproto, deps, 2);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fcore_2fworkflow_5fclosure_2eproto = []() { AddDescriptors_flyteidl_2fcore_2fworkflow_5fclosure_2eproto(); return true; }();
namespace flyteidl {
namespace core {

// ===================================================================

void WorkflowClosure::InitAsDefaultInstance() {
  ::flyteidl::core::_WorkflowClosure_default_instance_._instance.get_mutable()->workflow_ = const_cast< ::flyteidl::core::WorkflowTemplate*>(
      ::flyteidl::core::WorkflowTemplate::internal_default_instance());
}
class WorkflowClosure::HasBitSetters {
 public:
  static const ::flyteidl::core::WorkflowTemplate& workflow(const WorkflowClosure* msg);
};

const ::flyteidl::core::WorkflowTemplate&
WorkflowClosure::HasBitSetters::workflow(const WorkflowClosure* msg) {
  return *msg->workflow_;
}
void WorkflowClosure::clear_workflow() {
  if (GetArenaNoVirtual() == nullptr && workflow_ != nullptr) {
    delete workflow_;
  }
  workflow_ = nullptr;
}
void WorkflowClosure::clear_tasks() {
  tasks_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WorkflowClosure::kWorkflowFieldNumber;
const int WorkflowClosure::kTasksFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WorkflowClosure::WorkflowClosure()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.core.WorkflowClosure)
}
WorkflowClosure::WorkflowClosure(const WorkflowClosure& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      tasks_(from.tasks_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_workflow()) {
    workflow_ = new ::flyteidl::core::WorkflowTemplate(*from.workflow_);
  } else {
    workflow_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:flyteidl.core.WorkflowClosure)
}

void WorkflowClosure::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_WorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto.base);
  workflow_ = nullptr;
}

WorkflowClosure::~WorkflowClosure() {
  // @@protoc_insertion_point(destructor:flyteidl.core.WorkflowClosure)
  SharedDtor();
}

void WorkflowClosure::SharedDtor() {
  if (this != internal_default_instance()) delete workflow_;
}

void WorkflowClosure::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WorkflowClosure& WorkflowClosure::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_WorkflowClosure_flyteidl_2fcore_2fworkflow_5fclosure_2eproto.base);
  return *internal_default_instance();
}


void WorkflowClosure::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.core.WorkflowClosure)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tasks_.Clear();
  if (GetArenaNoVirtual() == nullptr && workflow_ != nullptr) {
    delete workflow_;
  }
  workflow_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* WorkflowClosure::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<WorkflowClosure*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .flyteidl.core.WorkflowTemplate workflow = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::core::WorkflowTemplate::_InternalParse;
        object = msg->mutable_workflow();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // repeated .flyteidl.core.TaskTemplate tasks = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::flyteidl::core::TaskTemplate::_InternalParse;
          object = msg->add_tasks();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 18 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool WorkflowClosure::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.core.WorkflowClosure)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .flyteidl.core.WorkflowTemplate workflow = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_workflow()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .flyteidl.core.TaskTemplate tasks = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_tasks()));
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
  // @@protoc_insertion_point(parse_success:flyteidl.core.WorkflowClosure)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.core.WorkflowClosure)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void WorkflowClosure::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.core.WorkflowClosure)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .flyteidl.core.WorkflowTemplate workflow = 1;
  if (this->has_workflow()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::workflow(this), output);
  }

  // repeated .flyteidl.core.TaskTemplate tasks = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->tasks_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->tasks(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.core.WorkflowClosure)
}

::google::protobuf::uint8* WorkflowClosure::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.core.WorkflowClosure)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .flyteidl.core.WorkflowTemplate workflow = 1;
  if (this->has_workflow()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::workflow(this), target);
  }

  // repeated .flyteidl.core.TaskTemplate tasks = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->tasks_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->tasks(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.core.WorkflowClosure)
  return target;
}

size_t WorkflowClosure::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.core.WorkflowClosure)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .flyteidl.core.TaskTemplate tasks = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->tasks_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->tasks(static_cast<int>(i)));
    }
  }

  // .flyteidl.core.WorkflowTemplate workflow = 1;
  if (this->has_workflow()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *workflow_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WorkflowClosure::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.core.WorkflowClosure)
  GOOGLE_DCHECK_NE(&from, this);
  const WorkflowClosure* source =
      ::google::protobuf::DynamicCastToGenerated<WorkflowClosure>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.core.WorkflowClosure)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.core.WorkflowClosure)
    MergeFrom(*source);
  }
}

void WorkflowClosure::MergeFrom(const WorkflowClosure& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.core.WorkflowClosure)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tasks_.MergeFrom(from.tasks_);
  if (from.has_workflow()) {
    mutable_workflow()->::flyteidl::core::WorkflowTemplate::MergeFrom(from.workflow());
  }
}

void WorkflowClosure::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.core.WorkflowClosure)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkflowClosure::CopyFrom(const WorkflowClosure& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.core.WorkflowClosure)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkflowClosure::IsInitialized() const {
  return true;
}

void WorkflowClosure::Swap(WorkflowClosure* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WorkflowClosure::InternalSwap(WorkflowClosure* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&tasks_)->InternalSwap(CastToBase(&other->tasks_));
  swap(workflow_, other->workflow_);
}

::google::protobuf::Metadata WorkflowClosure::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fcore_2fworkflow_5fclosure_2eproto);
  return ::file_level_metadata_flyteidl_2fcore_2fworkflow_5fclosure_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::flyteidl::core::WorkflowClosure* Arena::CreateMaybeMessage< ::flyteidl::core::WorkflowClosure >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::core::WorkflowClosure >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
