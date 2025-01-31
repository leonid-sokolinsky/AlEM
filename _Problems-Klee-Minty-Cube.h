/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method
Module: _Problems-Klee-Minty-Cube.h (Problems from the LP-Klee-Minty-Cube Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
Start vertex *_v.mtx for these problems was calculated by VeSP https://github.com/leonid-sokolinsky/VeSP
LP problems were obtained using Klee-Minty-Cube-Generator https://github.com/leonid-sokolinsky/Klee-Minty-Cube-Generator
LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/Klee-Minty-Cube
================================================================================*/
#pragma once

//============================== Problem Parameters ============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
// PP_EPS_PROJECTION - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)// Precision of rounding pseudoprojecting vectors
#define PP_EPS_COS					PP_EPS_ZERO		// Precision to calculate COS
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
//------------------------------------------------------------------------------

/*============================== Klee-Minty5 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 3125
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 3125
// Maximal objective value:  3125
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty6 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty6"
#define PP_D 6			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 15625
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 15625
// Maximal objective value:  15625
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty7 LP problem ========================*/
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 78125
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 78125
// Maximal objective value:  78125
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty8 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK PP_D		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 390625
//------------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 1
// Computed objective value: 390625
// Maximal objective value:  390625
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty9 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty9"
#define PP_D 9			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_KK 511		// Maximal number of faces that include surface point 2^m-1
#define PP_MAX_OBJ_VALUE 1953125
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 1953125
// Maximal objective value:  1953125
// Relative error = 0
//------------------------------------------------------------------------------

/*==============================================================================*/