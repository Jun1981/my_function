#include<stdio.h>
#include<string.h>

void sep_s(char *str);

void main(){
	
	char *s="abcdeｆさふぁｓ,3";

	printf("%p\n",s);

	sep_s(s);

	printf("%s\n",s);
}

void sep_s(char *str){

	int i;
	int n=0;//ポインタの文字数カウント
	while(*str++){
	n++;
	}

	for (i=0;i<n;i++){
		if( *(str+i)==","){
			*(str+i)="\0";
			break;
		}	
	}
}