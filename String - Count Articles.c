// A string S is passed as the input. The program must print the number of articles (a, an and the) in S.
// The string S passed as the input NEED NOT be correct grammatically.

// Input Format:
// The first line will contain S

// Output Format:
// The first line will contain the count of articles in S.

// Boundary Conditions:
// The length of the string S will be from 3 to 1000.
// Each word in S will not be more than 100 characters.

// Example Input/Output 1:
// Input:
// I went to a movie yesterday along with an old man.

// Output:
// 2

// Example Input/Output 2:
// Input:
// In 1885 it was banished from the shelves of the Concord Public Library, an act that attracted a lot of publicity and discussion in the press. It is still frequently in the news, as various schools and school systems across the country either ban it from or restore it to their classrooms. The texts and illustrations below attempt to capture both the novel's achievement and some aspects of its controversiality.

// Output:
// 8


// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char tempstr[2000];
    fgets(tempstr,2000,stdin);
    int len,count=0,i,j,k=0,m=20;
    len=strlen(tempstr);
    for(i=0;i<len;i++){
        if(tempstr[i]==' '){
            count++;
        }
    }
    char delim[]=" ";
    char *ptr=strtok(tempstr,delim);
    char str[count+1][20];
    for(i=0;i<count+1;i++){
        strcpy(str[i],ptr);
        ptr=strtok(NULL,delim);
    }
    for(i=0;i<count+1;i++){
        len=strlen(str[i]);
        if(isalpha(str[i][len-1])==0){
            m=len-2;
        }
        if(strncmp(str[i],"an",m)==0){
            k++;
        }else if( strncmp(str[i],"a",m)==0){
            k++;
        }else if(strncmp(str[i],"the",m)==0){
            k++;
        }
        m=20
    }
    printf("%d",k);
    
}
