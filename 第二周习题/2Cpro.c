/*************************************************************************
    > File Name: 2Cpro.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月11日 星期三 18时30分09秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int Findstart(char *p)
{
	int i;
	for(i=0;1;i++)
	{
		if(p[i]!='0') return i;
	}
}
int Findend(char *p)
{
	int i,j=strlen(p);
	for(i=j-1;1;i--)
	{
		if(p[i]!='0') return i;
	}
	
}
int Finddec(char *p)
{
	int i,j=strlen(p);
	for(i=0;i<j;i++)
	{
		if(p[i]=='.') return i;
	}
}
int Exidec(char *p)
{
	int i,j=strlen(p);
	for(i=0;i<j;i++)
	{
		if(p[i]=='.') return 1;
	}
	return 0;
}
int main()
{
	int startA,startB,endA,endB,decA,decB;
	int i,j,flag;
	char A[100000],B[100000];
	while(scanf("%s %s",A,B)!=EOF)
	{
		flag=1;
		startA=Findstart(A);
		startB=Findstart(B);
		if(Exidec(A)==0)
		{
			A[strlen(A)]='.';
		}
		if(Exidec(B)==0)
		{
			B[strlen(B)]='.';
		}
		endA=Findend(A);
		endB=Findend(B);
		if(endA-startA!=endB-startB)
		{
			printf("NO\n");
			continue;
		}
		else
		{
			for(i=startA,j=startB;i<=endA,j<=endB;i++,j++)
			{
				if(A[i]!=B[j])
				{
					printf("NO\n");
					flag=0;
					break;
				}
			}
			if(flag) printf("YES\n");
		}
		memset(A,'\0',sizeof(A));
		memset(B,'\0',sizeof(B));
	}
}
