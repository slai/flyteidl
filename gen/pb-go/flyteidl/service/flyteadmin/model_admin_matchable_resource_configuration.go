/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

type AdminMatchableResourceConfiguration struct {
	Attributes *AdminMatchingAttributes `json:"attributes,omitempty"`
	Domain string `json:"domain,omitempty"`
	Project string `json:"project,omitempty"`
	Workflow string `json:"workflow,omitempty"`
}