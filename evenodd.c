#include<stdio.h>
int main()
{
  int n1,n2,n3;

  printf("please enter three number:");
  scanf("%d%d%d",&n1,&n2,&n3);
  if(n1>n2 && n1>n3 || n1/2==0)
    printf("large number is %d and even ",n1);
  else if(n3>n2 && n3>n1 || n3/2==0)
    printf("large number is %d and even",n2);
  else if(n2>n1 && n2>n3 || n2/2==0)
   printf("large number is %d and even",n3);
   else
    printf("the number is odd");
//scanf("%d",&b);
//printf("%d\n",b);
//scanf("%d",&c);
//printf("%d\n",a);
   getch();
}
