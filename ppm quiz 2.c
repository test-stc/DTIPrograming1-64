#include<stdio.h>
#include<conio.h>

int AA[10]={11, 22, 33, 44, 55};
int end = 4;
int i;

main() {
printf ("\n");
	for (i=0; i<=end; i++){
	printf ("element# %d  is : %d\n", i, AA[i] );

	}
	end++; 
	
	printf ("\nEnter Array data : ");
	scanf ("%d",&AA[end]);
	printf("\n");
		for (i=0; i<=end; i++){
	printf ("element# %d  is : %d\n", i, AA[i] );

	}
	
getch();
}
