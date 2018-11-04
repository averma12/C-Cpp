//
//  Matrix.cpp
//  Matrix
//
//  Created by Abhinav Verma on 04/11/18.
//  Copyright © 2018 com.abhinav. All rights reserved.
//

#include <stdio.h>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(){
    vector <vector<float>> initial_grid (10, vector <float>(5, 0.5));
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

Matrix::Matrix(vector <vector <float> > initial_grid) {
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
    }
void Matrix::setGrid(vector< vector<float> > new_grid) {
    grid = new_grid;
    rows = new_grid.size();
    cols = new_grid[0].size();
}

vector< vector<float> > Matrix::getGrid() {
    return grid;
}

vector<float>::size_type Matrix::getRows() {
    return rows;
}

vector<float>::size_type Matrix::getCols() {
    return cols;
}

