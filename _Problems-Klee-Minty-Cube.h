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
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11	// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		1E-3	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+8	// Length of Objective Vector
#define PP_EPS_RELATIVE_ERROR		1E-3	// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_PROJECTION_COUNT				100000000	// Each PP_PROJECTION_COUNT iteration to be outputted inside Flat_MaxProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//------------------------------------------------------------------------------

/*============================== Klee-Minty5 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 3125
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 9
// Computed objective value: 3124.99999994883637555176
// Maximal objective value:  3125
// Relative error = 1.64e-11
// Distance to polytope: 4.1299567e-12
//------------------------------------------------------------------------------

/*============================== Klee-Minty6 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty6"
#define PP_D 6			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 15625
//------------------------------------------------------------------------------
#define PP_EPS_ON_HYPERPLANE		1E-4	// Accuracy of belonging to hyperplane
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 11
// Computed objective value: 15624.9999971797769831028
// Maximal objective value:  15625
// Relative error = 1.8e-10
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty7 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 78125
//------------------------------------------------------------------------------
#define PP_EPS_ON_HYPERPLANE		1E-4	// Accuracy of belonging to hyperplane
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 13
// Computed objective value: 78124.9993806063721422106
// Maximal objective value:  78125
// Relative error = 7.93e-09
// Distance to polytope: 7.0479454e-12
//------------------------------------------------------------------------------

/*============================== Klee-Minty8 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 390625
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 15
// Computed objective value: 390624.961317246488761157
// Maximal objective value:  390625
// Relative error = 9.9e-08
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty9 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty9"
#define PP_D 9			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1953125
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 11
// Computed objective value: 1729539.43225225177593529
// Maximal objective value:  1953125
// Relative error = 0.114
// Distance to polytope: 0.0037863188
//------------------------------------------------------------------------------

/*============================== Klee-Minty10 LP problem =======================*
#define PP_PROBLEM_NAME	"Klee-Minty10"
#define PP_D 10			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 9765625
//------------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 11
// Computed objective value: 6974988.29352580383419991
// Maximal objective value:  9765625
// Relative error = 0.286
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty20 LP problem =======================*/
#define PP_PROBLEM_NAME	"Klee-Minty20"
#define PP_D 20			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 95367431640625
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 11
// Computed objective value: 7142388017.05349540710449
// Maximal objective value:  95367431640625
// Relative error = 1
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*==============================================================================*/