/* 
//ex1)
 
#include <stdio.h>

int main(){

	float var = 1.23f;  //float ���ÿ��� �Ǽ��� �ڿ� f �ٿ����Ѵ�.
	double data = 4.567;

	printf("var�� : %.1f\n", var);
	printf("data�� : %.2f\n", data);
	printf("data�� : %10.3f\n", data);

	//��ü �ڸ��� 10�ڸ��� �Ҽ����� ����
	//�Ҽ��������ڸ� ����� ���� ������ ���̸� �ڵ� �ݿø��Ǿ� ���´�.

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

	printf("%-10s %6s %6s\n","ȫ �� ��", "���", "���");
	//printf("%s\n", s);
	printf("%s\n", str);
	printf("%s\n", ptrUse);
	printf("s : %s\n",s );
	printf("s : %s\n",str );
	printf("���ڿ� ���� = %d, ", strlen(str));
	printf("�迭 ���� = %d\n", sizeof(str));











return 0;

}

*/


/* 
//exercise Q3

#include <stdio.h>

int main(){

	int x = 10;

	printf("10�� 8���� : %o\n", x);   //%#o�� 8���� ���ھտ� 0 ����
	printf("10�� 16���� : %#X\n",x);	  //%#x�� 16���� ���ھտ� 0x ����
	printf("10�� 10���� : %d\n",x);




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

	printf("printf�� �̿��� ���� ������ %0.2f\n",PI*r*r);
	printf("printf�� �̿��� ���� ������ %0.2f\n",2*PI*r);
	printf("���� ������ %0.2f\n", s);
	printf("���� �ѷ��� %0.2f\n", rnd);


return 0;
}

*/




/*

//exercise q6

#include <stdio.h>
#include <string.h>

int main(){

	char ch = 'G';
	
	
	printf("���� %c�� ASCII �ڵ�� %d\n ",ch,ch);
	



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




	printf("Q8. x�� ������ : %d\n",x);
	printf("Q9. ����� �� ���� :%c, %c\n    ASCIICODE�� ��ȯ�� a : %d, b : %d\n",ch1, ch2, ch1, ch2);
	printf("Q10. ���� : ȫ �浿\n     �ּ� : ��⵵ ��õ�� ���̱�\n");
	printf("Q10. ���� : ȫ �浿\n        �ּ� : ��⵵ ��õ�� ���̱� -> tab�� 8ĭ�̴� \n");
	printf("Q11. ���� : ȫ �浿\n\t�ּ� : ��⵵ ��õ�� ���̱�\n");
	printf("Q12. ū���� ǰ���!\n");
	printf("Q13. ���� �ູ������ %0.2f%��\n",happy);
	printf("Q13. ���� �ູ������ 95%%��\n",happy);
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
	printf("���� \"�۸�\" ���´�. \n85%% ����.\n");


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
	printf("%d ���� %d ���� ����� ������?\n",x+y, 1000);
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

	
	printf("�����Է� : ");
	scanf("%d",&ai);
	printf("�Ǽ��Է� : ");
	scanf("%lf",&du);
	
	
	getchar();  //�����Է��� �ޱ�����
	printf("�ϳ��� �����Է� : ");
	scanf("%c",&ch);
	printf("ai : %d, du : %f, ch : %c\n",ai, du, ch);




return 0;

}

*/

//scanf 2���� ���
#include <stdio.h>

int main(){

	int a,b;
	char ch1,ch2;
	float fl;
	double du;

	printf("����1, ����2 �Է� : ");
	scanf("%d %d", &a, &b);
	printf("a = %d, b= %d\n",a, b);

	getchar();
	printf("����1, ����2 �Է� ex) <a b> : ");
	scanf("%c %c",&ch1, &ch2);
	printf("ù���� : %c ���� ���� : %c\n",ch1, ch2);

	printf("�Ǽ�1, �Ǽ�2 �Է� (��, �Ǽ�1�� �Ҽ� 3�ڸ� �Ǽ�2�� 2�ڸ����� ���): ");
	scanf("%f %lf", &fl, &du);
	printf("fl : %.3f, du : %.2f",fl, du);




return 0;
}








