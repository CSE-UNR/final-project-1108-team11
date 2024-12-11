//Team Members:Lauren Hockaday, Rashin Raisa, Adrian Ochoa
//Purpose: Final Group Project

#include <stdio.h>
void getInput(int numwords, int stringlength, int filelength, char inwords1[], char inwords2[][stringlength]);
void storeWords(int stringlength, int linelength, int numlines, char inwords2[][stringlength]);
void storeFile(FILE* fp, int numlines, int linelength, char filearray[][linelength]);
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords2[][stringlength]);
void displayFile(int NUM_WORDS, int numLines, int linesize1, int linesize2, char filearray[][linesize1], char inwords2[][linesize2]);
#define WORDS 8
#define WORDLENGTH 100
#define FILEWIDTH 100
#define FILEHEIGHT 17
#define FILENAME "madlib2.txt"
int main(){
char inWords2 [WORDS][WORDLENGTH];
char fileArray[FILEHEIGHT][FILEWIDTH];
char inWords1 [WORDS];

	FILE* fp;
	fp=fopen(FILENAME,"r");
		if(fp==NULL){
			printf("Can't open file.\n");
			return 0;
		}
	
	storeFile(fp, FILEWIDTH, FILEHEIGHT, fileArray);
	scanLetter(FILEWIDTH, FILEHEIGHT, fileArray, inWords2);
	
	getInput(WORDS, WORDLENGTH, FILEWIDTH, inWords1, inWords2);
	storeWords(WORDS, WORDLENGTH, FILEHEIGHT, inWords2);
	
	displayFile(WORDS, WORDLENGTH, FILEWIDTH, FILEHEIGHT, fileArray,inWords2);
	
	fclose(fp);
return 0;
}
void getInput(int numwords, int stringlength, int filelength, char inwords1[], char inwords2[][stringlength]){
	for(int i=0; i<numwords; i++){
		for(int j=0; j<stringlength; j++){
	switch(inwords1[i]){
		case 'N': printf("Please enter a noun: ");
		scanf("%s", inwords2 [i][j]);
			break;
		case 'V':printf("Please enter a verb: ");
		scanf("%s", inwords2 [i][j]);
			break;
		case 'A':printf("Please enter an adjective: ");
		scanf("%s", inwords2 [i][j]);
			break;
			}
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
void storeWords(int stringlength, int linelength, int numlines, char inwords2[][stringlength]){
	for(int i=0; i<linelength; i++){
		for(int j=0; j<numlines; j++){
		scanf("%s", inwords2[i][j]);
		}
	}
}
void displayFile(int NUM_WORDS, int numLines, int linesize1, int linesize2, char filearray[][linesize1], char inwords2[][linesize2]){
	for(int i=0; i<NUM_WORDS; i++){
		if(filearray[i][0]=='A'||filearray[i][0]=='V'||filearray[i][0]=='N'){
			for(int j=0; j<numLines; j++){
				printf("%s\n", inwords2[i][j]);
			}
			printf("\n");
		}
	}
	for(int i=0; i<numLines; i++){
	switch(filearray[i][0]){
		case 'N':
		printf("%s\n", inwords2[i]);
		break;
		case 'V':
		printf("%s\n", inwords2[i]);
		break;
		case 'A':
		printf("%s\n", inwords2[i]);
		break;
		}
	}
}
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords2[][stringlength]){
	int j;
	for(int i=0; i< numwords; i++){
		if(filearray[i][0]=='A'||filearray[i][0]=='N'||filearray[i][0]=='V'){
			printf("%s\n", inwords2[i][j]);
		}
	}
}



