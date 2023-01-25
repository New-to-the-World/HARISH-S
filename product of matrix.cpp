#include <stdio.h>
int main() {
  int r,c,a[100][100],b[100][100],product[100][100],i,j,k;
  printf("Enter the number of rows (between 1 and 100):");
  scanf("%d",&r);
  printf("Enter the number of columns (between 1 and 100):");
  scanf("%d",&c);

//Getting Matrix 1
  printf("\nEnter elements of 1st matrix:\n");
  for(i=0;i<r;++i)
    for(j=0;j<c;++j){
      printf("Enter element a%d%d:",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
//Getting Matrix 2
  printf("Enter elements of 2nd matrix:\n");
  for(i=0;i<r;++i)
    for(j=0;j<c;++j) {
      printf("Enter element b%d%d:",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
    
// product two matrices
  for(i=0;i<r;++i)
    for(j=0;j<c;++j) {
      product[i][j]=0;
      for(k=0;k<100;++k){
          product[i][j]+=a[i][k]*b[k][j];
      }
    }

// printing the result
  printf("\nproduct of two matrices:\n");
  for(i=0;i<r;++i)
    for(j=0;j<c;++j) {
      printf("%d    ",product[i][j]);
      if(j==c-1) {
        printf("\n\n");
      }
    }
  return 0;
}
