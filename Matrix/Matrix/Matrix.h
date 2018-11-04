//
//  Matrix.h
//  Matrix
//
//  Created by Abhinav Verma on 04/11/18.
//  Copyright © 2018 com.abhinav. All rights reserved.
//

#ifndef Matrix_h
#define Matrix_h
#include<vector>
using namespace std;
class Matrix {
private:
    vector<vector<float>> grid;
    vector<float>::size_type rows;
    vector<float>::size_type cols;
public:
    //Constructor function
    Matrix();
    Matrix (vector<vector<float> >);
    //Getter and setters
    
    void setGrid(vector<vector<float>>);
    vector<vector<float>> getGrid();
    vector<float>::size_type getRows();
    vector<float>::size_type getCols();
    
    //Functions to evaluate
    vector<vector<float>> matrix_transpose();
    vector<vector<float>> matrix_addition(Matrix);
    void matrix_print();
};


#endif /* Matrix_h */
