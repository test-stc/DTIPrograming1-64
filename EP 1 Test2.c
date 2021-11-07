#include<stdio.h> //libery file

main(){
	//declaration variable
	double money;  //format code----->%lf
	int person;	   //format code----->%d
	double share_money;//format code----->%lf
	printf("++++++++++++++++++++++++++++\n");
	printf("	American Share\n");
	printf("++++++++++++++++++++++++++++\n");
	printf("Input money : ");
	scanf( "%lf ", &money );
	printf("Input person : ");
	scanf( "%d ", &person );
	printf("++++++++++++++++++++++++++++\n");
	share_money = money / person;
	
	printf("Share money is : %lf bath/person\n ",share_money);
	
	printf("++++++++++++++++++++++++++++\n");
	
	
	
	getch(); //break sceen
}
