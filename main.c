#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int i,j,a,b,m;

int tre[8]={24,35,57,234,25,235,234,4647};
int re[5];

void main(void)
{
printf("Input number whu fly\n");
scanf("%d",&a);

srand(time(NULL));	
for(i=0;i<5;i++)
{
	m=rand()%7;
	re[i]=tre[m];
}	

for(j=0;j<5;j++)
{
	
	b=b+(re[i]-7)/2;
	printf("%d ",b);
}
printf("\n");
}