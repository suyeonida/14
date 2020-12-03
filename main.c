#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];
}; 

int main(int argc, char *argv[]){
	struct Book *p;     //struct Book형 (int형 처럼) 포인터 p를 생성. 
	
	p =(struct Book*)malloc(2*sizeof(struct Book));
	
	if(p ==NULL){
		printf("메모리 할당 오류\n");
		return -1;
	}	
	
	p->number=1;
	strcpy(p->title, "C programming");
	
	(p+1)->number =2;
	strcpy((p+1)->title, "Electronics");
	printf(" %s %s \n",p->title, (p+1)->title);
	
	free(p);
	return;
}



