
/*
#include <stdio.h>


int main(){
	
	int y = 0xae; //0000 0000 1010 1110
	
	printf("y << 1 = %#x\n",y << 1);  //0000 0001 0101 1100 ->1 5c
	printf("y << 2 = %#x\n",y <<2);  // 0000 0010 1011 1000 ->2 b8
	printf("y << 3 = %#x\n",y << 3); // 0000 0101 0111 0000 ->5 70
	printf("y << 4 = %#x\n",y <<4); // 0000 1010 1110 0000 -> a e0
	
	
	return 0;
	
}

*/


/*
#include <stdio.h>

int main(){

	int a,b,y;

	printf("두개의 정수값을 입력하고 enter키를 누르세요 : ");
	scanf("%d %d",&a, &b);

	y = (a > b) ? a : b;
	printf("a가 크면 a, b가 크면 b :%d\n",y);



return 0;
}

*/


//ex)정수/ 정수, 정수/ 실수



/*
#include <stdio.h>


int main(){

	int a=3,b=2;
	float c = 2.0;
	float length;


	printf("3/2 = %d\n",a/b );
	printf("3/2 = %.2f\n",a/c );

	printf("키 : ");
	scanf("%f",&length);


	float inch;
	inch = length/2.54;
	
	printf("인치로는 : %.2f\n",inch);
	printf("피트로는 : %.2f\n",inch/12);



return 0;
}
*/



/*

//ex4,5)
#include <stdio.h>


int main(){

	int a=3,b=2;
	float c = 2.0;
	float length;


	printf("3/2 = %d\n",a/b );
	printf("3/2 = %.2f\n",a/c );

	printf("키 : ");
	scanf("%f",&length);


	
	printf("인치로는 : %.2f inch\n",length/2.54);
	printf("피트로는 : %.2f feet\n",length/12/2.54);



return 0;
}




*/



/*
//ex07

//나눈 나머지를 더해주는 것에 유념해야한다.
#include <stdio.h>

int main(){

	int sec, min, hour;

	
	
	

	printf(" 초= 0시 0분 0초 : ");
	scanf("%d",&sec);

	
	hour = sec/3600;
	
	min = sec%3600/60;
	
	sec = sec%3600%60;

	printf("%d시 %d분 %d초 \n",hour, min, sec);

	





return 0;
}


*/



/*

//ex8)
#include <stdio.h>


int main(){

	//int x,y;
	float x,y;

	short a,b,c;
	short max;

	printf("y = 2x^3+3x^2+4x+1/x\n");
	printf(" x 값 입력 : ");
	//scanf("%d",&x);
	scanf("%f",&x);
	y = 2*x*x*x + 3*x*x + 4*x+ 1.0/x;

	
	//printf("y = %d",y);
	printf("y = %.3f\n",y);

	printf("a, b, c 값 입력 :");
	scanf("%d %d %d", &a, &b, &c);

	
	max= a*b+b*c+c*a;

	printf("ab+bc+ca = %d\n",max);



return 0 ;
}



*/



/*
//ex9
#include <stdio.h>

int main(){

	float C, F;

	printf("화씨--->섭씨 변환 식");
	printf("화씨 입력 : ");
	scanf("%f",&F);


	C = (5.0/9.0)*(F-32);
	
	//정수 나눗셈을 할 때 실수범위로 계산해야하니 5.0, 9.0이렇게 소숫점을 넣어줘야한다.(둘중 하나만 해도 됨)
	//안하면 5/9가 0이므로 계산값이 0이 나온다.
	
	printf("C=5/9(F-32) : C= %f",C);




return 0;
}

*/



/*

//ex)10

#include <stdio.h>

int main(){

	float C, DB, JAVA;
	float sum;

	
	printf("성적입력 | C, DB, JAVA 순으로 : ");
	scanf("%f %f %f", &C, &DB, &JAVA);

	
	sum =C + DB + JAVA;
	printf("C,DB,JAVA의 성적 | C = %.2f, DB = %.2f, JAVA = %.2f\n",C, DB, JAVA);
	printf("C,DB,JAVA의 총점: %.2f\n",sum);
	printf("C,DB,JAVA의 평균: %.2f\n",(C + DB + JAVA)/3);
	




return 0;
}

*/




/*

//ex12
#include <stdio.h>

int main(){



	short a,b,c;
	short max;




	

	printf("a, b, c 값 입력 :");
	scanf("%hd %hd %hd", &a, &b, &c);

	
	max= a*b-b*c-c*a;

	printf("ab-bc-ca = %hd\n",max);


	//short 는 scanf와 printf에서 정수형 출력시 hd사용해야한다.



return 0;

}


*/

/*

//ex)13
#include <stdio.h>


int main(){

	int x;

	printf("x의 부호를 변경 ex) -  -->  +,  + --> -  :");
	scanf("%d",&x);

	printf("변경전 : %d, 변경후 : %d",x,-x);



return 0;
}

*/



/*
//ex)14
#include <stdio.h>

int main(){

	char a;
	char b;

	printf("대문자는 소문자로 소문자는 대문자로 : ");
	scanf("%c",&a);

	b= (a>0x60) ? a-32 : a+32;  //0101 0000 ->80   아스키코드 값 순서가 대문자-> 소문자 순서다. 값은 97까지? 
	
	//printf("a check : %#x \n ",a);  //A =41  a는 61 z= 7a 
									//  0110 0001 0111 1010
									// 0001 1001 

	printf("변환! : %c\n",b);





return 0;
}

*/







//ex)15
#include <stdio.h>
#include <stdlib.h>

int main(){


	//	int rdm = rand() %10;  //난수는 정수

	//printf("%d\n",rand()); //처음 난수는 41만 발생함
	//printf("%d\n",rand());
	//printf("%d\n",rand()); 
//	printf("%d\n",rand()); 
//	printf("%d\n",rand()); 
	// 언제나 똑같은 순서로 숫자를 발생함, time이라는 함수를 써줘야 그 난수중에서 랜덤으로 하나 뽑는것
	//10으로 나눈 나머지로 해도 1 7 4 0 9 이런순으로 정해진 순서의 숫자가 나온다.
	

	int i;
	for(i=0;i<30;i++){
		printf("생성! %d\n",rand()%(80-31+1)+31);  //rand() %(max-min +1) + min
	}

return 0;
}






/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


	int i;
	
	srand(time(NULL));

	for(i=0;i<20;i++){
	
	printf("%d\n",rand()%101);
	}

return 0;
}



*/








/*
//글자 고대로 대소문자 변경 (버그 남음)
#include <stdio.h>

int main(){

	char a[30]={0};
	char b[30]={0};
	int i=0;
	printf("대문자는 소문자로 소문자는 대문자로 : ");
	scanf("%[^\n]",&a);

	for(i=0;i<30;i++){
	b[i]= (a[i]>0x60) ? a[i]-32 : a[i]+32;  //0101 0000 ->80   아스키코드 값 순서가 대문자-> 소문자 순서다. 값은 97까지? 
	

	
	}
	//printf("a check : %#x \n ",a);  //A =41  a는 61 z= 7a 
									//  0110 0001 0111 1010
									// 0001 1001 

	printf("변환! : %s\n",b);





return 0;
}


*/