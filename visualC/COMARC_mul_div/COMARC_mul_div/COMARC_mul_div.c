#include <stdio.h>

int rotate(int a, int b){
	int temp;
	temp =a;
	a=b;
	b=temp;

}

int main(){

	while(1){
		int a,b;
		int sum=0;
		int cnta, cntb;
		printf("정수 a,b 입력 : ");
		scanf("%d %d",&a,&b);
		cnta=a;
		cntb=b;

		for(;;){
			if(a<0) a = -a;
			if(b<0) b = -b;
			if(a<b) rotate(a,b);
			if(b!=0){
				sum= sum+a;
				b--;
			}
			else {
					break;
			}
		}

		if((cnta>=0&&cntb>=0) || (cnta<=0&&cntb<=0)){
			printf("%d x %d = %d\n",cnta,cntb,sum);
		}
		if((cnta>0&&cntb<0)||(cnta<0&&cntb>0)){
			printf("%d x %d = %d\n",cnta,cntb,-sum);
		}
	
	}


return 0;
}