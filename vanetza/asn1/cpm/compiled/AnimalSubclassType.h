/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AnimalSubclassType_H_
#define	_AnimalSubclassType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AnimalSubclassType {
	AnimalSubclassType_unknown	= 0
} e_AnimalSubclassType;

/* AnimalSubclassType */
typedef long	 AnimalSubclassType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AnimalSubclassType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AnimalSubclassType;
asn_struct_free_f AnimalSubclassType_free;
asn_struct_print_f AnimalSubclassType_print;
asn_constr_check_f AnimalSubclassType_constraint;
ber_type_decoder_f AnimalSubclassType_decode_ber;
der_type_encoder_f AnimalSubclassType_encode_der;
xer_type_decoder_f AnimalSubclassType_decode_xer;
xer_type_encoder_f AnimalSubclassType_encode_xer;
oer_type_decoder_f AnimalSubclassType_decode_oer;
oer_type_encoder_f AnimalSubclassType_encode_oer;
per_type_decoder_f AnimalSubclassType_decode_uper;
per_type_encoder_f AnimalSubclassType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AnimalSubclassType_H_ */
#include "asn_internal.h"
