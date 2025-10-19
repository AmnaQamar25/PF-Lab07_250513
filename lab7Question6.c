#include <stdio.h>
int main(){
	
	int occur[10]={1,3,1,3,2,1,3,2,1,3},i,j=0;
	printf("This is the list of item codes\nPencil-item code (1)\nBag-item code (2)\nEraser-item code (3)\n");
	printf("Record of daily sold items based on the item code\n");
	for(i=0;i<10;i++){
		printf("%d  ",occur[i]);
	}
	int temp[10];
	for(i=0;i<10;i++){
		if(occur[i]!=3){
			temp[j]=occur[i];
			j++;
		}
	}
	for(i=0;i<j;i++){
		occur[i]=temp[i];
	}	
	printf("\nUpdated list after removing defective item code (3)\n");
	for(i=0;i<j;i++){
		printf("%d  ",occur[i]);
	}
	
	return 0;
}
