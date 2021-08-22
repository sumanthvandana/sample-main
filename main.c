#include<stdio.h>
#include<stdlib.h>
#include"happy.h"
int main()
{
    int n,i,j;
    printf("Please give length of array x : ");
    scanf("%d",&n);
    int x[n];
    printf("Please give the values of array x: ");
    for(i=0;i<n;i++)
    	{
        scanf("%d",&x[i]);
      }
    int m;
    printf("Please give length of array h: ");
    scanf("%d",&m);
    int h[m] ;
     printf("Please give the values of array h: ");
    for(j=0;j<m;j++){
        scanf("%d",&h[j]);
    }
 
    multiplication(x, h, n, m);
 
    return 0;
}
void multiplication(int* x, int* h, int n, int m)
{
    int maxSize = n > m ? n : m;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = x[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= m) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = h[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++){
      res[c] = (row_vec[c] * col_vec[c]);
  }
  for (c=0;c<maxSize;c++){
      printf("%d ",res[c]);
  }
  
   
}