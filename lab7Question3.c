#include <stdio.h>
int main(){
	
	int num,i,j=0,k=0,a,b;
	printf("Enter the number of employees : ");
	scanf("%d", &num);
	int ids[num],even[num],odd[num];
	for(i=0;i<num;i++){
		printf("Enter the ID for %d employee : ",i+1);
		scanf("%d",&ids[i]);
	}
	for(i=0;i<num;i++){
		if(ids[i] % 2 == 0){
			even[j]=ids[i];
			j++;
		}
		else{
		odd[k]=ids[i];
		k++;
		}
	}		
	a=j,b=k;
	j=0,k=0;
	
	for(i=0;i<a;i++){
		ids[i]=even[j];
		j++;
	}
	for(i=0;i<b;i++){
		ids[j+i]=odd[k];
		k++;
	}
	printf("This is the rearranged list of employees ids with even ids first\n");
	for(i=0;i<num;i++){
		printf("%d\n",ids[i]);
	}
	
	return 0;
}
