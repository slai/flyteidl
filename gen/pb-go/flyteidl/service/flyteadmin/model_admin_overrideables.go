/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

type AdminOverrideables struct {
	// Custom labels for overrides.
	Labels *AdminLabels `json:"labels,omitempty"`
	// Custom annotations for overrides.
	Annotations *AdminAnnotations `json:"annotations,omitempty"`
	// Custom labels for overrides.
	SecurityContext *AdminSecurityContext `json:"security_context,omitempty"`
	// Custom configs for overrides.
	Config *AdminConfig `json:"config,omitempty"`
}
