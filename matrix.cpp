#include<iostream>
using namespace std;
// create a 3 X 3 matrix and perform addition, subtraction, and multiplication
class Matrix {
private:
    int mat[3][3];
public:
    // Constructor to initialize the matrix
    Matrix() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                mat[i][j] = 0;
    }
    // Function to input matrix elements
    void input() {
        cout << "Enter elements of the 3x3 matrix:\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }
    // Function to display the matrix
    void display() const {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    // Function to add two matrices
    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }
    // Function to subtract two matrices
    Matrix operator-(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
        return result;
    }
    // Function to multiply two matrices
    Matrix operator*(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
            }
        }
        return result;
    }
};

int main(){

    Matrix m1, m2, result;
    cout << "Matrix 1:\n";
    m1.input();
    cout << "Matrix 2:\n";
    m2.input();
    cout << "\nMatrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    result = m1 + m2;
    cout << "\nResult of addition:\n";
    result.display();
    result = m1 - m2;
    cout << "\nResult of subtraction:\n";
    result.display();
    result = m1 * m2;
    cout << "\nResult of multiplication:\n";
    result.display();
    cout << "\nEnd of matrix operations.\n";

    
    return 0;
}