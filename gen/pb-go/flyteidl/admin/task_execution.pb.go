// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/admin/task_execution.proto

package admin

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	duration "github.com/golang/protobuf/ptypes/duration"
	_struct "github.com/golang/protobuf/ptypes/struct"
	timestamp "github.com/golang/protobuf/ptypes/timestamp"
	core "github.com/lyft/flyteidl/gen/pb-go/flyteidl/core"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// A message used to fetch a single task execution entity.
type TaskExecutionGetRequest struct {
	// Unique identifier for the task execution.
	Id                   *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *TaskExecutionGetRequest) Reset()         { *m = TaskExecutionGetRequest{} }
func (m *TaskExecutionGetRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetRequest) ProtoMessage()    {}
func (*TaskExecutionGetRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{0}
}

func (m *TaskExecutionGetRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetRequest.Unmarshal(m, b)
}
func (m *TaskExecutionGetRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetRequest.Merge(m, src)
}
func (m *TaskExecutionGetRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetRequest.Size(m)
}
func (m *TaskExecutionGetRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetRequest proto.InternalMessageInfo

func (m *TaskExecutionGetRequest) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

// Represents a request structure to retrieve a list of task execution entities.
type TaskExecutionListRequest struct {
	// Indicates the node execution to filter by.
	NodeExecutionId *core.NodeExecutionIdentifier `protobuf:"bytes,1,opt,name=node_execution_id,json=nodeExecutionId,proto3" json:"node_execution_id,omitempty"`
	// Indicates the number of resources to be returned.
	Limit uint32 `protobuf:"varint,2,opt,name=limit,proto3" json:"limit,omitempty"`
	// In the case of multiple pages of results, the server-provided token can be used to fetch the next page
	// in a query.
	// +optional
	Token string `protobuf:"bytes,3,opt,name=token,proto3" json:"token,omitempty"`
	// Indicates a list of filters passed as string.
	// More info on constructing filters : <Link>
	// +optional
	Filters string `protobuf:"bytes,4,opt,name=filters,proto3" json:"filters,omitempty"`
	// Sort ordering for returned list.
	// +optional
	SortBy               *Sort    `protobuf:"bytes,5,opt,name=sort_by,json=sortBy,proto3" json:"sort_by,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecutionListRequest) Reset()         { *m = TaskExecutionListRequest{} }
func (m *TaskExecutionListRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionListRequest) ProtoMessage()    {}
func (*TaskExecutionListRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{1}
}

func (m *TaskExecutionListRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionListRequest.Unmarshal(m, b)
}
func (m *TaskExecutionListRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionListRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionListRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionListRequest.Merge(m, src)
}
func (m *TaskExecutionListRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionListRequest.Size(m)
}
func (m *TaskExecutionListRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionListRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionListRequest proto.InternalMessageInfo

func (m *TaskExecutionListRequest) GetNodeExecutionId() *core.NodeExecutionIdentifier {
	if m != nil {
		return m.NodeExecutionId
	}
	return nil
}

func (m *TaskExecutionListRequest) GetLimit() uint32 {
	if m != nil {
		return m.Limit
	}
	return 0
}

func (m *TaskExecutionListRequest) GetToken() string {
	if m != nil {
		return m.Token
	}
	return ""
}

func (m *TaskExecutionListRequest) GetFilters() string {
	if m != nil {
		return m.Filters
	}
	return ""
}

func (m *TaskExecutionListRequest) GetSortBy() *Sort {
	if m != nil {
		return m.SortBy
	}
	return nil
}

// Encapsulates all details for a single task execution entity.
// A task execution represents an instantiated task, including all inputs and additional
// metadata as well as computed results included state, outputs, and duration-based attributes.
type TaskExecution struct {
	// Unique identifier for the task execution.
	Id *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// Path to remote data store where input blob is stored.
	InputUri string `protobuf:"bytes,2,opt,name=input_uri,json=inputUri,proto3" json:"input_uri,omitempty"`
	// Task execution details and results.
	Closure *TaskExecutionClosure `protobuf:"bytes,3,opt,name=closure,proto3" json:"closure,omitempty"`
	// Whether this task spawned nodes.
	IsParent             bool     `protobuf:"varint,4,opt,name=is_parent,json=isParent,proto3" json:"is_parent,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecution) Reset()         { *m = TaskExecution{} }
func (m *TaskExecution) String() string { return proto.CompactTextString(m) }
func (*TaskExecution) ProtoMessage()    {}
func (*TaskExecution) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{2}
}

func (m *TaskExecution) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecution.Unmarshal(m, b)
}
func (m *TaskExecution) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecution.Marshal(b, m, deterministic)
}
func (m *TaskExecution) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecution.Merge(m, src)
}
func (m *TaskExecution) XXX_Size() int {
	return xxx_messageInfo_TaskExecution.Size(m)
}
func (m *TaskExecution) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecution.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecution proto.InternalMessageInfo

func (m *TaskExecution) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

func (m *TaskExecution) GetInputUri() string {
	if m != nil {
		return m.InputUri
	}
	return ""
}

func (m *TaskExecution) GetClosure() *TaskExecutionClosure {
	if m != nil {
		return m.Closure
	}
	return nil
}

func (m *TaskExecution) GetIsParent() bool {
	if m != nil {
		return m.IsParent
	}
	return false
}

// Response structure for a query to list of task execution entities.
type TaskExecutionList struct {
	TaskExecutions []*TaskExecution `protobuf:"bytes,1,rep,name=task_executions,json=taskExecutions,proto3" json:"task_executions,omitempty"`
	// In the case of multiple pages of results, the server-provided token can be used to fetch the next page
	// in a query. If there are no more results, this value will be empty.
	Token                string   `protobuf:"bytes,2,opt,name=token,proto3" json:"token,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecutionList) Reset()         { *m = TaskExecutionList{} }
func (m *TaskExecutionList) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionList) ProtoMessage()    {}
func (*TaskExecutionList) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{3}
}

func (m *TaskExecutionList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionList.Unmarshal(m, b)
}
func (m *TaskExecutionList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionList.Marshal(b, m, deterministic)
}
func (m *TaskExecutionList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionList.Merge(m, src)
}
func (m *TaskExecutionList) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionList.Size(m)
}
func (m *TaskExecutionList) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionList.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionList proto.InternalMessageInfo

func (m *TaskExecutionList) GetTaskExecutions() []*TaskExecution {
	if m != nil {
		return m.TaskExecutions
	}
	return nil
}

func (m *TaskExecutionList) GetToken() string {
	if m != nil {
		return m.Token
	}
	return ""
}

// Container for task execution details and results.
type TaskExecutionClosure struct {
	// Types that are valid to be assigned to OutputResult:
	//	*TaskExecutionClosure_OutputUri
	//	*TaskExecutionClosure_Error
	OutputResult isTaskExecutionClosure_OutputResult `protobuf_oneof:"output_result"`
	// The last recorded phase for this task execution.
	Phase core.TaskExecution_Phase `protobuf:"varint,3,opt,name=phase,proto3,enum=flyteidl.core.TaskExecution_Phase" json:"phase,omitempty"`
	// Detailed log information output by the task execution.
	Logs []*core.TaskLog `protobuf:"bytes,4,rep,name=logs,proto3" json:"logs,omitempty"`
	// Time at which the task execution began running.
	StartedAt *timestamp.Timestamp `protobuf:"bytes,5,opt,name=started_at,json=startedAt,proto3" json:"started_at,omitempty"`
	// The amount of time the task execution spent running.
	Duration *duration.Duration `protobuf:"bytes,6,opt,name=duration,proto3" json:"duration,omitempty"`
	// Time at which the task execution was created.
	CreatedAt *timestamp.Timestamp `protobuf:"bytes,7,opt,name=created_at,json=createdAt,proto3" json:"created_at,omitempty"`
	// Time at which the task execution was last updated.
	UpdatedAt *timestamp.Timestamp `protobuf:"bytes,8,opt,name=updated_at,json=updatedAt,proto3" json:"updated_at,omitempty"`
	// Custom data specific to the task plugin.
	CustomInfo           *_struct.Struct `protobuf:"bytes,9,opt,name=custom_info,json=customInfo,proto3" json:"custom_info,omitempty"`
	XXX_NoUnkeyedLiteral struct{}        `json:"-"`
	XXX_unrecognized     []byte          `json:"-"`
	XXX_sizecache        int32           `json:"-"`
}

func (m *TaskExecutionClosure) Reset()         { *m = TaskExecutionClosure{} }
func (m *TaskExecutionClosure) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionClosure) ProtoMessage()    {}
func (*TaskExecutionClosure) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{4}
}

func (m *TaskExecutionClosure) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionClosure.Unmarshal(m, b)
}
func (m *TaskExecutionClosure) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionClosure.Marshal(b, m, deterministic)
}
func (m *TaskExecutionClosure) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionClosure.Merge(m, src)
}
func (m *TaskExecutionClosure) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionClosure.Size(m)
}
func (m *TaskExecutionClosure) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionClosure.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionClosure proto.InternalMessageInfo

type isTaskExecutionClosure_OutputResult interface {
	isTaskExecutionClosure_OutputResult()
}

type TaskExecutionClosure_OutputUri struct {
	OutputUri string `protobuf:"bytes,1,opt,name=output_uri,json=outputUri,proto3,oneof"`
}

type TaskExecutionClosure_Error struct {
	Error *core.ExecutionError `protobuf:"bytes,2,opt,name=error,proto3,oneof"`
}

func (*TaskExecutionClosure_OutputUri) isTaskExecutionClosure_OutputResult() {}

func (*TaskExecutionClosure_Error) isTaskExecutionClosure_OutputResult() {}

func (m *TaskExecutionClosure) GetOutputResult() isTaskExecutionClosure_OutputResult {
	if m != nil {
		return m.OutputResult
	}
	return nil
}

func (m *TaskExecutionClosure) GetOutputUri() string {
	if x, ok := m.GetOutputResult().(*TaskExecutionClosure_OutputUri); ok {
		return x.OutputUri
	}
	return ""
}

func (m *TaskExecutionClosure) GetError() *core.ExecutionError {
	if x, ok := m.GetOutputResult().(*TaskExecutionClosure_Error); ok {
		return x.Error
	}
	return nil
}

func (m *TaskExecutionClosure) GetPhase() core.TaskExecution_Phase {
	if m != nil {
		return m.Phase
	}
	return core.TaskExecution_UNDEFINED
}

func (m *TaskExecutionClosure) GetLogs() []*core.TaskLog {
	if m != nil {
		return m.Logs
	}
	return nil
}

func (m *TaskExecutionClosure) GetStartedAt() *timestamp.Timestamp {
	if m != nil {
		return m.StartedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetDuration() *duration.Duration {
	if m != nil {
		return m.Duration
	}
	return nil
}

func (m *TaskExecutionClosure) GetCreatedAt() *timestamp.Timestamp {
	if m != nil {
		return m.CreatedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetUpdatedAt() *timestamp.Timestamp {
	if m != nil {
		return m.UpdatedAt
	}
	return nil
}

func (m *TaskExecutionClosure) GetCustomInfo() *_struct.Struct {
	if m != nil {
		return m.CustomInfo
	}
	return nil
}

// XXX_OneofWrappers is for the internal use of the proto package.
func (*TaskExecutionClosure) XXX_OneofWrappers() []interface{} {
	return []interface{}{
		(*TaskExecutionClosure_OutputUri)(nil),
		(*TaskExecutionClosure_Error)(nil),
	}
}

// Request structure to fetch inputs and output urls for a task execution.
type TaskExecutionGetDataRequest struct {
	// The identifier of the task execution for which to fetch inputs and outputs.
	Id                   *core.TaskExecutionIdentifier `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *TaskExecutionGetDataRequest) Reset()         { *m = TaskExecutionGetDataRequest{} }
func (m *TaskExecutionGetDataRequest) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetDataRequest) ProtoMessage()    {}
func (*TaskExecutionGetDataRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{5}
}

func (m *TaskExecutionGetDataRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Unmarshal(m, b)
}
func (m *TaskExecutionGetDataRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetDataRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetDataRequest.Merge(m, src)
}
func (m *TaskExecutionGetDataRequest) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetDataRequest.Size(m)
}
func (m *TaskExecutionGetDataRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetDataRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetDataRequest proto.InternalMessageInfo

func (m *TaskExecutionGetDataRequest) GetId() *core.TaskExecutionIdentifier {
	if m != nil {
		return m.Id
	}
	return nil
}

// Response structure for TaskExecutionGetDataRequest which contains inputs and outputs for a task execution.
type TaskExecutionGetDataResponse struct {
	// Signed url to fetch a core.LiteralMap of task execution inputs.
	Inputs *UrlBlob `protobuf:"bytes,1,opt,name=inputs,proto3" json:"inputs,omitempty"`
	// Signed url to fetch a core.LiteralMap of task execution outputs.
	Outputs              *UrlBlob `protobuf:"bytes,2,opt,name=outputs,proto3" json:"outputs,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TaskExecutionGetDataResponse) Reset()         { *m = TaskExecutionGetDataResponse{} }
func (m *TaskExecutionGetDataResponse) String() string { return proto.CompactTextString(m) }
func (*TaskExecutionGetDataResponse) ProtoMessage()    {}
func (*TaskExecutionGetDataResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_8cde4c3aa101642e, []int{6}
}

func (m *TaskExecutionGetDataResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Unmarshal(m, b)
}
func (m *TaskExecutionGetDataResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Marshal(b, m, deterministic)
}
func (m *TaskExecutionGetDataResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TaskExecutionGetDataResponse.Merge(m, src)
}
func (m *TaskExecutionGetDataResponse) XXX_Size() int {
	return xxx_messageInfo_TaskExecutionGetDataResponse.Size(m)
}
func (m *TaskExecutionGetDataResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_TaskExecutionGetDataResponse.DiscardUnknown(m)
}

var xxx_messageInfo_TaskExecutionGetDataResponse proto.InternalMessageInfo

func (m *TaskExecutionGetDataResponse) GetInputs() *UrlBlob {
	if m != nil {
		return m.Inputs
	}
	return nil
}

func (m *TaskExecutionGetDataResponse) GetOutputs() *UrlBlob {
	if m != nil {
		return m.Outputs
	}
	return nil
}

func init() {
	proto.RegisterType((*TaskExecutionGetRequest)(nil), "flyteidl.admin.TaskExecutionGetRequest")
	proto.RegisterType((*TaskExecutionListRequest)(nil), "flyteidl.admin.TaskExecutionListRequest")
	proto.RegisterType((*TaskExecution)(nil), "flyteidl.admin.TaskExecution")
	proto.RegisterType((*TaskExecutionList)(nil), "flyteidl.admin.TaskExecutionList")
	proto.RegisterType((*TaskExecutionClosure)(nil), "flyteidl.admin.TaskExecutionClosure")
	proto.RegisterType((*TaskExecutionGetDataRequest)(nil), "flyteidl.admin.TaskExecutionGetDataRequest")
	proto.RegisterType((*TaskExecutionGetDataResponse)(nil), "flyteidl.admin.TaskExecutionGetDataResponse")
}

func init() {
	proto.RegisterFile("flyteidl/admin/task_execution.proto", fileDescriptor_8cde4c3aa101642e)
}

var fileDescriptor_8cde4c3aa101642e = []byte{
	// 691 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xa4, 0x55, 0xdd, 0x4e, 0xdb, 0x4a,
	0x10, 0xc6, 0x81, 0xfc, 0x4d, 0x04, 0x88, 0x15, 0x3a, 0xf8, 0x04, 0x38, 0x44, 0x39, 0x55, 0x15,
	0x55, 0xc2, 0x16, 0x41, 0x54, 0xf4, 0xa6, 0x12, 0x29, 0xb4, 0x20, 0xa1, 0x8a, 0x2e, 0x70, 0xd3,
	0x9b, 0xc8, 0xb1, 0x37, 0x61, 0x85, 0xed, 0x35, 0xbb, 0x63, 0xa9, 0xb9, 0xed, 0x4d, 0x9f, 0xab,
	0xcf, 0xd2, 0x17, 0xa9, 0xbc, 0xb6, 0x03, 0x36, 0x01, 0xa4, 0xf6, 0x72, 0x76, 0xbe, 0x6f, 0x7e,
	0xbe, 0x9d, 0xd9, 0x85, 0xff, 0xc7, 0xfe, 0x14, 0x19, 0xf7, 0x7c, 0xdb, 0xf1, 0x02, 0x1e, 0xda,
	0xe8, 0xa8, 0xdb, 0x21, 0xfb, 0xc6, 0xdc, 0x18, 0xb9, 0x08, 0xad, 0x48, 0x0a, 0x14, 0x64, 0x25,
	0x07, 0x59, 0x1a, 0xd4, 0xde, 0x2c, 0x91, 0x5c, 0x11, 0x04, 0x39, 0xb8, 0xbd, 0x3d, 0x73, 0xba,
	0x42, 0x32, 0xbb, 0x14, 0xab, 0xfd, 0x5f, 0xd1, 0xcd, 0x3d, 0x16, 0x22, 0x1f, 0x73, 0x26, 0x33,
	0xff, 0xce, 0x44, 0x88, 0x89, 0xcf, 0x6c, 0x6d, 0x8d, 0xe2, 0xb1, 0x8d, 0x3c, 0x60, 0x0a, 0x9d,
	0x20, 0xca, 0x03, 0x94, 0x01, 0x5e, 0x2c, 0x9d, 0x07, 0x09, 0xb6, 0xca, 0x7e, 0x85, 0x32, 0x76,
	0x31, 0xf5, 0x76, 0xbf, 0xc0, 0xc6, 0x95, 0xa3, 0x6e, 0x4f, 0xf2, 0xaa, 0x3e, 0x31, 0xa4, 0xec,
	0x2e, 0x66, 0x0a, 0xc9, 0x5b, 0xa8, 0x70, 0xcf, 0x34, 0x3a, 0x46, 0xaf, 0xd5, 0x7f, 0x6d, 0xcd,
	0x5a, 0x4e, 0xca, 0xb4, 0x0a, 0x9c, 0xb3, 0x59, 0xcd, 0xb4, 0xc2, 0xbd, 0xee, 0x2f, 0x03, 0xcc,
	0x82, 0xff, 0x9c, 0xab, 0x59, 0x50, 0x0a, 0x6b, 0xa1, 0xf0, 0xd8, 0xbd, 0xa4, 0xc3, 0x27, 0x73,
	0x7c, 0x16, 0x1e, 0x9b, 0x97, 0x63, 0x35, 0x2c, 0x3a, 0xc8, 0x3a, 0x54, 0x7d, 0x1e, 0x70, 0x34,
	0x2b, 0x1d, 0xa3, 0xb7, 0x4c, 0x53, 0x23, 0x39, 0x45, 0x71, 0xcb, 0x42, 0x73, 0xb1, 0x63, 0xf4,
	0x9a, 0x34, 0x35, 0x88, 0x09, 0xf5, 0x31, 0xf7, 0x91, 0x49, 0x65, 0x2e, 0xe9, 0xf3, 0xdc, 0x24,
	0xbb, 0x50, 0x57, 0x42, 0xe2, 0x70, 0x34, 0x35, 0xab, 0xba, 0x9e, 0x75, 0xab, 0x78, 0xcd, 0xd6,
	0xa5, 0x90, 0x48, 0x6b, 0x09, 0x68, 0x30, 0xed, 0xfe, 0x34, 0x60, 0xb9, 0xd0, 0xe5, 0x9f, 0xea,
	0x45, 0x36, 0xa1, 0xc9, 0xc3, 0x28, 0xc6, 0x61, 0x2c, 0xb9, 0x6e, 0xa1, 0x49, 0x1b, 0xfa, 0xe0,
	0x5a, 0x72, 0xf2, 0x1e, 0xea, 0xae, 0x2f, 0x54, 0x2c, 0x99, 0xee, 0xa3, 0xd5, 0x7f, 0x55, 0xae,
	0xaa, 0x10, 0xfa, 0x43, 0x8a, 0xa5, 0x39, 0x49, 0x07, 0x57, 0xc3, 0xc8, 0x91, 0x2c, 0x44, 0xdd,
	0x71, 0x83, 0x36, 0xb8, 0xba, 0xd0, 0x76, 0xf7, 0x0e, 0xd6, 0x1e, 0x5d, 0x14, 0xf9, 0x08, 0xab,
	0xc5, 0xa1, 0x57, 0xa6, 0xd1, 0x59, 0xec, 0xb5, 0xfa, 0xdb, 0xcf, 0x66, 0xa6, 0x2b, 0xf8, 0xd0,
	0x54, 0xf7, 0xfa, 0x57, 0x1e, 0xe8, 0xdf, 0xfd, 0xb1, 0x04, 0xeb, 0xf3, 0x2a, 0x26, 0x3b, 0x00,
	0x22, 0xc6, 0x5c, 0x86, 0x44, 0xc5, 0xe6, 0xe9, 0x02, 0x6d, 0xa6, 0x67, 0x89, 0x12, 0x07, 0x50,
	0x65, 0x52, 0x0a, 0xa9, 0xe3, 0x15, 0xaa, 0xd1, 0x0a, 0xcf, 0x02, 0x9e, 0x24, 0xa0, 0xd3, 0x05,
	0x9a, 0xa2, 0xc9, 0x21, 0x54, 0xa3, 0x1b, 0x47, 0xa5, 0xf2, 0xad, 0xf4, 0xbb, 0xcf, 0x5d, 0x8c,
	0x75, 0x91, 0x20, 0x69, 0x4a, 0x20, 0x6f, 0x60, 0xc9, 0x17, 0x93, 0x64, 0x4e, 0x92, 0xee, 0xff,
	0x99, 0x43, 0x3c, 0x17, 0x13, 0xaa, 0x31, 0xe4, 0x1d, 0x80, 0x42, 0x47, 0x22, 0xf3, 0x86, 0x0e,
	0x66, 0xf3, 0xd3, 0xb6, 0xd2, 0xcd, 0xb3, 0xf2, 0xcd, 0xb3, 0xae, 0xf2, 0xd5, 0xa5, 0xcd, 0x0c,
	0x7d, 0x84, 0xe4, 0x00, 0x1a, 0xf9, 0xc6, 0x9a, 0x35, 0x4d, 0xfc, 0xf7, 0x11, 0xf1, 0x38, 0x03,
	0xd0, 0x19, 0x34, 0xc9, 0xe8, 0x4a, 0xe6, 0x64, 0x19, 0xeb, 0x2f, 0x67, 0xcc, 0xd0, 0x47, 0x98,
	0x50, 0xe3, 0xc8, 0xcb, 0xa9, 0x8d, 0x97, 0xa9, 0x19, 0xfa, 0x08, 0xc9, 0x21, 0xb4, 0xdc, 0x58,
	0xa1, 0x08, 0x86, 0x3c, 0x1c, 0x0b, 0xb3, 0xa9, 0xb9, 0x1b, 0x8f, 0xb8, 0x97, 0xfa, 0x89, 0xa1,
	0x90, 0x62, 0xcf, 0xc2, 0xb1, 0x18, 0xac, 0xc2, 0x72, 0x76, 0xbf, 0x92, 0xa9, 0xd8, 0xc7, 0xee,
	0x35, 0x6c, 0x96, 0x5f, 0x9e, 0x63, 0x07, 0x9d, 0xbf, 0x7d, 0x7d, 0xbe, 0x1b, 0xb0, 0x35, 0x3f,
	0xae, 0x8a, 0x44, 0xa8, 0x18, 0xb1, 0xa1, 0xa6, 0xb7, 0x4b, 0x65, 0xc1, 0x37, 0xca, 0x63, 0x7d,
	0x2d, 0xfd, 0x81, 0x2f, 0x46, 0x34, 0x83, 0x91, 0x3d, 0xa8, 0xa7, 0x95, 0xab, 0x6c, 0xf4, 0x9e,
	0x64, 0xe4, 0xb8, 0xc1, 0xfe, 0xd7, 0xbd, 0x09, 0xc7, 0x9b, 0x78, 0x64, 0xb9, 0x22, 0xb0, 0xfd,
	0xe9, 0x18, 0xed, 0xd9, 0x33, 0x3f, 0x61, 0xa1, 0x1d, 0x8d, 0x76, 0x27, 0xc2, 0x2e, 0xfe, 0x1a,
	0xa3, 0x9a, 0x96, 0x6f, 0xff, 0x77, 0x00, 0x00, 0x00, 0xff, 0xff, 0x4f, 0xe6, 0xdf, 0x59, 0x83,
	0x06, 0x00, 0x00,
}
