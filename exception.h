//-------------------------------------------------------
//Exception header file
//-------------------------------------------------------

#pragma once

#include <exception>



#ifdef MYMATHLIBRARY_EXPORTS
#define EXCEPTION_API __declspec(dllexport)
#else
#define EXCEPTION_API __declspec(dllimport)
#endif

using namespace std;

class EXCEPTION_API MatrixExcept{
public:
	virtual char const* what() const noexcept = 0;
};

//dimension mismatch exception
class EXCEPTION_API MyException1 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Dimensional matrix Exception.";
	}
};

//exception of the impossibility to fill the upper triangular matrix
class EXCEPTION_API MyException2 : public MatrixExcept {
	const char* what() const noexcept override {
		return "UpTriangular Exception.";
	}
};

//exception for not being able to calculate the product of matrices
class EXCEPTION_API MyException3 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Multiplication Exception.";
	}
};

//exception of impossibility to fill the lower triangular matrix
class EXCEPTION_API MyException4 : public MatrixExcept {
	const char* what() const noexcept override {
		return "LowTriangular Exception.";
	}
};

//exception when trying to create a matrix of size 0 or less
class EXCEPTION_API MyException5 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Dimensions are not more than zero.";
	}
};

class EXCEPTION_API MyException6 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Operands must be vectors.";
	}
};

//exception for the case when the determinant of a matrix must not be zero
class EXCEPTION_API MyException7 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Determinant is equal to zero.";
	}
};

//file cannot be read exception
class EXCEPTION_API MyException8 : public MatrixExcept {
	const char* what() const noexcept override {
		return "The file cannot be opened";
	}
};

//exception for binary mode (passed a text file)
class EXCEPTION_API MyException9 : public MatrixExcept {
	const char* what() const noexcept override {
		return "Binary file required.";
	}
};