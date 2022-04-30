
// A bigger NxN matrix is passed as the input. Also a smaller MxM matrix is passed as input. The program must print TRUE if the smaller matrix can be found in the bigger matrix. Else the program must print FALSE.

// Input Format:
// First line will contain the value of N.
// Second line will contain the value of M.
// Next N lines will contain the values in the N*N matrix with each value separated by one or more space.
// Next M lines will contain the values in the M*M matrix with each value separated by one or more space.

// Output Format:
// First line will contain the string value TRUE or FALSE

// Boundary Conditions:
// 3 <= N <= 20
// 2 <= M <= N

// Example Input/Output 1:
// Input:
// 3
// 2
// 4 5 9
// 1 3 5
// 8 2 4
// 3 5
// 2 4

// Output:
// TRUE

// Example Input/Output 2:
// Input:
// 3
// 2
// 4 5 9
// 1 3 5
// 8 2 4
// 4 5
// 1 4

// Output:
// FALSE
// code:
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int row,col,i,j,m,n,p,q,ti,tj,check=1;
  scanf("%d%d",&n,&m);
  int narr[n][n],marr[m][m];
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          scanf("%d",&narr[i][j]);
      }
  }
  for(i=0;i<m;i++){
      for(j=0;j<m;j++){
          scanf("%d",&marr[i][j]);
      }
  }
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(narr[i][j]==marr[0][0]){
              ti=i;
              tj=j;
              for(p=0;p<m;p++){
                  for(q=0;q<m;q++){
                      if(narr[ti][tj]==marr[p][q]){
                          check=0;
                      }else{
                          check=1;
                          break;
                      }
                      if(q==m-1){
                          tj=j;
                      }else{
                          tj++;
                      }
                  }ti++;if(check==1){break;}
              }if(check==0){printf("TRUE");return 0;}else{break;}
          }
      }
  }
printf("FALSE");
}
