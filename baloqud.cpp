#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int weight[]={15,12,18,5,9,14,10,8,6,20,13,29,11,2,19,7,4,16,32,22};// the tich cac vat
int n;
int value[]={10,15,8,6,1,20,3,12,4,18,21,44,5,12,10,7,8,10,20,24} ;//gia tri cac vat
int W; // trong luong tui
int max(int a, int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
void Nhap()
{
	printf("Moi ban nhap the tich tui : ");
		scanf("%d",&W);
}


int Caitui()
{
	int K[n+1][W+1];
	for (int i =0 ; i<=n ; i++)
	{
		for(int w=0 ;w<=W;w++)
		{
			if(i==0 || w==0)
				K[i][w]=0;
			else if(w< weight[i])
				K[i][w]=K[i-1][w];
			else
				K[i][w]=max(K[i-1][w],value[i]+K[i-1][w-weight[i]] );
		
		}
	}
	return K[n][W];
}
int truyvet()
{

	int i=n;

	int j=W;

	while ((i!=0)&&(j!=0))
	{
		if (K[i][j]!=K[i-1][j])
		{
			printf("%2d",i);
			GT+=c[i];
			j-=a[i];
	
		}
		i--;
	
	}

}
int main()
{
	Nhap();
	Caitui();
	printf("\n Cac do vat duoc cho vao tui la: ", i);
	truyvet();
	printf("\n\n Tong gia tri toi da cua tui la = %d ",W);
	printf("\n\n Tong trong luong cua do vat duoc cho vao tui la= %d", GT);
}

