#include<stdio.h>
main()
{
    int a,b,c,x;
printf("Enter the value of any three numbers");
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&(a>c))

    x=a;
else
  {if(b>c)
        x=b;
    else
        x=c;
  }
  printf("The largest Number=%d\n",x);
    if (a==b)
    printf("A=B");
    else
if (a==c)
    printf("A=C");
    else
        if (c==b)
    printf("B=C");
    getch();
}
