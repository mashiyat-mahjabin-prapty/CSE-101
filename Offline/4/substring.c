#include<stdio.h>
#include<string.h>

int main()
{
	char s1[1000], s2[50];
	int i, j, count, p=0, l;
	
	gets(s1);
	gets(s2);
	
	l = strlen(s2);
	
	for(i = 0; s1[i] != '\0'; i++){
		if(s1[i] == s2[0]){
			count=0;
			for(j = 0; j < l; j++){
				if(s1[i+j] == s2[j])
				count++;
			}
			if(count == l)
			p++;
		}
	}
	printf("%d\n", p);
	return 0;
}
