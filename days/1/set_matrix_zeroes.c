/****************************************************************
* File name     : set_matrix_zeroes.c
* Purpose       : Given a matrix if an element in the matrix is 0
                  then you will have to set its entire column and
                  row to 0 and then return the matrix.

                  Input: matrix = [[1,1,1],
                                   [1,0,1],
                                   [1,1,1]]

                  Output: matrix = [[1,0,1],
                                    [0,0,0],
                                    [1,0,1]]

* Author        : Linda J N
* Creation date : 10-09-2022
* Last modified : Saturday 10 September 2022 03:21:05 PM
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void printm(int M[3][3]) {
  printf("\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d   ", M[i][j]);
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  int M[3][3] = {{1, 0, 1}, {1, 0, 1}, {1, 0, 1}};

  printm(M);

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (M[i][j] == 0)
        for (int ii = 0; ii < 3; ii++)
          for (int jj = 0; jj < 3; jj++) {
            if (M[i][jj] != 0) M[i][jj] = -1;
            if (M[ii][j] != 0) M[ii][j] = -1;
          }

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (M[i][j] == -1) M[i][j] = 0;

  printm(M);

  return 0;
}
