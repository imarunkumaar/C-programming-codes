// An adamant kid keeps on repeating the stuff he wants. Like if the kid wants chocolate he keeps repeating "chocolate". Given the stuff the child is demanding the program must print if the character in two given positions X, Y is same or not by printing YES or NO.

// Input Format:
// First line will contain the name of the stuff as a string value S.
// Second line will contain two integer values X, Y denoting the position of the characters. The values of X and Y are separated by a space.

// Output Format:
// First line will contain YES or NO

// Boundary Conditions:
// Length of S is from 2 to 100.

// Sample Input/Output:

// Example 1:
// Input:
// icecream
// 4 10

// Output:
// YES

// Explanation:
// As the kid keeps on repeating icecream, the 10th position character will also be c in icecreamicecream.
// As the characters in 4th and 10th position are same (that is c) the output is YES

// Example 2:
// Input:
// cake
// 2 12

// Output:
// NO

// Explanation:
// When cake is repeated like cakecakecakecake, the character in 12th position is e which is NOT equal to the character a in 2nd position. Hence the output is NO.
// code:

#include<stdio.h>
#include<stdlib.h>

int main()
{
 char str[1000],temp[1000];
 int a,b,i,j=0;
 scanf("%s",str);
 scanf("%d%d",&a,&b);
 for(i=1;i<=b+1;i++){
     if(j==strlen(str)){
         j=0;
     }
     temp[i]=str[j];
     j++;
 }
if(temp[a]==temp[b]){
    printf("YES");
}else{printf("NO");}
}
