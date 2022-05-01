// Based on the input value of N, the program must print the pattern described below.

// Input Format:
// First line will contain the value of N.

// Output Format:
// N lines will contain the number pattern as described below with each value separated by a single space.

// Boundary Conditions:
// 1 <= N <= 50

// Example Input/Output 1:
// Input:
// 5

// Output:
// 1 6 10 13 15
// 2 7 11 14
// 3 8 12
// 4 9
// 5

// Example Input/Output 2:
// Input:
// 3

// Output:
// 1 4 6
// 2 5
// 3
// code:
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a,i,j,p,q,k;
   scanf("%d",&a);
   k=a;
   p=a;
   for(i=1;i<a+1;i++){
       printf("%d ",i);
       q=p+i;
       for(j=0;j<k-1;j++){
           printf("%d ",q);
           p--;
           q=q+p;
       }k--;printf("\n");p=a;
   }
}

