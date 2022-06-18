//-------------------------------------------------------
//Header file describing the Matrix class, its methods and subclasses
//-------------------------------------------------------

#pragma once

#include <vector>
#include <random>
#include "exception.h"

using namespace std;

#ifdef MYMATHLIBRARY_EXPORTS
#define MATRIX_API __declspec(dllexport)
#else
#define MATRIX_API __declspec(dllimport)
#endif

//description Matrix class
class MATRIX_API Matrix{

protected:

	int M; //number of matrix rows
	int N; //number of matrix columns
	vector<vector<double>> matrix; //for storing elements

public:
	Matrix();
	Matrix(int m, int n);
	Matrix(int m, int n, vector<double> mat);
	Matrix(initializer_list<double> vec);


	//operator overloads
	MATRIX_API friend ostream& operator<<(ostream& out, Matrix& object);
	MATRIX_API friend Matrix operator+(Matrix& object1, Matrix& object2);
	MATRIX_API friend Matrix operator-(Matrix& object1, Matrix& object2);
	MATRIX_API friend Matrix operator*(Matrix& object1, Matrix& object2);
	MATRIX_API friend Matrix& operator*(double num, Matrix& object);

	Matrix& operator*(double num);

	//-------------------------------------------------------
	//Matrix methods
	//-------------------------------------------------------

	//Hadamard product
	Matrix& Hadamard(Matrix& object1);

	//matrix transposition
	Matrix Transpose();

	//saving matrix to a binary file
	void save_file(string bins);

	//loading matrix from binary file
	void load_file(string bins);

	//-------------------------------------------------------
	//Friend Functions
	//-------------------------------------------------------
	MATRIX_API friend void swaprows(Matrix& object, size_t row1, size_t row2);
	MATRIX_API friend Matrix& RowReduce(Matrix& object, vector<double>& bearing_vec);
	MATRIX_API friend void rowDivision(Matrix& object, size_t row1, double b_el);
	MATRIX_API friend void SumRow(Matrix& object, size_t row1, size_t row2, double k);
	MATRIX_API friend double scalar_product(Matrix& object1, Matrix& object2);
	MATRIX_API friend double trace(Matrix& object);
	MATRIX_API friend double vector_module(Matrix& object);
	MATRIX_API friend double vector_norm_max(Matrix& object);
	MATRIX_API friend double matrix_module(Matrix& object);
	MATRIX_API friend double Det(Matrix& object);
	MATRIX_API friend Matrix& RowReduce(Matrix& object);
	MATRIX_API friend int Rank(Matrix& object);
	MATRIX_API friend Matrix& matrix_norm(Matrix& object);
	MATRIX_API friend double vector_norm(Matrix& object);
	MATRIX_API friend Matrix inverse_matrix(Matrix& object);

	MATRIX_API friend Matrix& ReadTextFile(Matrix& object, string filet);
	MATRIX_API friend ofstream& operator<<(string filet, Matrix& object);

	MATRIX_API friend void CreateBinary(Matrix& object, string bins);
	MATRIX_API friend Matrix& ReadBinaryFile(Matrix& object, string bins);

	MATRIX_API friend double Mean(Matrix& object, int col);
	MATRIX_API friend double Norm_PCA(Matrix& object, int col);
	MATRIX_API friend Matrix central_and_scaling(Matrix& object);
	MATRIX_API friend vector<double> take_column(Matrix& object, int col);
	MATRIX_API friend Matrix& insert_col(Matrix& object, Matrix& vec);

	int& get_mrows();
	int& get_ncols();
	void set_mrows(int value);
	void set_ncols(int value);
	vector <double>& get_col(size_t i);
	vector <double>& get_row(size_t i);

	void insert_element(size_t i, size_t j, double a);
	vector<vector<double>>& get_matrix();


};

//-------------------------------------------------------
//Description of subclasses of the Matrix class
//-------------------------------------------------------

//Identity matrix
class MATRIX_API Identity : public Matrix{

public:

	Identity(int m);

};

//Symmetric Matrix
class MATRIX_API Symmetric : public Matrix {

public:

	Symmetric(vector<double> sym);

};

//Upper Triangular Matrix
class MATRIX_API UpTriangular : public Matrix {

public:

	UpTriangular(vector<double> Uptr);

};

//Lower Triangular Matrix
class MATRIX_API LowTriangular : public Matrix {

public:

	LowTriangular(vector<double> Uptr);

};

//Diagonal Matrix
class MATRIX_API Diagonal : public Matrix{

public:

	Diagonal(vector<double> diagon);

};