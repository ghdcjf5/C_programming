/*
#include <stdio.h>

int main(){

return 0;
}
*/

/*
#include <stdio.h>

int main(){

	int ar[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

	printf("ar[0][0] = %#X, %#X, %#X\n",ar, ar[0], &ar[0][0]);
	//2차원 배열에서 ar[0]은 행번호가 시작되는 배열의 시작주소 
	printf("ar[0] = &ar[0][0],ar[1]=&ar[1][0],ar[2] = &ar[2][0]\n");
	printf("&ar[0][0] = %#X, &ar[0][1]=%#X, &ar[0][2] = %#X\n",&ar[0][0],&ar[0][1],&ar[0][2]);
	printf("ar[0] = %#X, ar[1] = %#X, ar[2] = %#X\n",ar[0],ar[1],ar[2]);
	printf("*ar = %#X,",*ar);
	printf("*ar[0] = %#X,",*ar[0]);
	printf("ar+1 = %#X\n",ar+1); //행 증가
	printf("ar[1]=%3d,",*ar[1]);
	printf("*ar[2]=%3d\n,",*ar[1]+2);


return 0;
}
*/



/*
#include <stdio.h>

int main(){

	int *pt;
	int ar[] = {10,20,30,40};
	pt = ar; //pt = &ar[0]

	printf("ar[0]= %d, *pt=%d\n", ar[0],*pt);
	printf("%4d,%4d,%4d,%4d\n",ar[0],ar[1],ar[2],ar[3]);
	printf("%4d,%4d,%4d,%4d\n",*ar,*(ar+1),*(ar+2),*(ar+3));
	printf("*pt+1=%d, (*pt)+1 =%d\n",*pt+1,(*pt)+1);
	printf("*(pt+1)=%d\n", *(pt+1));
	pt +=2;
	printf("*pt = %d\n",*pt);
	*pt =88;
	printf("*pt -1=%d\n",*pt-1);
	*pt++;
	printf("pt=%d\n",*pt);
	(*pt)++;
	printf("(*pt)++ = %d\n",*pt);




return 0;
}

*/


/*
#include <stdio.h>

void list(int ar[]){

	int i;
	for(i=0;i<5;i++){
		printf("  ar[%d]=%3d",i,ar[i]);
	}
	printf("\n");
	
}


int main(){

	int a[] = {5,10,15,20,25};
	list(a);

return 0;
}

*/


/*
#include <stdio.h>

void list(int *ar){

	int i;
	for(i=0;i<5;i++){
		printf("  ar[%d]=%3d",i,*(ar+i));
	}
	printf("\n");
	
}


int main(){

	int a[] = {5,10,15,20,25};
	list(a);

return 0;
}
*/



/*
//q5
#include <stdio.h>

int main(){
	int *pt;

	int ar[4][3] = {{2,8,6},{5,7,9}, {3,6,1},{22,88,66}};
	int i,k;

	pt = ar[0];



	for(i=0;i<4;i++){
		for(k=0;k<3;k++){
			printf("  ar[%d][%d] = %d",i,k,*pt);
			pt++;  //*(pt+1);
		}
		printf("\n");
	}
	


return 0;
}
*/


/*
//q5
#include <stdio.h>

int main(){
	int *pt;

	int ar[4][3] = {{2,8,6},{5,7,9}, {3,6,1},{22,88,66}};
	int i,k;

	pt = ar[0];



	
		for(i=0;i<12;i++){
			printf("  ar = %d",*pt);
			pt++; // *(pt+1)
		}
		printf("\n");
	
	


return 0;
}
*/

/*
//q6, q7, q8
#include <stdio.h>
int cnt;

void printAr(int arA[]){
	int i;
	for(i=0;i<cnt;i++){
		printf("  printAr[%d] = %3d",i,arA[i]);
	}
	printf("\n");

}

void printArPt(int *pt){
	int i;
	for(i=0;i<cnt;i++){
		printf("  printArPt[%d] = %3d",i,*(pt+i));
	}
	printf("\n");
}

void printArPtRev(int *pt){
	int i;
	for(i=cnt-1;i>=0;i--){
		printf("  printArPtRev[%d] = %3d",i,*(pt+i));
	}
	printf("\n");
}


int main(){
	int ar[5] = {22,44,66,88,99};
	cnt = sizeof(ar)/sizeof(int);  //4byte로 나눈다.
	printf("sizeof(ar) : %d \n",sizeof(ar));
	printAr(ar);
	printArPt(ar);
	printArPtRev(ar);

return 0;
}

*/

/*
//q10 점수입력 함수, 배열 출력 함수 분리
#include <stdio.h>

void scan(int *pt){
	int i;

	printf("과목1 과목2 과목3 입력 : ");
	for(i =0;i<3;i++){
	scanf("%d",pt+i);
	}

}

void sum_aver(int *pt2){
	int i;
	int sum=0;
	int average;
	for(i=0;i<3;i++){
	sum = sum + *(pt2+i);
	} 
	*(pt2+3) = sum;
	average= sum/3;
	*(pt2+4) = average;
}

void print(int *pt3){
	int i;
	printf("과목1 과목2 과목3  총점  평균\n");
	for(i=0;i<5;i++){
		printf("%5d ",*(pt3+i));
	}
	printf("\n");
}

int main(){
	
	int ar[5]={0};
	
	scan(ar);
	sum_aver(ar);
	print(ar);

return 0;
}
*/


/*
//q10
#include <stdio.h>




int main(){
	int sum=0;
	int ar[5]={0};
	int average;
	int *ptr;
	int i;

	printf("과목1 과목2 과목3 입력 : ");
	for(i =0;i<3;i++){
	scanf("%d",&ar[i]);
	}
	

	ptr=ar;

	for(i=0;i<3;i++){
	sum = sum + *(ptr+i);
	} 
	ar[3] = sum;
	average= sum/3;
	ar[4] = average;

	

	
	printf("과목1 과목2 과목3  총점  평균\n");
	for(i=0;i<5;i++){
		printf("%5d ",*(ptr+i));
	}
	printf("\n");
	


return 0;
}

*/


/*
#include <stdio.h>

int main(){
	int i;
	char menu[4][8] = {"File","Edit","Project","Debug"};

		for(i=0;i<4;i++){
			printf("menu[%d] = %s\n",i,menu[i]); //char 는 1칸이 1byte
			printf("menu[%d] = %x\n",i,&menu[i]);
		}
return 0;
}
*/


/*
#include <stdio.h>

int main(){
	int i;
	char *menu[] = {"File","Edit","Project","Debug"};
	//

		for(i=0;i<4;i++){
			printf("menu[%d] = %s\n",i,menu[i]);
			printf("menu[%d] = %x\n",i,&menu[i]);  //4씩 차이
		}
return 0;
}
*/



/*
#include <stdio.h>

int main(){

	int i,k;
	int a[] = {10,20,30};
	int ar[][3]= {{40,50,60}, {70,80,90}};
	int (*pt)[3] = ar;
	int *p[3] = {&a[0],&a[1],&a[2]};

	printf("a = %#x, &a[0] = %#x, &a[1] = %#x,&a[2]=%#x\n",a,&a[0],&a[1],&a[2]);
	printf("ar = %#x\n\n",ar);
	printf("p[0]=%d, *p[1]=%d, *p[2]=%d\n",*p[0],*p[1],*p[2]);

	for(i=0;i<2;i++){
		for(k=0;k<3;k++){
			printf("a[%d][%d] = %3d", i,k,ar[i][k]);
			printf("\t*(p[%d] +%d)= %3d\n",i,k,*(*(pt+i)+k));
		}
	
	}

return 0;
}

*/


/*


#include <stdio.h>
#include <string.h>

int i;

void f(const char a[],int x){

	
	printf("f 함수에서의 처리결과 : ");
	for(i=0;i<x;i++){
		printf("%c",a[i]);
	}
	printf("\n");
}

void rvsf(const char a[],int y){

	
	printf("rvsf 함수에서의 처리결과 : ");
	for(i=y-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n");
}

int main(){
	char a[] = "vision 2050";
	f(a, strlen(a));
	printf("원본 a[] = %s\n",a);
	rvsf(a, strlen(a));





return 0;
}

*/



/*
#include <stdio.h>

void f(int a[][3]){

	int i,k;
	for(i=0;i<4;i++){
		for(k=0;k<3;k++){
			printf("%5d",a[i][k]);
		}
	printf("\n");
	}

}


int main(){

	int a[][3] = {{3,6,9}, {2,4,8}, {7,14,21}, {5,10,15}};
	f(a);
	
return 0;
}

*/


/*
#include <stdio.h>

int main(){

	int a = 88;
	double d = 8.15;
	void *pt;

	pt = &a;
	printf("pt = %d\n",*(int *)pt);

	pt = &d;
	printf("pt = %.2f\n", *(double *)pt);

return 0;
}

*/


//5명 3과목 총점 평균 2차원배열
#include <stdio.h>

void scan(int (*a)[5]){
	int i, k;
	for(k=0;k<5;k++){
		printf("과목1 과목2 과목3 입력 : ");
		for(i =0;i<3;i++){
		scanf("%d",&a[k][i]);
		}
	}

}

void sum_aver(int (*a2)[5]){  
	int i,k;
	int sum=0;
	int average;
	for(k=0;k<5;k++){

		for(i=0;i<3;i++){
		sum = sum + *(*a2+i+(5*k));
		} 
		//sum = sum + a2[k][i];


	*(*a2+3+(5*k)) = sum;
	average= sum/3;
	sum =0;
	*(*a2+4+(5*k)) = average;
	}
}
void print(int (*a3)[5]){
	int i,k;
	printf("과목1 과목2 과목3  총점  평균\n");
	
	for(k=0;k<5;k++){

		for(i=0;i<5;i++){
			printf("%5d ",*(*a3+i+(5*k)));
		}
	printf("\n");


	}
	printf("\n");
}

int main(){
	
	int ar[5][5]={0};
	
	scan(ar);
	sum_aver(ar);
	print(ar);

return 0;
}

