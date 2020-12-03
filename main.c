#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	char *pc=NULL;                // 메모리가 할당되지 않은 포인터  
	int i=0;
	
	pc=(char*)malloc(100*sizeof(char));	//char 형태의 사이즈가 100인 포인터로 만들어준다. 
	if(pc==NULL){
		printf("메모리 할당 오류\n");
		exit(1);     //return -1;과 같은 의미  
	}
	for(i=0;i<26;i++){	//4*26=104 전까지 0~26이면 총 100bytes 
		pc[i]='a' +i;
	}
	pc[i]=0;
	printf("%s\n",pc);
	free(pc);
}



