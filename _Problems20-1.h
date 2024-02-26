/*==============================================================================
Project: LiFe
Theme: Edge movement method (No MPI)
Module: Problems20-1.h (LP problems of dimension 20 with 1 randome inequality)
Prefix: PP
Authors: Nikolay A. Olkhovsky & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
Initial surface points for these problems were calculated using BSF-Apex-Quest.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_EPS_ZERO			1E-8		// Accuracy for comparison with zero
#define PP_EPS_P_PROJ_ON_EDGE			1E-12	// Precision for calculating pseudoprojection onto edge
#define PP_EPS_P_PROJ_ON_POLYTOPE		1E-9	// Precision for calculating pseudoprojection onto edge
#define PP_OBJECTIVE_VECTOR_LENGTH		100000	// Starting length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				200		// Maximum b that does not require correction
#define PP_RND_EPS_POINT_IN_POLYTOPE	1E-6	// Precision for random inequality in PointInPolytope()
#define PP_PROBE_LENGTH					1		// length of probe shift

/*============================== rnd20-0 LP problem ==============================*
// Solution:	100  200  ...  200
#define PP_PROBLEM_NAME	"rnd20-0"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		41900			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd20-1-1 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-1"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		29804.7			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd20-1-2 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-2"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		37823.888		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd20-1-3 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-3"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		40049.978		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd20-1-4 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-4"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		35207.921		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd20-1-5 LP problem ==============================*
#define PP_PROBLEM_NAME	"rnd20-1-5"
#define PP_M 21		// Number of equations (number of rows in *.mtx)
#define PP_N 41		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		33262.391		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/