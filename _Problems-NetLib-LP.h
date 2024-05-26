/*==============================================================================
Project: LiFe - New Linear Programming Solvers - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-NetLib-LP.h (Problems from the LP-NetLib-Problems Set)
Prefix: PP
Authors: Alexandr E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_EPS_ZERO						1E-8	// Accuracy for comparison with zero


#define PP_OBJECTIVE_VECTOR_LENGTH		1000	// Length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				1E+308	// Maximum b that does not require correction
#define PP_EPS_POINT_IN_RND_HALFSPACE	1E-6	// Precision for random inequality in PointInPolytope()
#define PP_PROBE_LENGTH					0.1	// length of probe shift

/*============================== afiro LP problem ==============================*/
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of equations (number of rows in *.mtx)
#define PP_N 51		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		464.7531
//------------------------------------------------------------------/**/

/*============================== kb2 LP problem ==============================*
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (number of rows in *.mtx)
#define PP_N 68	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		1749.9
//------------------------------------------------------------------

/*============================== sc50a LP problem ==============================*
#define PP_PROBLEM_NAME		"sc50a"	
#define PP_M 50	// Number of equations (number of rows in *.mtx)
#define PP_N 78	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		64.575
//----------------------------------------------------------------------------/**/