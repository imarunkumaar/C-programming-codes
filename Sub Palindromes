/*Given a string S, the program must print the count of sub palindromes (with a minimum length of two characters) in the string S.

Boundary Conditions:
Length of the string is between 2 and 200.

Input Format:
First line will contain the string value S.

Output Format:
First line will contain the integer which represents the count of sub palindromes in the string S.


Sample Input/Output:

Example 1:
Input:
everest

Output:
2

Explanation:
The sub palindromes are eve, ere


Example 2:
Input:
abccbaab

Output:
5

Explanation:
The sub palindromes are cc, bccb, aa, baab, abccba*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 char str[200];
 int len,x,y,k,i,j,count=0,c=1;
 scanf("%s",str);
 len=strlen(str);
 for(i=0;i<len-2;i++){
     for(j=i+2;j<len;j++){
         if(str[i]==str[j]){
             for(int x=i,y=j;x<j;x++,y--){
                 if(str[x]!=str[y]){
                     c=0;
                     break;
                 }
                 
             }if(c==1){
                 count++;
             }c=1;
         }
     }
 }
 printf("%d",count);
}
