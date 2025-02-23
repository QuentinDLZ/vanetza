/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ObjectDimensionConfidence_H_
#define	_ObjectDimensionConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectDimensionConfidence {
	ObjectDimensionConfidence_zeroPointZeroOneMeter	= 1,
	ObjectDimensionConfidence_oneMeter	= 100,
	ObjectDimensionConfidence_outOfRange	= 101,
	ObjectDimensionConfidence_unavailable	= 102
} e_ObjectDimensionConfidence;

/* ObjectDimensionConfidence */
typedef long	 ObjectDimensionConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ObjectDimensionConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ObjectDimensionConfidence;
asn_struct_free_f ObjectDimensionConfidence_free;
asn_struct_print_f ObjectDimensionConfidence_print;
asn_constr_check_f ObjectDimensionConfidence_constraint;
ber_type_decoder_f ObjectDimensionConfidence_decode_ber;
der_type_encoder_f ObjectDimensionConfidence_encode_der;
xer_type_decoder_f ObjectDimensionConfidence_decode_xer;
xer_type_encoder_f ObjectDimensionConfidence_encode_xer;
oer_type_decoder_f ObjectDimensionConfidence_decode_oer;
oer_type_encoder_f ObjectDimensionConfidence_encode_oer;
per_type_decoder_f ObjectDimensionConfidence_decode_uper;
per_type_encoder_f ObjectDimensionConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectDimensionConfidence_H_ */
#include "asn_internal.h"
