#include <stdio.h>
int main()
{
  int no,cnt=0;
  printf("请输入一个正整数：");
  scanf("%d",&no);
  while(no>=0)
  {
    printf("%d ",no);
    no--;
    cnt++;
  }
  if(cnt>0)
    putchar('\n');
  return 0;
}
  
