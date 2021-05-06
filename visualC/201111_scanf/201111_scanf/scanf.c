/*

#include <stdio.h>

int main(){

	int a, b, c;

	char x, y;
	float flt;
	double dbl;

	printf("5, 2, 8 입력 : ");
	scanf("%d, %d, %d", &a, &b, &c);
	printf("a = %d, b = %d\n",a,b);

	getchar();
	printf("문자 두 개 입력<a, b> : ");
	scanf("%c, %c", &x, &y);
	printf("첫 문자 : %c 다음문자 : %c\n", x, y);

	printf("34.567, 24.93 입력 : ");
	scanf("%f, %lf",&flt, &dbl); 
	//scanf를 쓸때는 공백을 뒤에 넣으면 
	//입력이 더 들어와야 출력된다.
	//ex)scanf("%d, %d ") <-마지막 %d뒤에 space가 있어서 다음입력이
	//또 들어와야 출력된다.
	
	printf("fl : %.6f, du : %.5lf\n",flt, dbl);






return 0;
}


*/

/*

#include <stdio.h>




int main(){
	int y, m, d;
	int hour, min, sec;
	char string1[20] = {0}, string2[20] = {0};

	printf("년-월-일 형식(1949-8-15)으로 입력 : ");
	scanf("%d-%d-%d",&y, &m, &d); 
	//enter하면 자동으로 줄바꿈된다.
	printf("%d-%d-%d\n", y, m ,d);

	printf("년/월/일 형식(1949/8/15)으로 입력 : ");
	scanf("%d/%d/%d",&y, &m, &d);
	printf("%d/%d/%d\n", y, m, d);

	printf("시:분:초 형식으로 입력 : ");
	scanf("%d:%d:%d",&hour,&min, &sec);
	printf("%d:%d:%d\n",hour, min, sec);

	getchar();
	printf("abcdend 입력 : ");
	scanf("%[a-d]",&string1);  //a~d가 나오지 않는한 출력되지 않는다.
	printf("string1 = %s\n",string1);

	fflush(stdin); //버퍼안지우면 값이 남아있어서 출력이 제대로 안된다.
	printf("lovebig 입력 : ");
	scanf("%[^a-c]",&string2);  //a-c 이외의 문자가 나오지 않는한 출력이 되지 않는다.
	printf("string2 = %s\n", string2);







return 0;
}

*/




//ex) 공백을 포함한 문자열을 scanf로 읽어 출력
#include <stdio.h>

int main(){

	char string[20] =  {0}; // 20자리중에 마지막은 \0(자릿수)값이기 때문에
	//19문자까지 표현가능

	printf("scanf를 이용하여 공백을 포함한 문자열을 입력 : ");
	scanf("%[^\n]",&string);
	printf("%s\n",string);





return 0;
}




/*

#include <stdio.h>

int main(){

	char st[256];
	printf("주소 입력 : ");
	scanf("%s", st);  //배열이 이미 주소값이 정의 되기때문에 &없어도 됨
	printf("주소 : %s\n",st);


	fflush(stdin);
	printf("주소 입력 : ");
	gets(st);
	printf("주소 : %s\n",st);




return 0;
}



*/
