
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

	printf("�ΰ��� �������� �Է��ϰ� enterŰ�� �������� : ");
	scanf("%d %d",&a, &b);

	y = (a > b) ? a : b;
	printf("a�� ũ�� a, b�� ũ�� b :%d\n",y);



return 0;
}

*/


//ex)����/ ����, ����/ �Ǽ�



/*
#include <stdio.h>


int main(){

	int a=3,b=2;
	float c = 2.0;
	float length;


	printf("3/2 = %d\n",a/b );
	printf("3/2 = %.2f\n",a/c );

	printf("Ű : ");
	scanf("%f",&length);


	float inch;
	inch = length/2.54;
	
	printf("��ġ�δ� : %.2f\n",inch);
	printf("��Ʈ�δ� : %.2f\n",inch/12);



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

	printf("Ű : ");
	scanf("%f",&length);


	
	printf("��ġ�δ� : %.2f inch\n",length/2.54);
	printf("��Ʈ�δ� : %.2f feet\n",length/12/2.54);



return 0;
}




*/



/*
//ex07

//���� �������� �����ִ� �Ϳ� �����ؾ��Ѵ�.
#include <stdio.h>

int main(){

	int sec, min, hour;

	
	
	

	printf(" ��= 0�� 0�� 0�� : ");
	scanf("%d",&sec);

	
	hour = sec/3600;
	
	min = sec%3600/60;
	
	sec = sec%3600%60;

	printf("%d�� %d�� %d�� \n",hour, min, sec);

	





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
	printf(" x �� �Է� : ");
	//scanf("%d",&x);
	scanf("%f",&x);
	y = 2*x*x*x + 3*x*x + 4*x+ 1.0/x;

	
	//printf("y = %d",y);
	printf("y = %.3f\n",y);

	printf("a, b, c �� �Է� :");
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

	printf("ȭ��--->���� ��ȯ ��");
	printf("ȭ�� �Է� : ");
	scanf("%f",&F);


	C = (5.0/9.0)*(F-32);
	
	//���� �������� �� �� �Ǽ������� ����ؾ��ϴ� 5.0, 9.0�̷��� �Ҽ����� �־�����Ѵ�.(���� �ϳ��� �ص� ��)
	//���ϸ� 5/9�� 0�̹Ƿ� ��갪�� 0�� ���´�.
	
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

	
	printf("�����Է� | C, DB, JAVA ������ : ");
	scanf("%f %f %f", &C, &DB, &JAVA);

	
	sum =C + DB + JAVA;
	printf("C,DB,JAVA�� ���� | C = %.2f, DB = %.2f, JAVA = %.2f\n",C, DB, JAVA);
	printf("C,DB,JAVA�� ����: %.2f\n",sum);
	printf("C,DB,JAVA�� ���: %.2f\n",(C + DB + JAVA)/3);
	




return 0;
}

*/




/*

//ex12
#include <stdio.h>

int main(){



	short a,b,c;
	short max;




	

	printf("a, b, c �� �Է� :");
	scanf("%hd %hd %hd", &a, &b, &c);

	
	max= a*b-b*c-c*a;

	printf("ab-bc-ca = %hd\n",max);


	//short �� scanf�� printf���� ������ ��½� hd����ؾ��Ѵ�.



return 0;

}


*/

/*

//ex)13
#include <stdio.h>


int main(){

	int x;

	printf("x�� ��ȣ�� ���� ex) -  -->  +,  + --> -  :");
	scanf("%d",&x);

	printf("������ : %d, ������ : %d",x,-x);



return 0;
}

*/



/*
//ex)14
#include <stdio.h>

int main(){

	char a;
	char b;

	printf("�빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� : ");
	scanf("%c",&a);

	b= (a>0x60) ? a-32 : a+32;  //0101 0000 ->80   �ƽ�Ű�ڵ� �� ������ �빮��-> �ҹ��� ������. ���� 97����? 
	
	//printf("a check : %#x \n ",a);  //A =41  a�� 61 z= 7a 
									//  0110 0001 0111 1010
									// 0001 1001 

	printf("��ȯ! : %c\n",b);





return 0;
}

*/







//ex)15
#include <stdio.h>
#include <stdlib.h>

int main(){


	//	int rdm = rand() %10;  //������ ����

	//printf("%d\n",rand()); //ó�� ������ 41�� �߻���
	//printf("%d\n",rand());
	//printf("%d\n",rand()); 
//	printf("%d\n",rand()); 
//	printf("%d\n",rand()); 
	// ������ �Ȱ��� ������ ���ڸ� �߻���, time�̶�� �Լ��� ����� �� �����߿��� �������� �ϳ� �̴°�
	//10���� ���� �������� �ص� 1 7 4 0 9 �̷������� ������ ������ ���ڰ� ���´�.
	

	int i;
	for(i=0;i<30;i++){
		printf("����! %d\n",rand()%(80-31+1)+31);  //rand() %(max-min +1) + min
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
//���� ���� ��ҹ��� ���� (���� ����)
#include <stdio.h>

int main(){

	char a[30]={0};
	char b[30]={0};
	int i=0;
	printf("�빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� : ");
	scanf("%[^\n]",&a);

	for(i=0;i<30;i++){
	b[i]= (a[i]>0x60) ? a[i]-32 : a[i]+32;  //0101 0000 ->80   �ƽ�Ű�ڵ� �� ������ �빮��-> �ҹ��� ������. ���� 97����? 
	

	
	}
	//printf("a check : %#x \n ",a);  //A =41  a�� 61 z= 7a 
									//  0110 0001 0111 1010
									// 0001 1001 

	printf("��ȯ! : %s\n",b);





return 0;
}


*/