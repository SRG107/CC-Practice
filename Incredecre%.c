#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int oldp,newp,per;
	string str1,str2;
	scanf("%s",&str1);
	scanf("%s",&str2);
	int i=1;
	while(str1[i] != '\0')
	{
		oldp = oldp*10 + str1[i]-48;
	}
	i=0;
	while(str2[i] != '\0')
	{
		newp = newp*10 + str2[i]-48;
	}
	if(oldp<newp)
	{
		pre = round((float) (newp-oldp)/oldp *100);
		printf("%d  % increase");
	}
	else
	{
		per = round((float) (oldp-newp)/oldp *100);
		printf("%d  % decrease");
	}
return 0;
}
