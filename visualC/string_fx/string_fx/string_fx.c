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
	printf("NULL 의 정수(아스키)값 : %d,%d,%d,%d\n",n,0,NULL,zero);
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
	printf("한개의 문자 입력하고 Enter 키 누름 : ");
	scanf("%c",&ch);
	getchar();
	printf("입력 문자 : %c\n", ch);
	
	printf("한 개의 문자 입력하고 Enter 키 누름 : ");
	ch = getchar();
	printf("입력 문자 : ");
	putchar(ch);
	putchar('\n');
	
	printf("한 개의 문자 입력 즉시 화면에 표시하지 않고 읽어오기 : ");
	ch = getch();
	printf("입력문자 : ");
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
	
	printf("데이터 갯수 : "); 
	scanf("%d",&n);
	ar = (int *)malloc(sizeof(int) * n);
	
	printf("%d개의 점수 입력 : ",n);
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
		
		perror("메모리 블록 할당 실패!\n");
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
	
	printf("이름 : ");
	scanf("%s", buf);
	printf("%s\n", buf);
	gets(buf);
	puts(buf);

	puts(str);
	printf("%s\n",str);

	printf("주소 : ");
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

	puts("문자열 입력 : ");
	fgets(str, sizeof(str),stdin);
	printf("배열 길이 = %d, ",sizeof(str));
	printf("문자열 길이 = %d\n", strlen(str));
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

	puts("문자열 입력");
	fgets(str1,sizeof(str1),stdin);

	puts("비교할 문자열 입력 :");
	fgets(str2,sizeof(str2),stdin);

	if(strcmp(str1,str2)){
		puts("다름");
	
	}

	else{
	puts("같음");
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
	char str[256] = "12fe34";  //fe도 16진수 숫자
	char *stop;// 길이 확인용
	long convert;
	
	stop = (char*)malloc(sizeof(char)*strlen(str)+1);
	printf("%d\n",sizeof(stop));
	printf("%d\n",atoi(str));
	convert = atol(str);
	printf("%d\n",convert);
	itoa(convert, stop,2);
	puts(stop);

	convert = strtol(str,&stop,16);//stop이 주소를 가르키는 포인터라 그것의 주소를 지정
	printf("16진수 %s는 10진수 %d이다.\n",str,convert);
	for(i=0;i<strlen(str)-strlen(stop);i++){
		printf("%c",str[i]);		
	}
	printf("(%d)\t -> \t%li (10진수)\n",radix,convert);
	


return 0;	
}
*/



/*
#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,j,k,m,n;
	char x[4], y[6];

	char str[1024] = "77,88 33 55";  //,가 들어가있다
	char buf[1024] = {0};
	char *tmp = str;
	char format[] = "%d %d %d %d\n";

	sscanf(str,"%d%*c%d%d%d",&j,&k,&m,&n); //,를 지우기위해
	sprintf(tmp, format,j,k,m,n);
	puts(tmp);

	sscanf(str,"%d",&j);
	sscanf(str,"%d",&k);
	printf("포인터 이동이 없으므로 앞과 같은 값 : %d %d\n",j,k);

	sscanf(str,"%d %d %d %d",&j, &k,&m, &n);
	printf(format,j,k,m,n);

	//3항목을 하나의 문자열로 변환후 str에 저장
	sprintf(str, "%3d%5.2f%10s\n",123,8.15,"vision");
	puts(str);

	//문자열을 long double로 변환
	sscanf(str,"%3s%5s%15s",x,y,buf);
	printf("%d %.2f %s\n",atoi(x),atof(y),buf);
	return 0;


}

*/

//q2 6자리의 숫자 입력받아 문자열로 저장한후 특정위치부터 추출하여 정수로변환
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,n;
	int a;
	char str[256];
	char buf[256];
	printf("6자리숫자 입력 : ");
	scanf("%d",&a);
	
	//문자열로 바꾸기
	itoa(a,str,10);
	
	//특정위치부터 추출은 문자로 냅둬도 된다. 배열
	printf("추출을 시작할 특정 위치(1~6) : ");
	scanf("%d",&n);

	strncpy(buf,str+n-1,7-n);//(새로운 str, 시작, 끝)
	buf[7-n]='\0'; //끝에 0으로 초기화
	printf("%s\n",buf);//숫자가 아닌 문자열출력

	



return 0;
}

