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
	
	if(x==10) continue;  //x�� 10�϶� continue�̹Ƿ� printf�� �������� �ʰ� �ٽ� while������ �ö󰣴�.
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
//ex3���� Ȧ���� ���ϱ�
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
	printf("3�� 5�� ������ :");
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
	printf("�Ƕ�̵��� ���� : ");
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
	printf("�Ƕ�̵��� ���� : ");
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
	
	printf("10���� --> 2���� ��ȯ��(0~���)\n");
	printf("10���� �Է� :");
	scanf("%d",&x);
	
	chkx = x;
	quox = x; //��
	
	while(1){
		if(chkx==0||chkx==1) {
			printf("cnt�� : %d\n",cnt);
			printf("%d\t",chkx);
			
			break;
		}
		//x�� 0�̰ų� 1�̸� 2�� ���� �������� 0�̹Ƿ� �Ʒ� for���� �����ʰ� �׳� ��� 

		quox = quox/2;
		cnt++;
		if(quox==1){
		
			printf("cnt�� : %d\n",cnt);
			printf("%d�� 2������ : ",x);
			printf("%d ",quox); //2 �̻��� x�� 2�� ��� ������ �ᱹ ���� 1�̹Ƿ� 1�ϋ��� cnt���� ��(1)���
		break;
		}
	}
	//cnt���� ����Ƚ��

	if(quox==1){ //�� ��������

		ncnt = cnt;
	
		for(k=0;k<cnt;k++){
			tempx =x; //�������� ���� �� �ʿ��� tempx�� �ʱ�ȭ(������ ���ڷ� ���ư�)
			for(i=0;i<ncnt-1;i++){
				tempx = tempx/2 ;

			}
			//���ϴ� ��ġ�� �������� ���ϱ� ���� ������ tempx�� ��(��, ������ ��)���� �����ִ� �۾�
			ncnt--;
			printf("%d ",tempx%2); //for k���� cnt�� ���鼭 �����ֱ� ������ �������� ������ cnt�� 
		
		}
		
		printf("\n");
	}


	return 0;
}


*/





//����� 2���������� 10������ �����ϴ� ��������(�������� �־���ϴϱ�)
//ex4
//1000�Ѿ�� ����
#include <stdio.h>

int main(){
	
	int x,cnt=0,temp;
	unsigned long bin=0, place = 1;
	printf("����");
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
//å57page 3�� ��� �� �� ���ϱ�


#include <stdio.h>

int main(){
	
	int i, x=0, num =0,sum=0;
	printf("0~num������ ������ x�� ������� �� ���ϴ� ��\n");
	printf("num����, ��� ���� :");
	scanf("%d %d",&num, &x);
	

	for(i = 0;i<num;i++){
		if(i %x ==0){
			sum =sum +i;
		}
	
	}
	printf("0~%d������ %d�� ������� �� : %d\n",num,x,sum);

	return 0;
}


*/


/*

#include <stdio.h>

int main(){
	
	int i, x=0, num =0,sum=0,cnt =0;
	printf("0~num������ ������ x�� ������� �� ���ϴ� ��\n");
	printf("num����, ��� ���� :");
	scanf("%d %d",&num, &x);
	
	cnt = num/x;
	sum = x*cnt*(cnt+1)/2;

	printf("0~%d������ %d�� ������� �� : %d\n",num,x,sum);

	return 0;
}

*/




/*
#include <stdio.h>

int main(){
	
	int i, x=0,temp, cnt,result=0;
	while(1){

		printf("2�ڸ�~ 8�ڸ��� ���� ������ ������ �ڵ�\n");
		printf("�����Է� :");
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