/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
==============================================================================*/
#pragma once

#define PP_MPS_FORMAT

/*============================== adlittle LP problem ===============*
// Number of equations : 15
// Subspace dimension : 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 153	// Number of constraints
#define PP_N 97		// Space dimensiom
#define PP_MAX_OBJ_VALUE -225494.96316238038228101176621492
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10)// Precision for MakeHyperplaneList()
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+9			// Length of Objective Vector
#define PP_PROBE_LENGTH				0.001			// Length of probe shift
//--------------------------------------------------------------------------

/*============================== afiro LP problem ==================*/
// Number of equations : 8
// Subspace dimension : 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of constraints
#define PP_N 32		// Number of variables
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10)// Precision for MakeHyperplaneList()
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_BIPPROJECTION_ROUND	PP_EPS_ZERO		// Precision of rounding vector r
#define PP_EPS_MAXPROJECTION_ZERO	PP_EPS_ZERO		// Precision to calculate MFP projection
#define PP_EPS_W_ROUND				(PP_EPS_ZERO*10)// Precision of rounding w vector
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
#define PP_REAL_TIME				500				// This parameter limits the calculation time (compilator limit: 2 147 483 647)
#define PP_KK						28048800		// Maximal number of edges that include surface point (compilator limit:	2 147 483 647)
//--------------------------------------------------------------------------

/*============================== beaconfd LP problem =======================*
// Number of equations: 140
// Subspace dimension: 122
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 435	// Number of constraints
#define PP_N 262	// Number of variables
#define PP_MAX_OBJ_VALUE -33592.4858072
//---------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10000)// Precision for MakeHyperplaneList()
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
#define PP_PROBE_LENGTH				0.001			// Length of probe shift
#define PP_REAL_TIME				100				// This parameter limits the calculation time (compilator limit: 2 147 483 647)
//------------------------------------------------------------------/**/

/*============================== blend LP problem ==========================*
// Number of equations : 43
// Subspace dimension : 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 157	// Number of constraints
#define PP_N 83		// Number of variables
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
#define PP_EPS_COS					1E-10	// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
#define PP_KK						28048800		// Maximal number of edges that include surface point (compilator limit:	2 147 483 647)
//------------------------------------------------------------------/**/

/*============================== fit1d LP problem ==================*
// Number of equations : 1
// Subspace dimension : 1025
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 2076	// Number of equations (after conversion to standard form)
#define PP_N 1026	// Number of variables (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-7	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
#define PP_EPS_COS					1E-4	// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
//------------------------------------------------------------------/**/

/*============================== israel LP problem =========================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 316	// Number of constraints
#define PP_N 142	// Number of variables
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-6	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		2E-1	// Accuracy of belonging to hyperplane
#define PP_EPS_COS					0		// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
//------------------------------------------------------------------/**/

/*============================== kb2 LP problem ============================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 93	// Number of equations
#define PP_N 41	// Number of variables
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//-------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10)// Precision for MakeHyperplaneList()
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
#define PP_PROBE_LENGTH				0.001			// Length of probe shift
#define PP_REAL_TIME				1000		// This parameter limits the calculation time (compilator limit: 2 147 483 647)
#define PP_KK						2654208		// Maximal number of edges that include surface point (compilator limit:	2 147 483 647)
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------

/*============================== recipe LP problem =========================*
// Number of equations: 79
// Subspace dimension: 101
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 336	// Number of constraints
#define PP_N 180	// Number of variables
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#define PP_EPS_COS					1E-2	// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
//--------------------------------------------------------------------------

/*============================== sc50a LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 98	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//-------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10)// Precision for MakeHyperplaneList()
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*10)// Accuracy of belonging to hyperplane
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1			// Length of Objective Vector
#define PP_PROBE_LENGTH				0.001			// Length of probe shift
#define PP_REAL_TIME				500				// This parameter limits the calculation time (compilator limit: 2 147 483 647)
#define PP_KK						1114112			// Maximal number of edges that include surface point (compilator limit:	2 147 483 647)
//--------------------------------------------------------------------------

/*============================== sc50b LP problem ==========================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 98	// Number of constraints
#define PP_N 48	// Number of variables
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9			// Precision for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	(PP_EPS_ZERO*10)// Precision for MakeHyperplaneList()
#define PP_EPS_BIPPROJECTION_ROUND		PP_EPS_ZERO		// Precision of rounding vector r
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7			// Length of Objective Vector
#define PP_PROBE_LENGTH				0.001			// Length of probe shift
#define PP_REAL_TIME				500				// This parameter limits the calculation time (compilator limit: 2 147 483 647)
#define PP_KK						110			// Maximal number of edges that include surface point (compilator limit:	2 147 483 647)
//--------------------------------------------------------------------------
// Parameter PP_KK = 110 must be greater than or equal to 157890968768078210
//--------------------------------------------------------------------------

/*============================== sc105 LP problem ==============================*
// Distance to polytope: 9.96588878084987247957247e-08
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 105	// Number of equations (number of rows in *.mtx)
#define PP_N 163	// Number of variables (number of cols in *.mtx)
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		1E-7	// Accuracy of belonging to polytope
#define PP_EPS_COS					1E-2	// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
//----------------------------------------------------------------------------

/*============================== share2b LP problem ==============================*
#define PP_PROBLEM_NAME		"share2b"	
#define PP_M 96		// Number of equations (number of rows in *.mtx)
#define PP_N 162	// Number of variables (number of cols in *.mtx)
//#undef	PP_COS_MODE
/*============================== share2b LP problem ==========================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 175	// Number of constraints
#define PP_N 79		// Number of variables
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-9	// Accuracy for comparison with zero
#define PP_EPS_POINT_IN_HALFSPACE	PP_EPS_ZERO		// Precision for point to be in halfspace
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to polytope
#define PP_EPS_COS					1E-3	// Precision for cos == 1
#define PP_EPS_MOVING				(PP_EPS_ZERO/100)	// Precision for mooving
#define PP_EPS_POINT_INSIDE_CONE	(PP_EPS_ZERO/100)	// Precision for point to be inside cone
//----------------------------------------------------------------------------/**/