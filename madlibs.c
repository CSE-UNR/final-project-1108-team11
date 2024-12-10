//Team Members:Lauren Hockaday, Rashin Raisa, Adrian Ochoa
//Purpose: Final Group Project

#include <stdio.h>
void addStrings(char letter);
void getInput(int numwords, int stringlength, char inwords[][stringlength]);
void storeWords(int stringlength, int linelength, int numlines, char inwords[][stringlength]);
void storeFile(FILE* fp, int numlines, int linelength, char filearray[][linelength]);
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords[][stringlength]);
char displayFile(FILE* fp, int numwords, int stringlength, char inwords[][stringlength]);
#define WORDS 8
#define WORDLENGTH 100
#define FILEWIDTH 100
#define FILEHEIGHT 100
#define FILENAME "madlib2.txt"
int main(){
char inwords[WORDS][WORDLENGTH];
char filearray[FILEHEIGHT][FILEWIDTH];	
	FILE* fp;
	fp=fopen(FILENAME,"r");
		if(fp==NULL){
			printf("Can't open file.\n");
			return 1;
		}
	
	getInput(WORDS, WORDLENGTH, inwords);
	
return 0;
}
void getInput(int numwords, int stringlength, char inwords[][stringlength]){
	for(int i=0; i<=8; i++){
	switch(i){
		case 'N': printf("Please enter a noun: ");
		scanf("%s", inwords);
			break;
		case 'V':printf("Please enter a verb: ");
		scanf("%s", inwords);
			break;
		case 'A':printf("Please enter an adjective: ");
		scanf("%s", inwords);
			break;
			}
	}
}

void storeFile(FILE* fp, int numlines, int linelength, char filearray[][linelength]){
	for(int i=0; i<linelength; i++){
		for(int j=0; j<numlines; j++){
		fscanf(fp, "%s", &filearray[j][i]);
		}
	}
}
void storeWords(int stringlength, int linelength, int numlines, char inwords[][stringlength]){
	for(int i=0; i<linelength; i++){
		for(int j=0; j<numlines; j++){
		scanf("%s", inwords[j][i]);
		}
	}
}
void addStrings(char letter){
	switch(letter){
		case 'N':
		//scanletter(
		break;
		case 'V':
		break;
		case 'A':
		break;
	}
}
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords[][stringlength]){
	for(int i=0; i< numwords; i++){
		if(filearray[i][0]=='A'||filearray[i][0]=='N'||filearray[i][0]=='V'){
			printf("%s\n", inwords[i]);
		}
	}
}

char displayFile(int numwords, int stringlength, char filearray[][stringlength]){
	for(int i=0; i=
	printf("%s\n", filearray);
	return filearray[][stringlength];
}

