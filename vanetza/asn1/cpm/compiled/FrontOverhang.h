/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_FrontOverhang_H_
#define	_FrontOverhang_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrontOverhang {
	FrontOverhang_zeroPointOneMeter	= 1,
	FrontOverhang_oneMeter	= 10
} e_FrontOverhang;

/* FrontOverhang */
typedef long	 FrontOverhang_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FrontOverhang_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FrontOverhang;
asn_struct_free_f FrontOverhang_free;
asn_struct_print_f FrontOverhang_print;
asn_constr_check_f FrontOverhang_constraint;
ber_type_decoder_f FrontOverhang_decode_ber;
der_type_encoder_f FrontOverhang_encode_der;
xer_type_decoder_f FrontOverhang_decode_xer;
xer_type_encoder_f FrontOverhang_encode_xer;
oer_type_decoder_f FrontOverhang_decode_oer;
oer_type_encoder_f FrontOverhang_encode_oer;
per_type_decoder_f FrontOverhang_decode_uper;
per_type_encoder_f FrontOverhang_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FrontOverhang_H_ */
#include "asn_internal.h"
