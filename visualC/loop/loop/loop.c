/*

#include <stdio.h>

int main(){

	int x =1;

	while(x<6){
	
		printf("%d, ",x);
		x++;
	}

	printf("\n");
	return 0;

}

*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(){

	int x =1;
	int step =2;
	
	while(x<10){
	
		x +=step;
		step = 2*x;


		printf("x = %d, step = %d\n",x,step);
		
	}

	
	return 0;

}

*/


/*

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double n = 20;
	
	while(1){
	
		n = n + 2.25;

		if(n>=30.0){
			break;
		}


		printf("%0.2f\n",n);
		
	}

	
	return 0;

}

*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int rowNum =5;
	int colNum = 1;
	int row = 0;
	int col = 0;

	while(row<rowNum){
	
		col = 0;
		while(col <5-row){
		
			printf("* ");
			col++;
		}
		printf("\n");
		row++;
		colNum++;
	}

	
	return 0;

}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int j = 12;

	
	do{
	
		j += 2;
		printf("j=%d\n",j);
	}
		while(j<8);
	
	return 0;

}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int x;
	double y;
	char z;

	for(x=3;x<=9;x++){	
		printf("%5d",x);
	}
	printf("\n");

	for(x=1;x<=39;x+=3){	
		printf("%5d",x);
	}
	printf("\n");

	for(x=14;x>=2;x-=2){	
		printf("%5d",x);
	}
	printf("\n");

	for(y=0.1;y<=1.0;y++){	
		printf("%7.1f",y+=0.5);
	}
	printf("\n");

	for(z='a';z<='g';z++){	
		printf("%5c",z);
	}
	printf("\n");
	


	return 0;

}


*/

/*
#include <stdio.h>
#include <stdlib.h>



int main(){
	int x;
	int step;

	for(x = 3,step=6; x<28;x+=step,step=2*x){
		printf("x= %d, step=%d \n",x,step);
	
	}
	
	return 0;

}

*/

/*

#include <stdio.h>
#include <stdlib.h>



int main(){
	
	double n =20;

	for(;;){
		n = n+2.25;
		if(n>=30.0)
			break;
		printf("%.2f\n",n);
	
	}
	
	return 0;

}
*/


/*
#include <stdio.h>
#include <stdlib.h>



int main(){
	
	double n =20;

	for(n=22.25;n<30;n+=2.25){
		
		printf("%.2f\n",n);
	
	}
	
	return 0;

}

*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int rowNum =5;
	int colNum = 1;
	int row = 0;
	int col = 0;

	for(row = 0;row<rowNum;row++){
	
		
		for(col = 0;col <5-row;col++){
		
			printf("* ");
			
		}
		printf("\n");
		
	
	}

	
	return 0;

}

*/

/*

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,k;
	int m=10;

	for(i=0;i<3;i++){
		printf("(i,k) : ");
		for(k=0;k<4;k++){
			printf("(%d,%d)\t",i,m+k);
		}
		printf("\n");
	
	}


	
	return 0;

}

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=0;
	
	while(x<20){
		printf("x:%d ",x++);
		if(x==10){
			continue;
		}
	}


	return 0;
	

}

