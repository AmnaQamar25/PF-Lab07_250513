#include <stdio.h>
int main(){
	
	int arr[9],i;
	
	printf("Enter the employee ID numbers : \n");
	for(i=0;i<=9;i++){
		scanf("%d", &arr[i]);
	}
	printf("This is the organised list of employees ID numbers.\n");
	for(i=0;i<=9;i++){
	   if(arr[i] % 2 == 0){
	   	printf("%d\n", arr[i]);
	   }
	}
	for(i=0;i<=9;i++){
	   if(arr[i] % 2 != 0){
	   	printf("%d\n", arr[i]);
	   }
	}	
	return 0;
}
