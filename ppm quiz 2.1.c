#include<stdio.h>
#include<conio.h>

int AA[10] = {1,2,3,4,5,6};
int end = 6;
int i,ins;

main(){
	for ( i = 1; i <= end; i++){
		printf ("	Enter data no. %d is : %d\n ", i, AA[i-1]);
	}

	printf ("\n");
	printf ("	Insert data at element# [1,2,3,4,5]: ");
	scanf ("%d",ins);
	
	printf ("	Enter array data : ");
	scanf ("%d",AA[ins]);
	printf ("\n\n");
	
	for (i = end; i > ins; i--){ AA[i] = AA[i-1];}
	
	for (i = 0; i <= end; i++){
		printf ("	element# %d is : %d\n ", i, AA[i-1]);
	}

	getch();
}
