/*==============================================================================
Project: LiFe - New Linear Programming Solvers - New Linear Programming Solvers
Theme: Quest (No MPI)
Module: _Problems-Cone-LP.h (Problems from the LP-Cone-Problems Set)
Prefix: PP
Authors: Alexandr E. Zhulev & Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
LP problems were obtained using BSF-LPP-Generator.
==============================================================================*/
#pragma once

//=========================== Method Parameters =========================
#define PP_KK							55		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_EPS_ZERO						1E-8	// Accuracy for comparison with zero
#define PP_EPS_U0_ROUND					0		// Precision of rounding starting point
#define PP_EPS_TINY_PPROJ_VEC			1E-10	// Tiny pseudoprojecting vector

#define PP_EPS_POINT_IN_HALFSPACE		1E-10	// Precision for point to be in halfspace
#define PP_OBJECTIVE_VECTOR_LENGTH		100000	// Length of Objective Vector
#define PP_EPS_MAKE_H_PLANE_LIST		1E-5	// Precision for MakeHyperplaneList()
#define PP_MAX_B_NO_CORRECT				1E+308	// Maximum b that does not require correction
#define PP_EPS_POINT_IN_RND_HALFSPACE	1E-6	// Precision for random inequality in PointInPolytope()
#define PP_PROBE_LENGTH					0.1		// Length of probe shift

/*============================== cone3-0 LP problem ==============================*/
// Edge index: 34. Hyperplanes: {5, 6}.    Shift = 345.1703        F(x) = 105.45833
// Edge index: 0.  Hyperplanes: {6, 10}.   Shift = 296.36132       F(x) = 132.5
#define PP_PROBLEM_NAME	"cone3-0"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 14		// Number of variables (number of cols in *.mtx)
#define PP_OPTIMAL_OBJ_VALUE 		132.5
//---------------------------------------------------------------------------------/**/