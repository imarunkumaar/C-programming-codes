// The day corresponding to the first date of a given month is provided as input to the program. Then a specific date D of the month is provided. The program must  print the day (one among MON,TUE, WED, THU, FRI, SAT, SUN) of the date D.

// Input Format:
// First line will contain the day (one among MON,TUE, WED, THU, FRI, SAT, SUN) of the first date of the month.
// Second line will contain the value of the date D as an integer value.

// Output Format:
// First line will contain the day of the date D


// Sample Input/Output:

// Example 1:
// Input:
// MON
// 10

// Output:
// WED

// Explanation:
// If it is Monday on 1st of the month, then 10th of the month will be a Wednesday. Hence WED is printed.


// Example 2:

// Input:
// FRI
// 24

// Output:
// SUN

// Explanation:
// If it is Friday on 1st of the month, then 22nd will also be a Friday. Hence 24th of the month will be a Sunday. Hence SUN is printed.
// CODE:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char str[4];
int a,i;
scanf("%s%d",str,&a);
char day[7][20]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int rem=a%7;
for(i=0;i<7;i++){
    if(strcmp(str,day[i])==0){
    int k=(i-1)+rem;
    if(k>=7){
        k=((i-1)+rem)-7;
        }
    printf("%s",day[k]);
}
}
}
