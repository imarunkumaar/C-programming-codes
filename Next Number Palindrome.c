// Given a number N, the program must print the next palindromic number P.

// Boundary Conditions:
// 9 < N < 100000


// Input Format:
// First line will contain the number N

// Output Format:
// First line will contain the next palindromic number P.

// Sample Input/Output:

// Example 1:
// Input:
// 909

// Output:
// 919

// Example 2:
// Input:
// 2131

// Output:
// 2222
// code:
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b,i,c=0,len,cpy;
scanf("%d",&a);
len=floor(log10(a))+1;
while(1){
    a++;
    cpy=a;
    for(i=0;i<len;i++){
    b=cpy%10;
    c=c*10+b;
    cpy=cpy/10;
    }
    if(a==c){
        printf("%d",a);
        break;
    }
    c=0;
}
}
