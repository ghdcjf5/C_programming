/* 
//ex1)
 
#include <stdio.h>

int main(){

	float var = 1.23f;  //float 사용시에는 실수값 뒤에 f 붙여야한다.
	double data = 4.567;

	printf("var값 : %.1f\n", var);
	printf("data값 : %.2f\n", data);
	printf("data값 : %10.3f\n", data);

	//전체 자리수 10자리에 소수점도 포함
	//소수점이하자리 출력을 원래 수보다 줄이면 자동 반올림되어 나온다.

return 0;
}

*/


/*
//ex2)

#include <stdio.h>

int main(){

	int number = 0;
	char ch = 65;
	char letter = 'A';
	char zero = '0';

	printf("number : %d\n",number);
	printf("ch : %c, ASCIICODE : %d\n",ch,ch);
	printf("letter : %c, ASCIICODE : %d\n",letter,letter);
	printf("zero : %c, ASCIICODE : %d\n", zero,zero);
	printf("%c\n",letter+1);
	printf("%c\n",letter+32);







return 0;
}


*/



/*   
//ex3)

#include <stdio.h>
#include <string.h>

int main(){

	char buf[256];
	char s[5] = {'L', 'o', 'v', 'e', NULL};
	char str[] = "Love";
	char *ptrUse = "pointer use";

	printf("%-10s %6s %6s\n","홍 길 동", "사과", "장미");
	//printf("%s\n", s);
	printf("%s\n", str);
	printf("%s\n", ptrUse);
	printf("s : %s\n",s );
	printf("s : %s\n",str );
	printf("문자열 길이 = %d, ", strlen(str));
	printf("배열 길이 = %d\n", sizeof(str));











return 0;

}

*/


/* 
//exercise Q3

#include <stdio.h>

int main(){

	int x = 10;

	printf("10의 8진수 : %o\n", x);   //%#o면 8진수 숫자앞에 0 붙음
	printf("10의 16진수 : %#X\n",x);	  //%#x면 16진수 숫자앞에 0x 붙음
	printf("10의 10진수 : %d\n",x);




return 0;
}

*/



/*
//exercise Q4 Q5

#include <stdio.h>
//#define PI 3.14

int main(){
	const double PI = 3.14;
	int r = 5;
	double s = PI*r*r;
	double rnd = 2*PI*r;

	printf("printf를 이용한 원의 면적은 %0.2f\n",PI*r*r);
	printf("printf를 이용한 원의 면적은 %0.2f\n",2*PI*r);
	printf("원의 면적은 %0.2f\n", s);
	printf("원의 둘레는 %0.2f\n", rnd);


return 0;
}

*/




/*

//exercise q6

#include <stdio.h>
#include <string.h>

int main(){

	char ch = 'G';
	
	
	printf("문자 %c는 ASCII 코드로 %d\n ",ch,ch);
	



return 0;
}

*/




/*

//exercise Q8~14
#include <stdio.h>

int main(){
	int x = 24;
	char ch1 = 'a';
	char ch2 = 'b';
	float happy = 78.78f;
	short a = 3;
	short b = 9;




	printf("Q8. x의 정수값 : %d\n",x);
	printf("Q9. 저장된 두 문자 :%c, %c\n    ASCIICODE로 변환시 a : %d, b : %d\n",ch1, ch2, ch1, ch2);
	printf("Q10. 성명 : 홍 길동\n     주소 : 경기도 부천시 원미구\n");
	printf("Q10. 성명 : 홍 길동\n        주소 : 경기도 부천시 원미구 -> tab은 8칸이다 \n");
	printf("Q11. 성명 : 홍 길동\n\t주소 : 경기도 부천시 원미구\n");
	printf("Q12. 큰꿈을 품어라!\n");
	printf("Q13. 나의 행복지수는 %0.2f%다\n",happy);
	printf("Q13. 나의 행복지수는 95%%다\n",happy);
	printf("Q14. 3+9 = %d\n",a+b);

	printf("Q11-1.\n    *    \n   * *   \n  *   *  \n *     * \n*********\n");
	printf("Q11-2.\n*********\n*       *\n*       *\n*       *\n*********\n");
	printf("Q11-3.\n    *    \n   * *   \n  *   *  \n   * *   \n    *    \n");




return 0;
}


*/

/*

//ex1)
#include <stdio.h>

int main(){

	printf("C Programming\n");
	printf("I\ncan\ndo\tit.\n");
	printf("개는 \"멍멍\" 짓는다. \n85%% 이자.\n");


return 0;
}

*/



/*

//ex)
#include <stdio.h>

int main(){

	int x = 2; int y = 3;
	float a = 1.2345f;

	printf("Hello!\n");
	printf("%d 명이 %d 개의 사과를 먹을까?\n",x+y, 1000);
	printf("%d + %d = %d\n", x, y, x+y);
	printf("1234567890");
	printf("\n%6d\n%6d\n%6d\n",8, 88, 888);
	printf("\n%-3d\n%-3d\n%-3d\n",8, 88, 888);
	printf("\n%-8.2f\n%-8.3f\n%-8.4f\n%-6f\n",a,a,a,a);

return 0;
}

*/

/*

//ex) scanf
#include <stdio.h>

int main(){

	int ai;
	double du;
	char ch;

	
	printf("정수입력 : ");
	scanf("%d",&ai);
	printf("실수입력 : ");
	scanf("%lf",&du);
	
	
	getchar();  //문자입력을 받기위해
	printf("하나의 문자입력 : ");
	scanf("%c",&ch);
	printf("ai : %d, du : %f, ch : %c\n",ai, du, ch);




return 0;

}

*/

//scanf 2개씩 출력
#include <stdio.h>

int main(){

	int a,b;
	char ch1,ch2;
	float fl;
	double du;

	printf("정수1, 정수2 입력 : ");
	scanf("%d %d", &a, &b);
	printf("a = %d, b= %d\n",a, b);

	getchar();
	printf("문자1, 문자2 입력 ex) <a b> : ");
	scanf("%c %c",&ch1, &ch2);
	printf("첫문자 : %c 다음 문자 : %c\n",ch1, ch2);

	printf("실수1, 실수2 입력 (단, 실수1은 소수 3자리 실수2는 2자리까지 출력): ");
	scanf("%f %lf", &fl, &du);
	printf("fl : %.3f, du : %.2f",fl, du);




return 0;
}








