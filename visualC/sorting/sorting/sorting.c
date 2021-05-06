

/*
//inserting sort
#include <stdio.h>

int main(){

	int i; //루프초기값,ary 순서
	int k=1; //비교횟수
	int key,temp;
	int ary[9] = {5,3,6,8,4,7,9,1,2};
	//(sizeof(ary)/sizeof(int))-2

	for(i=0;i<sizeof(ary)/sizeof(int);i++){
			printf("%d\t",ary[i]);
	}
	printf("\n");
	while(1){
		key = ary[k];
		for(i=0;i<k;i++){		
			if(ary[i]>ary[k]){  //0 1 비교후 루프돌때 0 2, 1,2비교
				temp = ary[k];
				ary[k] = ary[i];
				ary[i] = temp;
			}
		}
		printf("key : arr[%d]=%d\n",k,key);
		k++;
		
		for(i=0;i<sizeof(ary)/sizeof(int);i++){
			printf("%d\t",ary[i]);
		}
		printf("\n");
		
		if(k>sizeof(ary)/sizeof(int) -1){
		break;
		}
		
	}


return 0;
}
*/



//insert sort(int 사용자 함수)

#include <stdio.h>

int insertSort(int *ary, int cnt){
	int i; //루프초기값,ary 순서
	int k=1; //비교횟수
	int key,temp;

	while(1){
		key = ary[k];
		for(i=0;i<k;i++){		
			if(ary[i]>ary[k]){  //0 1 비교후 루프돌때 0 2, 1,2비교
				temp = ary[k];
				ary[k] = ary[i];
				ary[i] = temp;
			}
		}
		printf("key : arr[%d]=%d\n",k,key);
		k++;
		
		for(i=0;i<cnt;i++){
			printf("%d\t",ary[i]);
		}
		printf("\n");
		
		if(k>cnt -1){
		break;
		}
		
	}
}

int main(){
	int ary[9] = {8,6,7,9,4,5,3,1,2};
	int i; //루프초기값,ary 순서
	int cnt;

	cnt = sizeof(ary)/sizeof(int);

	for(i=0;i<cnt;i++){
		printf("%d\t",ary[i]);
	}
	printf("\n");

	insertSort(ary,cnt);

return 0;
}





/*
//bubleSort
#include <stdio.h>

int ary[9] = {8,6,7,9,4,5,3,1,2};
int i; //루프초기값,ary 순서

int main(){
	int temp;
	int flag=0;


	for(i=0;i<sizeof(ary)/sizeof(int);i++){
		printf("%d\t",ary[i]);
	}
	printf("\n");
	printf("----------------------------------------------------------------\n");

	//sorting
	while(1){
		flag = 0;

		for(i=0;i<sizeof(ary)/sizeof(int) -1;i++){
			
			if(ary[i]>ary[i+1]){ 
					flag =1;
					temp = ary[i+1];
					ary[i+1] = ary[i];
					ary[i] = temp;
			}	
		}

		for(i=0;i<sizeof(ary)/sizeof(int);i++){
			printf("%d\t",ary[i]); 
		}
		printf("\n");

		if(flag==0) break;	
	}

return 0;
}

*/



/*
//bubble sort(int 사용자 함수)
#include <stdio.h>

//배열을 main으로 넣었을 경우 배열을 인자로 받아오는 과정에서
//sizeof 함수는 main문에 종속되어있고 sort사용자 함수에는없기때문에 cnt사용
int bubleSort(int *ary,int cnt){
	int flag=0;
	int temp;
	int i;//루프초기값,ary 순서
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


int main(){
	int ary[9] = {9,8,5,6,7,4,3,1,2};
	int cnt;
	int i;//루프초기값,ary 순서
	cnt = sizeof(ary)/sizeof(int);
	for(i=0;i<cnt;i++){
		printf("%d\t",ary[i]);
	}
	printf("\n");
	printf("----------------------------------------------------------------\n");

	bubleSort(ary,cnt);

return 0;
}

*/