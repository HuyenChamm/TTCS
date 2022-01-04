#include<stdio.h>
#include<math.h>
int tu,mau;
void nhap()
{
	printf("Moi ban nhap tu so:");
	scanf("%d",&tu);
	printf("Moi ban nhap mau so:");
	scanf("%d",&mau);
}
int main()
{ 
nhap();
	float tam;
	int MS; 
	
	printf("%d/%d  bang tong cac phan so",tu,mau);
	float ps= (float)tu/mau;
while (ps!=0)
	{
		tam= (float)mau/tu;
		MS=int(ceil(tam)); 
		printf(" 1/%d  ",MS);
		tu= tu*MS-1*mau;
		mau= mau*MS;
		ps= (float)tu/mau; 
	}
return 0;}

