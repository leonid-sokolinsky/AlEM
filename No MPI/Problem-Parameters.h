/*==============================================================================
Project: LiFe
Theme: Edge movement method (No MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Authors: Nikolay A. Olkhovsky & Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
//#define OUTPUT
// No MPI
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Rnd-Problems/"

//=========================== Problem Parameters =========================
// The following LP problems were obtained using BSF-LPP-Generator.
// The initial surface points for these problems were calculated using BSF-Apex-Quest.

/*============================== rnd3-0 LP problem ==============================*
// Start point: 200 0 0		
// Solution:   100   200   200
// Edge hyperplanes: {0, 5}.       F(x) = 800
// Edge hyperplanes: {0, 2}.       F(x) = 1000
// Edge hyperplanes: {2, 3}.       F(x) = 1100
#define PP_PROBLEM_NAME	"rnd3-0"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		1100			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-0 LP problem ==============================*
// Start point:	200	0...0
// Exact solution:   100   200   200   200   200
// Edge hyperplanes: {0, 7, 8, 9}. F(x) = 1200
// Edge hyperplanes: {0, 4, 7, 8}. F(x) = 2000
// Edge hyperplanes: {0, 3, 4, 7}. F(x) = 2600
// Edge hyperplanes: {0, 2, 3, 4}. F(x) = 2800
// Edge hyperplanes: {2, 3, 4, 5}. F(x) = 2900
#define PP_PROBLEM_NAME	"rnd5-0"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO		// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2900			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-1 LP problem ==============================*
// Start point:	200               0               0             200             200
// Edge hyperplanes: {0, 3, 4, 7}. Shift = 89.012297       F(x) = 2578.0246
#define PP_PROBLEM_NAME	"rnd5-1-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2578.0246		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-2 LP problem ==============================*
// Start point:	0             200               0             200             200
// Current objective value: 2650.402
// Edge hyperplanes: {1, 3, 4, 5}. Shift = 0.46132502      F(x) = 2125.6041
#define PP_PROBLEM_NAME	"rnd5-1-2"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*100	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2650.402		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-3 LP problem ==============================*
// Start point:	200           200           200             0             0
// Edge hyperplanes: {0, 1, 2, 9}. Shift = 74.973051       F(x) = 2424.9192
#define PP_PROBLEM_NAME	"rnd5-1-3"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2424.9192		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-4 LP problem ==============================*
// Start point:	200             0             0           200           200
// Edge hyperplanes: {0, 3, 4, 7}. Shift = 75.02819        F(x) = 2300.1128
#define PP_PROBLEM_NAME	"rnd5-1-4"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2300.1128		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-5 LP problem ==============================*
// Start point:	0           200           200             0             0
// Edge hyperplanes: {1, 2, 9, 10}.        Shift = 200     F(x) = 2400
// Edge hyperplanes: {0, 1, 2, 10}.        Shift = 107.84709       F(x) = 2615.6942
#define PP_PROBLEM_NAME	"rnd5-1-5"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2615.6942		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-1-6 LP problem ==============================*
// Start point:	200           200           200             0             0
// Edge hyperplanes: {0, 1, 2, 9}. Shift = 95.409829       F(x) = 2590.8197
#define PP_PROBLEM_NAME	"rnd5-1-6"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		2590.8197		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

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
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO		// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		10900			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd10-1-1 LP problem ==============================*
// Start point:	200	0	200	200	0	200	200	0	0	200
// Edge hyperplanes: {0, 2, 3, 5, 6, 9, 12, 15, 18}.       Shift = 158.56381       F(x) = 9551.3829
#define PP_PROBLEM_NAME	"rnd10-1-1"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		9551.3829		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd10-1-2 LP problem ==============================*
// Start point:	0	200	200	200	0	0	200	200	0	200
// Edge hyperplanes: {1, 2, 3, 6, 7, 9, 15, 16, 19}.       Shift = 137.81625       F(x) = 9089.0813
#define PP_PROBLEM_NAME	"rnd10-1-2"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		9089.0813		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd10-1-3 LP problem ==============================*
// Start point:	200	200	200	200	0	200	0	200	0	200
// Edge hyperplanes: {0, 1, 2, 3, 5, 7, 9, 17, 19}.        Shift = 53.596439       F(x) = 9960.7893
#define PP_PROBLEM_NAME	"rnd10-1-3"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO		// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		9960.7893		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd10-1-4 LP problem ==============================*
// Start point:	200	0	200	200	200	0	0	0	200	0
// Edge hyperplanes: {0, 2, 3, 4, 8, 12, 16, 17, 20}.      Shift = 200     F(x) = 9000
// Edge hyperplanes: {0, 2, 3, 4, 7, 8, 12, 16, 20}.       Shift = 72.498261       F(x) = 9289.993
#define PP_PROBLEM_NAME	"rnd10-1-4"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		9289.993		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd10-1-5 LP problem ==============================*/
// Start point:	200	200	200	0	0	0	200	200	200	200
// Edge hyperplanes: {0, 1, 2, 6, 7, 8, 9, 14, 15}.        Shift = 96.40766        F(x) = 10089.223
#define PP_PROBLEM_NAME	"rnd10-1-5"
#define PP_M 11		// Number of equations (number of rows in *.mtx)
#define PP_N 21		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_VERTIX				PP_EPS_ZERO*10	// Precision of checking that point is a vertex
#define PP_OPTIMAL_OBJ_VALUE		10089.223		// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

//================================ Common Paramrters ===========================
#define PP_MM (2*(PP_M+PP_N))			// Maximal number of inequalities
#define PP_KK 131072					// Maximal number of edges that include start point: 2^17 = 131072
#define PP_PROBE_LENGTH			1		// length of probe shift
#define PP_MAX_ITER_COUNT	10000000000 // Maximal count of iterations
#define PP_DBL_MAX			1E+308		// Highest value
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	30	// Number of Elements to output
//#define PP_MATRIX_OUTPUT	// To output Matrix
#define PP_SETW 16
//------------------------- Matrix format ----------------
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_SP		"_sp.mtx" // Surface point
//-------------------------- Jobs  -----------------------
#define PP_JOB_GET_BEST_DIRECTION	0 
//------------- Vector Projection Onto Halfspace exit codes -------------
#define PP_EXITCODE_DEGENERATE_INEQUALITY	0
#define PP_EXITCODE_INSIDE_HALFSPACE		1
#define PP_EXITCODE_NATURAL_PROJECTING		2
#define PP_EXITCODE_PARALLEL				3
#define PP_EXITCODE_RECESSIVE				4
#define PP_EXITCODE_ON_HYPERPLANE			5