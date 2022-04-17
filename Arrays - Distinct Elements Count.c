// Two integer arrays of length L1 and L2 are passed as input. The program must print the count of the distinct elements present in both the arrays.
// That is the program must print the count of integer values that are present in the first array but not in the second array plus the count of integer values that are present in the second array but not in the first array.

// Input Format:
// The first line will contain L1 and L2 separated by a space.
// The second line will contain the L1 integer values separated by a space.
// The third line will contain the L2 integer values separated by a space.

// Output Format:
// First line will contain the integer value which is the count of the distinct elements in both the arrays.

// Boundary Conditions:
// 1 <= L1 <= 50
// 1 <= L2 <= 50

// Example Input/Output 1:
// Input:
// 4 5
// 1 5 9 10
// 22 5 12 9 5

// Output:
// 4

// Explanation:
// The distinct elements present in first array are 1, 10 and in the second array are 22, 12.

// Example Input/Output 2:
// Input:
// 3 2
// 100 200 300
// 201 600

// Output:
// 5
// code:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,count=0,len1,len2,c=0;
    scanf("%d%d",&len1,&len2);
    int len=len1+len2;
    int arr[len];
    for(i=0;i<len;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }if(count==1){
            c++;
        }count=0;
    }
    printf("%d",c);
}
