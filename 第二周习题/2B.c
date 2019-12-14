/*************************************************************************
    > File Name: 2B.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月07日 星期六 11时11分10秒
 ************************************************************************/

#include<stdio.h>
int index_day(int year, int month, int day)
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index, i;
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        months[1]++;
    }
    index = 0;
    for (i = 0; i < month-1; i++)
    {
        index += months[i];
    }
    index += day;

    return index;
}
int main(int argc,char *argv[])
{
	int year,month,day;
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
	{
		printf("%d\n",index_day(year,month,day));
	}
}
