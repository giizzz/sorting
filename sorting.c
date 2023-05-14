#include <stdio.h>
void degistir(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int i,j;
	int arr[] = {7,2,5,4,1,6,0,3};
	for(i=0;i<8;i++){
		for(j=i+1;j<8;j++){
			if(arr[i]>arr[j]){
				degistir(&arr[i],&arr[j]);
			}
		}
	}
	for(i=0;i<8;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
