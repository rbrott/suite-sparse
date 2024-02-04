// CSparse/Source/cs_pvec: permute a dense vector
// CSparse, Copyright (c) 2006-2022, Timothy A. Davis. All Rights Reserved.
// SPDX-License-Identifier: LGPL-2.1+
#include "cs.h"
/* x = b(p), for dense vectors x and b; p=NULL denotes identity */
csi cs_pvec (const csi *p, const double *b, double *x, csi n)
{
    csi k ;
    if (!x || !b) return (0) ;                              /* check inputs */
    for (k = 0 ; k < n ; k++) x [k] = b [p ? p [k] : k] ;
    return (1) ;
}
