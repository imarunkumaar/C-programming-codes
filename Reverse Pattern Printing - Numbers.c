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
// 15 10 6 3 1
// 14 9 5 2
// 13 8 4
// 12 7
// 11

// Example Input/Output 2:
// Input:
// 3

// Output:
// 6 3 1
// 5 2
// 4
// code:
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,i,j,p,q,b=0;
scanf("%d",&a);
p=a;
for(i=1;i<a+1;i++){
    b+=i;
}
for(i=0;i<a;i++){
    printf("%d ",(b-i));
    q=(b-i)-p;
    for(j=0;j<a-i-1;j++){
        printf("%d ",q);
        p-=1;
        q=q-p;
    }p=a;printf("\n");
}
}
