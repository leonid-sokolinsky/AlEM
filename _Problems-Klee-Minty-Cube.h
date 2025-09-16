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
#define PP_EPS_ON_HYPERPLANE		1E-11	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7	// Length of Objective Vector
#define PP_EPS_RELATIVE_ERROR		1E-3	// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000	// Maximum acceptable number of iterations in Pseudoprojection on flat
#define PP_PROJECTION_COUNT				100000000	// Each PP_PROJECTION_COUNT iteration to be outputted inside Flat_MaxProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------

/*============================== Klee-Minty5 LP problem ========================*/
#define PP_PROBLEM_NAME	"Klee-Minty5"
#define PP_D 5			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 3125
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_EPS_ON_HYPERPLANE
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 3125.0000000000009094947
// Maximal objective value:  3125
// Relative error = 2.91e-16
// Distance to polytope: 3.8520431e-16
//------------------------------------------------------------------------------

/*============================== Klee-Minty6 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty6"
#define PP_D 6			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 15625
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_EPS_ON_HYPERPLANE
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 15625
// Maximal objective value:  15625
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty7 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty7"
#define PP_D 7			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 78125
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_EPS_ON_HYPERPLANE
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 78124.9999999999854480848
// Maximal objective value:  78125
// Relative error = 1.86e-16
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty8 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty8"
#define PP_D 8			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 390625
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_EPS_ON_HYPERPLANE
#define PP_EPS_ON_HYPERPLANE		1E-3	// Accuracy of belonging to hyperplane
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 390625
// Maximal objective value:  390625
// Relative error = 0
// Distance to polytope: 7.6920415e-16
//------------------------------------------------------------------------------

/*============================== Klee-Minty9 LP problem ========================*
#define PP_PROBLEM_NAME	"Klee-Minty9"
#define PP_D 9			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1953125
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_GRADIENT // inapplicable
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 1953125
// Maximal objective value:  1953125
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty10 LP problem =======================*
#define PP_PROBLEM_NAME	"Klee-Minty10"
#define PP_D 10			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 9765625
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_GRADIENT // inapplicable
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 9765625
// Maximal objective value:  9765625
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== Klee-Minty20 LP problem =======================*
#define PP_PROBLEM_NAME	"Klee-Minty20"
#define PP_D 20			// Space dimension
#define PP_M PP_D		// Number of equations (number of rows in *.mtx)
#define PP_N (2*PP_D)	// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 95367431640625
//------------------------------------------------------------------------------
#ifdef PP_GRADIENT
#undef PP_GRADIENT // inapplicable
#endif // PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 15258792557887.53515625
// Maximal objective value:  95367431640625
// Relative error = 0.84
// Distance to polytope: 1.9075508e-05
//------------------------------------------------------------------------------

/*==============================================================================*/