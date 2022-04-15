// A string S is passed as the input. Two words W1 and W2 which are present in the string S are also passed as the input. The program must find the minimum distance D between W1 and W2 in S (in forward or reverse order) and print D as the output.

// Input Format:
// The first line will contain S.
// The second line will contain W1.
// The third line will contain W2.

// Output Format:
// The first line will contain D - the minimum distance between W1 and W2 in S.

// Boundary Conditions:
// Length of S is from 5 to 200.

// Example Input/Output 1:
// Input:
// the brown quick frog quick the
// the
// quick

// Output:
// 1

// Explanation:
// quick and the are adjacent as the last two words. Hence distance between them is 1.

// Example Input/Output 2:
// Input:
// the quick the brown quick brown the frog
// quick
// frog

// Output:
// 3


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char tempstr[2000],w1[20],w2[20],temp[20];
    fgets(tempstr,2000,stdin);
    int len,i,j=0,k,l,count=0,rem,dis=0,min=50;
    len=strlen(tempstr);
    for(i=0;i<len-1;i++){
        if(tempstr[i]==' '){
            count++;
        }
    }
    char str[count+1][20];
    char delim[]=" ";
    char *ptr=strtok(tempstr,delim);
    for(i=0;i<count+1;i++){
        strcpy(str[i],ptr);
        ptr=strtok(NULL,delim);
    }
    scanf("%s",w1);
    scanf("%s",w2);
    for(rem=0;rem<2;rem++){
        if(rem=1){
            strcpy(temp,w1);
            strcpy(w1,w2);
            strcpy(w2,temp);
        }
        for(i=0;i<count;i++){
            if(strcmp(str[i],w1)==0){
                for(j=i+1;j<count+1;j++){
                    if(strcmp(str[j],w2)==0){
                        dis=j-i;
                        if(min>dis){
                            min=dis;
                        }
                    }
                }
            }
        }
    }
    printf("%d",min);
}
