#include <stdio.h>
int main(){
	
	int total,i,j,k=0,count;
	printf("Enter total number of students : ");
	scanf("%d", &total);	
	int list[total];	
	for(i=0;i<total;i++){
		printf("Enter roll no %d student : ",i+1);
		scanf("%d", &list[i]);
	}	 
	printf("This is the updated list without repeation\n"); 	 
	int updatedlist[total]; 	 
	for(i=0;i<total;i++){
		count=0;
		for(j=0;j<total;j++){
			if(list[i]==list[j]){
				if(i>j){
				count++;
				}
			}
		}
		if(count==0){
		updatedlist[k]=list[i];
		k++;
		}
	}	
	for(i=0;i<k;i++){
		printf("%d\n",updatedlist[i]);
	}
	
	return 0;
}


