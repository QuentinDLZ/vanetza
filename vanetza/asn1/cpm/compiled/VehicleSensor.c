/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "VehicleSensor.h"

static int asn_DFL_2_cmp_0(const void *sptr) {
	const RefPointId_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_2_set_0(void **sptr) {
	RefPointId_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_VehicleSensor_1[] = {
	{ ATF_NOFLAGS, 1, offsetof(struct VehicleSensor, refPointId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RefPointId,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_2_set_0,	/* Set DEFAULT 0 */
		"refPointId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleSensor, xSensorOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_XSensorOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xSensorOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleSensor, ySensorOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YSensorOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ySensorOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleSensor, zSensorOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZSensorOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zSensorOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleSensor, vehicleSensorPropertyList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleSensorPropertyList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleSensorPropertyList"
		},
};
static const int asn_MAP_VehicleSensor_oms_1[] = { 0, 3 };
static const ber_tlv_tag_t asn_DEF_VehicleSensor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleSensor_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* refPointId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* xSensorOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ySensorOffset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* zSensorOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* vehicleSensorPropertyList */
};
asn_SEQUENCE_specifics_t asn_SPC_VehicleSensor_specs_1 = {
	sizeof(struct VehicleSensor),
	offsetof(struct VehicleSensor, _asn_ctx),
	asn_MAP_VehicleSensor_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_VehicleSensor_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleSensor = {
	"VehicleSensor",
	"VehicleSensor",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleSensor_tags_1,
	sizeof(asn_DEF_VehicleSensor_tags_1)
		/sizeof(asn_DEF_VehicleSensor_tags_1[0]), /* 1 */
	asn_DEF_VehicleSensor_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleSensor_tags_1)
		/sizeof(asn_DEF_VehicleSensor_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VehicleSensor_1,
	5,	/* Elements count */
	&asn_SPC_VehicleSensor_specs_1	/* Additional specs */
};

