#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
int a[100001];
void quickSort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}
int main(){
	int n;
	printf("Moi ban nhap so cay hoa :");
	scanf("%d",&n);
	printf("Moi ban nhap so gio no hoa cua cay :");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a, 0, n-1);
	int k = 1;
	int max = 0;
	for (int i = n-1; i >= 0; i--){
		if (a[i] + k > max){
			max = a[i] + k;
		}
		k = k+1;
	}
	printf("\nNgay no hoa som nhat la :%d",max);
	return 0;
}
