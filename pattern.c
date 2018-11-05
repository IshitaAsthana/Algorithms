#include<stdio.h>
int main()
{
  int l=1,k=1,n,i;
  printf("\nEnter number of rows: ");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    k=2*i-1;
    for(l=n;l>i;l--)
      printf(" ");
    printf("*");
    for(l=1;l<(2*(i-1));l++)
      printf(" ");
    if(i>1)
      printf("*");
    printf("\n");
  }
  k=2*i-1;
  for(l=1;l<=k;l++)
    printf("*");
  return 0;
}
    
