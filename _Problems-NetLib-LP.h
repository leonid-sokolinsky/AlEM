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
// Number of equations : 15
// Subspace dimension : 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
#define PP_ELIMINATE_DUPLICATES // Eliminate duplicates of edge combinations
#define PP_MIN_OF_DEGREE // Prefer vertex with lowest degree
#define PP_RANDOM_OBJ_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 1827.593
// Number of iterations: 1
// Computed objective value: -225494.963161446357844397
// Maximal objective value:  -225494.963162380387075245
// Relative error = 4.14e-12
//------------------------------------------------------------------------------

/*============================== afiro LP problem ==============================*
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27			// Number of constraints in mps-file
#define PP_N 32			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
#define PP_MAXPROJECTION
#define PP_ELIMINATE_DUPLICATES // Eliminate duplicates of edge combinations
//#define PP_MIN_OF_DEGREE // Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Elapsed time: 141.94531
// Number of iterations: 3
// Computed objective value: 464.753142857212083072227
// Maximal objective value:  464.753142857142847788054
// Relative error = 1.49e-13
//------------------------------------------------------------------------------

/*============================== blend LP problem ==============================*/
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74			// Number of constraints in mps-file
#define PP_N 83			// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				10000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
#define PP_MAXPROJECTION
#define PP_MIN_OF_DEGREE		// Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// Elapsed time: 757.57823
// Number of iterations: 4
// Computed objective value: 30.8121498459151119675425
// Maximal objective value:  30.8121498458282196963864
// Relative error = 2.82e-12
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
//------------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-8				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	1000000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000000			// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 5869.5131
// Number of iterations: 2
// Computed objective value: 1749.90012995048527955078
// Maximal objective value:  1749.90012990620562050026
// Relative error = 2.53e-11
//------------------------------------------------------------------------------

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
#define PP_PROJECTION_COUNT			10000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 25204.759
// Number of iterations: 2
// Computed objective value: 415.732240752801828875818
// Maximal objective value:  415.732240741419502683129
// Relative error = 2.74e-11
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
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
//----------------------------------------------------------------------------
// Elapsed time: 603.93944
// Number of iterations: 1
// Computed objective value: 64.5750770586501801062695
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

/*============================== sc105 LP problem ==============================*
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in *.mps
#define PP_N 103	// Number of variables in *.mps
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of calculating pseudoprojection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//----------------------------------------------------------------------------
#define PP_EPS_RELATIVE_ERROR			1E-4				// Used if defined PP_CHECK_MAX_OBJ_VALUE 
#define PP_MAX_PSEUDOPROJECTING_ITER	100000000			// Maximum acceptable number of iterations in Pseudoprojection on flat
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT			10000000				// Each PP_PROJECTION_COUNT-th iteration to be outputted inside Flat_MaxProjection(*) or Flat_BipProjection(*)
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
#define PP_MAXPROJECTION
#define PP_MIN_OF_DEGREE // Prefer vertex with lowest degree
//------------------------------------------------------------------------------
// ObjF = 50.20643 Number of edge combinations: 521855
// Map progress: 0.018%    Time = 61
// ...
//------------------------------------------------------------------------------

/*============================== beaconfd LP problem ===========================*
// Number of equations: 140
// Subspace dimension: 122
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of constraints in mps-file
#define PP_N 262	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -33592.4858072
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7				// Precision for comparison with zero
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7				// Length of Objective Vector
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91		// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
//------------------------------------------------------------------------------

//----------------------------------------------------------------------------/**/