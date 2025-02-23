/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "../cpm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "FreeSpaceArea.h"

static asn_oer_constraints_t asn_OER_type_FreeSpaceArea_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_FreeSpaceArea_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_FreeSpaceArea_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceArea, choice.freeSpacePolygon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaPolygon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpacePolygon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceArea, choice.freeSpaceCircular),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaCircular,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpaceCircular"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceArea, choice.freeSpaceEllipse),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaEllipse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpaceEllipse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceArea, choice.freeSpaceRectangle),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaRectangle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpaceRectangle"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FreeSpaceArea_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freeSpacePolygon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freeSpaceCircular */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freeSpaceEllipse */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* freeSpaceRectangle */
};
asn_CHOICE_specifics_t asn_SPC_FreeSpaceArea_specs_1 = {
	sizeof(struct FreeSpaceArea),
	offsetof(struct FreeSpaceArea, _asn_ctx),
	offsetof(struct FreeSpaceArea, present),
	sizeof(((struct FreeSpaceArea *)0)->present),
	asn_MAP_FreeSpaceArea_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FreeSpaceArea = {
	"FreeSpaceArea",
	"FreeSpaceArea",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_FreeSpaceArea_constr_1, &asn_PER_type_FreeSpaceArea_constr_1, CHOICE_constraint },
	asn_MBR_FreeSpaceArea_1,
	4,	/* Elements count */
	&asn_SPC_FreeSpaceArea_specs_1	/* Additional specs */
};

