/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "CAM_EN302637-2/v1.3.2/CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PublicTransportContainer_H_
#define	_PublicTransportContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EmbarkationStatus.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PtActivation;

/* PublicTransportContainer */
typedef struct PublicTransportContainer {
	EmbarkationStatus_t	 embarkationStatus;
	struct PtActivation	*ptActivation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PublicTransportContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PublicTransportContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_PublicTransportContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_PublicTransportContainer_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PtActivation.h"

#endif	/* _PublicTransportContainer_H_ */
#include "asn_internal.h"
