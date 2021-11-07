#include<stdio.h>
#include<conio.h>

int AA[10] = {1,22,88,40,5,36};
int end = 5;
int i,rem;

main(){
	for (i = 0; i <= end; i++){
		printf ("	element# %d is : %d\n ", i, AA[i]);
	}
	
	printf ("\n");
	printf ("	Delete data at element# [2,3,4,5]: ");
	scanf ("%d",&rem);

	for (i = end; i <= end; i++){ AA[rem-2] = AA[rem-2]-AA[rem];}
	
	for (i = rem; i < end; i++){AA[i] = AA[i+1];}
	
	end--;
	
	for (i = 0; i <= end; i++){
		printf ("	element# %d is : %d\n ", i, AA[i]);
	}
	
	getch();
}
