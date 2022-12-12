#include<stdio.h>
#include<conio.h>
void main()
{
  //  label:
  //  printf("we are inside label\n");
  //  goto end;
  //  printf("goto end\n");
  //  goto label;
  //  end:
  //  printf("program is end");


  /*#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter number : ");
    scanf("%d",&n);
    odd:
    printf("\n%d",i);
    i++;
    if(i<=n)
    goto odd;

}*/


  int num;

  for(int i=0;i<8;i++)
  {
    printf("%d\n",i);
    for (int j = 0; j <8; j++)
    {
        printf("Enter the number enter 0 to exit");
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
    }
    
  }
}