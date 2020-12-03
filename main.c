#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];
}; 

int main(int argc, char *argv[]){
	int i;
	struct Book **bookshelf;     //struct Book형 (int형 처럼) 포인터 p를 생성. 

	bookshelf =  (struct Book**)malloc(3*sizeof(struct Book*));//3개의 Book 구조체 변수 동적 할당  
 	for(i=0;i<3;i++){
		bookshelf[i]=(struct Book*)malloc(10*sizeof(struct Book));
	}
	
	bookshelf[1][3].number=5;
	strcpy(bookshelf[1][3].title,"C programming");
	
	(bookshelf[2]+4)->number =3;
	strcpy((bookshelf[2]+4)->title,"Communications Theory");
	
	printf("book(1,3): %i, %s\n",(bookshelf[1]+3)->number,(bookshelf[1]+3)->title);
	printf("book(2,4): %i, %s\n",bookshelf[2][4].number,bookshelf[2][4].title);
	
	for(i=0;i<3;i++)
		free(bookshelf[i]);
	free(bookshelf);
	
	return ;

	
}



