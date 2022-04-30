// Simon wishes to convert lower case alphabets to upper case and vice versa. Help Simon by writing a program which will accept a string value S as input and toggle the case of the alphabets.
// Numbers and special characters remain unchanged.

// Input Format:
// First line will contain the string value S

// Output Format:
// First line will contain the string value with the case of the alphabets toggled.

// Constraints:
// Length of S is from 2 to 100

// Sample Input/Output:

// Example 1:
// Input:
// GooD mORniNg12_3

// Output:
// gOOd MorNInG12_3


// Example 2:
// Input:
// R@1nBow

// Output:
// r@1NbOW
// code:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(isalpha(str[i])>0){
            if(isupper(str[i])>0){
                printf("%c",tolower(str[i]));
            }else{
                printf("%c",toupper(str[i]));
            }
        }else{
            printf("%c",str[i]);
        }
    }

}
