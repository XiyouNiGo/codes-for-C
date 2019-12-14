/*************************************************************************
    > File Name: 3A.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月11日 星期三 19时34分51秒
 ************************************************************************/
//大数加法
#include<stdio.h>
#include<string.h>
int main()
{
	char A[500],B[500];
	int lenA,lenB,maxlen;
	int i,j;
	while(scanf("%s %s",A,B)!=EOF)
	{
		lenA=strlen(A),lenB=strlen(B);
		maxlen=(lenA>lenB)?lenA:lenB;
		for(i=0;i<lenA;i++)
		{
			A[maxlen-i]=A[lenA-1-i];
		}
		for(i=0;i<maxlen+1-lenA)
		{
			A[i]='0';
		}
		for(i=0;i<lenB;i++)
		{
			B[maxlen-i]=B[lenB-1-i];
		}
		for(i=0;i<maxlen+1-lenB)
		{
			B[i]='0';
		}
		A[maxlen+1]=B[maxlen+1]=0;
		j=0;
		for(i=maxlen;i>=0;i--)
		{
			j+=A[]
		}
	}
}
