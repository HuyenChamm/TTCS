#include<stdio.h>
#include<math.h>
#include<time.h>
int P[]={15,12,18,5,9,14,10,8,6,20,13,29,11,2,19,7,4,16,32,22};// the tich cac vat
int n=sizeof(P)/sizeof(P[0]);
int W[]={10,15,8,6,1,20,3,12,4,18,21,44,5,12,10,7,8,10,20,24} ;//gia tri cac vat
int Pmax; // trong luong tui
int cs[20];

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
void Sapxep()
{
	for(int i=0; i<=n-1; i++)
		for(int j=i+1;j<= n-1;j++)
		{
			if( W[cs[i]] / P[cs[i]] < W[cs[j]] / P[cs[j]] )
				{
					int tam=cs[j];
					cs[j]=cs[i];
					cs[i]=tam; 
				}
		}
}

void Caitui(int Pmax)
{
	int S=0; 
	int giatri=0;
	int i=1; 
	while ((S<=Pmax) && (i<=n))
	 {  
 	if (S+P[cs[i]] <=Pmax)
 		{	
		 	S= S+P[cs[i]] ; 
		 	giatri=giatri+W[cs[i]];
		  	printf("\nvat:%4d,gia tri:%4d,the tich :%4d",cs[i],W[cs[i]],P[cs[i]]);
		}
		 i=i+1;
	} printf("\n The tich cac vat la :%4d",S);
	printf("\n Tong gia tri cua cac vat la :%4d",giatri);
//		printf("\nMang da sap xep la: ");
//    	for(int i = 0; i < n; i++){
//        printf("\nvat:%5d ,gia tri:%4d ,the tich:%4d", cs[i],W[cs[i]],P[cs[i]]);	
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
	Sapxep();
	printf("Cac vat duoc chon sap vao balo la :");
	Caitui(Pmax);
	/////////
	end = clock();
	time_use = (double)(end - start) / CLOCKS_PER_SEC;
	printf("\nTime thuc hien la:%f \n",time_use);
	//////////////////////
}

