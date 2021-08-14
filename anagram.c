#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAnagram(char *str1,char *str2);

void sort(char *str);

int main() {
char string1[100];
char string2[100];

printf("Please enter two words:");
//gets(string1);
//gets(string2);
scanf("%s",strin1);
scanf("%s",string2);	

if(isAnagram(string1,string2))
	printf("Anagram...");
else
printf("Is not Anagram...");	
	
	
	return 0;

}

int isAnagram(char *str1,char *str2){
	if(strlen(str1) != strlen(str2))
		return 0;
		
	sort(str1);	
	sort(str2);
	
	for(int i = 0;i < strlen(str1); i++)
		if(str1[i] != str2[i])
			return 0; 
			
	return 1;			
} 
void sort(char *str){
	char temp;
	for(int i = 0;i < strlen(str); i++){
		for(int j = i ;j < strlen(str); j++){
			if(str[i] > str[j]){
                          temp = *(str+i);
			 *(str+i) = *(str+j);
			 *(str+j) = temp;
                  }
	     }
	}
}

