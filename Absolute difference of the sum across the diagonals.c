// You are given a square matrix of size N×N. Calculate the absolute difference of the sums across the two main diagonals.

// Boundary Condition(s):
// 2 <= N <= 20

// Input Format:
// The first line will contain the value of N.
// The next N lines will contain the N values separated by one or more spaces.

// Output Format:
// The absolute difference of the sums across the two main diagonals.

// Example Input/Output 1:
// Input:
// 2
// 10 9
// 4  22

// Output:
// 19

// Explanation:
// The sum along the first main diagonal is 10+22 = 32.
// The sum along the second main diagonal is 4+9=13.
// The absolute difference is 32-13= 19.

// Example Input/Output 2:
// Input:
// 2
// -10 6
// 4  -22

// Output:
// 22
// code:

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int len;
    scanf("%d",&len);
    int arr[len][len],i,j,c1=0,c2=0;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0,j=len-1;i<len;i++,j--){
        c1+=arr[i][i];
        c2+=arr[i][j];
    }
    printf("%d",abs(abs(c1)-abs(c2)));
}
