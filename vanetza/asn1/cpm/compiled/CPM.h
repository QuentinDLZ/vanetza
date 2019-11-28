/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_CPM_H_
#define	_CPM_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ItsPduHeader.h"
#include "CollectivePerceptionMessage.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CPM */
typedef struct CPM {
	ItsPduHeader_t	 header;
	CollectivePerceptionMessage_t	 cpm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPM;

#ifdef __cplusplus
}
#endif

#endif	/* _CPM_H_ */
#include "asn_internal.h"
