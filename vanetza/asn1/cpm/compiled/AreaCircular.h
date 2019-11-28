/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AreaCircular_H_
#define	_AreaCircular_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Radius.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OffsetPoint;

/* AreaCircular */
typedef struct AreaCircular {
	struct OffsetPoint	*nodeCenterPoint	/* OPTIONAL */;
	Radius_t	 radius;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaCircular_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaCircular;
extern asn_SEQUENCE_specifics_t asn_SPC_AreaCircular_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaCircular_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OffsetPoint.h"

#endif	/* _AreaCircular_H_ */
#include "asn_internal.h"
