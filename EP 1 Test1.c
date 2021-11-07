#include<stdio.h>

func1(){
	printf("999\n");

}

func2();
func3();
main(){ 

	printf("-------------\n");
	func1(); //call function
	func1(); //call function
	printf("Wow Wow Wow\n");
	printf("-------------\n");
	printf("Hi everybody\t\t\tbody....\n");// /t space display    /n newline display
	printf("-------------\n");
	func2(); //call function
	printf("Hello world!\n");
	func2(); //call function
	
 getch();
}

func2(){
	printf("111\n");
}
func3(){
	printf("555\n");
}
