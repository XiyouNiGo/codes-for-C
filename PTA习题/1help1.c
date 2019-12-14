/*************************************************************************
    > File Name: 1help1.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月10日 星期二 21时01分44秒
 ************************************************************************/
#include<stdio.h>
struct student
{
    int gender;
    char name[9];
    int available;
};
int main(int argc,char *argv[])
{
    int N,i,j;
    scanf("%d",&N);
    struct student student[N];
    for(i=0;i<N;i++)
    {
        scanf("%d %s",&student[i].gender,student[i].name);
        student[i].available=1;
    }
    for(i=0;i<N;i++)
    {
        if(student[i].available)
        {
            student[i].available=0;
            printf("%s ",student[i].name);
        }    
        for(j=N-1;j>=0;j--)
        {
            if(student[i].gender!=student[j].gender&&student[j].available)
            {
                student[j].available=0;
                printf("%s\n",student[j].name);
                break;
            }
        }
    }
}
