/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_FreeSpaceConfidence_H_
#define	_FreeSpaceConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FreeSpaceConfidence {
	FreeSpaceConfidence_unknown	= 0,
	FreeSpaceConfidence_onePercent	= 1,
	FreeSpaceConfidence_oneHundredPercent	= 100,
	FreeSpaceConfidence_unavailable	= 101
} e_FreeSpaceConfidence;

/* FreeSpaceConfidence */
typedef long	 FreeSpaceConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FreeSpaceConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FreeSpaceConfidence;
asn_struct_free_f FreeSpaceConfidence_free;
asn_struct_print_f FreeSpaceConfidence_print;
asn_constr_check_f FreeSpaceConfidence_constraint;
ber_type_decoder_f FreeSpaceConfidence_decode_ber;
der_type_encoder_f FreeSpaceConfidence_encode_der;
xer_type_decoder_f FreeSpaceConfidence_decode_xer;
xer_type_encoder_f FreeSpaceConfidence_encode_xer;
oer_type_decoder_f FreeSpaceConfidence_decode_oer;
oer_type_encoder_f FreeSpaceConfidence_encode_oer;
per_type_decoder_f FreeSpaceConfidence_decode_uper;
per_type_encoder_f FreeSpaceConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FreeSpaceConfidence_H_ */
#include "asn_internal.h"
