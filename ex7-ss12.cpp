#include<stdio.h>
int arr[100][100];
void mang_hai_chieu( int hang, int cot){
	printf("Nhap cac gia tri trong mang : \n");
     for (int i=0;i<hang;i++){
     	for (int j=0;j< cot;j++){
     	    printf("nhap phan tu [%d][%d]",hang,cot);
     	    scanf("%d", arr[hang][cot]);
     	}
    }
}
void in_mang ( int hang, int cot){
	printf(" in ra cac hang trong mang nay chinh la: \n ");
	for (int i =0;i<cot;i++){
		for (int j=0; j<hang; j++){
			printf("%d", arr[hang][cot]);
		}
	}
}
int main(){
	int row;
	int column;
	printf("nhap so cot la :\n");
	scanf("%d", &column);
	printf("nhap so hang la : \n");
	scanf("%d", &row);
	int arr[100][100];
    mang_hai_chieu (row,column);
    in_mang (row,column);
	
	return 0;	
}
	

