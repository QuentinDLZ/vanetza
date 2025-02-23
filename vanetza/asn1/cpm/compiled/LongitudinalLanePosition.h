/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_LongitudinalLanePosition_H_
#define	_LongitudinalLanePosition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LongitudinalLanePositionValue.h"
#include "LongitudinalLanePositionConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LongitudinalLanePosition */
typedef struct LongitudinalLanePosition {
	LongitudinalLanePositionValue_t	 longitudinalLanePositionValue;
	LongitudinalLanePositionConfidence_t	 longitudinalLanePositionConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LongitudinalLanePosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudinalLanePosition;
extern asn_SEQUENCE_specifics_t asn_SPC_LongitudinalLanePosition_specs_1;
extern asn_TYPE_member_t asn_MBR_LongitudinalLanePosition_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudinalLanePosition_H_ */
#include "asn_internal.h"
