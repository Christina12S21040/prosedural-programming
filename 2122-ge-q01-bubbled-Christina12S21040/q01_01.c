// 12S21040 - Christina Putri Hutahaean

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i, j;
	char temp;
	
	scanf("%s", str);
	
	for(i=0; i<strlen(str); i++) {
		for(j=i+1; j<strlen(str); j++) {
			if(str[i]!=',' && str[j]!=',') {
				if(str[i]>str[j]) {
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
		}
	}


	for(i=0; i<strlen(str); i++) {
		if(str[i]!=',') {
			if(i==strlen(str)-1) {
				printf("%c",str[i]);
			} else {
				printf("%c,",str[i]);
			}
		}
	}
	
	
	return 0;
}