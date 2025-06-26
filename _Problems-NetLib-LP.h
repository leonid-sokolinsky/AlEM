/*==========================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
Start vertex *_v.mtx for these problems was calculated by VeSP https://github.com/leonid-sokolinsky/VeSP
LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/NetLib-LP
============================================================================*/
#pragma once

#define PP_MPS_FORMAT

//=========================== Problem Parameters ===============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
//------------------------------------------------------------------------------

/*============================== adlittle LP problem ===========================*
// Number of equations: 15
// Subspace dimension: 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*1000)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MEDIAN_LAUNCH_VECTOR
//------------------------------------------------------------------------------
// Number of iterations: 1
// Computed objective value: -225494.963161337713245302
// Maximal objective value:  -225494.963162380387075245
// Relative error = 4.62e-12
//------------------------------------------------------------------------------

/*============================== afiro LP problem ==============================*/
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27			// Number of constraints in mps-file
#define PP_N 32			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//------------------------------------------------------------------------------
#define PP_EPS_ZERO						1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION				(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE			(PP_EPS_PROJECTION*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH		1E+6					// Length of Objective Vector
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000				// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_CHECK_MAX_OBJ_VALUE ------------------
#define PP_EPS_RELATIVE_ERROR			1E-8					// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+6					// #ifdef PP_SAVE_LOCAL_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//#define PP_MAXPROJECTION
//#define PP_MIN_OF_DEGREE // Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Elapsed time: 141.94531
// Number of iterations: 3
// Computed objective value: 464.753142857212083072227
// Maximal objective value:  464.753142857142847788054
// Relative error = 1.49e-13
//------------------------------------------------------------------------------

/*============================== blend LP problem ==============================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74			// Number of constraints in mps-file
#define PP_N 83			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+1					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				10000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//#define PP_MAXPROJECTION
//#define PP_MIN_OF_DEGREE		// Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Number of iterations: 4
// Computed objective value: 30.8121498459948242043538
// Maximal objective value:  30.8121498458282196963864
// Relative error = 5.41e-12
//------------------------------------------------------------------------------

/*============================== fit1d LP problem ==============================*
// Number of equations : 1
// Subspace dimension : 1025
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 24		// Number of constraints 
#define PP_N 1026	// Number of variables
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-6					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+2					// Length of Objective Vector
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_CHECK_MAX_OBJ_VALUE ------------------
#define PP_EPS_RELATIVE_ERROR			(PP_EPS_ZERO*10)		// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				1000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+5					// #ifdef PP_SAVE_LOCAL_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
#define PP_MEDIAN_LAUNCH_VECTOR
//#define PP_RANDOM_LAUNCH_VECTOR			283
//#define PP_MIN_OF_DEGREE										// Prefer vertex with lowest degree
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

/*============================== grow7 LP problem ============================*
// Number of equations: 140
// Subspace dimension: 161
#define PP_PROBLEM_NAME		"grow7"
#define PP_M 140	// Number of equations (after conversion to standard form)
#define PP_N 301	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 47787811.814711502616766956242865	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO						1E-5					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION				(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE			(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH		1E+10					// Length of Objective Vector
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000				// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_CHECK_MAX_OBJ_VALUE ------------------
#define PP_EPS_RELATIVE_ERROR			(PP_EPS_ZERO/10)				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				50000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+1					// #ifdef PP_SAVE_LOCAL_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
#define PP_RANDOM_LAUNCH_VECTOR
//#define PP_MIN_OF_DEGREE		// Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Elapsed time: 270739.86
// Number of iterations: 3
// Computed objective value: 47787811.9859117493033409
// Maximal objective value:  47787811.8147115036845207
// Relative error = 3.58e-09
//------------------------------------------------------------------------------

/*============================== israel LP problem =========================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 174	// Number of constraints in mps-file
#define PP_N 142	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO						1E-7					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION				(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE			(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH		1E+5					// Length of Objective Vector
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000				// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_CHECK_MAX_OBJ_VALUE ------------------
#define PP_EPS_RELATIVE_ERROR			(PP_EPS_ZERO*100)		// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				50000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//------------------------------ ifdef PP_SAVE_ITER_RESULT ---------------------
#define PP_SCALE_FACTOR					1E+3					// #ifdef PP_SAVE_LOCAL_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
#define PP_MEDIAN_LAUNCH_VECTOR
//#define PP_RANDOM_LAUNCH_VECTOR			283
//#define PP_MIN_OF_DEGREE		// Prefer vertex with lowest degree
//------------------------------------------------------------------------------


/*============================== kb2 LP problem ================================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_CHECK_MAX_OBJ_VALUE ------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Number of iterations: 2
// Computed objective value: 1749.90013012646932111238
// Maximal objective value:  1749.90012990620562050026
// Relative error = 1.26e-10
//------------------------------------------------------------------------------

/*============================== sc50a LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//-------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//----------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-4				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
//----------------------------------------------------------------------------
// Number of iterations: 4
// Computed objective value: 64.5750770586504359016544
// Maximal objective value:  64.5750770585645028631916
// Relative error = 1.33e-12
//----------------------------------------------------------------------------

/*============================== sc50b LP problem ============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-12					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//----------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-4				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
//--------------------------------------------------------------------------
// Elapsed time: 3.747997
// Number of iterations: 1
// Computed objective value: 70.0000000000000142108547
// Maximal objective value:  70
// Relative error = 2.03e-16
//--------------------------------------------------------------------------

/*============================== share2b LP problem ============================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 96		// Number of constraints in *.mps
#define PP_N 79	// Number of variables in *.mps
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR	1E-5						// Used if defined PP_CHECK_MAX_OBJ_VALUE
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				10000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
//#define PP_MIN_OF_DEGREE // Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Number of iterations: 2
// Computed objective value: 415.732240914285966937314
// Maximal objective value:  415.732240741419502683129
// Relative error = 4.16e-10
//------------------------------------------------------------------------------

/*============================== stocfor1 LP problem ============================*
// Number of equations: 63
// Subspace dimension: 48
#define PP_PROBLEM_NAME		"stocfor1"	
#define PP_M 117	// Number of constraints in mps-file
#define PP_N 111	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 41131.976219436406065682760731514 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-10					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	(PP_EPS_PROJECTION*100)	// Precision for point to be in halfspace
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6				// Length of Objective Vector
//----------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-4				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_RANDOM_LAUNCH_VECTOR
//------------------------------------------------------------------------------

//==============================================================================*/