//Team Members:Lauren Hockaday, Rashin Raisa, Adrian Ochoa
//Purpose: Final Group Project

#include <stdio.h>
void getInput(int numwords, int stringlength, char inwords[][stringlength]);
void storeWords(int stringlength, int linelength, int numlines, char inwords[][stringlength]);
void storeFile(FILE* fp, int numlines, int linelength, char filearray[][linelength]);
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords[][stringlength]);
void displayFile(int filelines, int NUM_WORDS, int linesize1, int linesize2, char filearray[][linesize1], char inwords[][linesize2]);
#define WORDS 8
#define WORDLENGTH 100
#define FILEWIDTH 100
#define FILEHEIGHT 100
#define FILENAME "madlib2.txt"
int main(){
char inwords[WORDS][WORDLENGTH];
char fileArray[FILEHEIGHT][FILEWIDTH];
char line_end= '\0';

	FILE* fp;
	fp=fopen(FILENAME,"r");
		if(fp==NULL){
			printf("Can't open file.\n");
			return 1;
		}
	
	storeFile(fp, FILEWIDTH, FILEHEIGHT, fileArray);
	getInput(WORDS, WORDLENGTH, inwords);
	
	//scanLetter(FILEWIDTH, FILEHEIGHT, fileArray, inwords);
	//storeWords(WORDS, WORDLENGTH, line_end, inwords);
	
	//displayFile(WORDS, WORDLENGTH, FILEWIDTH, FILEHEIGHT, fileArray,inwords);
	
	fclose(fp);
return 0;
}
void getInput(int numwords, int stringlength, char inwords[][stringlength]){
	for(int i=0; i<numwords; i++){
	switch(i){
		case 'N': printf("Please enter a noun: ");
		scanf("%s", inwords[i]);
			break;
		case 'V':printf("Please enter a verb: ");
		scanf("%s", inwords[i]);
			break;
		case 'A':printf("Please enter an adjective: ");
		scanf("%s", inwords[i]);
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
void displayFile(int filelines, int NUM_WORDS, int linesize1, int linesize2, char filearray[][linesize1], char inwords[][linesize2]){
	for(int i=0; i<filelines; i++){
		if(filearray[i][0]=='A'||filearray[i][0]=='V'||filearray[i][0]=='N'){
			for(int j=0; j<NUM_WORDS; j++){
				printf("%s\n", inwords[i][j]);
			}
			printf("\n");
		}
	}
	for(int i=0; i<filelines; i++){
	switch(i){
		case 'N':
		printf("%s\n", inwords);
		break;
		case 'V':
		printf("%s\n", inwords);
		break;
		case 'A':
		printf("%s\n", inwords);
		break;
		}
	}
}
void scanLetter(int numwords, int stringlength, char filearray[][stringlength], char inwords[][stringlength]){
	for(int i=0; i< numwords; i++){
		if(filearray[i][0]=='A'||filearray[i][0]=='N'||filearray[i][0]=='V'){
			printf("%s\n", inwords[i]);
		}
	}
}



