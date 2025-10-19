#include <stdio.h>
int main(){
	
	int prices[5]={10,15,20,25,30},budget,i,j;
	
	printf("Prices of prodcuts\n(1)Milk-$10\n(2)Juice-$15\n(3)Biscuit-$20\n(4)Pen-$25\n(5)Marker-$30\n");
	printf("Enter your budget : ");
	scanf("%d", &budget);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(prices[i]+prices[j]==budget){
				if(i==j){
					printf("You can buy product %d twice in %d\n",i+1,budget);
				}
				else if(j>i){
				printf("You can buy product %d and product %d in %d\n", i+1,j+1,budget);
				}
			}
		}		
	}	
	
	
	return 0 ;
}
