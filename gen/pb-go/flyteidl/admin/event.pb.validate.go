// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: flyteidl/admin/event.proto

package admin

import (
	"bytes"
	"errors"
	"fmt"
	"net"
	"net/mail"
	"net/url"
	"regexp"
	"strings"
	"time"
	"unicode/utf8"

	"github.com/golang/protobuf/ptypes"
)

// ensure the imports are used
var (
	_ = bytes.MinRead
	_ = errors.New("")
	_ = fmt.Print
	_ = utf8.UTFMax
	_ = (*regexp.Regexp)(nil)
	_ = (*strings.Reader)(nil)
	_ = net.IPv4len
	_ = time.Duration(0)
	_ = (*url.URL)(nil)
	_ = (*mail.Address)(nil)
	_ = ptypes.DynamicAny{}
)

// define the regex for a UUID once up-front
var _event_uuidPattern = regexp.MustCompile("^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$")

// Validate checks the field values on EventErrorAlreadyInTerminalState with
// the rules defined in the proto definition for this message. If any rules
// are violated, an error is returned.
func (m *EventErrorAlreadyInTerminalState) Validate() error {
	if m == nil {
		return nil
	}

	// no validation rules for CurrentPhase

	return nil
}

// EventErrorAlreadyInTerminalStateValidationError is the validation error
// returned by EventErrorAlreadyInTerminalState.Validate if the designated
// constraints aren't met.
type EventErrorAlreadyInTerminalStateValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e EventErrorAlreadyInTerminalStateValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e EventErrorAlreadyInTerminalStateValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e EventErrorAlreadyInTerminalStateValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e EventErrorAlreadyInTerminalStateValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e EventErrorAlreadyInTerminalStateValidationError) ErrorName() string {
	return "EventErrorAlreadyInTerminalStateValidationError"
}

// Error satisfies the builtin error interface
func (e EventErrorAlreadyInTerminalStateValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sEventErrorAlreadyInTerminalState.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = EventErrorAlreadyInTerminalStateValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = EventErrorAlreadyInTerminalStateValidationError{}

// Validate checks the field values on EventFailureReason with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *EventFailureReason) Validate() error {
	if m == nil {
		return nil
	}

	switch m.Reason.(type) {

	case *EventFailureReason_AlreadyInTerminalState:

		if v, ok := interface{}(m.GetAlreadyInTerminalState()).(interface{ Validate() error }); ok {
			if err := v.Validate(); err != nil {
				return EventFailureReasonValidationError{
					field:  "AlreadyInTerminalState",
					reason: "embedded message failed validation",
					cause:  err,
				}
			}
		}

	}

	return nil
}

// EventFailureReasonValidationError is the validation error returned by
// EventFailureReason.Validate if the designated constraints aren't met.
type EventFailureReasonValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e EventFailureReasonValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e EventFailureReasonValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e EventFailureReasonValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e EventFailureReasonValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e EventFailureReasonValidationError) ErrorName() string {
	return "EventFailureReasonValidationError"
}

// Error satisfies the builtin error interface
func (e EventFailureReasonValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sEventFailureReason.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = EventFailureReasonValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = EventFailureReasonValidationError{}

// Validate checks the field values on WorkflowExecutionEventRequest with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *WorkflowExecutionEventRequest) Validate() error {
	if m == nil {
		return nil
	}

	// no validation rules for RequestId

	if v, ok := interface{}(m.GetEvent()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return WorkflowExecutionEventRequestValidationError{
				field:  "Event",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// WorkflowExecutionEventRequestValidationError is the validation error
// returned by WorkflowExecutionEventRequest.Validate if the designated
// constraints aren't met.
type WorkflowExecutionEventRequestValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e WorkflowExecutionEventRequestValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e WorkflowExecutionEventRequestValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e WorkflowExecutionEventRequestValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e WorkflowExecutionEventRequestValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e WorkflowExecutionEventRequestValidationError) ErrorName() string {
	return "WorkflowExecutionEventRequestValidationError"
}

// Error satisfies the builtin error interface
func (e WorkflowExecutionEventRequestValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sWorkflowExecutionEventRequest.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = WorkflowExecutionEventRequestValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = WorkflowExecutionEventRequestValidationError{}

// Validate checks the field values on WorkflowExecutionEventResponse with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *WorkflowExecutionEventResponse) Validate() error {
	if m == nil {
		return nil
	}

	return nil
}

// WorkflowExecutionEventResponseValidationError is the validation error
// returned by WorkflowExecutionEventResponse.Validate if the designated
// constraints aren't met.
type WorkflowExecutionEventResponseValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e WorkflowExecutionEventResponseValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e WorkflowExecutionEventResponseValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e WorkflowExecutionEventResponseValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e WorkflowExecutionEventResponseValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e WorkflowExecutionEventResponseValidationError) ErrorName() string {
	return "WorkflowExecutionEventResponseValidationError"
}

// Error satisfies the builtin error interface
func (e WorkflowExecutionEventResponseValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sWorkflowExecutionEventResponse.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = WorkflowExecutionEventResponseValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = WorkflowExecutionEventResponseValidationError{}

// Validate checks the field values on NodeExecutionEventRequest with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *NodeExecutionEventRequest) Validate() error {
	if m == nil {
		return nil
	}

	// no validation rules for RequestId

	if v, ok := interface{}(m.GetEvent()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return NodeExecutionEventRequestValidationError{
				field:  "Event",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// NodeExecutionEventRequestValidationError is the validation error returned by
// NodeExecutionEventRequest.Validate if the designated constraints aren't met.
type NodeExecutionEventRequestValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e NodeExecutionEventRequestValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e NodeExecutionEventRequestValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e NodeExecutionEventRequestValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e NodeExecutionEventRequestValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e NodeExecutionEventRequestValidationError) ErrorName() string {
	return "NodeExecutionEventRequestValidationError"
}

// Error satisfies the builtin error interface
func (e NodeExecutionEventRequestValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sNodeExecutionEventRequest.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = NodeExecutionEventRequestValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = NodeExecutionEventRequestValidationError{}

// Validate checks the field values on NodeExecutionEventResponse with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *NodeExecutionEventResponse) Validate() error {
	if m == nil {
		return nil
	}

	return nil
}

// NodeExecutionEventResponseValidationError is the validation error returned
// by NodeExecutionEventResponse.Validate if the designated constraints aren't met.
type NodeExecutionEventResponseValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e NodeExecutionEventResponseValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e NodeExecutionEventResponseValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e NodeExecutionEventResponseValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e NodeExecutionEventResponseValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e NodeExecutionEventResponseValidationError) ErrorName() string {
	return "NodeExecutionEventResponseValidationError"
}

// Error satisfies the builtin error interface
func (e NodeExecutionEventResponseValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sNodeExecutionEventResponse.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = NodeExecutionEventResponseValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = NodeExecutionEventResponseValidationError{}

// Validate checks the field values on TaskExecutionEventRequest with the rules
// defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *TaskExecutionEventRequest) Validate() error {
	if m == nil {
		return nil
	}

	// no validation rules for RequestId

	if v, ok := interface{}(m.GetEvent()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return TaskExecutionEventRequestValidationError{
				field:  "Event",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// TaskExecutionEventRequestValidationError is the validation error returned by
// TaskExecutionEventRequest.Validate if the designated constraints aren't met.
type TaskExecutionEventRequestValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e TaskExecutionEventRequestValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e TaskExecutionEventRequestValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e TaskExecutionEventRequestValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e TaskExecutionEventRequestValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e TaskExecutionEventRequestValidationError) ErrorName() string {
	return "TaskExecutionEventRequestValidationError"
}

// Error satisfies the builtin error interface
func (e TaskExecutionEventRequestValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sTaskExecutionEventRequest.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = TaskExecutionEventRequestValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = TaskExecutionEventRequestValidationError{}

// Validate checks the field values on TaskExecutionEventResponse with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *TaskExecutionEventResponse) Validate() error {
	if m == nil {
		return nil
	}

	return nil
}

// TaskExecutionEventResponseValidationError is the validation error returned
// by TaskExecutionEventResponse.Validate if the designated constraints aren't met.
type TaskExecutionEventResponseValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e TaskExecutionEventResponseValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e TaskExecutionEventResponseValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e TaskExecutionEventResponseValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e TaskExecutionEventResponseValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e TaskExecutionEventResponseValidationError) ErrorName() string {
	return "TaskExecutionEventResponseValidationError"
}

// Error satisfies the builtin error interface
func (e TaskExecutionEventResponseValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sTaskExecutionEventResponse.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = TaskExecutionEventResponseValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = TaskExecutionEventResponseValidationError{}
