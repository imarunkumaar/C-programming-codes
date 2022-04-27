You are given a square matrix of size N×N. Calculate the sum of the integers present in the two main diagonals.

Input Format:
The first line will contain the value of N.
The next N lines will contain the N values separated by one or more spaces.

Output Format:
The sum of the integers present in the two main diagonals.

Boundary Conditions:
2 <= N <= 20

Example Input/Output 1:
Input:
2
10 9
4  22

Output:
45

Explanation:
The sum is = 10+22+9+4 = 45

Example Input/Output 2:
Input:
3
5 10 11
79 6 12
9 21 45

Output:
76

Explanation:
The sum is = 5+6+45+11+9 = 76.
As 6 is common for both the diagonals it must be counted only once when finding the sum.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int len;
    scanf("%d",&len);
    int arr[len][len],i,j,count=0;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(i==j){
                count+=arr[i][j];
            }
    }
    }
    for(i=0,j=len-1;i<len;i++,j--){
            if(i!=j){
                count+=arr[i][j];
            }
    }
    printf("%d",count);
}
