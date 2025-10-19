#include <stdio.h>
int main(){
	
	int num,i,k,a,b,j;
	printf("Enter total number of employees : ");
	scanf("%d",&num);
	int ids[num];
	for(i=0;i<num;i++){
		printf("Enter the ID of %d employee : ",i+1);
		scanf("%d", &ids[i]);
	}
	printf("This is the original list of employees ids\n");
	for(i=0;i<num;i++){
		printf("%d ",ids[i]);
	}
	do{
	printf("\nEnter the value of k to rotate the list to right side by k positions : ");
	scanf("%d", &k);
	if(k>num || k<0){
		printf("Invalid input!Value of k should be smaller than the number of employees.\n");
	}
	}while(k>=num || k<0);
	if(k==0){
		printf("This is the shifted list of employees ids\n");
	for(i=0;i<num;i++){
		printf("%d ",ids[i]);
	}
	return 0;
	}
	a=num-k;
	b=a;
	int temp[k];
		for(i=0;i<k;i++){
	 	temp[i]=ids[a];
	 	a++;
		}
	int shiftids[num];
	for(i=0;i<k;i++){
        shiftids[i]=temp[i];
	}
	for(j=0;j<b;j++){
		shiftids[i+j]=ids[j];
	}
	printf("This is the list of shifted employees ids\n");
	for(i=0;i<num;i++){
		printf("%d ",shiftids[i]);
	}
	return 0;
}
