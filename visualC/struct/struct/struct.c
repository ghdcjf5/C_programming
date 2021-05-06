/*
#include <stdio.h>
#include <string.h>

struct Student
{
	char name[11];
	char *address;
	int age;
	double weight;
	
};

int main(){
	
	struct Student na;
	strcpy(na.name, "노 홍철");
	na.address = "인천광역시 부평구";
	na.age=29;
	na.weight = 69.12;
	
	printf("struct Student 크기 = %d bytes\n", sizeof(struct Student));
	printf("%12s%25s%10s%10s\n", "이름:","주소:","나이:","몸무게");
	printf("%11s",na.name);
	printf("%24s",na.address);
	printf("%9d",na.age);
	printf("%10.2f\n",na.weight);
	
	return 0; 

}
*/


/*
#include <stdio.h>
#include <string.h>

struct Student
{
	char name[11];
	char *address;
	int age;
	double weight;
	
};

int main(){
	
	struct Student hong = {"노 홍철", "인천광역시 부평구",29, 69.12};
	struct Student na = {"나소원","서울 종로구",19,48.35};

	printf("struct Student 크기 = %d bytes\n", sizeof(struct Student));
	printf("%12s%25s%10s%10s\n", "이름:","주소:","나이:","몸무게");
	printf("%11s",na.name);
	printf("%24s",na.address);
	printf("%9d",na.age);
	printf("%10.2f\n",na.weight);
	printf("%11s",hong.name);
	printf("%24s",hong.address);
	printf("%9d",hong.age);
	printf("%10.2f\n",hong.weight);
	
	return 0; 

}

*/


/*
#include <stdio.h>
#include <string.h>

struct Student
{
	char name[11];
	char *address;
	int age;
	double weight;
	
};

int main(){
	
	int i;
	struct Student na[] = {{"노 홍철", "인천광역시 부평구",29, 69.12},
						 {"나 소원","서울 종로구",19,48.35},
						{"이 대로","인천 남구", 21, 60.89}
	};

	printf("struct Student 크기 = %d bytes\n", sizeof(struct Student));
	printf("%-12s%-25s%-10s%-10s\n", "이름","주소","나이","몸무게");
	for(i=0;i<3;i++){
		printf("%-12s",na[i].name);
		printf("%-25s",na[i].address);
		printf("%-10d",na[i].age);
		printf("%-10.2f\n",na[i].weight);
	
	}
	
	
	return 0; 

}
*/

/*
#include <stdio.h>
#include <string.h>

struct Student
{
	char name[11];
	char *address;
	int age;
	double weight;
	
};

int main(){
	
	int i;
	struct Student na[] = {{"노 홍철", "인천광역시 부평구",29, 69.12},
						 {"나 소원","서울 종로구",19,48.35},
						{"이 대로","인천 남구", 21, 60.89}
	};
	struct Student *ptr;
	ptr = na;

	printf("struct Student 크기 = %d bytes\n", sizeof(struct Student));
	printf("%-12s%-25s%-10s%-10s\n", "이름","주소","나이","몸무게");
	for(i=0;i<3;i++){
		printf("%-12s",(na+i)->name);
		printf("%-25s",(na+i)->address);
		printf("%-10d",(na+i)->age);
		printf("%-10.2f\n",(na+i)->weight);
	}
	printf("-----------------------------------------------------------\n");

	for(i=0;i<3;i++){
		printf("%-12s",(ptr+i)->name);
		printf("%-25s",(ptr+i)->address);
		printf("%-10d",(ptr+i)->age);
		printf("%-10.2f\n",(ptr+i)->weight);
	}
	
	return 0; 

}

*/

/*

#include <stdio.h>

struct Point {
	int x;
	int y;
};

struct Line{
	struct Point p1,p2;
};

struct Triangle{
	struct Point p1,p2,p3;
};

int main(){
	struct Point p = {2,9};
	struct Line l = {{4,8}, {10,10}};
	struct Triangle t = {{3,2},{7,6},{9,3}};

	printf("점 : (%d, %d)\n",p.x,p.y);
	printf("선 : (%d,%d), (%d, %d)\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
	printf("삼각형 : (%d,%d),(%d,%d),(%d,%d)\n ",t.p1.x,t.p1.y,t.p2.x,t.p2.y,
		t.p3.x,t.p3.y);


	return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>

struct Student{
	char *name;
	char *address;
	int age;
	double height;
};


void list(struct Student *l){
	int i;
	for(i=0;i<3;i++){
	
		printf("%-12s",(l+i)->name);
		printf("%-25s",(l+i)->address);
		printf("%-10d",(l+i)->age);
		printf("%-10.2f\n",(l+i)->height);

	}
	
}

int main(){
	
	struct Student na[] = {{"홍길동","서울 종로구",20,175.23},
							{"나소원","경기도 부천시",18,163.12},
							{"이대로","인천 남구",21,180.65}};

	printf("%-12s%-25s%-10s%-10s\n","이름","주소","나이","키");
	printf("----------------------------------------------------\n");

	list(na);
	return 0;
}

*/

/*
#include <stdio.h>

union data{
	int x;
	double y;
};

int main(){

	union data value;
	value.x=123;

	printf("x=%d\n",value.x);

	value.y = 45.789;
	printf("y=%.3f\n",value.y);

	return 0;
}
*/


/*
//q1
#include <stdio.h>
#include <string.h>

struct account{
	char *name;
	char *accNum;
	int balance;
	double intRate;

}; 



int main(){
	struct account na = {"노홍철", "554602-04", 350560, 1.23};

	printf("%-10s%-15s%-10s%-10s\n","이름","계좌번호","잔액","이자율");
	printf("---------------------------------------------------------\n");

	printf("%-10s%-15s%-10d%-6.2f\n",na.name,na.accNum,na.balance,na.intRate);


return 0;
}
*/


/*

#include <stdio.h>
#include <string.h>

struct time{
	int h;
	int m;
	double s;
};

int main(){
	
	struct time clock = {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      };

return 0;
}

*/



//시험 1번 피보나치수열
#include <stdio.h>

int main(){
	int i;
	int ary[15]= {0,1,0};

	//fibo 0 1 1 2 3 5 8 13 21 34...
	printf("Fibonacci sequence : ary[i] = ary[i-1] + ary[i-2]\n");
	for(i=0;i<(sizeof(ary)/sizeof(int));i++){
		if(i!=0)){
			ary[i]=ary[i-1]+ary[i-2];
		}
		printf("ary[%d] = %d\n",i,ary[i]);
	}

return 0;
}




/*
//시험2번 오름차순정렬
#include <stdio.h>
int inputAry(int *p1){
	int i;
	printf("10개의 정수 입력 :");
	for(i=0;i<10;i++){
		scanf("%d",&p1[i]);
		printf("%d\t",p1[i]);	
	}
	printf("\n");
}

int bubbleSort(int *ary,int cnt){
	int flag=0;
	int temp;
	int i;//루프초기값,ary 순서
	printf("sorting...\n");
//sorting
	while(1){
		flag = 0;
		for(i=0;i<cnt -1;i++){			
			if(ary[i]>ary[i+1]){ 
					flag =1;
					temp = ary[i+1];
					ary[i+1] = ary[i];
					ary[i] = temp;
			}	
		}
		for(i=0;i<cnt;i++){
			printf("%d\t",ary[i]); 
		}
		printf("\n");

		if(flag==0) break;	
	}
}

int print(int *ary,int cnt){

	int i;
	printf("오름차순정렬결과\n");
	for(i=0;i<cnt;i++){
		printf("%d\t",ary[i]);
	}
	printf("\n");
}

int main(){
	int ary[10]={0};
	int cnt;
	cnt = sizeof(ary)/sizeof(int);
	inputAry(ary);
	bubbleSort(ary,cnt);
	print(ary,cnt);
return 0;
}
*/

/*
//글자간격축소(제출용)
#include <stdio.h>
int inputAry(int *p1){
	int i;
	printf("10개의 정수 입력 :");
	for(i=0;i<10;i++){
		scanf("%d",&p1[i]);
		printf("%d ",p1[i]);	
	}
	printf("\n");
}
int bubbleSort(int *ary,int cnt){
	int flag=0, temp, i;//루프초기값,ary 순서
	printf("sorting...\n");
//sorting
	while(1){
		flag = 0;
		for(i=0;i<cnt -1;i++){			
			if(ary[i]>ary[i+1]){ 
					flag =1;
					temp = ary[i+1];
					ary[i+1] = ary[i];
					ary[i] = temp;
			}	
		}
		for(i=0;i<cnt;i++) printf("%d ",ary[i]); 
		printf("\n");
		if(flag==0) break;	
	}
}
int print(int *ary,int cnt){
	int i;
	printf("오름차순정렬결과\n");
	for(i=0;i<cnt;i++) printf("%d ",ary[i]);
	printf("\n");
}
int main(){
	int ary[10]={0},cnt;
	cnt = sizeof(ary)/sizeof(int);
	inputAry(ary);
	bubbleSort(ary,cnt);
	print(ary,cnt);
return 0;
}
*/


/*
// 2번 문제(포인터 리턴값 분석)
#include <stdio.h>

int scan(int *a1);
int sort(int *a2);
void print(int *a3);

int main() {
   int ar[10];
   scan(ar);
   
   sort(ar);
   print(ar);
   return 0;
}
int scan(int *a1) {
   int i;
   for (i = 0; i < 10; i++) {
      scanf("%d", &a1[i]);
   }
   printf("%d\n",*a1);
  return *a1;
  
}
int sort(int* a2) {
   int i, j, temp;
   for (i = 0; i < 10; i++) {
      for (j=0;j<9;j++)
         if (a2[j] > a2[j + 1]) {
            temp = a2[j];
            a2[j] = a2[j + 1];
            a2[j+ 1] = temp;
      }
   }
    printf("%d\n",*a2);
  return *a2;
}

void print(int* a3) {
   int i;
   for (i = 0; i < 10; i++) {
      printf("a[%d]=%d\t", i,a3[i]);
   }
}
*/