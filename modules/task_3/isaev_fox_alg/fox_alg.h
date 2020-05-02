// Copyright 2020 Isaev Ilya

#include <cmath>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

inline bool isSquared(const Matrix& mat) noexcept {
    return mat.size() == mat[0].size();
}

inline bool doubleComparison(const double& a, const double& b) noexcept {
    return std::abs(a-b) <= 0.001*std::abs(a+b);
}

Matrix getRandomMatrix(const int& n);
Matrix naiveMultiplication(const Matrix& mat1, const Matrix& mat2);
Matrix blockMultiplication(const Matrix& mat1, const Matrix& mat2);
bool matrixComparison(const Matrix& mat1, const Matrix& mat2);

Matrix foxAlgParallel(const Matrix& mat1, const Matrix& mat2);
