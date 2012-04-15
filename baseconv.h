/** \file baseconv.h
  *
  * \brief This describes functions and constants exported by baseconv.c.
  *
  * This file is licensed as described by the file LICENCE.
  */

#ifndef BASECONV_H_INCLUDED
#define BASECONV_H_INCLUDED

#include "common.h"

/** Address version to use when converting 160-bit hashes to human-readable
  * Bitcoin addresses. This should be 0x00 for the main network or 0x6f for
  * testnet. */
#define ADDRESSVERSION		0x00

extern void amountToText(char *out, uint8_t *in);
extern void hashToAddr(char *out, uint8_t *in);

#endif // #ifndef BASECONV_H_INCLUDED

