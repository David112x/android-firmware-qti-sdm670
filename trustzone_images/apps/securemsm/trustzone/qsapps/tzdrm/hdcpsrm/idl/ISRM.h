#pragma once
// AUTOGENERATED FILE: DO NOT EDIT

#include <stdint.h>
#include "object.h"

// Copyright (c) 2017 Qualcomm Technologies, Inc.  All Rights Reserved.

// Qualcomm Technologies Proprietary and Confidential.

/**
 * @brief
 * The HDCP SRM (System Renewability Message) is a small file, currently less
 * than 5kB, that contains list of Key Selection Vectors (i.e. key IDs) that
 * should not be negotiated for HDCP. The device is supposed to validate the
 * signature on the SRM, store the SRM in non-volatile memory and use it during
 * authentication to decide if a downstream device is allowed to receive content
 */

#define ISRM_ERROR_INVALID_SRM INT32_C(10)
#define ISRM_ERROR_INVALID_SRM_VERSION INT32_C(11)
#define ISRM_ERROR_SIGNATURE_FAILURE INT32_C(12)
#define ISRM_ERROR_FOUND_REVOKED_DEVICE INT32_C(13)

#define ISRM_OP_updateSRM 0
#define ISRM_OP_validateRecvIds 1
#define ISRM_OP_getCurrentSRMVersion 2

static inline int32_t
ISRM_release(Object self)
{
  return Object_invoke(self, Object_OP_release, 0, 0);
}

static inline int32_t
ISRM_retain(Object self)
{
  return Object_invoke(self, Object_OP_retain, 0, 0);
}

static inline int32_t
ISRM_updateSRM(Object self, const void *srmData_ptr, size_t srmData_len)
{
  ObjectArg a[1];
  a[0].bi = (ObjectBufIn) { srmData_ptr, srmData_len * 1 };

  return Object_invoke(self, ISRM_OP_updateSRM, a, ObjectCounts_pack(1, 0, 0, 0));
}

static inline int32_t
ISRM_validateRecvIds(Object self, const uint8_t *recvIdList_ptr, size_t recvIdList_len)
{
  ObjectArg a[1];
  a[0].bi = (ObjectBufIn) { recvIdList_ptr, recvIdList_len * sizeof(uint8_t) };

  return Object_invoke(self, ISRM_OP_validateRecvIds, a, ObjectCounts_pack(1, 0, 0, 0));
}

static inline int32_t
ISRM_getCurrentSRMVersion(Object self, uint32_t *version_ptr)
{
  ObjectArg a[1];
  a[0].b = (ObjectBuf) { version_ptr, sizeof(uint32_t) };

  return Object_invoke(self, ISRM_OP_getCurrentSRMVersion, a, ObjectCounts_pack(0, 1, 0, 0));
}


