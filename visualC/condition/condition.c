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

	printf("���� �Է�: ");
	scanf("%d",&age);

	if(age >= 19){
	
		printf("��ǥ���� �ֽ��ϴ�. \n");

	}
	else{
	
		printf("���߿� ������.\n");
	}


	




return 0;
}


*/



/*
#include <stdio.h>



int main(){
	int a =1 , b = 1;
	
	while(!(a==0 &&b==0)){ //a�� 0 �̰� b�� 0�� ������ ���
		printf("���� �񱳸� ���� �Է�: ");
		scanf("%d %d",&a,&b);

		if(a == b){
	
			printf("a�� b�� ����. \n");

			printf("if�� ��Ϲ�\n");
		}
		else{
			//printf("if�� ����� ��� ����\n");
			printf("a�� b�� ���� �ʴ�.\n");
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

		printf("���� �Է� : ");
		scanf("%d",&x);

		if(x%3 == 0){
	
			printf("%d��(��) 3�� ���\n",x);
		}
		else{
	
			printf("%d��(��) 3�� ����� �ƴѵ�?\n",x);
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
	

		printf("������ �Է��ϼ��� :");
		scanf("%d",&grade);

		if(grade >= 0 && grade <=100){
			if(grade ==100){
				printf("�����Դϴ�.\n");
			}
			if(grade >= 90){
		
				printf("A���\n");
			}
			else if(grade >=80){
				printf("B���\n");
			}
			else if(grade >=70){
		
				printf("C���\n");
			}

			else if(grade >=60){
		
				printf("D���\n");

			}
			else{
		
				printf("F���. \n");
			}
		return 0;  
		//0~100�̳��� ���� �־����� �ѹ��� ����ϰ� 0���� ���α׷� ������.
		//return 0�� �ƿ� ������ ���� while������ ������ ���� ���� break�� �־ ����.
		}
		else{
	
			printf("0~100�̳��� ������ �����ϼ���\n");
			fflush(stdin); //buffer�� ���� �ڵ�
			//getchar(); //-> �Ѱ����ڸ� ��ŵ�ϱ� ���ؼ� ex)space
		}
	

	}

	
}


*/

/*
#include <stdio.h>



int main(){
	

	int num = 0;

	while(1){
		printf("��ǰ ��ȣ :");
		scanf("%d",&num);


		switch(num){
	
		case 1 : printf("���\n"); break; 
		case 2 : printf("��\n"); break;
		case 3 : printf("�ٳ���\n");break;
		default : printf("1~3�� �̳��� ��ȣ�� �����ϼ���\n");
		
	
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

		printf("������ �����Ͻÿ�(0~100) : ");
		scanf("%d",&grade);
	
		//cnggrade = grade/10;
		if(!(grade<0 || grade>100)){
			switch(grade/10){
	
			case 10 :
			case 9 : printf("A����\n"); break;
			case 8 : printf("B����\n"); break;
			case 7 : printf("C����\n"); printf("����� ����� �Դϴ�.\n"); break;
			case 6 : printf("D����\n"); printf("����� ����� �Դϴ�.\n");break;
			default : printf("F����\n"); printf("����� ����� �Դϴ�.\n"); 

			}
		break;
		}
		else{
			printf("�ٽ� �����ϼ���\n");
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

	printf("���� �Ѱ� �Է� :");
	scanf("%d",&x);

	if(x>0){
		printf("%d = ���\n",x);
	}

	else if(x == 0){
	
		printf("%d = ����ϱ�� �����ϱ��\n",x);
	}

	else{
		printf("%d = ����\n",x);
	}

	///--------------------///
	printf("������ ������ �Է� :");
	scanf("%d %d %d",&a,&b,&c);

	if(a>=b){
		if(a>=c){
			printf("�ִ밪�� %d\n",a);  
		}
		else{  
			printf("�ִ밪�� %d\n",c); 
		}
	}
	else{ //a<b
	
		if(b>=c){
			printf("�ִ밪�� %d\n",b); 
		
		}
		else{ //c<b
			printf("�ִ밪�� %d\n",c); 
		
		}
	}
	
	///----------------------------/////
	printf("���� 1�� �Է� :");
	scanf("%d",&y);

	if(y%5 == 0){
	
		printf("5�ǹ��\n");
	}
	else{
		printf("5�ǹ���� �ƴϴ�\n");
	}
	///-------------------//
	printf("������ ���밪 ����� ���� ���� 1�� �Է� :");
	scanf("%d",&abslt);

	if(abslt>0){
		printf("���밪�� %d\n",abslt);
	}
	else{
		printf("���밪�� %d\n",-abslt);
	}
	//------------------------//
	while(1){
		fflush(stdin);
		printf("��ҹ��� ��ȯ�� ���� �����Է� : ");
		scanf("%c",&alpbt);

		if(alpbt>=65&&alpbt<=90){
			printf("��->�ҹ��� ��ȯ : %c\n",alpbt+32);
			break;
		}
		else if(alpbt>=97&&alpbt<=122){
	
			printf("��->�빮�� ��ȯ : %c\n",alpbt-32);
			break;
		}
		else{
			printf("a~z or A~Z �Է¹ٶ�\n");
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
 //printf�ȿ��� ������ �ص� x���� �� ���� ����־�����.
//��� �ʱ�ȭ �����ִ� �۾��� �ؾ��Ѵ�.
x =3; y=5; z=10;
printf("2 : %d x:%d y:%d z:%d\n",z/=y/5+x+6,x,y,z); // x 3 y 5 z 1
 x =3; y=5; z=10;
printf("3 : %d x:%d y:%d z:%d\n",y*=z/x<<2,x,y,z); // x 3 y 60 z 10
 x =3; y=5; z=10;
printf("4 : %d x:%d y:%d z:%d\n",x/=y++/x*--z,x,y,z); //x0 y 6 z 9
 //y/x�� �ϰ�(1.~~) y++�� 1*(z-1)�� ��
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

//4�� ������ �������� 100���� ������ �������� ������ �����̴�.
//400���� ������ �������� �����̴�.
int main(){
	while(1){
		printf("���� �Ǻ��� :");
		scanf("%d",&year);
		if(((year%4 ==0) && (year%100 != 0))||(year%400==0)){
			
			printf("����\n");
			
		}
		else
			printf("���\n");
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
		printf("1~9���� �Է� : ");
		scanf("%d",&x);

		check = x%2;
	
		switch(check){
	
		case 0 :
			printf("%d�� ¦��\n",x);
			break;
	
		case 1 : 
			printf("%d�� Ȧ��\n",x);
			break;

		default : 
			printf("�׷����� ���µ�...");
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
		printf("���� ����(0~100) :");
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
			printf("0~100�� ���ڸ� �Է��ϼ���\n");
			fflush(stdin);
		}
	}


return 0;
}













