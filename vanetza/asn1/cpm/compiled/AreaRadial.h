/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AreaRadial_H_
#define	_AreaRadial_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Range.h"
#include "WGS84AngleValue.h"
#include "CartesianAngleValue.h"
#include "SensorHeight.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OffsetPoint;

/* AreaRadial */
typedef struct AreaRadial {
	Range_t	 range;
	WGS84AngleValue_t	 stationaryHorizontalOpeningAngleStart;
	WGS84AngleValue_t	 stationaryHorizontalOpeningAngleEnd;
	CartesianAngleValue_t	*verticalOpeningAngleStart	/* OPTIONAL */;
	CartesianAngleValue_t	*verticalOpeningAngleEnd	/* OPTIONAL */;
	struct OffsetPoint	*sensorPositionOffset	/* OPTIONAL */;
	SensorHeight_t	*sensorHeight	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaRadial_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaRadial;
extern asn_SEQUENCE_specifics_t asn_SPC_AreaRadial_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaRadial_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OffsetPoint.h"

#endif	/* _AreaRadial_H_ */
#include "asn_internal.h"
