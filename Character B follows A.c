// Given a string S and two characters A, B the program must print the number of occurrences where A is followed by B.

// Boundary Conditions:
// Length of the string S is between 2 and 200.

// Input Format:
// First line will contain the string value S.
// Second line will contain the value of A.
// Third line will contain the value of B.

// Output Format:
// First line will contain the integer which represents the number of occurrences in sring S where A is followed by B
 

// Sample Input/Output:

// Example 1:
// Input:
// malayalam
// a
// l

// Output:
// 2

// Explanation:
// The two occurrences where a is followed by l is as highlighted below.

// Example 2:
// Input:
// engine
// e
// n

// Output:
// 1
// code:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[2000],a,b;
    int count=0,len,i;
    scanf("%s\n",str);
    scanf("%c\n",&a);
    scanf("%c\n",&b);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==a && str[i+1]==b){
            count+=1;
        }
    }
    printf("%d",count);
}
