#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	char *pc=NULL;                // �޸𸮰� �Ҵ���� ���� ������  
	int i=0;
	
	pc=(char*)malloc(100*sizeof(char));	//char ������ ����� 100�� �����ͷ� ������ش�. 
	if(pc==NULL){
		printf("�޸� �Ҵ� ����\n");
		exit(1);     //return -1;�� ���� �ǹ�  
	}
	for(i=0;i<26;i++){	//4*26=104 ������ 0~26�̸� �� 100bytes 
		pc[i]='a' +i;
	}
	pc[i]=0;
	printf("%s\n",pc);
	free(pc);
}



