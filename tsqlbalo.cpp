#include<stdio.h>
#include<math.h>
#include<time.h>
#define max 100
int P[]={15,12,18,5,9,14,10,8,6,20,13,29,11,2,19,7,4,16,32,22};// the tich cac vat
int n=sizeof(P)/sizeof(P[0]);
int W[]={10,15,8,6,1,20,3,12,4,18,21,44,5,12,10,7,8,10,20,24} ;//gia tri cac vat
int Pmax; // trong luong tui
int cs[20];
int b[max];
void Ganchiso()
{
	for (int i=0; i<n; i++)
		cs[i] = i;
}
void Nhap()
{
	printf("Moi ban nhap the tich tui : ");
		scanf("%d",&Pmax);
}
void Caitui()
		{		 int S=0;
				 int giatri=0;
				 for (int i=0;i<n;i++)
				 if (b[i]==1) 
				 {
				 	S = S+P[cs[i]] ; 
				 	giatri=giatri+W[cs[i]];
				 }
			if (S==Pmax)
		 	{ // in ra phuong an chon vat
				 printf("\n");
				 for(int i=0;i<n;i++)
				 if (b[i]==1)
				printf("vat thu:%3d the tich:%3d gia tri:%3d ",cs[i],P[cs[i]],W[cs[i]]);
				printf("\n The tich cac vat la :%4d",S);
				printf("\n Tong gia tri cua cac vat la :%4d",giatri);
				printf("\n");
		 	} 
		 } 
 //------------------------------------
 void Thu(int j)
 {
	for ( int i=0;i<=1;i++)
 	{ 
 	b[j]=i;
		 if (j<n-1) 
		 	Thu(j+1);
		 else
			 Caitui();
			 b[j]=0;
 	}
 }
int main()
{
	Nhap();
	Ganchiso();
/////////////////
	double time_use;
	clock_t start,end;
	start = clock();
//////////////
	Thu(0);
/////////
	end = clock();
	time_use = (double)(end - start) / CLOCKS_PER_SEC;
	printf("\nTime thuc hien la:%f \n",time_use);
	return 0;

}

