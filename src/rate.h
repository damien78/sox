/* libSoX Rate Direct Interface
*
* Copyright 1999-2012 Chris Bagwell and SoX Contributors.
*
* This source code is freely redistributable and may be used for
* any purpose.  This copyright notice must be maintained.
* Chris Bagwell And SoX Contributors are not responsible for
* the consequences of using this software.
*/

#pragma once

#include "sox.h"

#if defined(__cplusplus)
extern "C" {
#endif

SOX_EXPORT
int LSX_API sox_rate_flow_double(sox_effect_t * effp, const double * ibuf,
	double * obuf, size_t * isamp, size_t * osamp);

SOX_EXPORT
int LSX_API sox_rate_drain_double(sox_effect_t * effp, double * obuf, size_t * osamp);

#if defined(__cplusplus)
}
#endif
