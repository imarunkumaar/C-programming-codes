// A MxN matrix is passed as the input. The program must rotate the matrix by 90 degrees in clock wise direction and print the rotated matrix as the output.

// Input Format:
// First line will contain the value of M.
// Second line will contain the value of N.
// Next M lines will contain the N values with each value separated by one or more space.

// Output Format:
// N lines will contain the M values with each value separated by one or more space.

// Boundary Conditions:
// 2 <= M <= 15
// 2 <= N <= 15

// Example Input/Output 1:
// Input:
// 2
// 3
// 4 5 9
// 1 3 5

// Output:
// 1 4
// 3 5
// 5 9

// Example Input/Output 2:
// Input:
// 4
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Output:
// 13 9 5 1
// 14 10 6 2
// 15 11 7 3
// 16 12 8 4  
// code:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++){
        for(i=m-1;i>=0;i--){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
}
