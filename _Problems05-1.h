/*==============================================================================
Project: LiFe - New Linear Programming Solvers - New Linear Programming Solvers
Theme: AlEM method - Along Edges Movement (No MPI)
Module: Problems05-1.h (LP problems of dimension 5 with 1 randome inequality: LP-Rnd-Problems Set)
Prefix: PP
Authors: Alexandr E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
Initial surface points for these problems were calculated using BSF-Apex-Quest.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_KK							5		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_EPS_ZERO						1E-8	// Accuracy for comparison with zero
#define PP_EPS_U0_ROUND					0		// Precision of rounding starting point
#define PP_EPS_PPROJ_ON_EDGE_RESIDUAL	1E-12	// Precision for calculating pseudoprojection onto edge
#define PP_EPS_PPROJ_ON_EDGE_TINY_VEC		1E-10	// Direction precision for calculating pseudoprojection onto edge
#define PP_EPS_PPROJ_ON_POLYTOPE		1E-9	// Precision for calculating pseudoprojection onto polytope
#define PP_EPS_POINT_IN_HALFSPACE		1E-10	// Precision for point to be in halfspace
#define PP_OBJECTIVE_VECTOR_LENGTH		100000	// Length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				200		// Maximum b that does not require correction
#define PP_RND_EPS_POINT_IN_POLYTOPE	1E-6	// Precision for random inequality in PointInPolytope()
#define PP_PROBE_LENGTH					1		// length of probe shift

/*============================== rnd5-0 LP problem ==============================*
// Starting point:	200		0	0	0	0
// Exact solution:	100   200   200   200   200
// Generating hyperplanes: {0, 7, 8, 9}.   Shift = 200     F(x) = 1200
// Generating hyperplanes: {0, 4, 7, 8}.   Shift = 200     F(x) = 2000
// Generating hyperplanes: {0, 3, 4, 7}.   Shift = 200     F(x) = 2600
// Generating hyperplanes: {0, 2, 3, 4}.   Shift = 100     F(x) = 2800
// Generating hyperplanes: {2, 3, 4, 5}.   Shift = 141.42135       F(x) = 2900
#define PP_PROBLEM_NAME	"rnd5-0"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 		2900
//------------------------------------------------------------------/**/

/*============================== rnd5-1-1 LP problem ==============================*
// Starting point:	200               0               0             200             200
// Edge hyperplanes: {0, 3, 4, 7}. Shift = 89.012297       F(x) = 2578.0246
// Edge hyperplanes: {0, 3, 4, 5}. Shift = 204.71425       F(x) = 2584.3495
#define PP_PROBLEM_NAME	"rnd5-1-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE	2584.3494897
//------------------------------------------------------------------/**/

/*============================== rnd5-1-2 LP problem ==============================*
// Starting point:	0	199.9969	183.6384	188.1660	191.2821
// Starting point is not vertex! Number of including hyperplanes 2 < n = 5
#define PP_PROBLEM_NAME	"rnd5-1-2"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 			2657.5256116
//------------------------------------------------------------------/**/

/*============================== rnd5-1-3 LP problem ==============================*
// Starting point:	200           200           200             0             0
// Edge hyperplanes: {0, 1, 2, 9}. Shift = 74.973058       F(x) = 2424.9192
#define PP_PROBLEM_NAME	"rnd5-1-3"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 2424.9191538
//------------------------------------------------------------------/**/

/*============================== rnd5-1-4 LP problem ==============================*
// Starting point:	200             0             0           200           200
// Edge hyperplanes: {0, 3, 4, 7}. Shift = 75.028196       F(x) = 2300.1128
#define PP_PROBLEM_NAME	"rnd5-1-4"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 2300.1127587
//------------------------------------------------------------------/**/

/*============================== rnd5-1-5 LP problem ==============================*
// Starting point:	0           200           200             0             0
// Edge hyperplanes: {1, 2, 9, 10}.		Shift = 200			F(x) = 2400
// Edge hyperplanes: {0, 1, 2, 10}.		Shift = 107.84709	F(x) = 2615.6942
// Edge hyperplanes: {1, 2, 5, 10}.		Shift = 108.80206	F(x) = 2626.4732
#define PP_PROBLEM_NAME	"rnd5-1-5"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 2626.4732362
//------------------------------------------------------------------/**/

/*============================== rnd5-1-6 LP problem ==============================*/
// Starting point:	200           200           200             0             0
// Edge hyperplanes: {0, 1, 2, 9}. Shift = 95.409829       F(x) = 2590.8197
// Edge hyperplanes: {0, 1, 2, 5}. Shift = 208.16627       F(x) = 2675.352
#define PP_PROBLEM_NAME	"rnd5-1-6"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 2675.3519942	
//------------------------------------------------------------------/**/