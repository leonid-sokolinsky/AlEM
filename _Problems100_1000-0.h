/*=============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement Method
Module: _Problems200_1000-0.h (LP problems of dimensions 200...1000 without random inequalities)
Prefix: PP
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
===============================================================================*/
#pragma once

//============================== Problem Parameters ===========================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
// PP_EPS_BIPPROJECTION_ROUND - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
//-----------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-6			// Accuracy for comparison with zero

#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+9			// Length of Objective Vector
//-----------------------------------------------------------------------------
#define PP_MAX_PROJECTING_ITER		1E+7	// Maximum acceptable number of iterations in PseudoprojectionOnFace()
#define PP_PROBE_LENGTH				0.1		// Length of probe shift
//=============================================================================

/*============================== rnd100-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd100-0"
#define PP_KK	100		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	101		// Number of equations (number of rows in *.mtx)
#define PP_N	201		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1009900 // =200*(n-1)*(2+n)/2+100
//-----------------------------------------------------------------------------

/*============================== rnd150-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd150-0"
#define PP_KK	150		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	151		// Number of equations (number of rows in *.mtx)
#define PP_N	301		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 2264900
//-----------------------------------------------------------------------------

/*============================== rnd200-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd200-0"
#define PP_KK	200		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	201		// Number of equations (number of rows in *.mtx)
#define PP_N	401		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 4019900
//-----------------------------------------------------------------------------

/*============================== rnd250-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd250-0"
#define PP_KK	250		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	251		// Number of equations (number of rows in *.mtx)
#define PP_N	501		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 6274900
//-----------------------------------------------------------------------------

/*============================== rnd400-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd400-0"
#define PP_KK	400		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	401		// Number of equations (number of rows in *.mtx)
#define PP_N	801		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 16039900
//-----------------------------------------------------------------------------

/*============================== rnd600-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd600-0"
#define PP_KK	600		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	601		// Number of equations (number of rows in *.mtx)
#define PP_N	1201	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 36059900
//-----------------------------------------------------------------------------

/*============================== rnd800-0 LP problem ==========================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd800-0"
#define PP_KK	800		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	801		// Number of equations (number of rows in *.mtx)
#define PP_N	1601	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 64079900
//-----------------------------------------------------------------------------

/*============================== rnd1000-0 LP problem =========================*/
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd1000-0"
#define PP_KK	1000		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	1001		// Number of equations (number of rows in *.mtx)
#define PP_N	2001	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 100099900
//-----------------------------------------------------------------------------

/*=============================================================================*/