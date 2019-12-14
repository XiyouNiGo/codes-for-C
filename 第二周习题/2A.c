/*************************************************************************
    > File Name: pta.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月04日 星期三 18时41分00秒
 ************************************************************************/
#include<stdio.h>
int isNum(int i)
{
	if((i/100)*(i/100)*(i/100)+(i%10)*(i%10)*(i%10)+(i/10%10)*(i/10%10)*(i/10%10)==i) return 1;
	else return 0;
}
int main(int argc,char *argv[])
{
    int m,n,i,count;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		count=0;
		for(i=m;i<=n;i++)
		{
			if(isNum(i))
			{
				if(count==0) printf("%d",i);
				else printf(" %d",i);
				count++;
			}
		}
		if(count==0) printf("no");
		printf("\n");
	}
}
