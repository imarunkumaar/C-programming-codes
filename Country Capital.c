
// Input data containing N countries and their capital will be provided as input. The program must then print the capital for a given country.

// Input Format:
// First line will contain the integer value N representing how many country-capital pairs are to be provided as input.
// Next N lines will contain the name of the country and the name of the captial as string values separated by a space.
// The last line will contain the name of the country as a string value  for which the capital is to be printed as output.

// Output Format:
// First line will contain the capital of the country. If the name of the country is NOT found in the input data then NONE must be printed as output.

// Constraints:
// N will be from 2 to 100.

// Sample Input/Output:

// Example 1:

// Input:
// 5
// Afghanistan Kabul
// Austria Vienna
// Armenia Yerevan
// Chile Santiago
// Croatia Zagreb
// Austria

// Output:
// Vienna


// Example 2:

// Input:
// 4
// Armenia Yerevan
// Chile Santiago
// Croatia Zagreb
// Iran Tehran
// Japan

// Output:
// NONE

// Explanation:
// As Japan is not mentioned in the input data, NONE is printed as output.
// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int len,i,j;
    scanf("%d",&len);
    char str[len][2][20],find[20];
    for(i=0;i<len;i++){
        for(j=0;j<2;j++){
            scanf("%s",str[i][j]);
        }
    }
    scanf("%s",find);
    for(i=0;i<len;i++){
            if(strcmp(str[i][0],find)==0){
                printf("%s",str[i][1]);
                return 0;
            }
        }
            printf("NONE");
}
