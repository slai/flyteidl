// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/service/admin.proto

#include "flyteidl/service/admin.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace flyteidl {
namespace service {
}  // namespace service
}  // namespace flyteidl
namespace protobuf_flyteidl_2fservice_2fadmin_2eproto {
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "flyteidl/service/admin.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034flyteidl/service/admin.proto\022\020flyteidl"
      ".service\032\034google/api/annotations.proto\032\034"
      "flyteidl/admin/project.proto\032\031flyteidl/a"
      "dmin/task.proto\032\035flyteidl/admin/workflow"
      ".proto\032 flyteidl/admin/launch_plan.proto"
      "\032\032flyteidl/admin/event.proto\032\036flyteidl/a"
      "dmin/execution.proto\032#flyteidl/admin/nod"
      "e_execution.proto\032#flyteidl/admin/task_e"
      "xecution.proto\032\033flyteidl/admin/common.pr"
      "oto\032,protoc-gen-swagger/options/annotati"
      "ons.proto2\367F\n\014AdminService\022\305\002\n\nCreateTas"
      "k\022!.flyteidl.admin.TaskCreateRequest\032\".f"
      "lyteidl.admin.TaskCreateResponse\"\357\001\202\323\344\223\002"
      "\022\"\r/api/v1/tasks:\001*\222A\323\001\032&Create and regi"
      "ster a task definition.JB\n\003400\022;\n9Return"
      "ed for bad request that may have failed "
      "validation.Je\n\003409\022^\n\\Returned for a req"
      "uest that references an identical entity"
      " that has already been registered.\022\262\001\n\007G"
      "etTask\022 .flyteidl.admin.ObjectGetRequest"
      "\032\024.flyteidl.admin.Task\"o\202\323\344\223\002\?\022=/api/v1/"
      "tasks/{id.project}/{id.domain}/{id.name}"
      "/{id.version}\222A\'\032%Retrieve an existing t"
      "ask definition.\022\336\001\n\013ListTaskIds\0220.flytei"
      "dl.admin.NamedEntityIdentifierListReques"
      "t\032).flyteidl.admin.NamedEntityIdentifier"
      "List\"r\202\323\344\223\002%\022#/api/v1/task_ids/{project}"
      "/{domain}\222AD\032BFetch existing task defini"
      "tion identifiers matching input filters."
      "\022\353\001\n\tListTasks\022#.flyteidl.admin.Resource"
      "ListRequest\032\030.flyteidl.admin.TaskList\"\236\001"
      "\202\323\344\223\002\\\0220/api/v1/tasks/{id.project}/{id.d"
      "omain}/{id.name}Z(\022&/api/v1/tasks/{id.pr"
      "oject}/{id.domain}\222A9\0327Fetch existing ta"
      "sk definitions matching input filters.\022\331"
      "\002\n\016CreateWorkflow\022%.flyteidl.admin.Workf"
      "lowCreateRequest\032&.flyteidl.admin.Workfl"
      "owCreateResponse\"\367\001\202\323\344\223\002\026\"\021/api/v1/workf"
      "lows:\001*\222A\327\001\032*Create and register a workf"
      "low definition.JB\n\003400\022;\n9Returned for b"
      "ad request that may have failed validati"
      "on.Je\n\003409\022^\n\\Returned for a request tha"
      "t references an identical entity that ha"
      "s already been registered.\022\302\001\n\013GetWorkfl"
      "ow\022 .flyteidl.admin.ObjectGetRequest\032\030.f"
      "lyteidl.admin.Workflow\"w\202\323\344\223\002C\022A/api/v1/"
      "workflows/{id.project}/{id.domain}/{id.n"
      "ame}/{id.version}\222A+\032)Retrieve an existi"
      "ng workflow definition.\022\355\001\n\017ListWorkflow"
      "Ids\0220.flyteidl.admin.NamedEntityIdentifi"
      "erListRequest\032).flyteidl.admin.NamedEnti"
      "tyIdentifierList\"}\202\323\344\223\002)\022\'/api/v1/workfl"
      "ow_ids/{project}/{domain}\222AK\032IFetch an e"
      "xisting workflow definition identifiers "
      "matching input filters.\022\377\001\n\rListWorkflow"
      "s\022#.flyteidl.admin.ResourceListRequest\032\034"
      ".flyteidl.admin.WorkflowList\"\252\001\202\323\344\223\002d\0224/"
      "api/v1/workflows/{id.project}/{id.domain"
      "}/{id.name}Z,\022*/api/v1/workflows/{id.pro"
      "ject}/{id.domain}\222A=\032;Fetch existing wor"
      "kflow definitions matching input filters"
      ".\022\345\002\n\020CreateLaunchPlan\022\'.flyteidl.admin."
      "LaunchPlanCreateRequest\032(.flyteidl.admin"
      ".LaunchPlanCreateResponse\"\375\001\202\323\344\223\002\031\"\024/api"
      "/v1/launch_plans:\001*\222A\332\001\032-Create and regi"
      "ster a launch plan definition.JB\n\003400\022;\n"
      "9Returned for bad request that may have "
      "failed validation.Je\n\003409\022^\n\\Returned fo"
      "r a request that references an identical"
      " entity that has already been registered"
      ".\022\314\001\n\rGetLaunchPlan\022 .flyteidl.admin.Obj"
      "ectGetRequest\032\032.flyteidl.admin.LaunchPla"
      "n\"}\202\323\344\223\002F\022D/api/v1/launch_plans/{id.proj"
      "ect}/{id.domain}/{id.name}/{id.version}\222"
      "A.\032,Retrieve an existing launch plan def"
      "inition.\022\363\001\n\023GetActiveLaunchPlan\022\'.flyte"
      "idl.admin.ActiveLaunchPlanRequest\032\032.flyt"
      "eidl.admin.LaunchPlan\"\226\001\202\323\344\223\002@\022>/api/v1/"
      "active_launch_plans/{id.project}/{id.dom"
      "ain}/{id.name}\222AM\032KRetrieve the active l"
      "aunch plan version specified by input re"
      "quest filters.\022\353\001\n\025ListActiveLaunchPlans"
      "\022+.flyteidl.admin.ActiveLaunchPlanListRe"
      "quest\032\036.flyteidl.admin.LaunchPlanList\"\204\001"
      "\202\323\344\223\0020\022./api/v1/active_launch_plans/{pro"
      "ject}/{domain}\222AK\032IFetch the active laun"
      "ch plan versions specified by input requ"
      "est filters.\022\363\001\n\021ListLaunchPlanIds\0220.fly"
      "teidl.admin.NamedEntityIdentifierListReq"
      "uest\032).flyteidl.admin.NamedEntityIdentif"
      "ierList\"\200\001\202\323\344\223\002,\022*/api/v1/launch_plan_id"
      "s/{project}/{domain}\222AK\032IFetch existing "
      "launch plan definition identifiers match"
      "ing input filters.\022\214\002\n\017ListLaunchPlans\022#"
      ".flyteidl.admin.ResourceListRequest\032\036.fl"
      "yteidl.admin.LaunchPlanList\"\263\001\202\323\344\223\002j\0227/a"
      "pi/v1/launch_plans/{id.project}/{id.doma"
      "in}/{id.name}Z/\022-/api/v1/launch_plans/{i"
      "d.project}/{id.domain}\222A@\032>Fetch existin"
      "g launch plan definitions matching input"
      " filters.\022\277\004\n\020UpdateLaunchPlan\022\'.flyteid"
      "l.admin.LaunchPlanUpdateRequest\032(.flytei"
      "dl.admin.LaunchPlanUpdateResponse\"\327\003\202\323\344\223"
      "\002I\032D/api/v1/launch_plans/{id.project}/{i"
      "d.domain}/{id.name}/{id.version}:\001*\222A\204\003\032"
      "\201\003Update the status of an existing launc"
      "h plan definition. At most one launch pl"
      "an version for a given {project, domain,"
      " name} can be active at a time. If this "
      "call sets a launch plan to active and ex"
      "isting version is already active, the re"
      "sult of this call will be that the forme"
      "rly active launch plan will be made inac"
      "tive and specified launch plan in this r"
      "equest will be made active.\022\242\001\n\017CreateEx"
      "ecution\022&.flyteidl.admin.ExecutionCreate"
      "Request\032\'.flyteidl.admin.ExecutionCreate"
      "Response\">\202\323\344\223\002\027\"\022/api/v1/executions:\001*\222"
      "A\036\032\034Create a workflow execution.\022\261\001\n\021Rel"
      "aunchExecution\022(.flyteidl.admin.Executio"
      "nRelaunchRequest\032\'.flyteidl.admin.Execut"
      "ionCreateResponse\"I\202\323\344\223\002 \"\033/api/v1/execu"
      "tions/relaunch:\001*\222A \032\036Relaunch a workflo"
      "w execution.\022\302\001\n\014GetExecution\022+.flyteidl"
      ".admin.WorkflowExecutionGetRequest\032\031.fly"
      "teidl.admin.Execution\"j\202\323\344\223\0027\0225/api/v1/e"
      "xecutions/{id.project}/{id.domain}/{id.n"
      "ame}\222A*\032(Retrieve an existing workflow e"
      "xecution.\022\202\002\n\020GetExecutionData\022/.flyteid"
      "l.admin.WorkflowExecutionGetDataRequest\032"
      "0.flyteidl.admin.WorkflowExecutionGetDat"
      "aResponse\"\212\001\202\323\344\223\002<\022:/api/v1/data/executi"
      "ons/{id.project}/{id.domain}/{id.name}\222A"
      "E\032CRetrieve input and output data from a"
      "n existing workflow execution.\022\310\001\n\016ListE"
      "xecutions\022#.flyteidl.admin.ResourceListR"
      "equest\032\035.flyteidl.admin.ExecutionList\"r\202"
      "\323\344\223\002-\022+/api/v1/executions/{id.project}/{"
      "id.domain}\222A<\032:Fetch existing workflow e"
      "xecutions matching input filters.\022\364\001\n\022Te"
      "rminateExecution\022).flyteidl.admin.Execut"
      "ionTerminateRequest\032*.flyteidl.admin.Exe"
      "cutionTerminateResponse\"\206\001\202\323\344\223\002:*5/api/v"
      "1/executions/{id.project}/{id.domain}/{i"
      "d.name}:\001*\222AC\032ATerminate the active work"
      "flow execution specified in the request."
      "\022\374\001\n\020GetNodeExecution\022\'.flyteidl.admin.N"
      "odeExecutionGetRequest\032\035.flyteidl.admin."
      "NodeExecution\"\237\001\202\323\344\223\002p\022n/api/v1/node_exe"
      "cutions/{id.execution_id.project}/{id.ex"
      "ecution_id.domain}/{id.execution_id.name"
      "}/{id.node_id}\222A&\032$Retrieve an existing "
      "node execution.\022\232\002\n\022ListNodeExecutions\022("
      ".flyteidl.admin.NodeExecutionListRequest"
      "\032!.flyteidl.admin.NodeExecutionList\"\266\001\202\323"
      "\344\223\002u\022s/api/v1/node_executions/{workflow_"
      "execution_id.project}/{workflow_executio"
      "n_id.domain}/{workflow_execution_id.name"
      "}\222A8\0326Fetch existing node executions mat"
      "ching input filters.\022\357\004\n\031ListNodeExecuti"
      "onsForTask\022/.flyteidl.admin.NodeExecutio"
      "nForTaskListRequest\032!.flyteidl.admin.Nod"
      "eExecutionList\"\375\003\202\323\344\223\002\254\003\022\251\003/api/v1/child"
      "ren/task_executions/{task_execution_id.n"
      "ode_execution_id.execution_id.project}/{"
      "task_execution_id.node_execution_id.exec"
      "ution_id.domain}/{task_execution_id.node"
      "_execution_id.execution_id.name}/{task_e"
      "xecution_id.node_execution_id.node_id}/{"
      "task_execution_id.task_id.project}/{task"
      "_execution_id.task_id.domain}/{task_exec"
      "ution_id.task_id.name}/{task_execution_i"
      "d.task_id.version}/{task_execution_id.re"
      "try_attempt}\222AG\032EFetch child node execut"
      "ions launched by the specified task exec"
      "ution.\022\263\002\n\024GetNodeExecutionData\022+.flytei"
      "dl.admin.NodeExecutionGetDataRequest\032,.f"
      "lyteidl.admin.NodeExecutionGetDataRespon"
      "se\"\277\001\202\323\344\223\002u\022s/api/v1/data/node_execution"
      "s/{id.execution_id.project}/{id.executio"
      "n_id.domain}/{id.execution_id.name}/{id."
      "node_id}\222AA\032\?Retrieve input and output d"
      "ata from an existing node execution.\022\227\001\n"
      "\017RegisterProject\022&.flyteidl.admin.Projec"
      "tRegisterRequest\032\'.flyteidl.admin.Projec"
      "tRegisterResponse\"3\202\323\344\223\002\025\"\020/api/v1/proje"
      "cts:\001*\222A\025\032\023Register a project.\022\205\001\n\014ListP"
      "rojects\022\".flyteidl.admin.ProjectListRequ"
      "est\032\030.flyteidl.admin.Projects\"7\202\323\344\223\002\022\022\020/"
      "api/v1/projects\222A\034\032\032Fetch registered pro"
      "jects.\022\335\001\n\023CreateWorkflowEvent\022-.flyteid"
      "l.admin.WorkflowExecutionEventRequest\032.."
      "flyteidl.admin.WorkflowExecutionEventRes"
      "ponse\"g\202\323\344\223\002\035\"\030/api/v1/events/workflows:"
      "\001*\222AA\032\?Create a workflow execution event"
      " recording a phase transition.\022\311\001\n\017Creat"
      "eNodeEvent\022).flyteidl.admin.NodeExecutio"
      "nEventRequest\032*.flyteidl.admin.NodeExecu"
      "tionEventResponse\"_\202\323\344\223\002\031\"\024/api/v1/event"
      "s/nodes:\001*\222A=\032;Create a node execution e"
      "vent recording a phase transition.\022\311\001\n\017C"
      "reateTaskEvent\022).flyteidl.admin.TaskExec"
      "utionEventRequest\032*.flyteidl.admin.TaskE"
      "xecutionEventResponse\"_\202\323\344\223\002\031\"\024/api/v1/e"
      "vents/tasks:\001*\222A=\032;Create a task executi"
      "on event recording a phase transition.\022\251"
      "\003\n\020GetTaskExecution\022\'.flyteidl.admin.Tas"
      "kExecutionGetRequest\032\035.flyteidl.admin.Ta"
      "skExecution\"\314\002\202\323\344\223\002\234\002\022\231\002/api/v1/task_exe"
      "cutions/{id.node_execution_id.execution_"
      "id.project}/{id.node_execution_id.execut"
      "ion_id.domain}/{id.node_execution_id.exe"
      "cution_id.name}/{id.node_execution_id.no"
      "de_id}/{id.task_id.project}/{id.task_id."
      "domain}/{id.task_id.name}/{id.task_id.ve"
      "rsion}/{id.retry_attempt}\222A&\032$Retrieve a"
      "n existing task execution.\022\323\002\n\022ListTaskE"
      "xecutions\022(.flyteidl.admin.TaskExecution"
      "ListRequest\032!.flyteidl.admin.TaskExecuti"
      "onList\"\357\001\202\323\344\223\002\255\001\022\252\001/api/v1/task_executio"
      "ns/{node_execution_id.execution_id.proje"
      "ct}/{node_execution_id.execution_id.doma"
      "in}/{node_execution_id.execution_id.name"
      "}/{node_execution_id.node_id}\222A8\0326Fetch "
      "existing task executions matching input "
      "filters.\022\340\003\n\024GetTaskExecutionData\022+.flyt"
      "eidl.admin.TaskExecutionGetDataRequest\032,"
      ".flyteidl.admin.TaskExecutionGetDataResp"
      "onse\"\354\002\202\323\344\223\002\241\002\022\236\002/api/v1/data/task_execu"
      "tions/{id.node_execution_id.execution_id"
      ".project}/{id.node_execution_id.executio"
      "n_id.domain}/{id.node_execution_id.execu"
      "tion_id.name}/{id.node_execution_id.node"
      "_id}/{id.task_id.project}/{id.task_id.do"
      "main}/{id.task_id.name}/{id.task_id.vers"
      "ion}/{id.retry_attempt}\222AA\032\?Retrieve inp"
      "ut and output data from an existing task"
      " execution.B5Z3github.com/lyft/flyteidl/"
      "gen/pb-go/flyteidl/serviceb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 9554);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "flyteidl/service/admin.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fproject_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2ftask_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fworkflow_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2flaunch_5fplan_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fevent_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fexecution_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fnode_5fexecution_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2ftask_5fexecution_2eproto::AddDescriptors();
  ::protobuf_flyteidl_2fadmin_2fcommon_2eproto::AddDescriptors();
  ::protobuf_protoc_2dgen_2dswagger_2foptions_2fannotations_2eproto::AddDescriptors();
}

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
}  // namespace protobuf_flyteidl_2fservice_2fadmin_2eproto
namespace flyteidl {
namespace service {

// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace flyteidl

// @@protoc_insertion_point(global_scope)
