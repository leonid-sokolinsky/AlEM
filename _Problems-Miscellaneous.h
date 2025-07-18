/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method
Module: _Problems-Miscellaneous.h (Miscellaneous LP problems)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
Start vertex *_v.mtx for these problems was calculated by VeSP https://github.com/leonid-sokolinsky/VeSP
LP problems are available in https://github.com/leonid-sokolinsky/Set-of-LP-Problems/tree/main/Miscellaneous-LP
================================================================================*/
#pragma once

//=========================== problem Parameters ===============================
// PP_OBJECTIVE_VECTOR_LENGTH - direct dependence on dimension PD_n.
// PP_EPS_PROJECTION -	inverse dependence on PP_OBJECTIVE_VECTOR_LENGTH. 
//						This parameter affects terminate condition when 
//						calculating pseudoprojection.
#define PP_EPS_RELATIVE_ERROR			1E-5				// Used if defined PP_CHECK_MAX_OBJ_VALUE 

#define PP_SCALE_FACTOR					1					// #ifdef PP_SAVE_LOCAL_RESULT; makes 9 digits before the decimal point of PP_MAX_OBJ_VALUE
//------------------------------ ifdef PP_DEBUG --------------------------------
#define PP_PROJECTION_COUNT				100000				// Each PP_PROJECTION_COUNT iteration to be outputted inside Flat_MaxProjection(*)
//==============================================================================

/*============================== nguyen5 LP problem ============================*
#define PP_PROBLEM_NAME	"nguyen5"
#define PP_MPS_FORMAT
#define PP_M 4		// Number of constrains
#define PP_N 5		// Number of variables
#define PP_MAX_OBJ_VALUE 21.4549732313107242021033
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//#define PP_MAXPROJECTION 
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 4
// Computed objective value: 21.4549732313107242021033
// Maximal objective value:  21.4549732313107242021033
// Relative error = 0
// Distance to polytope: 1.9565951e-14
//------------------------------------------------------------------------------

/*============================== simpleCube LP problem =========================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simpleCube"
#ifdef PP_MPS_FORMAT
#define PP_M 3		// Number of constrains
#define PP_N 3		// Number of variables
#else
#define PP_M 3	// Number of rows in *.mtx
#define PP_N 6	// Number of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		60000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 60000
// Maximal objective value:  60000
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== square3D LP problem =========================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"square3D"
#define PP_M 4		// Number of constrains
#define PP_N 3		// Number of variables
#define PP_MAX_OBJ_VALUE 		50000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 50000
// Maximal objective value:  50000
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== featheredCube LP problem ======================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"featheredCube"
#ifdef PP_MPS_FORMAT
#define PP_M 15		// Number of constrains
#define PP_N 3		// Number of variables
#else
#define PP_M 3	// Number of rows in *.mtx
#define PP_N 6	// Number of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		60000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 60000
// Maximal objective value:  60000
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== cubeAndHyperplane LP problem ===================*
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"cubeAndHyperplane"
#define PP_M 4		// Number of constrains
#define PP_N 4		// Number of variables
#define PP_MAX_OBJ_VALUE 		90000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-14					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: 89999.9999999999854480848
// Maximal objective value:  90000
// Relative error = 1.62e-16
// Distance to polytope: 5.6843419e-14
//------------------------------------------------------------------------------

/*============================== simple1FxVar LP problem =======================*
// Simple LP problem & x_1=150
#define PP_MPS_FORMAT
#define PP_PROBLEM_NAME	"simple1FxVar"
#define PP_M 4		// Number of constraints
#define PP_N 3		// Number of variables
#define PP_MAX_OBJ_VALUE 52500
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 52500
// Maximal objective value:  52500
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== simple1 LP problem ============================*
#define PP_PROBLEM_NAME	"simple1"
#define PP_MPS_FORMAT
#ifdef PP_MPS_FORMAT
#define PP_M 4		// Number of constrains
#define PP_N 3		// Number of variables
#else
#define PP_M 4		// Number of rows in *.mtx
#define PP_N 7		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		55000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 55000
// Maximal objective value:  55000
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== simple1.1 LP problem ==========================*
// Simple LP problem with alternating objective function
#define PP_PROBLEM_NAME	"simple1.1"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		40000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: 40000
// Maximal objective value:  40000
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== simple2 LP problem ============================*
// Simple LP problem & x_3=200; x_2>=110; x_0<=190
#define PP_PROBLEM_NAME	"simple2"
#define PP_MPS_FORMAT
#ifdef PP_MPS_FORMAT
#define PP_M 5		// Number of constrains
#define PP_N 4		// Number of variables
#else
#define PP_M 5		// Number of rows in *.mtx
#define PP_N 8		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		63500
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 63500
// Maximal objective value:  63500
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== simple3 LP problem ============================*/
#define PP_PROBLEM_NAME	"simple3"
#define PP_MPS_FORMAT
#ifdef PP_MPS_FORMAT
#define PP_M 5		// Number of constrains
#define PP_N 5		// Number of variables
#else
#define PP_M 6		// Number of rows in *.mtx
#define PP_N 8		// Nnumber of cols in *.mtx
#endif
#define PP_MAX_OBJ_VALUE 		55000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 55000.0000000000072759576
// Maximal objective value:  55000
// Relative error = 1.32e-16
//------------------------------------------------------------------------------

/*============================== simple1min LP problem =========================*
#define PP_PROBLEM_NAME	"simple1min"
#define PP_M 5		// Number of equations (number of rows in *.mtx)
#define PP_N 8		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		-5000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: -4999.9999999999990905053
// Maximal objective value:  -5000
// Relative error = 1.82e-16
//------------------------------------------------------------------------------

/*============================== simple_zcv LP problem =========================*
#define PP_PROBLEM_NAME	"simple_zcv"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		50000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 50000
// Maximal objective value:  50000
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== simple_lcv LP problem =========================*
#define PP_PROBLEM_NAME	"simple_lcv"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		50000.2
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 50000.199999999997089617
// Maximal objective value:  50000.199999999997089617
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== simple_lcv_neg LP problem =====================*
#define PP_PROBLEM_NAME	"simple_lcv_neg"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		49998
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: 49998
// Maximal objective value:  49998
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== angle03 LP problem ============================*
#define PP_PROBLEM_NAME	"angle03"
#define PP_M 3		// Number of equations (number of rows in *.mtx)
#define PP_N 6		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		3000
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 3000
// Maximal objective value:  3000
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== angle04 LP problem ============================*
#define PP_PROBLEM_NAME	"angle04"
#define PP_M 3		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 		3300
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 1
// Computed objective value: 3300
// Maximal objective value:  3300
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== cone3-0 LP problem ============================*
#define PP_PROBLEM_NAME	"cone3-0"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 14		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 132.5
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 132.5
// Maximal objective value:  132.5
// Relative error = 0
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky56 LP problem =================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky56"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 990.797118755359520037018
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 990.797118755359520037018
// Maximal objective value:  990.797118755359520037018
// Relative error = 0
// Distance to polytope: 8.6583367e-14
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky289 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky289"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 671.952494859794796866481
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 671.952494859794796866481
// Maximal objective value:  671.952494859794796866481
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky331 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky331"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 714.53547796531813673937
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 4
// Computed objective value: 714.53547796531813673937
// Maximal objective value:  714.53547796531813673937
// Relative error = 0
// Distance to polytope: 0
//------------------------------------------------------------------------------

/*============================== rnd3_3_Olkhovsky336 LP problem ================*
#define PP_PROBLEM_NAME	"rnd3_3_Olkhovsky336"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 998.193448648739604323055
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: 998.193448648739604323055
// Maximal objective value:  998.193448648739604323055
// Relative error = 0
// Distance to polytope: 5.6843419e-14
//------------------------------------------------------------------------------

/*============================== rnd3-10 LP problem ============================*
#define PP_PROBLEM_NAME	"rnd3-10"
#define PP_M 13		// Number of equations (number of rows in *.mtx)
#define PP_N 16		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 852.028917900972714960517
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 3
// Computed objective value: 852.028917900972714960517
// Maximal objective value:  852.028917900972714960517
// Relative error = 0
// Distance to polytope: 9.4267352e-14
//------------------------------------------------------------------------------

/*============================== rnd5-100 LP problem ===========================*
#define PP_PROBLEM_NAME	"rnd5-100"
#define PP_M 105		// Number of equations (number of rows in *.mtx)
#define PP_N 110		// Number of variables (number of cols in *.mtx)
#define PP_MAX_OBJ_VALUE 1848.43708056819878038368
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Precision for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Accuracy of belonging to hyperplane
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_GRADIENT
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 12
// Computed objective value: 1848.43708056819878038368
// Maximal objective value:  1848.43708056819878038368
// Relative error = 0
// Distance to polytope: 8.8127448e-13
//------------------------------------------------------------------------------

/*==============================================================================*/