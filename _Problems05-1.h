/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method
Module: _Problems05-1.h (LP problems of dimension 5 with 1 random inequality: LP-Rnd-Problems Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
Start vertex *_v.mtx for these problems was calculated by VeSP https://github.com/leonid-sokolinsky/VeSP
LP problems were obtained using LPP-Generator https://github.com/leonid-sokolinsky/LPP-Generator
LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/Rnd-LP
================================================================================*/
#pragma once

//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//#define PP_BIPROJECTION
//------------------------------------------------------------------------------

//=========================== Problem Parameters ===============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// P_EPS_ZERO - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH.
// PP_EPS_PROJECTION - inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10				// Accuracy for comparison with zero
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_ZERO*100)	// Accuracy of belonging to hyperplane
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*1000)	// Precision to calculate pseudoprojection
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+9				// Length of Objective Vector
//------------------------------------------------------------------------------
#define PP_KK						5		// Maximal number of edges that include surface point (compilator limit: 2 147 483 647)
#define PP_M						6		// Number of equations (number of rows in *.mtx)
#define PP_N						11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------------------

/*============================== rnd5-0 LP problem =============================*
#define PP_PROBLEM_NAME	"rnd5-0"
#define PP_MAX_OBJ_VALUE 		2900
//------------------------------------------------------------------------------

/*============================== rnd5-1-1 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-1-1"
#define PP_MAX_OBJ_VALUE 2584.34948970921050204197
//------------------------------------------------------------------------------

/*============================== rnd5-1-2 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-1-2"
#define PP_MAX_OBJ_VALUE 2657.52561253995372680947
//------------------------------------------------------------------------------

/*============================== rnd5-1-3 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-1-3"
#define PP_MAX_OBJ_VALUE 2424.91915381191120104631
//------------------------------------------------------------------------------

/*============================== rnd5-1-4 LP problem ===========================*/
#define PP_PROBLEM_NAME	"rnd5-1-4"
#define PP_MAX_OBJ_VALUE 2300.11275869818382489029
//------------------------------------------------------------------------------

/*============================== rnd5-1-5 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-1-5"
#define PP_MAX_OBJ_VALUE 2626.47323620733186544385
//------------------------------------------------------------------------------

/*============================== rnd5-1-6 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-1-6"
#define PP_MAX_OBJ_VALUE 2675.35199418665160919772
//------------------------------------------------------------------------------

/*===============================================================================*/