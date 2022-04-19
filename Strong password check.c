// Recently a security committee decided to enforce the following rules when an employee creates/changes his/her password.
// - The password must contain atleast one special character among # ! _ $ @
// - The password must contain atleast two numbers
// - The password must contain atleast one upper case alphabet and one lower case alphabet.
// - The password must have a minimum length of 8.
// - The password must have a maximum length of 25.

// The program must accept a given password string P as input and check for these rules and output VALID or INVALID.

// Boundary Conditions:
// Length of P is from 2 to 50.

// Input Format:
// First line will contain the string value of the password P

// Output Format:
// VALID or INVALID based on the check performed by the program by applying the rules.

// Example Input/Output:

// Example 1:
// Input:
// kiC_3b0x3r

// Output:
// VALID

// Example 2:
// Input:
// m@d31nindia

// Output:
// INVALID

// Explanation:
// No alphabet in uppercase.

// Example 3:
// Input:
// M1kT!s0

// Output:
// INVALID

// Explanation:
// Minimum length  must be 8
// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    // char str[50];
    int spl=0,num=0,up=0,lo=0;
    // scanf("%s",str);
    char str[50]="m3OwL9_k";
    int len=strlen(str);
    printf("%d\n",len);
    if(len<8 || 25<len){
        printf("INVALID");
        return 0;
    }
    for(int i=0;i<len;i++){
        if(isalpha(str[i])){
            if(isupper(str[i])){
                up++;
            }else{
                lo++;
            }
        }
        else if(isdigit(str[i])){
            num++;
        }
        else{
            spl++;
        }
    }
    printf("%d-%d-%d-%d\n",up,lo,num,spl);
    if(up && lo && num>1 && spl){
        printf("VALID");
    }else{
        printf("INVALID");
    }
}
