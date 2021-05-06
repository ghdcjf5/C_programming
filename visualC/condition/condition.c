/*


#include <stdio.h>



int main(){
	




return 0;
}




*/






/*


#include <stdio.h>

int main(){

	int age;

	printf("나이 입력: ");
	scanf("%d",&age);

	if(age >= 19){
	
		printf("투표권이 있습니다. \n");

	}
	else{
	
		printf("나중에 오세오.\n");
	}


	




return 0;
}


*/



/*
#include <stdio.h>



int main(){
	int a =1 , b = 1;
	
	while(!(a==0 &&b==0)){ //a가 0 이고 b가 0일 때까지 계속
		printf("숫자 비교를 위한 입력: ");
		scanf("%d %d",&a,&b);

		if(a == b){
	
			printf("a는 b와 같다. \n");

			printf("if의 블록문\n");
		}
		else{
			//printf("if문 블록을 벗어난 지점\n");
			printf("a는 b와 같지 않다.\n");
		}	
	


	}




return 0;
}



*/

/*


#include <stdio.h>



int main(){
	
	int x = 1 ;
	while(1){

		printf("정수 입력 : ");
		scanf("%d",&x);

		if(x%3 == 0){
	
			printf("%d은(는) 3의 배수\n",x);
		}
		else{
	
			printf("%d은(는) 3의 배수가 아닌듯?\n",x);
		}

	}

return 0;
}

*/


/*
#include <stdio.h>



int main(){
	int grade = 1;

	while(1){
	

		printf("성적을 입력하세요 :");
		scanf("%d",&grade);

		if(grade >= 0 && grade <=100){
			if(grade ==100){
				printf("만점입니다.\n");
			}
			if(grade >= 90){
		
				printf("A등급\n");
			}
			else if(grade >=80){
				printf("B등급\n");
			}
			else if(grade >=70){
		
				printf("C등급\n");
			}

			else if(grade >=60){
		
				printf("D등급\n");

			}
			else{
		
				printf("F등급. \n");
			}
		return 0;  
		//0~100이내의 값을 넣었을때 한번만 출력하고 0으로 프로그램 끝낸다.
		//return 0을 아예 밖으로 빼고 while문에서 끝내고 싶은 곳에 break를 넣어도 가능.
		}
		else{
	
			printf("0~100이내의 성적을 기입하세요\n");
			fflush(stdin); //buffer를 비우는 코드
			//getchar(); //-> 한개문자를 스킵하기 위해서 ex)space
		}
	

	}

	
}


*/

/*
#include <stdio.h>



int main(){
	

	int num = 0;

	while(1){
		printf("상품 번호 :");
		scanf("%d",&num);


		switch(num){
	
		case 1 : printf("사과\n"); break; 
		case 2 : printf("배\n"); break;
		case 3 : printf("바나나\n");break;
		default : printf("1~3번 이내의 번호를 기입하세요\n");
		
	
		}
		fflush(stdin);
	}



return 0;
}
*/


/*
#include <stdio.h>



int main(){
	
	int grade = 1;
	//int cnggrade = 1;
	while(1){

		printf("성적을 기입하시오(0~100) : ");
		scanf("%d",&grade);
	
		//cnggrade = grade/10;
		if(!(grade<0 || grade>100)){
			switch(grade/10){
	
			case 10 :
			case 9 : printf("A학점\n"); break;
			case 8 : printf("B학점\n"); break;
			case 7 : printf("C학점\n"); printf("재수강 대상자 입니다.\n"); break;
			case 6 : printf("D학점\n"); printf("재수강 대상자 입니다.\n");break;
			default : printf("F학점\n"); printf("재수강 대상자 입니다.\n"); 

			}
		break;
		}
		else{
			printf("다시 기입하세요\n");
			fflush(stdin);
		}
	

	}




return 0;
}

*/


/*
//ex2,3,4,5,6)
#include <stdio.h>

int main(){
	
	int x=0;
	int a,b,c;
	int y = 0;
	int abslt = 0;
	char alpbt = 0;

	printf("정수 한개 입력 :");
	scanf("%d",&x);

	if(x>0){
		printf("%d = 양수\n",x);
	}

	else if(x == 0){
	
		printf("%d = 양수일까요 정수일까요\n",x);
	}

	else{
		printf("%d = 음수\n",x);
	}

	///--------------------///
	printf("세개의 정수를 입력 :");
	scanf("%d %d %d",&a,&b,&c);

	if(a>=b){
		if(a>=c){
			printf("최대값은 %d\n",a);  
		}
		else{  
			printf("최대값은 %d\n",c); 
		}
	}
	else{ //a<b
	
		if(b>=c){
			printf("최대값은 %d\n",b); 
		
		}
		else{ //c<b
			printf("최대값은 %d\n",c); 
		
		}
	}
	
	///----------------------------/////
	printf("정수 1개 입력 :");
	scanf("%d",&y);

	if(y%5 == 0){
	
		printf("5의배수\n");
	}
	else{
		printf("5의배수가 아니다\n");
	}
	///-------------------//
	printf("정수의 절대값 출력을 위한 정수 1개 입력 :");
	scanf("%d",&abslt);

	if(abslt>0){
		printf("절대값은 %d\n",abslt);
	}
	else{
		printf("절대값은 %d\n",-abslt);
	}
	//------------------------//
	while(1){
		fflush(stdin);
		printf("대소문자 변환을 위한 영문입력 : ");
		scanf("%c",&alpbt);

		if(alpbt>=65&&alpbt<=90){
			printf("대->소문자 변환 : %c\n",alpbt+32);
			break;
		}
		else if(alpbt>=97&&alpbt<=122){
	
			printf("소->대문자 변환 : %c\n",alpbt-32);
			break;
		}
		else{
			printf("a~z or A~Z 입력바람\n");
		}
	}


return 0;
}

*/

/*
#include <stdio.h>




int main(){
int x =3, y=5, z=10;
//int cal1,cal2,cal3,cal4;


printf("1 : %d x:%d y:%d z:%d\n",x+=3*x-y,x,y,z); //   x 7 y 5 z 10
 //printf안에서 연산을 해도 x값에 새 값이 집어넣어진다.
//계속 초기화 시켜주는 작업을 해야한다.
x =3; y=5; z=10;
printf("2 : %d x:%d y:%d z:%d\n",z/=y/5+x+6,x,y,z); // x 3 y 5 z 1
 x =3; y=5; z=10;
printf("3 : %d x:%d y:%d z:%d\n",y*=z/x<<2,x,y,z); // x 3 y 60 z 10
 x =3; y=5; z=10;
printf("4 : %d x:%d y:%d z:%d\n",x/=y++/x*--z,x,y,z); //x0 y 6 z 9
 //y/x를 하고(1.~~) y++됨 1*(z-1)된 값
x =3; y=5; z=10;
printf("5 : %d x:%d y:%d z:%d\n",x/=--z-y++/x*8,x,y,z);
//x 3 y 6 z 9
x =3; y=5; z=10;
printf("6 : %d x:%d y:%d z:%d\n",x/=--z-y++/x*7,x,y,z);
//x 1 y 6 z 9

return 0;
}
*/

/*
#include <stdio.h>
int year;

//4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년이다.
//400으로 나누어 떨어지면 윤년이다.
int main(){
	while(1){
		printf("윤년 판별기 :");
		scanf("%d",&year);
		if(((year%4 ==0) && (year%100 != 0))||(year%400==0)){
			
			printf("윤년\n");
			
		}
		else
			printf("평년\n");
	}

return 0;
}

*/


/*
//ex8
#include <stdio.h>
	int x=0;
	int check=0;



int main(){
	
	while(1){
		printf("1~9숫자 입력 : ");
		scanf("%d",&x);

		check = x%2;
	
		switch(check){
	
		case 0 :
			printf("%d는 짝수\n",x);
			break;
	
		case 1 : 
			printf("%d는 홀수\n",x);
			break;

		default : 
			printf("그럴리가 없는데...");
		}
	//fflush(stdin);
	}



return 0;
}

*/


//ex9
#include <stdio.h>

int grade;

int main(){
	

	while(1){
		printf("성적 기입(0~100) :");
		scanf("%d",&grade);

		if(grade<=100&&grade >=90){
	
			printf("A\n");
			break;
		}
		else if(grade<90&&grade >=80){
	
			printf("B\n");
			break;
		}
		else if(grade<80&&grade >=70){
	
			printf("C\n");
			break;
		}
		else if(grade<70&&grade >=60){
	
			printf("D\n");
			break;
		}
		else if(grade>=0&&grade < 60){
	
			printf("F\n");
			break;
		}

		else{
			printf("0~100의 숫자를 입력하세요\n");
			fflush(stdin);
		}
	}


return 0;
}













