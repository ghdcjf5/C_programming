/*

#include <stdio.h>
int main(){

	printf("��\t�����\t�䳢\n");
	printf("��\n��\n�ٶ�\n");
	printf("���ڴ� 35%%�̴�.\n");  //Ư������ �ڸ��� %2���� �־�� %�� ���´�.
	return 0;
}

//\t�� ��Ű�� ��Ű�� ������ ������ ������ ���ڼ���ŭ �װ����� �پ���.


*/

/*
include <stdio.h>
int main(){
	
	printf("char ũ�� : %d bytes\n",sizeof(char));
	printf("int ũ�� : %d bytes\n",sizeof(int));
	printf("double ũ�� : %d bytes\n",sizeof(double));

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