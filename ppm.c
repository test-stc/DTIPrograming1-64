#include<stdio.h>
#include<conio.h>

int AA[10]={11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
int end = 9;
int i, total = 0;
main() {
/*printf ("\n");
	for (i=0; i<10; i++){
	printf (" Enter data no. %d : ", i+1);
	scanf ("%d", &AA[i]);
	end++;
	} */
printf ("\n");
	for (i=0; i<=end; i++) {
	printf ("   element# %d  is : %d", i, AA[i] );
	printf ("\n		Total of data in Array is  %d\n", total );
	total = total + AA[i];
	}
getch();
}
