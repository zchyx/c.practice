#include <stdio.h>
int min3(int a,int b,int c)
{ int min;
  min=a;
  if(b>min) min=b;
  else if(c>min) min=c;
  return min;
}
int main()
{ int a,b,c;
  puts("请输入三个整数。");
   printf("整数a:");
   scanf("%d",&a);
   printf("整数b:");
   scanf("%d",&b);
   printf("整数c:");
   scanf("%d",&c);
   printf("最大值是%d",min3(a,b,c));
   return 0;
}
