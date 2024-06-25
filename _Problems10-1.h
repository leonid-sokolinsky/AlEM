/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement Method (No MPI)
Module: Problems10-1.h (LP problems of dimension 10 with 1 randome inequality: LP-Rnd-Problems Set)
Prefix: PP
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
Initial surface points for these problems were calculated using BSF-Apex-Quest.
==============================================================================*/
#pragma once

//============================== Problem Parameters =============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
// PP_EPS_PROJECTION_ROUND - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
//-------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9				// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	1E-8				// Precision for point to be in halfspace
#define PP_EPS_MOVING_ON_POLYTOPE	(PP_EPS_ZERO/100)	// Precision for moving on polytope (affects Shift = 0)
#define PP_EPS_PROJECTION_ROUND		PP_EPS_ZERO			// Precision of rounding pseudoprojecting vectors
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+9				// Length of Objective Vector
//-------------------------------------------------------------------------------
#define PP_KK	10		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M	11		// Number of equations (number of rows in *.mtx)
#define PP_N	21		// Number of variables (number of cols in *.mtx)
#define PP_MAX_PROJECTING_ITER	1E+7	// Maximum acceptable number of iterations in PseudoprojectionOnFace()
#define PP_PROBE_LENGTH			1		// Length of probe shift
#define PP_START_SHIFT_LENGTH	100
//-------------------------------------------------------------------------------

/*============================== rnd10-0 LP problem ==============================*/
// Exact solution:	100  200  200  200  200  200  200  200  200  200
#define PP_PROBLEM_NAME	"rnd10-0"
#define PP_MAX_OBJ_VALUE		10900			
//-------------------------------------------------------------------------------

/*============================== rnd10-1-1 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-1"
#define PP_MAX_OBJ_VALUE 9551.382889063481
//-------------------------------------------------------------------------------

/*============================== rnd10-1-2 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-2"
#define PP_MAX_OBJ_VALUE 9123.804967380289
//-------------------------------------------------------------------------------

/*============================== rnd10-1-3 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-3"
#define PP_MAX_OBJ_VALUE 9960.789316538114
//-------------------------------------------------------------------------------

/*============================== rnd10-1-4 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-4"
#define PP_MAX_OBJ_VALUE 9440.134567881334
//-------------------------------------------------------------------------------

/*============================== rnd10-1-5 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-5"
#define PP_MAX_OBJ_VALUE 10248.35536348673
//-------------------------------------------------------------------------------

/*============================== rnd10-1-6 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd10-1-6"
#define PP_MAX_OBJ_VALUE 10022.93578020069
//-------------------------------------------------------------------------------

/*===============================================================================*/