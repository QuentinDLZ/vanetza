/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "PerceivedObject.h"

static int asn_DFL_6_cmp_0(const void *sptr) {
	const ObjectConfidence_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_6_set_0(void **sptr) {
	ObjectConfidence_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_20_cmp_0(const void *sptr) {
	const ObjectRefPoint_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_20_set_0(void **sptr) {
	ObjectRefPoint_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_PerceivedObject_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, objectID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"objectID"
		},
	{ ATF_POINTER, 1, offsetof(struct PerceivedObject, sensorIDList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SensorIdList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorIDList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, timeOfMeasurement),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOfMeasurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOfMeasurement"
		},
	{ ATF_POINTER, 2, offsetof(struct PerceivedObject, objectAge),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectAge,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"objectAge"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct PerceivedObject, objectConfidence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectConfidence,
		0,
		{ 0, 0, 0 },
		&asn_DFL_6_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_6_set_0,	/* Set DEFAULT 0 */
		"objectConfidence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, xDistance),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDistanceWithConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xDistance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, yDistance),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDistanceWithConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yDistance"
		},
	{ ATF_POINTER, 1, offsetof(struct PerceivedObject, zDistance),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDistanceWithConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zDistance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, xSpeed),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedExtended,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xSpeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerceivedObject, ySpeed),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedExtended,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ySpeed"
		},
	{ ATF_POINTER, 12, offsetof(struct PerceivedObject, zSpeed),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedExtended,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zSpeed"
		},
	{ ATF_POINTER, 11, offsetof(struct PerceivedObject, xAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LongitudinalAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xAcceleration"
		},
	{ ATF_POINTER, 10, offsetof(struct PerceivedObject, yAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LateralAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yAcceleration"
		},
	{ ATF_POINTER, 9, offsetof(struct PerceivedObject, zAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zAcceleration"
		},
	{ ATF_POINTER, 8, offsetof(struct PerceivedObject, yawAngle),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yawAngle"
		},
	{ ATF_POINTER, 7, offsetof(struct PerceivedObject, planarObjectDimension1),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDimension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"planarObjectDimension1"
		},
	{ ATF_POINTER, 6, offsetof(struct PerceivedObject, planarObjectDimension2),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDimension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"planarObjectDimension2"
		},
	{ ATF_POINTER, 5, offsetof(struct PerceivedObject, verticalObjectDimension),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectDimension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"verticalObjectDimension"
		},
	{ ATF_NOFLAGS, 4, offsetof(struct PerceivedObject, objectRefPoint),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectRefPoint,
		0,
		{ 0, 0, 0 },
		&asn_DFL_20_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_20_set_0,	/* Set DEFAULT 0 */
		"objectRefPoint"
		},
	{ ATF_POINTER, 3, offsetof(struct PerceivedObject, dynamicStatus),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DynamicStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dynamicStatus"
		},
	{ ATF_POINTER, 2, offsetof(struct PerceivedObject, classification),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectClassDescription,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"classification"
		},
	{ ATF_POINTER, 1, offsetof(struct PerceivedObject, matchedPosition),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MatchedPosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"matchedPosition"
		},
};
static const int asn_MAP_PerceivedObject_oms_1[] = { 1, 3, 4, 7, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
static const ber_tlv_tag_t asn_DEF_PerceivedObject_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PerceivedObject_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* objectID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sensorIDList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeOfMeasurement */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* objectAge */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* objectConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* xDistance */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* yDistance */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* zDistance */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* xSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ySpeed */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* zSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* xAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* yAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* zAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* yawAngle */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* planarObjectDimension1 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* planarObjectDimension2 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* verticalObjectDimension */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* objectRefPoint */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* dynamicStatus */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* classification */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 } /* matchedPosition */
};
asn_SEQUENCE_specifics_t asn_SPC_PerceivedObject_specs_1 = {
	sizeof(struct PerceivedObject),
	offsetof(struct PerceivedObject, _asn_ctx),
	asn_MAP_PerceivedObject_tag2el_1,
	22,	/* Count of tags in the map */
	asn_MAP_PerceivedObject_oms_1,	/* Optional members */
	16, 0,	/* Root/Additions */
	22,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PerceivedObject = {
	"PerceivedObject",
	"PerceivedObject",
	&asn_OP_SEQUENCE,
	asn_DEF_PerceivedObject_tags_1,
	sizeof(asn_DEF_PerceivedObject_tags_1)
		/sizeof(asn_DEF_PerceivedObject_tags_1[0]), /* 1 */
	asn_DEF_PerceivedObject_tags_1,	/* Same as above */
	sizeof(asn_DEF_PerceivedObject_tags_1)
		/sizeof(asn_DEF_PerceivedObject_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PerceivedObject_1,
	22,	/* Elements count */
	&asn_SPC_PerceivedObject_specs_1	/* Additional specs */
};

