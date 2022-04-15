// Four towers A, B, C, D are to be erected. Tower A is to communicate with tower C. Tower B is to communicate with tower D.
// Line of sight issue can occur under the following conditions
// - when tower B or D is in the straight line connecting A and C
// - when tower A or C is in the straight line connecting B and D

// The program must accept the co-ordinates of all four towers and print yes or no depending on whether Line of sight issue will occur or not.

// Input Format:
// The first line will contain X and Y co-ordinates of tower A separated by a space.
// The second line will contain X and Y co-ordinates of tower B separated by a space.
// The third line will contain X and Y co-ordinates of tower C separated by a space.
// The fourth line will contain X and Y co-ordinates of tower D separated by a space

// Output Format:
// The first line will contain yes or no (smaller case)

// Boundary Conditions:
// The value of the co-ordinates will be from -500 to 500.

// Example Input/Output 1:
// 0 0
// 0 -2
// 2 0
// 0 2

// Output:
// yes


// Example Input/Output 2:
// Input:
// 0 0
// 0 -2
// 2 0
// 0 -5

// Output:
// no
// code:

#include<stdio.h>
#include<stdlib.h>

int initiate1(int i,int j,int limit,int x2,int y2,int x4,int y4){
    for(;j<limit+1;j++){
        if(i==x2 && j==y2 || i==x4 && j==y4){
            return 1;
        }
    }
    return 0;
}
int initiate2(int i,int j,int limit,int x2,int y2,int x4,int y4){
    for(;i<limit+1;i++){
        if(i==x2 && j==y2 || i==x4 && j==y4){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,i,j,k,limit,val=0,temp;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
for(k=0;k<2;k++){
    if(k==1){
        temp=x1;
        x1=x2;
        x2=temp;
        temp=y1;
        y1=y2;
        y2=temp;
        
        temp=x3;
        x3=x4;
        x4=temp;
        
        temp=y3;
        y3=y4;
        y4=temp;
    }
    if(x1==x3 && y1>y3){
        i=x1;
        j=y3;
        limit=y1;
        val=initiate1(i,j,limit,x2,y2,x4,y4);
    }else if(y1==y3 && x1>x3){
        j=y1;
        i=x3;
        limit=x1;
        initiate2(i,j,limit,x2,y2,x4,y4);
        
    }else if(x1==x3 && y1<y3){
        i=x1;
        j=y1;
        limit=y3;
        val=initiate1(i,j,limit,x2,y2,x4,y4);
    }else{
        j=y1;
        i=x1;
        limit=x3;
        initiate2(i,j,limit,x2,y2,x4,y4);
    }
    if(val==1){
        break;
    }
}
if(val==1){
    printf("yes");}
else{
    printf("no");
}
}
