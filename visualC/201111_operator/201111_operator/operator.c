/*

#include <stdio.h>

int main(){
	long long x,y;
	
	printf("두 수 입력 ex) a b : ");
	scanf("%d %d",&x, &y);

	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x/y);
	printf("%d %% %d = %d\n", x, y, x%y); //ㄷ, ㅁ, ㅅ, ㅇ+한자 하면 문자나온다.
	printf("%d /%d = %f\n", x, y, (double)x/(double)y);

	

	

return 0;

}

*/

/*

#include <stdio.h>


int main(){

	int y =5;

	printf("y = %d\n",y);
	printf("y + 1 = %d\n",y += 1);
	printf("y - 1 = %d\n", y -= 1);
	printf("y * 2 = %d\n", y *= 2);
	printf("y / 2 = %d\n", y /= 2);
	printf("y %%3 = %d\n",y %= 3);





return 0;

}


*/


/*
#include <stdio.h>

int main(){


	int x, y, a, b, c, d;

	x = y = 7;

	a = x++;
	b = ++y;

	printf("a = x++ ----> a = %d, x = %d\n", a, x);
	printf("b = ++y ----> b = %d, y = %d\n", b, y);
	
	x = y =7;

	c = x--;
	d = --y;

	printf("c = x-- ----> c = %d, x = %d\n", c, x);
	printf("d = --y ----> d = %d, y = %d\n", d, y);






return 0;

}

*/


//ex)cast operator



/*
#include <stdio.h>

int main(){

	
	int x,y;
	

	double div1;
	double div2;
	int mod;


	x=6; y=4;  //모든 선언문이 지나고 나서 변수를 넣어줄 수 있다.
	div1 = (double)x / (double)y;
	div2 = x / y;
	mod = x % y;

	printf("real / real %d / %d = %.2f\n", x, y, div1);
	printf("integer / integer %d / %d = %f\n", x, y, div2);
	printf("%d %% %d = %d\n",x, y, mod );








return 0;
}

*/


/*

#include <stdio.h>



int main(){

	int x = 10;
	int y = -1;

	printf("결과는 %d\n", x >= 9 && x <= 20);
	printf("결과는 %d\n", x >= 9 || x <9);
	printf("결과는 %d\n", !!y);






return 0;
}


*/



#include <stdio.h>


int main(){

	int a, b, c;

	a = 12; b = 10;


	c = a & b;




	printf("12<1100> & 10<1010> --->%d\n",c);

	c = a|b;

	printf("12<1100> | 10<1010> --->%d\n",c);

	c = a ^ b;  //xor
	printf("12<1100> |^10<1010> --->%d\n",c);

	c=~a;

	printf("~ 12<1100> --->%d\n",c);

return 0;

}

