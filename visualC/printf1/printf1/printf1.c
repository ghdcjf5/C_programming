/*

#include <stdio.h>
int main(){

	printf("개\t고양이\t토끼\n");
	printf("눈\n비\n바람\n");
	printf("이자는 35%%이다.\n");  //특수문자 자리에 %2개를 넣어야 %가 나온다.
	return 0;
}

//\t는 탭키고 탭키의 공간은 정해져 있으며 글자수만큼 그공간이 줄어든다.


*/

/*
include <stdio.h>
int main(){
	
	printf("char 크기 : %d bytes\n",sizeof(char));
	printf("int 크기 : %d bytes\n",sizeof(int));
	printf("double 크기 : %d bytes\n",sizeof(double));

	return 0;

}

*/

/*

#include <stdio.h>

# define VALUE 999

int main(){

	const double PI = 3.141592;

	
	printf("%d\n",VALUE);
	printf("%f\n",PI);

	return 0;
}

*/




/*

#include <stdio.h>

int main(){

	int x;
	double y;
	char z;

	x = 3355;
	y = 12.25;
	z = 'y';

	printf("x = %d\n",x);
	printf("y = %.2f\n",y);
	printf("z = %c\n",z);



}




*/





#include <stdio.h>

int main(){
	short day = 365;
	int octal = 015;
	unsigned int us = 2147;
	long hex = 0xA2;

	printf("day = %d\n", day);
	printf("octal = %d, %#o\n",octal, octal);
	printf("us = %d\n",us);
	printf("hex = %d, %#x\n", hex, hex);


	return 0;




}