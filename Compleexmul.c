#include<stdio.h>
#include<malloc.h>


int p,q,r,s,u,v;
int sub1[],sub2[],add1[],add2[],fr[],fi[];
 int n,m,i,j,k,t;

int main()
{
    
    printf("Please give length of Real part of s1 : ");
    scanf("%d",&n);
    int R1[n];
    printf("Please give the values of Real Part of s1: ");
    for(i=0;i<n;i++)
    	{
        scanf("%d",&R1[i]);
      }
    printf("Please give length of Imaginary part of s1 : ");
    scanf("%d",&m);
    int I1[m] ;
     printf("Please give the values of Imaginary Part of s1 : ");
    for(j=0;j<m;j++){
        scanf("%d",&I1[j]);
    }
    //Signal 1 real and complex
    printf("Please give length of Real part of s2 : ");
    scanf("%d",&k);
    int R2[k];
    printf("Please give the values of Real part of s2 : ");
    for(i=0;i<k;i++)
    	{
        scanf("%d",&R2[k]);
      }
    printf("Please give length of Imaginary Part of s2 : ");
    scanf("%d",&t);
    int I2[t] ;
     printf("Please give the values of IMaginary Part of s2 : ");
    for(j=0;j<t;j++){
        scanf("%d",&I2[t]);
    }
 
    M1(R1,R2,n,k);//Sr1[0]*sr2[0]
    M2(I1,I2,m,t);
    subtraction(sub1,sub2,p,q);
    M3(R1,I2,n,t);
    M4(I1,R2,m,k);
    addition(add1,add2,r,s);
    display(fr,fi,u,v);
    return 0;
}


void M1(int* R1, int* R2, int n, int k)
{
    int maxSize = n > k ? n : k;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n)
		{
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = R1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= k) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = R2[b];
        }
    }
    int res[maxSize];
    p=maxSize;
  for(c=0;c<maxSize;c++)
   {
      res[c] = (row_vec[c] * col_vec[c]);
   }
   for (c=0;c<maxSize;c++)
   {
      printf("%d ",res[c]);
   }
  for (c=0;c<maxSize;c++)
  {
  	sub1[c] = res[c];
  }
  
   printf("\n\n");
}


void M2(int* I1, int* I2, int m, int t)
{
    int maxSize = m > t ? m : t;
    q = maxSize;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= m) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = I1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= t) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = I2[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++){
      res[c] = (row_vec[c] * col_vec[c]);
}
    
  for (c=0;c<maxSize;c++){
      printf("%d ",res[c]);
  }
  for (c=0;c<maxSize;c++)
  {
  	sub2[c] = res[c];
  }
  
    printf("\n\n");
}



void M3(int* R1, int* I2, int n, int t)
{
     int maxSize = n > t ? n : t;
     r = maxSize;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = R1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= m) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = I2[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++){
      res[c] = (row_vec[c] * col_vec[c]);
}
    
  for (c=0;c<maxSize;c++){
      printf("%d ",res[c]);
  }
  for (c=0;c<maxSize;c++)
  {
  	add1[c] = res[c];
  }
  
    printf("\n\n");
}



void M4(int* I1, int* R2, int m, int k)
{
     int maxSize = m > k ? m : k;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = I1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= m) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = R2[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++){
      res[c] = (row_vec[c] * col_vec[c]);
}
    
  for (c=0;c<maxSize;c++){
      printf("%d ",res[c]);
  }
  for (c=0;c<maxSize;c++)
  {
  	add2[c]=res[c];
  }
   printf("\n\n");
}



void subtraction(int* sub1, int* sub2,int p,int q)
{
 int maxSize = p > q ? p : q;
 u = maxSize;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = sub1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= m) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = sub2[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++)
   {
      res[c] = (row_vec[c] - col_vec[c]);
   }
   for (c=0;c<maxSize;c++)
   {
      printf("%d ",res[c]);
   }
   for (c=0;c<maxSize;c++)
   {
      fr[c]=res[c];
   }
    printf("\n\n");
}


void addition(int* add1, int* add2,int r,int s)
{
 int maxSize = r > s ? r : s;
 v = maxSize;
    int row_vec[maxSize], col_vec[maxSize],a,b,c;
    for (a = 0; a< maxSize; a++) {
        if (a >= n) {
            row_vec[a] = 0;
        }
        else {
            row_vec[a] = add1[a];
        }
    }
   for (b = 0; b < maxSize; b++) {
        if (b >= m) {
            col_vec[b] = 0;
        }
        else {
            col_vec[b] = add2[b];
        }
    }
    int res[maxSize];
  for(c=0;c<maxSize;c++)
   {
      res[c] = (row_vec[c] + col_vec[c]);
   }
   for (c=0;c<maxSize;c++)
   {
      printf("%d ",res[c]);
   }
   for (c=0;c<maxSize;c++)
   {
      fi[c] = res[c];
   }
  printf("\n\n");
}


void display(int* fr,int* fi,int u,int v)
{
	int maxSize = u > v ? u : v;
	int j;
    int finalans[maxSize];
	for(j=0;j<maxSize;j++)
	{
		finalans[j]= (fr[j]+('i'*fi[j]));
	}
    for(j=0;j<maxSize;j++)
	{
		printf("%d ",finalans[j]);
	}
	
	
	 printf("\n\n");
}