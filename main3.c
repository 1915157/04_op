#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// op04_01
	
	int x,y,z,m;
	int a,b,c;
	
	x=1;
	a=3;
	b=4;
	c=5;
	
	y = m*x+b;
	y = a*x*x + b*x + c;
	m = (x+y+z)/3;
	
	printf("y=%d, m=%d", y,m);


//04op_02

	int x = 3;
	int cond1, cond2;
	
	cond1 = 2 < x && x < 5;
	cond2 = x>1 || x<4 && x>3;
	
	printf("cond1 = %d, cond2 = %d", cond1, cond2);
	
	return 0;


//04op_03

	int x;
	int y;
	
	printf("enter 2 integers : ");
	scanf("%d %d", &x, &y);
	
	printf(" + result is : %d\n", x+y);
	printf(" - result is : %d\n", x-y);
	printf(" * result is : %d\n", x*y);
	printf(" / result is : %d\n", x/y);
	printf(" %% result is : %d\n", x%y);
	
	return 0;

}

