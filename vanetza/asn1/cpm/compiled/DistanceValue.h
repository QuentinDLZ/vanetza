/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_DistanceValue_H_
#define	_DistanceValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DistanceValue {
	DistanceValue_zeroPointZeroOneMeter	= 1,
	DistanceValue_oneMeter	= 100
} e_DistanceValue;

/* DistanceValue */
typedef long	 DistanceValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DistanceValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DistanceValue;
asn_struct_free_f DistanceValue_free;
asn_struct_print_f DistanceValue_print;
asn_constr_check_f DistanceValue_constraint;
ber_type_decoder_f DistanceValue_decode_ber;
der_type_encoder_f DistanceValue_encode_der;
xer_type_decoder_f DistanceValue_decode_xer;
xer_type_encoder_f DistanceValue_encode_xer;
oer_type_decoder_f DistanceValue_decode_oer;
oer_type_encoder_f DistanceValue_encode_oer;
per_type_decoder_f DistanceValue_decode_uper;
per_type_encoder_f DistanceValue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DistanceValue_H_ */
#include "asn_internal.h"
