#include <stdio.h>
int main(){
	
	int seats[10]={1,0,0,0,0,0,1,0,1,0},num,i,succattempts=0;	
	do{
	printf("Enter a seat number (0-9) for booking : ");
	scanf("%d", &num);
	
			if(num>9 || num<0){
			printf("Invalid input!Please enter the seat number in the range (0-9)\n");
			continue;
			}		
			if(seats[num]==1){
				printf("Seat already booked.\n");
			}
			else{
				seats[num]=1;
				printf("Your seat is booked.\n");
				succattempts++;
			}
	}while(succattempts<5);	
	printf("\nFinal seat status\n\n");	
	for(i=0;i<10;i++){
		printf("Seat %d : %d\n", i,seats[i]);
	}
	
	return 0;
}
