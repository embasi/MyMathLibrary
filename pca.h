//-------------------------------------------------------
//Header file with PCA as class which includes NIPALS algorithm
//-------------------------------------------------------

#pragma once
#include "matrix.h"
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>

#define EPS 1e-8

#ifdef MYMATHLIBRARY_EXPORTS
#define PCA_API __declspec(dllexport)
#else
#define PCA_API __declspec(dllimport)
#endif

Matrix& operator>>(string filet, Matrix& object);

class PCA_API PCA {
public:

	PCA(string filename);

	Matrix X0;
	Matrix X;
	Matrix X_save;
	Matrix T;
	Matrix P;
	Matrix h;

	vector<double> p1;
	vector<double> t1;

	Matrix get_E();
	Matrix get_T();
	Matrix get_P();

	void NIPALS(size_t A);
	Matrix Leverage();
	vector<double> Deviation();
	double TRV();
	double ERV();
};






