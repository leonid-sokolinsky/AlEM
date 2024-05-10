/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-Klee-Minty-Cube.h (Problems from the LP-Klee-Minty-Cube Set)
Prefix: PP
Authors: Alexandr E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
==============================================================================*/
#pragma once

//============================== Method Parameters ============================
#define PP_EPS_ZERO					1E-8	// Accuracy for comparison with zero
#define PP_EPS_U0_ROUND				5E-1	// Precision of rounding starting point
#define PP_PROBE_LENGTH				1		// Length of probe shift
//-----------------------------------------------------------------------------
#define PP_MAX_B_NO_CORRECT				1E+308	// Maximum b that does not require correction
#define PP_EPS_POINT_IN_RND_HALFSPACE	0		// Not used
//=============================================================================

/*============================== Klee-Minty5 LP problem ==============================*
// Starting point:	0 ... 0
// New vertex:                    5               5              65             245            1385
// Exact solution:	0 ... 0	3125
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 3125
//---------------------------------- Method parameters ------------------------
#define PP_EPS_TINY_PPROJ_VEC		1E-10	// Tiny pseudoprojection vector
#define PP_EPS_POINT_IN_HALFSPACE	1E-5	// Precision for point to be in halfspace
#define PP_EPS_MAKE_H_PLANE_LIST	1E-5	// Precision for MakeHyperplaneList()
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+5	// Length of Objective Vector
//=============================================================================

/*============================== Klee-Minty6 LP problem ==============================*
// Starting point:	0 ... 0
// New vertex:                    5               5              65             245            1385            6605
// Exact solution:	0 ... 0	15625
#define PP_PROBLEM_NAME	"Klee-Minty6"
#define PP_D 6			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 15625
//---------------------------------- Method parameters ------------------------
#define PP_EPS_TINY_PPROJ_VEC		1E-10	// Tiny pseudoprojection vector
#define PP_EPS_POINT_IN_HALFSPACE	1E-5	// Precision for point to be in halfspace
#define PP_EPS_MAKE_H_PLANE_LIST	1E-5	// Precision for MakeHyperplaneList()
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//=============================================================================

/*============================== Klee-Minty7 LP problem =======================*
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	78125
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 78125
//---------------------------------- Method parameters ------------------------
#define PP_EPS_TINY_PPROJ_VEC		1E-10	// Tiny pseudoprojection vector
#define PP_EPS_POINT_IN_HALFSPACE	1E-5	// Precision for point to be in halfspace
#define PP_EPS_MAKE_H_PLANE_LIST	1E-5	// Precision for MakeHyperplaneList()
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7	// Length of Objective Vector
//=============================================================================

/*============================== Klee-Minty8 LP problem =======================*/
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	390625
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 390625
//---------------------------------- Method parameters ------------------------
#define PP_EPS_TINY_PPROJ_VEC		1E-9	// Tiny pseudoprojection vector
#define PP_EPS_POINT_IN_HALFSPACE	1E-3	// Precision for point to be in halfspace
#define PP_EPS_MAKE_H_PLANE_LIST	1E-3	// Precision for MakeHyperplaneList()
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+8	// Length of Objective Vector
//=============================================================================

/*=============================================================================*/