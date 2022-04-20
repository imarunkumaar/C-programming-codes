/*Anmol wants to encrypt the message M which is to be sent to his business partner Binamol. So he shifts every alphabet by X positions in forward direction and he adds Y to every number in the message.
Given a string value M of the message and the values of X and Y, the program must print the encrypted message E.

- All the alphabets will be in lower case.
- Spaces and special characters in the message M should be reproduced as such in the encrypted message E.

Input Format:
First line will contain the string value M
Second line will contain the integer value of X
Third line will contain the integer value of Y

Output Format:
First line will contain the string value of the encrypted message E.

Constraints:
Length of M is from 2 to 100.
0 <= X <= 10
0 <= Y <= 9

Sample Input/Output:

Example 1:
Input:
call me at 10 p.m
2
1

Output:
ecnn og cv 21 r.o


Example 2:
Input:
credit 1 lakh
3
0

Output:
fuhglw 1 odnk
code:*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[100];
    int x,y,i,len;
    fgets(str,100,stdin);
    scanf("%d%d",&x,&y);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(isalpha(str[i])){
            char bla=str[i]+x;
            if(bla>=123){
                bla=bla-122;
                bla=96+bla;
                printf("%c",bla);
            }else{
                printf("%c",bla);
            }
        }else if(isdigit(str[i])){
            int a=str[i]-'0';
            printf("%d",a+y);
            }
        else{
            printf("%c",str[i]);
        }
    }
}
