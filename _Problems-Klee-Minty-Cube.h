/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-Klee-Minty-Cube.h (Problems from the LP-Klee-Minty-Cube Set)
Prefix: PP
Authors: Alexandr E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_EPS_ZERO						1E-8	// Accuracy for comparison with zero
#define PP_EPS_U0_ROUND					1E-1	// !< Precision of rounding starting point
#define PP_EPS_PPROJ_ON_EDGE_RESIDUAL	1E-12	// Residual precision for calculating pseudoprojection onto edge
#define PP_EPS_PPROJ_ON_EDGE_DIR		1E-6	// !< Direction precision for calculating pseudoprojection onto edge
#define PP_EPS_PPROJ_ON_POLYTOPE		1E-9	// Precision for calculating pseudoprojection onto polytope
#define PP_EPS_POINT_IN_POLYTOPE		1E-4	// <!> Precision for point to be in halfspace
#define PP_RND_EPS_POINT_IN_POLYTOPE	1E-5	// Precision for random inequality in PointInPolytope()
#define PP_OBJECTIVE_VECTOR_LENGTH		10000000000// !> Starting length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				1E+308	// Maximum b that does not require correction
#define PP_PROBE_LENGTH					10		// !> Length of probe shift

/*============================== Klee-Minty5 LP problem ==============================*/
// Starting point:	0 ... 0
// New vertex:                    5               5              65             245            1385
// Exact solution:	0 ... 0	3125
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 3125
//---------------------------------------------------------------------------------/**/

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
//---------------------------------------------------------------------------------/**/

/*============================== Klee-Minty7 LP problem ==============================*
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	78125
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 78125
//---------------------------------------------------------------------------------/**/

/*============================== Klee-Minty8 LP problem ==============================*
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	390625
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 390625
//---------------------------------------------------------------------------------/**/

/*============================== Klee-Minty9 LP problem ==============================* Not solved!
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	1953125
#define PP_PROBLEM_NAME	"Klee-Minty9"
#define PP_D 9			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 1953125
//---------------------------------------------------------------------------------/**/

/*============================== Klee-Minty10 LP problem ==============================* Not solved!
// Starting point:	0 ... 0
// Exact solution:	0 ... 0	9765625
#define PP_PROBLEM_NAME	"Klee-Minty10"
#define PP_D 10			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_OPTIMAL_OBJ_VALUE 9765625
//---------------------------------------------------------------------------------/**/