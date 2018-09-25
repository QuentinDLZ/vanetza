/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "DENM_EN302637-3/v1.2.2/DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "DecentralizedEnvironmentalNotificationMessage.h"

asn_TYPE_member_t asn_MBR_DecentralizedEnvironmentalNotificationMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DecentralizedEnvironmentalNotificationMessage, management),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManagementContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"management"
		},
	{ ATF_POINTER, 3, offsetof(struct DecentralizedEnvironmentalNotificationMessage, situation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SituationContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"situation"
		},
	{ ATF_POINTER, 2, offsetof(struct DecentralizedEnvironmentalNotificationMessage, location),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"location"
		},
	{ ATF_POINTER, 1, offsetof(struct DecentralizedEnvironmentalNotificationMessage, alacarte),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlacarteContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alacarte"
		},
};
static const int asn_MAP_DecentralizedEnvironmentalNotificationMessage_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DecentralizedEnvironmentalNotificationMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* management */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* situation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* location */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* alacarte */
};
asn_SEQUENCE_specifics_t asn_SPC_DecentralizedEnvironmentalNotificationMessage_specs_1 = {
	sizeof(struct DecentralizedEnvironmentalNotificationMessage),
	offsetof(struct DecentralizedEnvironmentalNotificationMessage, _asn_ctx),
	asn_MAP_DecentralizedEnvironmentalNotificationMessage_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DecentralizedEnvironmentalNotificationMessage_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DecentralizedEnvironmentalNotificationMessage = {
	"DecentralizedEnvironmentalNotificationMessage",
	"DecentralizedEnvironmentalNotificationMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1,
	sizeof(asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1)
		/sizeof(asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1[0]), /* 1 */
	asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1)
		/sizeof(asn_DEF_DecentralizedEnvironmentalNotificationMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DecentralizedEnvironmentalNotificationMessage_1,
	4,	/* Elements count */
	&asn_SPC_DecentralizedEnvironmentalNotificationMessage_specs_1	/* Additional specs */
};

