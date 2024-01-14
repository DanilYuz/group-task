#pragma once

#include <iostream>
#include <vector>
#include "ComplexNum.h"

class Matrix {
public:
    Matrix(const Matrix& other);
    Matrix(int cols, int rows);
    Matrix(std::vector<std::vector<ComplexNum>> matr);
    Matrix();
    ~Matrix();

    Matrix& operator=(const Matrix& other);

    Matrix operator+(const Matrix& other) const;

    Matrix operator-(const Matrix& other) const;

    Matrix operator*(double scalar) const;

    Matrix operator*(const Matrix& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);

    Matrix transpose() const;

    Matrix LinearRegression();

    Matrix Inverse() const;

private:
    int rows;
    int cols;
    std::vector<std::vector<ComplexNum>> data;

    void swapRows(int row1, int row2);
    void scaleRow(int row, double scale);
    void addScaledRow(int row1, int row2, double scale);
    void reduceToRowEchelonForm();
    void reduceToReducedRowEchelonForm();
};