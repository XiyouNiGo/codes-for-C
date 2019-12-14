/*************************************************************************
    > File Name: 2C.c
    > Author: zll
    > Mail: zhnllion@126.com 
    > Created Time: 2019年12月07日 星期六 11时30分15秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
/*exi_dec函数来判断是否有小数点*/
int exi_dec(char *p)
{
	for(;p<p+strlen(p);p++)
	{
		if(*p=='.') return 1;
	}
	return 0;
}
/*loc_dec函数返回小数点离第一位有效数字的距离*/
int loc_dec(char *p)
{
	int count=0;
	for(;p<p+strlen(p);p++)
	{
		if(*p=='.') return count;
		count++;
	}
}
int main(int argc,char *argv[])
{
	char a[100000],b[100000];
	char *p1=NULL,*p2=NULL;
	int len1,len2,maxlen;
	while(scanf("%s%s",a,b)!=EOF)
	{
	p1=a,p2=b;
	/*从前往后寻找“有意义的”数字*/
	while(1)
	{	
		if(*p1!='0'||(*(p1+1)=='.'&&*p1=='0')) break;
		p1++;
	}
	while(1)
	{		
		if(*p2!='0'||(*(p2+1)=='.'&&*p2=='0')) break;
		p2++;
	}
	len1=strlen(p1),len2=strlen(p2);
	maxlen=len1>len2?len1:len2;
	/*把后面与较长字符串等宽的没有赋值的位置补'0'*/
	if(exi_dec(p1))
	{
		memset(p1+len1,'0',maxlen-len1);
	}
	if(exi_dec(p2))
	{
		memset(p2+len2,'0',maxlen-len2);
	}
	/*输入一个整数一个小数时补上小数点
	if(exi_dec(p1)&&(exi_dec(p2)==0))
	{
		*(p2+loc_dec(p1))=0;
	}
	if(exi_dec(p2)&&(exi_dec(p1)==0))
	{
		*(p1+loc_dec(p2))=0;
	}*/

	/*在最后面的位置补上'\0'*/
	*(p1+maxlen)=0;
	*(p2+maxlen)=0;
	/*输出*/
	if(strcmp(p1,p2)) printf("NO\n");
	else printf("YES\n");
	}
}
