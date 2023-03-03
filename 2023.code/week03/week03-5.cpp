#include <stdio.h>
#include <string.h>
char mirrored_char(char c)
{
    char line1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567879";
    char line2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8  ";
    for(int i=0;line1[i]!=0;i++){
        if(line1[i]==c) return line2[i];

    }
    return ' ';
}
int testPalindrome(char line[30])
{
    int N = strlen(line);
    int bad=0;
    for(int i=0;i<N;i++){
            if(line[i] != line[N-1-i]) bad=1;

    }
    if(bad==1) return 0; //printf("�����O�j��\n");
    else return 1; //printf("���O�j��\n");
}
int testMirrored(char line[30])
{

    int N = strlen(line);
    int bad = 0;
    for(int i=0;i<N;i++){
        char c1 = line[i];
        char c2 = mirrored_char(line[N-1-i]);
        if(c1 != c2) bad = 1;
    }
    if(bad==0) return 1;// printf("���O�蹳�r\n");
    else return 0;// printf("�����O�蹳�r\n");
}
int main()
{
	char line[30];
	while(scanf("%s",line)==1){
		printf("%s",line);
		int p=testPalindrome(line);
		int m=testMirrored(line);

		if(p==0 && m==0) printf(" -- is not a palindrome.\n\n");
		if(p==1 && m==0) printf(" -- is a regular palindrome.\n\n");
		if(p==0 && m==1) printf(" -- is a mirrored string.\n\n");
		if(p==1 && m==1) printf(" -- is a mirrored palindrome.\n\n");

	}
}
