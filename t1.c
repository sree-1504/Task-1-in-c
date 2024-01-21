#include<stdio.h>
#include<stdlib.h>
int main()
{
        char a[30];
      int b;
      char c[20];
        printf("ENTER THE NAME OF THE USER");
        scanf("%s",&a);
        printf("ENTER THE AGE OF USER");
        scanf("%d",&b);
        printf("ENTER THE PHONE NUMBER OF THE USER");
        scanf("%s",&c);
        printf("NAME:%s\n AGE:%d\n",a,b);
	printf("MOBILE NUMBER:%s",c);

		return 0;
}
