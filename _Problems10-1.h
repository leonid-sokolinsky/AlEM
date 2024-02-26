/*==============================================================================
Project: LiFe
Theme: Edge movement method (No MPI)
Module: Problems10-1.h (LP problems of dimension 10 with 1 randome inequality)
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
#define PP_EPS_P_PROJ_ON_POLYTOPE		1E-9	// Precision for calculating pseudoprojection onto polytope
#define PP_OBJECTIVE_VECTOR_LENGTH		100000	// Starting length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				200		// Maximum b that does not require correction
#define PP_RND_EPS_POINT_IN_POLYTOPE	1E-6	// Precision for random inequality in PointInPolytope()

/*============================== rnd10-0 LP problem ==============================*
// Start point:	0	0	0	0	0	200	200	200	200	200
// Exact solution:	100  200  200  200  200  200  200  200  200  200
// Edge hyperplanes: {5, 6, 7, 8, 9, 11, 12, 13, 14}.      Shift = 200     F(x) = 9000
// Edge hyperplanes: {3, 4, 5, 6, 7, 8, 9, 11, 12}.        Shift = 200     F(x) = 10400
// Edge hyperplanes: {2, 3, 4, 5, 6, 7, 8, 9, 11}. Shift = 200     F(x) = 10800
// Edge hyperplanes: {1, 2, 3, 4, 5, 6, 7, 8, 9}.  Shift = 100     F(x) = 10900
#define PP_PROBLEM_NAME	"rnd10-0"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 		10900
//------------------------------------------------------------------/**/

/*============================== rnd10-1-1 LP problem ==============================*
// Start point:	200	0	200	200	0	200	200	0	0	200
// Edge hyperplanes: {0, 2, 3, 5, 6, 9, 12, 15, 18}.       Shift = 158.56381       F(x) = 9551.3829
#define PP_PROBLEM_NAME	"rnd10-1-1"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 9551.38289
//------------------------------------------------------------------/**/

/*============================== rnd10-1-2 LP problem ==============================*
// Start point:	0	200	200	200	0	0	200	200	0	200
// Edge hyperplanes: {1, 2, 3, 6, 7, 9, 15, 16, 19}.       Shift = 137.81625       F(x) = 9089.0813
// Edge hyperplanes: {1, 2, 3, 6, 7, 9, 10, 16, 19}.       Shift = 227.45689       F(x) = 9123.8046
#define PP_PROBLEM_NAME	"rnd10-1-2"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 9123.804558373
//------------------------------------------------------------------/**/

/*============================== rnd10-1-3 LP problem ==============================*
// Start point:	200	200	200	200	0	200	0	200	0	200
// Edge hyperplanes: {0, 1, 2, 3, 5, 7, 9, 17, 19}.        Shift = 53.596439       F(x) = 9960.7893
#define PP_PROBLEM_NAME	"rnd10-1-3"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 9960.7893
//------------------------------------------------------------------/**/

/*============================== rnd10-1-4 LP problem ==============================*
// Start point:	200	0	200	200	200	0	0	0	200	0
// Edge hyperplanes: {0, 2, 3, 4, 8, 12, 16, 17, 20}.      Shift = 200     F(x) = 9000
// Edge hyperplanes: {0, 2, 3, 4, 7, 8, 12, 16, 20}.       Shift = 72.498261       F(x) = 9289.993
// Edge hyperplanes: {0, 2, 3, 4, 7, 8, 10, 12, 20}.       Shift = 210.25074       F(x) = 9430.5977
#define PP_PROBLEM_NAME	"rnd10-1-4"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 9430.597672
//------------------------------------------------------------------/**/

/*============================== rnd10-1-5 LP problem ==============================*
// Start point:	200	200	200	0	0	0	200	200	200	200
// Edge hyperplanes: {0, 1, 2, 6, 7, 8, 9, 14, 15}.        Shift = 96.40766        F(x) = 10089.223
// Edge hyperplanes: {0, 1, 2, 6, 7, 8, 9, 10, 15}.        Shift = 215.51417       F(x) = 10248.355
#define PP_PROBLEM_NAME	"rnd10-1-5"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE	10248.35532
//------------------------------------------------------------------/**/

/*============================== rnd10-1-6 LP problem ==============================*
// Start point:	200	200	200	0	200	0	200	200	0	0
// Edge hyperplanes: {0, 1, 2, 4, 6, 7, 14, 19, 20}.       Shift = 200     F(x) = 9800
// Edge hyperplanes: {0, 1, 2, 4, 5, 6, 7, 14, 19}.        Shift = 37.825948       F(x) = 9913.4778
// Edge hyperplanes: {0, 1, 2, 4, 6, 7, 10, 14, 19}.       Shift = 187.5807        F(x) = 10022.936
#define PP_PROBLEM_NAME	"rnd10-1-6"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 	10022.935663
//------------------------------------------------------------------/**/