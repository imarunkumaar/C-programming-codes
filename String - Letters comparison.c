// Two string values S1 and S2 are passed as input. The program must check if both S1 and S2 contain the same unique set of letters and print YES or NO. Assume all the letters (alphabets) are in smaller case.

// Boundary Conditions:
// Length of S1 is from 2 to 100
// Length of S2 is from 2 to 100

// Input Format:
// First line will contain the string value of S1
// Second line will contain the string value of S2

// Output Format:
// YES or NO depending on if both S1 and S2 contain the same set of unique letters.

// IMPORTANT:

// Please note that the output is CASE SENSITIVE. Hence print YES or NO  (instead of yes or no)


// Sample Input/Output:

// Example 1:
// Input:
// read
// dear

// Output:
// YES

// Explanation:
// Both S1 and S2 are formed using the letters - a d e r


// Example 2:
// Input:
// record
// decoder

// Output:
// YES

// Explanation:
// Both S1 and S2 are formed using the letters - c d e o r


// Example 3:
// Input:
// energy
// synergy

// Output:
// NO

// Explanation:
// S2 has additional letter - s in it.
// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    int alen,blen,i,j,check=0;
    alen=strlen(a);
    blen=strlen(b);
    for(i=0;i<alen-2;i++){
        for(j=0;j<blen;j++){
            if(a[i]==b[j]){
                check=1;
                break;
            }
        }if(check==0){
            printf("NO");
            return 0;
        }check=0;
    }
    printf("YES");
}
