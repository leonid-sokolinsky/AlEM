/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM method - Along Edges Movement (No MPI)
Module: Problem-bsfParameters.h (BSF-skeleton Parameters)
Prefix: PP_BSF
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

//=========================== BSF Skeleton Parameters =========================
#define PP_BPRECISION (PP_SETW/2)// Decimal precision on output
#define PP_BMAX_MPI_SIZE 400		// Maximal MPI Size
//#define PP_BITER_OUTPUT			// If PP_BITER_OUTPUT is defined then Iteration Output is performed
#define PP_BTRACE_COUNT	1		// Each PP_BTRACE_COUNT-th iteration to be outputted
#define PP_BMAX_JOB_CASE 0

//--------------------------- OpenMP Parameters ---------------------------
// OpenMP mode is impossible here!

//--------------- BSF Lists parameters (For "No MPI" only) ----------------
#include "Problem-Parameters.h"
#define PP_BMAP_LIST_LENGTH		PP_KK
#define PP_BREDUCE_LIST_LENGTH	PP_KK
#define PP_BREDUCE_LIST_1_LENGTH	1
#define PP_BREDUCE_LIST_2_LENGTH	1
#define PP_BREDUCE_LIST_3_LENGTH	1