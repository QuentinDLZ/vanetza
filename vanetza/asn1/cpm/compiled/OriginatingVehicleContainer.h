/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_OriginatingVehicleContainer_H_
#define	_OriginatingVehicleContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Heading.h"
#include "Speed.h"
#include "DriveDirection.h"
#include "VehicleWidth.h"
#include "VehicleHeight.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WGS84Angle;
struct LongitudinalAcceleration;
struct LateralAcceleration;
struct VerticalAcceleration;
struct YawRate;
struct CartesianAngle;
struct VehicleLength;
struct TrailerDataContainer;

/* OriginatingVehicleContainer */
typedef struct OriginatingVehicleContainer {
	Heading_t	 heading;
	Speed_t	 speed;
	struct WGS84Angle	*vehicleOrientationAngle	/* OPTIONAL */;
	DriveDirection_t	 driveDirection	/* DEFAULT 0 */;
	struct LongitudinalAcceleration	*longitudinalAcceleration	/* OPTIONAL */;
	struct LateralAcceleration	*lateralAcceleration	/* OPTIONAL */;
	struct VerticalAcceleration	*verticalAcceleration	/* OPTIONAL */;
	struct YawRate	*yawRate	/* OPTIONAL */;
	struct CartesianAngle	*pitchAngle	/* OPTIONAL */;
	struct CartesianAngle	*rollAngle	/* OPTIONAL */;
	struct VehicleLength	*vehicleLength	/* OPTIONAL */;
	VehicleWidth_t	*vehicleWidth	/* OPTIONAL */;
	VehicleHeight_t	*vehicleHeight	/* OPTIONAL */;
	struct TrailerDataContainer	*trailerDataContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OriginatingVehicleContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OriginatingVehicleContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_OriginatingVehicleContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_OriginatingVehicleContainer_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WGS84Angle.h"
#include "LongitudinalAcceleration.h"
#include "LateralAcceleration.h"
#include "VerticalAcceleration.h"
#include "YawRate.h"
#include "CartesianAngle.h"
#include "VehicleLength.h"
#include "TrailerDataContainer.h"

#endif	/* _OriginatingVehicleContainer_H_ */
#include "asn_internal.h"
