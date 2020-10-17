#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char string[50] = "";

int stringlen(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

int is_vowel(char c){
	if(c=='a' || c=='e' || c=='i' || c =='o' || c=='u'){
		return 1;
	}
	else{
		return 0;
	}
}

void main(){
	char firstword[10];
	char secondword[10];
	char thirdword[10];
	int i;
        int maxlength=0;

	printf("Enter first word : ");
	gets(firstword);
	printf("length = %d\n", stringlen(firstword));
	printf("Enter second word : ");
	gets(secondword);
	printf("length = %d\n", stringlen(secondword));
	printf("Enter third word : ");
	gets(thirdword);
	printf("length = %d\n", stringlen(thirdword));

	
	maxlength = stringlen(secondword);
	printf("[DEBUG] maxlength = %d\n", maxlength);
	if(maxlength < stringlen(secondword)){
		maxlength = stringlen(secondword);
	printf("[DEBUG] maxlength = %d\n", maxlength);
	}
	if(maxlength < stringlen(thirdword)){
		maxlength = stringlen(secondword);
	printf("[DEBUG] maxlength = %d\n", maxlength);
	}
	for(i=0; i<maxlength; i++){
		printf("DEBUG] i = %d\n", i);
		if(i < stringlen(firstword) && is_vowel(firstword[i])){
			printf("[DEBUG] vowel encountered in firstword\n");
			printf("[DEBUG] replacing %c with ", firstword[i]);
			firstword[i] = '%';
			printf(" %c\n", firstword[i]);
			printf("first word till now looks like : %s\n", firstword);
		}
		if(i < stringlen(secondword) && !is_vowel(secondword[i])){
			printf("[DEBUG] consonant encountered in secondword\n");
			printf("[DEBUG] replacing %c with ", secondword[i]);
			secondword[i] = '#';
			printf(" %c\n", secondword[i]);
			printf("second word till now looks like : %s\n", secondword);
		}
		if(i < stringlen(thirdword) && isalpha(thirdword[i])){
			printf("[DEBUG] alphabet encountered in thirdword\n");
			printf("[DEBUG] replacing %c with ", thirdword[i]);
			thirdword[i] = toupper(thirdword[i]);
			printf(" %c\n", thirdword[i]);
			printf("third word till now looks like : %s\n", thirdword);
		}
	}
	/*
	strcat(firstword, secondword);
	strcat(firstword, thirdword);
	*/
	i=0;
	while(firstword[i]!='\0'){
		printf("%c", firstword[i]);
		i++;
	}
	i=0;
	while(secondword[i]!='\0'){
		printf("%c", secondword[i]);
		i++;
	}
	i=0;
	while(thirdword[i]!='\0'){
		printf("%c", thirdword[i]);
		i++;
	}
	printf("\n");
}
