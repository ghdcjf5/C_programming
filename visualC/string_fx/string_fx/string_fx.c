/*
#include <stdio.h>
#include <string.h>
int main(){
	
	
return 0;	
}
*/


/*
#include <stdio.h>

int main(){

	char ch = 'A';
	char n = '\0';
	char zero = '0';
	printf("NULL �� ����(�ƽ�Ű)�� : %d,%d,%d,%d\n",n,0,NULL,zero);
	printf("ch = %c, code = %d\n",ch,ch);
	putchar(ch); 
	putchar(' ');
	putchar(65);
	printf(" ");
	putchar('A');
	printf("\n");
	
return 0;
}


*/


/*
#include <stdio.h>
#include <conio.h>


int main(){
	
	int ch;
	printf("�Ѱ��� ���� �Է��ϰ� Enter Ű ���� : ");
	scanf("%c",&ch);
	getchar();
	printf("�Է� ���� : %c\n", ch);
	
	printf("�� ���� ���� �Է��ϰ� Enter Ű ���� : ");
	ch = getchar();
	printf("�Է� ���� : ");
	putchar(ch);
	putchar('\n');
	
	printf("�� ���� ���� �Է� ��� ȭ�鿡 ǥ������ �ʰ� �о���� : ");
	ch = getch();
	printf("�Է¹��� : ");
	putch(ch);
	putch('\n');
	
	return 0;
	
	
return 0;	
}

*/


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int main(){

	int n;
	int *ar;
	int i;
	char *buf;
	char str[] = "I can do it!";
	
	printf("������ ���� : "); 
	scanf("%d",&n);
	ar = (int *)malloc(sizeof(int) * n);
	
	printf("%d���� ���� �Է� : ",n);
	for(i = 0;i<n;i++){
		scanf("%d", &ar[i]);	
	}
	
	for(i=0;i<n;i++){
		printf("%5d",ar[i]);		
	}
	printf("\n");
	free(ar);
	
	buf = (char *) malloc (MAX * sizeof(char));
	if(buf == NULL){
		
		perror("�޸� ��� �Ҵ� ����!\n");
		exit(1);
	}
	
	strcpy(buf, str);
	puts(buf);
	free(buf);
	
	buf = NULL;
	buf = (char *)	calloc(MAX, sizeof(char));
	
	strcpy(buf,str);
	puts(buf);
	
	free(buf);
	buf = NULL;
	
return 0;	
}


*/

/*

#include <stdio.h>
#include <string.h>
int main(){
	
	char buf[256];
	char *str = "vision";
	
	printf("�̸� : ");
	scanf("%s", buf);
	printf("%s\n", buf);
	gets(buf);
	puts(buf);

	puts(str);
	printf("%s\n",str);

	printf("�ּ� : ");
	fgets(buf,sizeof(buf), stdin);
	fputs(buf,stdout);
	puts(buf);

	
return 0;	
}
*/



/*

#include <stdio.h>
#include <string.h>
int main(){
	char str[256];

	puts("���ڿ� �Է� : ");
	fgets(str, sizeof(str),stdin);
	printf("�迭 ���� = %d, ",sizeof(str));
	printf("���ڿ� ���� = %d\n", strlen(str));
return 0;	
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	
	char *pt;
	int i,j;

	pt = (char*)malloc(sizeof(char)*256);

	strcpy(pt,"I can do it!");
	printf("%s\n\n",pt);

	free(pt);
	
return 0;	
}

*/


/*
#include <stdio.h>
#include <string.h>

int main(){
	
	char buf[1024];
	char *name = "filename";
	char *extention = ".txt";
	char str[] = "append";

	strcpy(buf,name);
	strcat(buf,extention);
	puts(buf);

	strncat(buf,str,sizeof(str));
	puts(buf);
	
	
return 0;	
}

*/


/*
#include <stdio.h>
#include <string.h>

int main(){

	char str1[1024];
	char str2[1024];

	puts("���ڿ� �Է�");
	fgets(str1,sizeof(str1),stdin);

	puts("���� ���ڿ� �Է� :");
	fgets(str2,sizeof(str2),stdin);

	if(strcmp(str1,str2)){
		puts("�ٸ�");
	
	}

	else{
	puts("����");
	}
return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	
	int i, radix = 16;
	char str[256] = "12fe34";  //fe�� 16���� ����
	char *stop;// ���� Ȯ�ο�
	long convert;
	
	stop = (char*)malloc(sizeof(char)*strlen(str)+1);
	printf("%d\n",sizeof(stop));
	printf("%d\n",atoi(str));
	convert = atol(str);
	printf("%d\n",convert);
	itoa(convert, stop,2);
	puts(stop);

	convert = strtol(str,&stop,16);//stop�� �ּҸ� ����Ű�� �����Ͷ� �װ��� �ּҸ� ����
	printf("16���� %s�� 10���� %d�̴�.\n",str,convert);
	for(i=0;i<strlen(str)-strlen(stop);i++){
		printf("%c",str[i]);		
	}
	printf("(%d)\t -> \t%li (10����)\n",radix,convert);
	


return 0;	
}
*/



/*
#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,j,k,m,n;
	char x[4], y[6];

	char str[1024] = "77,88 33 55";  //,�� ���ִ�
	char buf[1024] = {0};
	char *tmp = str;
	char format[] = "%d %d %d %d\n";

	sscanf(str,"%d%*c%d%d%d",&j,&k,&m,&n); //,�� ���������
	sprintf(tmp, format,j,k,m,n);
	puts(tmp);

	sscanf(str,"%d",&j);
	sscanf(str,"%d",&k);
	printf("������ �̵��� �����Ƿ� �հ� ���� �� : %d %d\n",j,k);

	sscanf(str,"%d %d %d %d",&j, &k,&m, &n);
	printf(format,j,k,m,n);

	//3�׸��� �ϳ��� ���ڿ��� ��ȯ�� str�� ����
	sprintf(str, "%3d%5.2f%10s\n",123,8.15,"vision");
	puts(str);

	//���ڿ��� long double�� ��ȯ
	sscanf(str,"%3s%5s%15s",x,y,buf);
	printf("%d %.2f %s\n",atoi(x),atof(y),buf);
	return 0;


}

*/

//q2 6�ڸ��� ���� �Է¹޾� ���ڿ��� �������� Ư����ġ���� �����Ͽ� �����κ�ȯ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,n;
	int a;
	char str[256];
	char buf[256];
	printf("6�ڸ����� �Է� : ");
	scanf("%d",&a);
	
	//���ڿ��� �ٲٱ�
	itoa(a,str,10);
	
	//Ư����ġ���� ������ ���ڷ� ���ֵ� �ȴ�. �迭
	printf("������ ������ Ư�� ��ġ(1~6) : ");
	scanf("%d",&n);

	strncpy(buf,str+n-1,7-n);//(���ο� str, ����, ��)
	buf[7-n]='\0'; //���� 0���� �ʱ�ȭ
	printf("%s\n",buf);//���ڰ� �ƴ� ���ڿ����

	



return 0;
}

