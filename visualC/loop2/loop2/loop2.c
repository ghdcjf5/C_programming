/*

#include <stdio.h>

int main(){
	

	return 0;
}

*/


/*


#include <stdio.h>

int main(){
	int x= 8;
	while(x<20){
	x++;
	
	if(x==10) continue;  //x가 10일때 continue이므로 printf로 내려가지 않고 다시 while문으로 올라간다.
	printf("%d ",x);
	
    

	
	}

	return 0;
}

*/



/*

#include <stdio.h>

int main(){
	
	int i;
	for(i=1;i<=7;i++){
	
		if(i%5==0) continue;
		printf("%d\t",i);
	
	}

	printf("\n");
	

	return 0;
}


*/


/*
//ex1
#include <stdio.h>

int main(){
	int x = 1;
	int sum =0;
	while(x){
		if(x > 100){
		 break;
		}
		
		sum= sum+x;
		x++;
	}
	printf("%d\n",sum);
	return 0;
}

*/


/*
//ex2
#include <stdio.h>

int main(){
	int i=0,sum=0;

	for(i=1; i<101;i++){
		sum = sum+i;
	}
	printf("%d\n",sum);
	return 0;
}

*/


/*
//ex3
#include <stdio.h>

int main(){
	
	int i,sum=0;

	for(i=100; i>0;i-=2){
		sum = sum+i;
	}
	printf("%d\n",sum);


	return 0;
}

*/


/*
//ex3변형 홀수값 구하기
#include <stdio.h>

int main(){
	
	int i,sum=0;

	for(i=99; i>0;i-=2){
		sum = sum+i;
	}
	printf("%d\n",sum);


	return 0;
}


*/










/*
//ex5
#include <stdio.h>

int main(){
	
	int i;
	printf("3과 5의 공통배수 :");
	for(i=1;i<101;i++){
		if(i%3 ==0 && i%5 ==0){
			printf(" %d  ",i);
			
		}
		
	}

	return 0;
}


*/



/*
//ex7
#include <stdio.h>

int main(){
	
	int x=0,row=0,col=0,i;
	printf("피라미드의 높이 : ");
	scanf("%d",&x);

	for(row=0;row<x;row++){
		for(col=0;col<row+1;col++){
	
				printf("*");
			}
			printf("\n");
	
	}
		

	return 0;
}


*/

/*
//ex8
#include <stdio.h>

int main(){
	
	int x=0,row=0,col=0,i,star;
	printf("피라미드의 높이 : ");
	scanf("%d",&x);

	for(row=0;row<x;row++){
		for(col=0;col<x-row;col++){
				
				printf(" ");
			}
		for(star=0;star<row+1;star++){
				printf("*");
		}
			printf("\n");
	
	}
		

	return 0;
}


*/




/*
//ex4
#include <stdio.h>
#include <math.h>


int main(){
	int x=0,i=0,k=0,chkx=0, cnt =0, ncnt, quox, tempx;
	
	printf("10진수 --> 2진수 변환식(0~양수)\n");
	printf("10진수 입력 :");
	scanf("%d",&x);
	
	chkx = x;
	quox = x; //몫
	
	while(1){
		if(chkx==0||chkx==1) {
			printf("cnt값 : %d\n",cnt);
			printf("%d\t",chkx);
			
			break;
		}
		//x가 0이거나 1이면 2로 나눈 나머지가 0이므로 아래 for문을 돌지않고 그냥 출력 

		quox = quox/2;
		cnt++;
		if(quox==1){
		
			printf("cnt값 : %d\n",cnt);
			printf("%d의 2진수는 : ",x);
			printf("%d ",quox); //2 이상의 x를 2로 계속 나누면 결국 몫은 1이므로 1일떄의 cnt값과 몫(1)출력
		break;
		}
	}
	//cnt값은 나눈횟수

	if(quox==1){ //다 나눴을때

		ncnt = cnt;
	
		for(k=0;k<cnt;k++){
			tempx =x; //나머지를 구할 때 필요한 tempx를 초기화(최초의 숫자로 돌아감)
			for(i=0;i<ncnt-1;i++){
				tempx = tempx/2 ;

			}
			//원하는 위치의 나머지를 구하기 위해 직전의 tempx의 값(즉, 이전의 몫)으로 돌려주는 작업
			ncnt--;
			printf("%d ",tempx%2); //for k문을 cnt번 돌면서 나눠주기 때문에 나머지의 갯수는 cnt개 
		
		}
		
		printf("\n");
	}


	return 0;
}


*/





//모양이 2진수이지만 10진수로 저장하는 느낌으로(역순으로 넣어야하니까)
//ex4
//1000넘어가면 막힘
#include <stdio.h>

int main(){
	
	int x,cnt=0,temp;
	unsigned long bin=0, place = 1;
	printf("숫자");
	scanf("%d",&x);
	

	temp =x;

	
	for(;;){
		temp = temp/2;
		cnt++;
		
		if(temp == 1){
		printf("%d\n",cnt);
		break;
		}
		
		
	}

	temp =x;

	while(temp>0){
	
		bin += (temp%2)*place;
		temp/=2;
		place *=10;
	}
		printf("%d\n",bin);


	return 0;
}





/*
//책57page 3의 배수 의 합 구하기


#include <stdio.h>

int main(){
	
	int i, x=0, num =0,sum=0;
	printf("0~num까지의 숫자중 x의 배수들의 합 구하는 식\n");
	printf("num설정, 배수 설정 :");
	scanf("%d %d",&num, &x);
	

	for(i = 0;i<num;i++){
		if(i %x ==0){
			sum =sum +i;
		}
	
	}
	printf("0~%d까지의 %d의 배수들의 합 : %d\n",num,x,sum);

	return 0;
}


*/


/*

#include <stdio.h>

int main(){
	
	int i, x=0, num =0,sum=0,cnt =0;
	printf("0~num까지의 숫자중 x의 배수들의 합 구하는 식\n");
	printf("num설정, 배수 설정 :");
	scanf("%d %d",&num, &x);
	
	cnt = num/x;
	sum = x*cnt*(cnt+1)/2;

	printf("0~%d까지의 %d의 배수들의 합 : %d\n",num,x,sum);

	return 0;
}

*/




/*
#include <stdio.h>

int main(){
	
	int i, x=0,temp, cnt,result=0;
	while(1){

		printf("2자리~ 8자리의 숫자 순서를 뒤집는 코드\n");
		printf("숫자입력 :");
		scanf("%d",&x);

		if(x<10||x>99999999) continue;
		
		else break;
	}
	

	while(x>0){
		result *=10;
		result += x%10;
		x /= 10;
		
		
	}

	printf("%d\n",result);

	return 0;
}

*/