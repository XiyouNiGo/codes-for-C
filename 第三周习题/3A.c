//大数加法
#include<stdio.h>
#include<string.h>
int main()
{
	char A[505],B[505];
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
		for(i=0;i<maxlen+1-lenA;i++)
		{
			A[i]='0';
		}
		for(i=0;i<lenB;i++)
		{
			B[maxlen-i]=B[lenB-1-i];
		}
		for(i=0;i<maxlen+1-lenB;i++)
		{
			B[i]='0';
		}
		A[maxlen+1]=0;
		j=0;
		for(i=0;i<maxlen;i++)
		{
			j+=A[maxlen-i]+B[maxlen-i]-2*'0';
			A[maxlen-i]=j%10+'0';
			j/=10;
		}
		if(j!=0) printf("%c",j+'0');
		if(*A=='0') printf("%s\n",A+1);
		else printf("%s\n",A);
		memset(A,'\0',sizeof(A));
		memset(B,'\0',sizeof(B));
	}
}

