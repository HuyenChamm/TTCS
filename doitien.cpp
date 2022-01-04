#include<stdio.h>
#include<math.h>
#define max 6
int c[max] = {500,200,100,50,20,10};
int a[max];
int t;
int main()
{
	printf("Moi ban nhap so tien muon doi :");
	scanf("%d",&t);
	if (( t > 10 ) && (t % 10 == 0))
	{
		for (int i = 0; i< t; i++) 
		{
		a[i] = t/c[i];
		printf("\nMenh gia :%d co so to la : %d",c[i],a[i]);
		t = t - c[i] * a[i];
		}
	}
	else 
		printf("Moi nhap lai");
}
