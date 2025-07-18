/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: AlEM - Along Edges Movement method (MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Authors: Alexander E. Zhulev & Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Problem variables ====================================
static int PD_m;					// Total number of constraints
static int PD_meq;					// Number of constraints being equations
static int PD_n;					// Space dimension
static int PD_neq;					// Dimension of the subspace of intersection of equation-hyperplanes (PD_n = PD_neq + PD_meq)
static int PD_iterNo;				// Number of iterations
static double PD_objF_cur;			// Objective function value in curerent point
//========================== Problem structures ====================================
static PT_matrix_T PD_A;			// Matrix of constraint coefficients
static bool PD_isEquation[PP_MM];	// Constraint is equation
static PT_column_T PD_b;			// Column of constant terms of system Ax <= PD_b
static PT_vector_T PD_c;			// Gradient of Objective Function
static PT_vector_T PD_u_cur;		// Current point
static PT_vector_T PD_hi;			// Higher bound
static PT_vector_T PD_lo;			// Lower bound
static PT_column_T PD_norm_a;		// Column of norms of matrix rows
static PT_vector_T PD_objVector;	// Used for pseudoprojecting
static int PD_medco_u;				// Number of edge combinations in the vertex u

static int PD_neHyperplanes_u[PP_MM];	// Index of inequality-hyperplanes that include point u
static int PD_mneh_u;					// Number of inequality-hyperplanes that include point u

static int PD_edgeNeHyperplanes[PP_N - 1];	// Index of inequality-hyperplanes used for pseudoprojection
static int PD_mne_p;						// Number of inequality-hyperplanes used for pseudoprojection

static int PD_edgeAlHyperplanes[PP_N - 1];	// Index of all hyperplanes used for pseudoprojection
static PT_bitscale_T PD_edgeBitscale;		// Bit scale that tags all hyperplanes forming the edge
static int PD_TWIDDLE_p[PP_MM + 2];			// Auxiliary array for TWIDDLE_Run algorithm

//------------------------- Orthogonal projection onto line ---------------
static double PD_D[PP_N][PP_N];		// Main matrix D
static double PD_B[PP_N];			// Column B
static double PD_Dv_B[PP_N];		// Dv-B
static double PD_DT[PP_N][PP_N];	// Transposed D
static double PD_DDT[PP_N][PP_N];	// D*DT
//static double PD_DDT_[PP_N][PP_N];	// Copy of D*DT
static double PD_DDTI[PP_N][PP_N];  // Inverse matrix to D*DT
static double PD_DTDDTI[PP_N][PP_N];
//========================== Input/Output =====================================
static string PD_problemName;