#include<stdio.h>
void demo()
{
	printf("Inside Demo\n");
}
int Add(int no1, int no2)
{
	int ans=0;
	ans=no1+no2;
	return ans;
}
int main()
{

	int rec=0;
	demo();
	rec=Add(11,10);
	printf("%d\n",rec);
	return 0;

}