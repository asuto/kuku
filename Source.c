#include <stdio.h>
int main(){
	int x,y;
	printf("<!DOCTYPE html1>\n");
	printf("<mata charset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<hi>99</hi>\n");
	printf("<table>\n");

	for(x=0 ; x<10 ; x++){
		printf("<tr>\n");
		printf("<th>%2d",x);
		for(y=1;y<10;y++){
			if(x==0){
				printf("<th>%2d",y);
			}
			else{
				printf("<th>%2d",x*y);
			}
	
		}
	}
	return 0;
}