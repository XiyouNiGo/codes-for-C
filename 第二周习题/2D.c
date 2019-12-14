/*************************************************************************
    > File Name: 2D.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月07日 星期六 17时27分07秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n,i,j,count;
	while(scanf("%d",&n)!=EOF)
	{
		int arr[n];
		arr[0]=1;
		for(i=1;i<n;i++)
		{
			arr[i]=0;
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j>=1;j--)
			{
				arr[j]+=arr[j-1];
			}
			for(j=0,count=i;j<=i;j++)
			{
				if(j==count) printf("%d\n",arr[j]);
				else printf("%d ",arr[j]);
			}
		}
		printf("\n");
	}
}
