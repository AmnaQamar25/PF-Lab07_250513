#include <stdio.h>
int main(){
	
	int arr[9],i,max=0;
	printf("Enter the marks of each student : \n");
	for(i=0;i<=9;i++){
		scanf("%d", &arr[i]);
	}
   for(i=0;i<=9;i++){
	   if(max<arr[i]){
	   	max = arr[i];
	   }
	}
	printf("The highest marks from the list of students mark is : %d", max);
	return 0;
}
