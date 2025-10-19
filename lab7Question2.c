#include <stdio.h>
int main(){
        	
    int num,i,max=0;
    printf("Enter the number of students : ");
	scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
    printf("Enter the marks of %d student : ",i+1);
    scanf("%d", &arr[i]);
    }
   for(i=0;i<num;i++){
        if(max<arr[i]){
        	max = arr[i];
        }
    }
    printf("The highest marks from the list of students marks is : %d", max);
    
    return 0;
}

