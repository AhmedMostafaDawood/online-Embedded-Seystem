/*
 ============================================================================
 Name        : task3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b,c;
		printf("Enter three numbers : ");
		fflush(stdout);
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		if(a>b){
			if(a>c){
				printf("the largest number=%f",a);
			}
			else{
				printf("the largest number=%f",c);
			}
		}
		if(b>a){
					if(b>c){
						printf("the largest number=%f",b);
					}
					else{
						printf("the largest number=%f",c);
					}
				}
}
