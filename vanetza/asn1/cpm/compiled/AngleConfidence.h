/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AngleConfidence_H_
#define	_AngleConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AngleConfidence {
	AngleConfidence_zeroPointOneDegree	= 1,
	AngleConfidence_oneDegree	= 10,
	AngleConfidence_outOfRange	= 126,
	AngleConfidence_unavailable	= 127
} e_AngleConfidence;

/* AngleConfidence */
typedef long	 AngleConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AngleConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AngleConfidence;
asn_struct_free_f AngleConfidence_free;
asn_struct_print_f AngleConfidence_print;
asn_constr_check_f AngleConfidence_constraint;
ber_type_decoder_f AngleConfidence_decode_ber;
der_type_encoder_f AngleConfidence_encode_der;
xer_type_decoder_f AngleConfidence_decode_xer;
xer_type_encoder_f AngleConfidence_encode_xer;
oer_type_decoder_f AngleConfidence_decode_oer;
oer_type_encoder_f AngleConfidence_encode_oer;
per_type_decoder_f AngleConfidence_decode_uper;
per_type_encoder_f AngleConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AngleConfidence_H_ */
#include "asn_internal.h"
