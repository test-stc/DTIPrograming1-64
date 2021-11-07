#include<stdio.h>

main(){
	char first_char_fname;
	printf("Enter your first character of your name : ");
	first_char_fname = getch();
	printf("--------------------------\n");
	printf("You enter : %c\n", first_char_fname);
	putchar(first_char_fname);
}
