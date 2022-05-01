// A MxN matrix is passed as the input. The program must rotate the matrix by 90 degrees in anti-clock wise direction and print the rotated matrix as the output.

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
// 9 5
// 5 3
// 4 1

// Example Input/Output 2:
// Input:
// 4
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Output:
// 4 8 12 16
// 3 7 11 15
// 2 6 10 14
// 1 5 9 13
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
    for(j=n-1;j>=0;j--){
        for(i=0;i<m;i++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
}
