/*

#include <stdio.h>

int main(){

	int a, b, c;

	char x, y;
	float flt;
	double dbl;

	printf("5, 2, 8 �Է� : ");
	scanf("%d, %d, %d", &a, &b, &c);
	printf("a = %d, b = %d\n",a,b);

	getchar();
	printf("���� �� �� �Է�<a, b> : ");
	scanf("%c, %c", &x, &y);
	printf("ù ���� : %c �������� : %c\n", x, y);

	printf("34.567, 24.93 �Է� : ");
	scanf("%f, %lf",&flt, &dbl); 
	//scanf�� ������ ������ �ڿ� ������ 
	//�Է��� �� ���;� ��µȴ�.
	//ex)scanf("%d, %d ") <-������ %d�ڿ� space�� �־ �����Է���
	//�� ���;� ��µȴ�.
	
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

	printf("��-��-�� ����(1949-8-15)���� �Է� : ");
	scanf("%d-%d-%d",&y, &m, &d); 
	//enter�ϸ� �ڵ����� �ٹٲ޵ȴ�.
	printf("%d-%d-%d\n", y, m ,d);

	printf("��/��/�� ����(1949/8/15)���� �Է� : ");
	scanf("%d/%d/%d",&y, &m, &d);
	printf("%d/%d/%d\n", y, m, d);

	printf("��:��:�� �������� �Է� : ");
	scanf("%d:%d:%d",&hour,&min, &sec);
	printf("%d:%d:%d\n",hour, min, sec);

	getchar();
	printf("abcdend �Է� : ");
	scanf("%[a-d]",&string1);  //a~d�� ������ �ʴ��� ��µ��� �ʴ´�.
	printf("string1 = %s\n",string1);

	fflush(stdin); //���۾������ ���� �����־ ����� ����� �ȵȴ�.
	printf("lovebig �Է� : ");
	scanf("%[^a-c]",&string2);  //a-c �̿��� ���ڰ� ������ �ʴ��� ����� ���� �ʴ´�.
	printf("string2 = %s\n", string2);







return 0;
}

*/




//ex) ������ ������ ���ڿ��� scanf�� �о� ���
#include <stdio.h>

int main(){

	char string[20] =  {0}; // 20�ڸ��߿� �������� \0(�ڸ���)���̱� ������
	//19���ڱ��� ǥ������

	printf("scanf�� �̿��Ͽ� ������ ������ ���ڿ��� �Է� : ");
	scanf("%[^\n]",&string);
	printf("%s\n",string);





return 0;
}




/*

#include <stdio.h>

int main(){

	char st[256];
	printf("�ּ� �Է� : ");
	scanf("%s", st);  //�迭�� �̹� �ּҰ��� ���� �Ǳ⶧���� &��� ��
	printf("�ּ� : %s\n",st);


	fflush(stdin);
	printf("�ּ� �Է� : ");
	gets(st);
	printf("�ּ� : %s\n",st);




return 0;
}



*/
