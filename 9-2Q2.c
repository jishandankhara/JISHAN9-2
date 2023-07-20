#include<stdio.h>
void main(){
char email[99],pass[99];

int j,i; 	
printf("Enter your Email I'd:");
gets(email);
printf("Enter your pasaword I'd:");
gets(pass);
if(strcmp(email,"admin@gmail.com")==0){
	if(strcmp(pass,"01234567")==0){
		printf("you are loged in.....");
	}else{
	printf("Invalid pass......");
}}else{
	printf("Invalid email......");
}
}
