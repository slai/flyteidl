/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

type AdminProjectDomainAttributes struct {
	// Unique project id for which this set of attributes will be applied.
	Project string `json:"project,omitempty"`
	// Unique domain id for which this set of attributes will be applied.
	Domain string `json:"domain,omitempty"`
	// Custom resource attributes which will be applied in cluster resource creation (e.g. quotas). Map keys are the *case-sensitive* names of variables in templatized resource files. Map values should be the custom values which get substituted during resource creation.
	Attributes map[string]string `json:"attributes,omitempty"`
	// Custom resource defaults for task container resource requests and limits for tasks defined within this project and domain.
	TaskResourceAttributes *CoreResources `json:"task_resource_attributes,omitempty"`
	// Tags used for assigning execution queues for tasks defined within this project and domain.
	Tags []string `json:"tags,omitempty"`
}
