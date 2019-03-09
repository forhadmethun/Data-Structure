#include <bits/stdc++.h>
using namespace std;
/*
 * This file contains input about 2d matrix as a function parameter and return
 * a way of returing a  2d matrix from a function
 */


//a function for creating a 2d matrix and return as int** type... :)
int** create_2d_array(){
    int **array = new int*[10];
    for(int i=0;i<10;i++){
        array[i] = new int[10];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            array[i][j]  = 0;
        }
    }
    return array;
}
//multiplying two mtrix
int** mul(int** mat1, int** mat2,int r1,int c1,int r2,int c2){
    int** mult = create_2d_array();
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(int k = 0; k < c1; ++k)
            {
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }

    return mult;
}

//creating a multipication table with 2d matrix
int **create_multipication_table(int** array){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            array[i-1][j-1] = i*j;
        }
    }
    return array;
}
//check the multipication table
void time_table(){
    int** array1 = create_2d_array();
    int** answer_array = create_multipication_table(array1);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d ",answer_array[i][j]);
        }
        printf("\n");
    }
}
//print the matrix
void print_matrix(int** mat,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
//input two matrix and check the mul() function
void matrix_multipicatin(){
    //creating first matrix
    int** mult1 = create_2d_array();
    //creating second matrix
    int** mult2 = create_2d_array();
    //creating the matrix which will hold mult = mat1*mat2
    int** mult = create_2d_array();

    //initialize matrix 1
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            mult1[i][j]=0;
        }
    mult1[0][0] = 1;
    mult1[1][1] = 1;
    mult1[2][2] = 1;
    mult1[3][3] = 1;

    //initialize matrix 2;
//    for(int i = 0; i < 4; ++i)
//        for(int j = 0; j < 4; ++j)
//        {
//            mult2[i][j]=1;
//        }
//
//    mult2[0][0] = 1;
//    mult2[1][1] = 2;
//    mult2[2][2] = 3;
//    mult2[3][3] = 4;
    //initialize matrix two
    mult2[0][0] = 1;
    mult2[1][0] = 2;
    mult2[2][0] = 3;
    mult2[3][0] = 4;


    //printing the content of the matrix
    print_matrix(mult1,4,4);
    printf("\n");
    print_matrix(mult2,4,1);
    printf("\n");


    //multiplying the matrix
    mult = mul(mult1,mult2,4,4,4,1);
    print_matrix(mult,4,1);

}

//array of matrix
void vector_of_matrix(){
    int **mat = create_2d_array();
    mat[0][0] = 1;
    vector< int** > vi;
    vi.push_back(mat);
    mat = create_2d_array();
    mat[0][0] = 2;
    vi.push_back(mat);

    for(int i=0;i<vi.size();i++){
        print_matrix(vi[i],4,4);
        printf("\n");
    }

}
//we should clear the memory after creating...2d matrix with new operator
void delete_memory(int** mat,int row){
    for(int i=0;i<row;i++){
        delete[] mat[i];
        printf("freeing memory\n");
    }

//    int **mat = create_2d_array();
//    print_matrix(mat,10,10);
//    delete_memory(mat,10);
//    print_matrix(mat,10,10);
}

//for testing all the functions
int main(){
    //time_table();
    //matrix_multipicatin();
    //vector_of_matrix();



    return 0;
}