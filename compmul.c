#include<stdio.h>
#include<malloc.h>
void mul(int* a, int* b, int* p, int* q, int c, int d)
{
    int maxSize = c > d ? c : d;
    int SR1[maxSize], SI1[maxSize],i;
    int SR2[maxSize], SI2[maxSize];
    for (i = 0; i < maxSize; i++) 
	{
        if (i >= c) {
            SR1[i] = 0;
            SI1[i] = 0;
        }
        else {
            SR1[i] = a[i];
            SI1[i] = b[i];
        }
    }
   for ( i = 0; i < maxSize; i++) {
        if (i >= d) {
           SR2[i] = 0;
           SI2[i] = 0;
        }
        else {
            SR2[i] = a[i];
            SI2[i] = b[i];
        }
    }
    int CR[maxSize], CI[maxSize];
  for(i=0;i<maxSize;i++)
  {
      CR[i] = (SR1[i]*SR2[i])-(SI1[i]*SI2[i]);
      CI[i] = (SR1[i]*SI2[i])+(SI1[i]*SR2[i]);
  }
  for (i=0;i<maxSize;i++)
  {
      printf("%d ",CR[i]);
        printf (" + i");
       printf("%d \n",CI[i]);
  }
  
  
   
}


int main()
{
    int i;
    
    //length of Signal 1 
    
    int m;
    printf("\n Please give length of signal 1 : ");
    scanf("%d",&m);
    
    //Taking Real values of signal 1
    
	int R1[m] ;
     printf("\n Please give the values for Real part of signal 1 : ");
    for(i=0;i<m;i++){
        scanf("%d",&R1[i]);
    }
    
    //Taking Imaginary Values of Signal 1
    
    int I1[m];
    printf("\n Please give the values for Imaginary part of signal 1 : ");
    for(i=0;i<m;i++){
        scanf("%d",&I1[i]);
    }
    
    //length of Signal 2
    
    
    int n;
    printf("\n Please give length of signal 2 : ");
    scanf("%d",&n);
    
    //Taking Real values of signal 2
    
    int R2[n] ;
     printf("\n Please give the values for Real part of signal 2 : ");
    for(i=0;i<n;i++){
        scanf("%d",&R2[i]);
    }
    
    //Imaginary Part of Signal 2
    
    
    int I2[n] ;
     printf("\n Please give the values for Imaginary part of signal 2 : ");
    for(i=0;i<n;i++){
        scanf("%d",&I2[i]);
    }
    
    mul(R1,I1,R2,I2,m,n);
    
    return 0;
}