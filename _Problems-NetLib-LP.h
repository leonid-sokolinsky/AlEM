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

//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------

//=========================== Problem Parameters ===============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
// PP_EPS_PROJECTION - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
//------------------------------------------------------------------------------

/*============================== adlittle LP problem ===========================*
// Number of equations : 15
// Subspace dimension : 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7			// Precision for comparison with zero
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION	(PP_EPS_ZERO*10)// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
//------------------------------------------------------------------------------

/*============================== afiro LP problem ==========================*/
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27			// Number of constraints in mps-file
#define PP_N 32			// Number of variables in mps-file
#define PP_KK 17550		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)	// Precision to calculate projection
#define PP_EPS_COS					PP_EPS_ZERO			// Precision to calculate COS
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7				// Length of Objective Vector
//----------------------------- Compilation Modes ------------------------------
#undef PP_BIPROJECTION
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_ITER_COUNT				10000				// Each PP_ITER_COUNT-th iteration to be outputted inside PC_bsf_MapF(*)
#define PP_PROJECTION_COUNT			100000				// Each PP_PROJECTION_COUNT iteration to be outputted inside Flat_MaxProjection(*)
//------------------------------------------------------------------------------
// Elapsed time: 8.8687336
// Number of iterations: 4
// Computed objective value: 464.753142856903707524907
// Maximal objective value:  464.753142857142847788054
// Relative error = 5.15e-13 
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
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)	// Precision to calculate projection
#define PP_EPS_COS					1E-3				// Precision to calculate COS
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7				// Length of Objective Vector
//------------------------------------------------------------------------------
// Elapsed time: 37318.432
// Number of iterations: 2
// Computed objective value: -33813.86407276181
// Maximal objective value:  -33592.4858072
// Relative error = 0.00659
//------------------------------------------------------------------------------

/*============================== blend LP problem ==============================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74			// Number of constraints in mps-file
#define PP_N 83			// Number of variables in mps-file
#define PP_KK 123410	// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11				// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)	// Precision to calculate projection
#define PP_EPS_COS					1E-3				// Precision to calculate COS
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7				// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_BIPROJECTION
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_ITER_COUNT			1				// Each PP_ITER_COUNT-th iteration to be outputted inside PC_bsf_MapF(*)
#define PP_PROJECTION_COUNT		1000000			// Each PP_PROJECTION_COUNT iteration to be outputted inside Flat_MaxProjection(*)
//------------------------------------------------------------------------------
// Computed objective value: 30.77211
// Maximal objective value:  30.8121498458282196963864
// Relative error = 0.001299
//------------------------------------------------------------------------------

/*============================== kb2 LP problem ============================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_KK 2925	// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11			// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
//--------------------------------------------------------------------------
#define PP_ITER_COUNT				1					// Each PP_ITER_COUNT-th iteration to be outputted inside PC_bsf_MapF(*)
//--------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91		// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_PROJECTION		PP_EPS_ZERO		// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector

//--------------------------------------------------------------------------

/*============================== sc50a LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//-------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7			// Precision for comparison with zero
#define PP_EPS_PROJECTION		PP_EPS_ZERO		// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector

//----------------------------------------------------------------------------
// Elapsed time: 17601
// Number of iterations: 3
// Computed objective value: 64.57507375411537
// Maximal objective value:  64.5750770585645
// Relative error = 5.12e-08
//----------------------------------------------------------------------------

/*============================== sc50b LP problem ============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7			// Precision for comparison with zero
#define PP_EPS_PROJECTION		PP_EPS_ZERO		// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector


//--------------------------------------------------------------------------
// Elapsed time: 2468.7376
// Number of iterations: 16
// Computed objective value: 68.62744550653315
// Maximal objective value:  70
// Relative error = 0.0196
//--------------------------------------------------------------------------

/*============================== sc105 LP problem ==========================*
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in *.mps
#define PP_N 103	// Number of variables in *.mps
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//--------------------------------------------------------------------------

//----------------------------------------------------------------------------

/*============================== share2b LP problem ==============================*
#define PP_PROBLEM_NAME		"share2b"	
#define PP_M 96		// Number of constraints in *.mps
#define PP_N 162	// Number of variables in *.mps
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9				// Precision for comparison with zero
#define PP_EPS_PROJECTION		PP_EPS_ZERO			// Precision to calculate projection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7				// Length of Objective Vector
//----------------------------------------------------------------------------/**/