#include <stdio.h>
void inputArray(int *array, int n){
	int i;
	for (i = 0; i<n ;i++){
		printf("a[%d]= ",i+1);
		scanf("%d",&array[i]);
	}
}
float averange(int *array, int n){
	int sum = 0, odd =0;
	int i;
	
	for (i=0;i<n;i++){
		if( array[i] % 2 !=0){
		sum += array[i];
		odd++;
		}
		
		
	}
	
	
	return odd > 0 ? (float)sum/odd: 0;
}
void printArray(int *array, int n){
	int i;
    for(i=0;i<n;i++) printf("%d ",array[i]);
}
int main(){ 
	int n;
	do{
		printf("Enter number of Element: ");
	}while(scanf("%d",&n) != 1 || n<=0);
	int a[n];
	inputArray(a,n);
	printArray(a,n);
	float avr = averange(a,n);

	printf("\n\nOUTPUT");
	printf("\n%.3f\n",avr);
	
	return 0;
	}
