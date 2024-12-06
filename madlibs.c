//Team Members:Lauren Hockaday, Rashin Raisa, Adrian Ochoa
//Purpose: Final Group Project

#include <stdio.h>
//void 
void getInput(int numwords, int stringlength, char inwords[][stringlength]);
void openFile(FILE* fp);
void scanLetter(FILE* fp, int numwords,char inwords[numwords][]);
char displayFile();
#define WORDS 8
#define WORDLENGTH 100
#define FILENAME "madlib2.txt"
int main(){
char inwords[WORDS][WORDLENGTH];	
	FILE* fp;
	openFile(fp);
	
	getInput(WORDS, WORDLENGTH, inwords);

	scanLetter(fp, WORDS, WORDLENGTH, inwords);
return 0;
}

void getInput(int numwords, int stringlength, char inwords[][stringlength]){
	printf("Please enter an adjective: ");
		scanf("%s", inwords);
	printf("Please enter a noun: ");
		scanf("%s", inwords);
	printf("Please enter an adjective: ");
		scanf("%s", inwords);
	printf("Please enter a verb: ");
		scanf("%s", inwords);
	printf("Please enter a verb: ");
		scanf("%s", inwords);
	printf("Please enter an adjective: ");
		scanf("%s", inwords);
	printf("Please enter a noun: ");
		scanf("%s", inwords);
	printf("Please enter an adjective: ");
		scanf("%s", inwords);
}
void openFile(FILE* fp){
	fp=fopen(FILENAME,"r");
		if(fp==NULL){
			printf("Can't open file.\n");
		}
}
void scanLetter(FILE* fp, int numwords,char inwords[numwords][]){
	for(int i=0; i< numwords; i++){
		if(inwords[i][0]=='A'||'N'||'V'){
			printf("%s\n", inwords[i]);
		}
	}
}



