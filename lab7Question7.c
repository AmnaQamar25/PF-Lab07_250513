#include <stdio.h>
int main(){	
	int A,B,i,C;	
	printf("Enter total number of students in section A : ");
	scanf("%d", &A);
	printf("Enter total number of students in section B : ");
	scanf("%d", &B);	
	int secA[A],secB[B];	
	printf("Enter the roll numbers of students of section A\n");	
	for(i=0;i<A;i++){
		printf("Enter the roll number of %d student: ",i+1);
	  	scanf("%d", &secA[i]);
	}	
	printf("Enter the roll numbers of students of section B\n");	
	for(i=0;i<B;i++){
		printf("Enter the roll number of %d student : ",i+1);
	  	scanf("%d", &secB[i]);
	}	
	C=A+B;	
	int merged[C];	
	for(i=0;i<A;i++){
		merged[i]=secA[i];
	}
	for(i=0;i<B;i++){
		merged[A+i]=secB[i];
	}	
	printf("This is the combined list of roll numbers of students of both sections\n");	
	for(i=0;i<C;i++){
	  	printf("%d\n", merged[i]);
	}	
	return 0 ;
}
