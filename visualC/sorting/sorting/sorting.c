

/*
//inserting sort
#include <stdio.h>

int main(){

	int i; //�����ʱⰪ,ary ����
	int k=1; //��Ƚ��
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
			if(ary[i]>ary[k]){  //0 1 ���� �������� 0 2, 1,2��
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



//insert sort(int ����� �Լ�)

#include <stdio.h>

int insertSort(int *ary, int cnt){
	int i; //�����ʱⰪ,ary ����
	int k=1; //��Ƚ��
	int key,temp;

	while(1){
		key = ary[k];
		for(i=0;i<k;i++){		
			if(ary[i]>ary[k]){  //0 1 ���� �������� 0 2, 1,2��
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
	int i; //�����ʱⰪ,ary ����
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
int i; //�����ʱⰪ,ary ����

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
//bubble sort(int ����� �Լ�)
#include <stdio.h>

//�迭�� main���� �־��� ��� �迭�� ���ڷ� �޾ƿ��� ��������
//sizeof �Լ��� main���� ���ӵǾ��ְ� sort����� �Լ����¾��⶧���� cnt���
int bubleSort(int *ary,int cnt){
	int flag=0;
	int temp;
	int i;//�����ʱⰪ,ary ����
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
	int i;//�����ʱⰪ,ary ����
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