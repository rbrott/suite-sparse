//------------------------------------------------------------------------------
// GB_AxB_saxpy3_sym_bs: symbolic analysis for GB_AxB_saxpy3
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2023, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

// C = A*B, A is bitmap, B is sparse, no mask

#define GB_MASK_A_B_SUFFIX _bs

#define GB_NO_MASK   1
#define GB_MASK_COMP 0

#define GB_A_IS_SPARSE 0
#define GB_A_IS_HYPER  0
#define GB_A_IS_BITMAP 1
#define GB_A_IS_FULL   0

#define GB_B_IS_SPARSE 1
#define GB_B_IS_HYPER  0
#define GB_B_IS_BITMAP 0
#define GB_B_IS_FULL   0

#include "GB_AxB_saxpy3_symbolic_template.c"
