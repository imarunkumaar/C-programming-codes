// A set of numbers of size N which are separated by one or more spaces will be passed as input. The program should print the prime numbers first followed by odd numbers and finally even numbers.
// Each of these categories, prime numbers, odd numbers and even numbers must be sorted in ascending order among themselves. The numbers which are prime must be excluded from the list of odd and even numbers (In the case of even numbers only 2 is prime as well as even)

// Input Format:
// First line will contain the set of numbers separated by one or more spaces.

// Output Format:
// First line will contain the prime numbers, odd numbers, even numbers in the same order sorted in ascending order. The numbers must be separated exactly by one space.

// Constraints:
// Size of the set N will be from 2 to 20.

// Example Input/Output 1:
// Input:
// 4 5 9 22 11 2 15

// Output:
// 2 5 11 9 15 4 22


// Example Input/Output 2:
// Input:
// 611953 494147 493137 493133 493138

// Output:
// 493133 494147 611953 493137 493138

// Explanation:
// 493133 494147 611953 are prime numbers.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprimenumber(int a){
     if(a==2){
         return 1;
     }
     if(a%2==0){
         return 0;
     }
     else{
         for(int i=3;i<floor(sqrt(a))+1;i++){
            if((a%i)==0){
                return 0;
            }
        }     
         
     }
     return 1;
}

int main()
{
    int pm[20],pmc=0,odd[20],oddc=0,even[20],
    evenc=0,arr[20],i=0,j;
        while(scanf("%d",&arr[i])>0){
            i++;
        }
        int len=i;
    for(j=0;j<i;j++){
        if(isprimenumber(arr[j])){
            pm[pmc]=arr[j];
            pmc++;
        }else if(arr[j]%2!=0){
            odd[oddc]=arr[j];
            oddc++;
        }else{
            even[evenc]=arr[j];
            evenc++;
        }
    }
    int temp;
    int cpy=pmc;
    for(int i=0;i<3;i++){
        if(i==1){
            pmc=oddc;
        }if(i==2){
            pmc=evenc;
        }
    for(j=0;j<pmc;j++){
        for(int k=j+1;k<pmc;k++)
        if(pm[j]>pm[k] && i==0 && pmc>1){
            temp=pm[j];
            pm[j]=pm[k];
            pm[k]=temp;
        }else if(odd[j]>odd[k] && i==1 && oddc>1){
            temp=odd[j];
            odd[j]=odd[k];
            odd[k]=temp;
        }else{
            if(even[j]>even[k] && i==2 && evenc>1){
                temp=even[j];
                even[j]=even[k];
                even[k]=temp;
            }
        }
    }}
    for(i=0;i<cpy;i++)
    printf("%d ",pm[i]);
    for(i=0;i<oddc;i++)
    printf("%d ",odd[i]);
    for(i=0;i<evenc;i++)
    printf("%d ",even[i]);
    
}
