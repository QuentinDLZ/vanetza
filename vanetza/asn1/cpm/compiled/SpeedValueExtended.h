/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SpeedValueExtended_H_
#define	_SpeedValueExtended_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedValueExtended {
	SpeedValueExtended_standstill	= 0,
	SpeedValueExtended_oneCentimeterPerSec	= 1,
	SpeedValueExtended_unavailable	= 16383
} e_SpeedValueExtended;

/* SpeedValueExtended */
typedef long	 SpeedValueExtended_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedValueExtended_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedValueExtended;
asn_struct_free_f SpeedValueExtended_free;
asn_struct_print_f SpeedValueExtended_print;
asn_constr_check_f SpeedValueExtended_constraint;
ber_type_decoder_f SpeedValueExtended_decode_ber;
der_type_encoder_f SpeedValueExtended_encode_der;
xer_type_decoder_f SpeedValueExtended_decode_xer;
xer_type_encoder_f SpeedValueExtended_encode_xer;
oer_type_decoder_f SpeedValueExtended_decode_oer;
oer_type_encoder_f SpeedValueExtended_encode_oer;
per_type_decoder_f SpeedValueExtended_decode_uper;
per_type_encoder_f SpeedValueExtended_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedValueExtended_H_ */
#include "asn_internal.h"
