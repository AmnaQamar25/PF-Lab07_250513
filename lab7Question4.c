#include <stdio.h>
int main(){
	
	int num,i,j,count,id=1,max=0,a;
	
	printf("Enter the number of products sold : ");
	scanf("%d", &num);
	
	int arr[num];
	
	for(i=0;i<num;i++){
		printf("Enter the ID of %d sold product : ",id);
		scanf("%d", &arr[i]);
		id++;
	}
	
	for(i=0;i<num;i++){
		count=0;
	    for(j=0;j<num;j++){
			if(arr[i]==arr[j]){
			count++;
			}
		}
		if(max<count){
			max=count;
			a=i;
		}
}
		printf("The product with ID (%d) is most frequently sold product.\nIt is sold %d times\n ",arr[a],max);
	return 0;
}
