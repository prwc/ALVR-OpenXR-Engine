#ifndef META_BODY_TRACKING_FULL_BODY_H_
#define META_BODY_TRACKING_FULL_BODY_H_ 1

/**********************
This file is @generated from the OpenXR XML API registry.
Language    :   C99
Copyright   :   (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.
***********************/

#include <openxr/openxr.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifndef XR_META_body_tracking_full_body

#define XR_META_body_tracking_full_body 1
#define XR_META_body_tracking_full_body_SPEC_VERSION 1
#define XR_META_BODY_TRACKING_FULL_BODY_EXTENSION_NAME "XR_META_body_tracking_full_body"
static const XrStructureType XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META = (XrStructureType) 1000274000;
static const XrBodyJointSetFB XR_BODY_JOINT_SET_FULL_BODY_META = (XrBodyJointSetFB) 1000274000;

typedef enum XrFullBodyJointMETA {
    XR_FULL_BODY_JOINT_ROOT_META = 0,
    XR_FULL_BODY_JOINT_HIPS_META = 1,
    XR_FULL_BODY_JOINT_SPINE_LOWER_META = 2,
    XR_FULL_BODY_JOINT_SPINE_MIDDLE_META = 3,
    XR_FULL_BODY_JOINT_SPINE_UPPER_META = 4,
    XR_FULL_BODY_JOINT_CHEST_META = 5,
    XR_FULL_BODY_JOINT_NECK_META = 6,
    XR_FULL_BODY_JOINT_HEAD_META = 7,
    XR_FULL_BODY_JOINT_LEFT_SHOULDER_META = 8,
    XR_FULL_BODY_JOINT_LEFT_SCAPULA_META = 9,
    XR_FULL_BODY_JOINT_LEFT_ARM_UPPER_META = 10,
    XR_FULL_BODY_JOINT_LEFT_ARM_LOWER_META = 11,
    XR_FULL_BODY_JOINT_LEFT_HAND_WRIST_TWIST_META = 12,
    XR_FULL_BODY_JOINT_RIGHT_SHOULDER_META = 13,
    XR_FULL_BODY_JOINT_RIGHT_SCAPULA_META = 14,
    XR_FULL_BODY_JOINT_RIGHT_ARM_UPPER_META = 15,
    XR_FULL_BODY_JOINT_RIGHT_ARM_LOWER_META = 16,
    XR_FULL_BODY_JOINT_RIGHT_HAND_WRIST_TWIST_META = 17,
    XR_FULL_BODY_JOINT_LEFT_HAND_PALM_META = 18,
    XR_FULL_BODY_JOINT_LEFT_HAND_WRIST_META = 19,
    XR_FULL_BODY_JOINT_LEFT_HAND_THUMB_METACARPAL_META = 20,
    XR_FULL_BODY_JOINT_LEFT_HAND_THUMB_PROXIMAL_META = 21,
    XR_FULL_BODY_JOINT_LEFT_HAND_THUMB_DISTAL_META = 22,
    XR_FULL_BODY_JOINT_LEFT_HAND_THUMB_TIP_META = 23,
    XR_FULL_BODY_JOINT_LEFT_HAND_INDEX_METACARPAL_META = 24,
    XR_FULL_BODY_JOINT_LEFT_HAND_INDEX_PROXIMAL_META = 25,
    XR_FULL_BODY_JOINT_LEFT_HAND_INDEX_INTERMEDIATE_META = 26,
    XR_FULL_BODY_JOINT_LEFT_HAND_INDEX_DISTAL_META = 27,
    XR_FULL_BODY_JOINT_LEFT_HAND_INDEX_TIP_META = 28,
    XR_FULL_BODY_JOINT_LEFT_HAND_MIDDLE_METACARPAL_META = 29,
    XR_FULL_BODY_JOINT_LEFT_HAND_MIDDLE_PROXIMAL_META = 30,
    XR_FULL_BODY_JOINT_LEFT_HAND_MIDDLE_INTERMEDIATE_META = 31,
    XR_FULL_BODY_JOINT_LEFT_HAND_MIDDLE_DISTAL_META = 32,
    XR_FULL_BODY_JOINT_LEFT_HAND_MIDDLE_TIP_META = 33,
    XR_FULL_BODY_JOINT_LEFT_HAND_RING_METACARPAL_META = 34,
    XR_FULL_BODY_JOINT_LEFT_HAND_RING_PROXIMAL_META = 35,
    XR_FULL_BODY_JOINT_LEFT_HAND_RING_INTERMEDIATE_META = 36,
    XR_FULL_BODY_JOINT_LEFT_HAND_RING_DISTAL_META = 37,
    XR_FULL_BODY_JOINT_LEFT_HAND_RING_TIP_META = 38,
    XR_FULL_BODY_JOINT_LEFT_HAND_LITTLE_METACARPAL_META = 39,
    XR_FULL_BODY_JOINT_LEFT_HAND_LITTLE_PROXIMAL_META = 40,
    XR_FULL_BODY_JOINT_LEFT_HAND_LITTLE_INTERMEDIATE_META = 41,
    XR_FULL_BODY_JOINT_LEFT_HAND_LITTLE_DISTAL_META = 42,
    XR_FULL_BODY_JOINT_LEFT_HAND_LITTLE_TIP_META = 43,
    XR_FULL_BODY_JOINT_RIGHT_HAND_PALM_META = 44,
    XR_FULL_BODY_JOINT_RIGHT_HAND_WRIST_META = 45,
    XR_FULL_BODY_JOINT_RIGHT_HAND_THUMB_METACARPAL_META = 46,
    XR_FULL_BODY_JOINT_RIGHT_HAND_THUMB_PROXIMAL_META = 47,
    XR_FULL_BODY_JOINT_RIGHT_HAND_THUMB_DISTAL_META = 48,
    XR_FULL_BODY_JOINT_RIGHT_HAND_THUMB_TIP_META = 49,
    XR_FULL_BODY_JOINT_RIGHT_HAND_INDEX_METACARPAL_META = 50,
    XR_FULL_BODY_JOINT_RIGHT_HAND_INDEX_PROXIMAL_META = 51,
    XR_FULL_BODY_JOINT_RIGHT_HAND_INDEX_INTERMEDIATE_META = 52,
    XR_FULL_BODY_JOINT_RIGHT_HAND_INDEX_DISTAL_META = 53,
    XR_FULL_BODY_JOINT_RIGHT_HAND_INDEX_TIP_META = 54,
    XR_FULL_BODY_JOINT_RIGHT_HAND_MIDDLE_METACARPAL_META = 55,
    XR_FULL_BODY_JOINT_RIGHT_HAND_MIDDLE_PROXIMAL_META = 56,
    XR_FULL_BODY_JOINT_RIGHT_HAND_MIDDLE_INTERMEDIATE_META = 57,
    XR_FULL_BODY_JOINT_RIGHT_HAND_MIDDLE_DISTAL_META = 58,
    XR_FULL_BODY_JOINT_RIGHT_HAND_MIDDLE_TIP_META = 59,
    XR_FULL_BODY_JOINT_RIGHT_HAND_RING_METACARPAL_META = 60,
    XR_FULL_BODY_JOINT_RIGHT_HAND_RING_PROXIMAL_META = 61,
    XR_FULL_BODY_JOINT_RIGHT_HAND_RING_INTERMEDIATE_META = 62,
    XR_FULL_BODY_JOINT_RIGHT_HAND_RING_DISTAL_META = 63,
    XR_FULL_BODY_JOINT_RIGHT_HAND_RING_TIP_META = 64,
    XR_FULL_BODY_JOINT_RIGHT_HAND_LITTLE_METACARPAL_META = 65,
    XR_FULL_BODY_JOINT_RIGHT_HAND_LITTLE_PROXIMAL_META = 66,
    XR_FULL_BODY_JOINT_RIGHT_HAND_LITTLE_INTERMEDIATE_META = 67,
    XR_FULL_BODY_JOINT_RIGHT_HAND_LITTLE_DISTAL_META = 68,
    XR_FULL_BODY_JOINT_RIGHT_HAND_LITTLE_TIP_META = 69,
    XR_FULL_BODY_JOINT_LEFT_UPPER_LEG_META = 70,
    XR_FULL_BODY_JOINT_LEFT_LOWER_LEG_META = 71,
    XR_FULL_BODY_JOINT_LEFT_FOOT_ANKLE_TWIST_META = 72,
    XR_FULL_BODY_JOINT_LEFT_FOOT_ANKLE_META = 73,
    XR_FULL_BODY_JOINT_LEFT_FOOT_SUBTALAR_META = 74,
    XR_FULL_BODY_JOINT_LEFT_FOOT_TRANSVERSE_META = 75,
    XR_FULL_BODY_JOINT_LEFT_FOOT_BALL_META = 76,
    XR_FULL_BODY_JOINT_RIGHT_UPPER_LEG_META = 77,
    XR_FULL_BODY_JOINT_RIGHT_LOWER_LEG_META = 78,
    XR_FULL_BODY_JOINT_RIGHT_FOOT_ANKLE_TWIST_META = 79,
    XR_FULL_BODY_JOINT_RIGHT_FOOT_ANKLE_META = 80,
    XR_FULL_BODY_JOINT_RIGHT_FOOT_SUBTALAR_META = 81,
    XR_FULL_BODY_JOINT_RIGHT_FOOT_TRANSVERSE_META = 82,
    XR_FULL_BODY_JOINT_RIGHT_FOOT_BALL_META = 83,
    XR_FULL_BODY_JOINT_COUNT_META = 84,
    XR_FULL_BODY_JOINT_NONE_META = 85,
    XR_FULL_BODY_JOINT_MAX_ENUM_META = 0x7FFFFFFF
} XrFullBodyJointMETA;
typedef struct XrSystemPropertiesBodyTrackingFullBodyMETA {
    XrStructureType       type;
    void* XR_MAY_ALIAS    next;
    XrBool32              supportsFullBodyTracking;
} XrSystemPropertiesBodyTrackingFullBodyMETA;

#endif /* XR_META_body_tracking_full_body */

#ifdef __cplusplus
}
#endif

#endif
