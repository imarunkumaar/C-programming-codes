// A string (with only alphabets) S is passed as input. The program should print the alphabets in the string in descending order. Assume all alphabets will be in lower case.

// Boundary Conditions:
// The length of string S is between 2 and 100.

// Example input and output:

// If the input is "cake", the output should be "keca"
// If the input is "innovation", the output should be "vtonia" (n or o or i should not be repeated)
// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100],arr[100];
    scanf("%s",str);
    int i,j,check=0,k=0;
    int len=strlen(str);
    for(i=0;i<len;i++){
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                check=1;
            }
        }
        if(check==0){
                arr[k]=str[i];
                k++;
        }
        check=0;
    }
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(arr[i]<arr[j]){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%s",arr);
}
        
