#include<stdio.h> 
int main()
{
	int a,b,c,d,m,n;
	double x=0,y=0;
	scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&m,&n);
	if(a*d==b*c||b*c==a*d)puts("нч╫Б"); 
	else{
		x=(m*d-b*n)/(a*d-b*c);
		y=(m*c-a*n)/(b*c-a*d);
		printf("x=%f,y=%f",x,y);
		 
	} 
	return 0;
}
