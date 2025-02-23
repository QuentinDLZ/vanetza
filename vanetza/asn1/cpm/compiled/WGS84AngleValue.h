/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_WGS84AngleValue_H_
#define	_WGS84AngleValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WGS84AngleValue {
	WGS84AngleValue_wgs84North	= 0,
	WGS84AngleValue_wgs84East	= 900,
	WGS84AngleValue_wgs84South	= 1800,
	WGS84AngleValue_wgs84West	= 2700,
	WGS84AngleValue_unavailable	= 3601
} e_WGS84AngleValue;

/* WGS84AngleValue */
typedef long	 WGS84AngleValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_WGS84AngleValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_WGS84AngleValue;
asn_struct_free_f WGS84AngleValue_free;
asn_struct_print_f WGS84AngleValue_print;
asn_constr_check_f WGS84AngleValue_constraint;
ber_type_decoder_f WGS84AngleValue_decode_ber;
der_type_encoder_f WGS84AngleValue_encode_der;
xer_type_decoder_f WGS84AngleValue_decode_xer;
xer_type_encoder_f WGS84AngleValue_encode_xer;
oer_type_decoder_f WGS84AngleValue_decode_oer;
oer_type_encoder_f WGS84AngleValue_encode_oer;
per_type_decoder_f WGS84AngleValue_decode_uper;
per_type_encoder_f WGS84AngleValue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WGS84AngleValue_H_ */
#include "asn_internal.h"
