//���p����S�p�֕ϊ�
#include	<stdio.h>
#include	<string.h>


int han2zen(char *str)
{
char	*buf,*p,*ptr;

	buf=(char *)calloc(strlen(str)*2+1,sizeof(char));

	for(ptr=str,p=buf;*ptr!='\0';*ptr++){
		switch((int)*ptr){
			case    ' ': strcpy(p,"�@");p+=2;break;
			case    '!': strcpy(p,"�I");p+=2;break;
			case    '"': strcpy(p,"�h");p+=2;break;
			case    '#': strcpy(p,"��");p+=2;break;
			case    '$': strcpy(p,"��");p+=2;break;
			case    '%': strcpy(p,"��");p+=2;break;
			case    '&': strcpy(p,"��");p+=2;break;
			case    '\'': strcpy(p,"�f");p+=2;break;
			case    '(': strcpy(p,"�i");p+=2;break;
			case    ')': strcpy(p,"�j");p+=2;break;
			case    '*': strcpy(p,"��");p+=2;break;
			case    '+': strcpy(p,"�{");p+=2;break;
			case    ',': strcpy(p,"�C");p+=2;break;
			case    '-': strcpy(p,"�|");p+=2;break;
			case    '.': strcpy(p,"�D");p+=2;break;
			case    '/': strcpy(p,"�^");p+=2;break;
			case    '0': strcpy(p,"�O");p+=2;break;
			case    '1': strcpy(p,"�P");p+=2;break;
			case    '2': strcpy(p,"�Q");p+=2;break;
			case    '3': strcpy(p,"�R");p+=2;break;
			case    '4': strcpy(p,"�S");p+=2;break;
			case    '5': strcpy(p,"�T");p+=2;break;
			case    '6': strcpy(p,"�U");p+=2;break;
			case    '7': strcpy(p,"�V");p+=2;break;
			case    '8': strcpy(p,"�W");p+=2;break;
			case    '9': strcpy(p,"�X");p+=2;break;
			case    ':': strcpy(p,"�F");p+=2;break;
			case    ';': strcpy(p,"�G");p+=2;break;
			case    '<': strcpy(p,"��");p+=2;break;
			case    '=': strcpy(p,"��");p+=2;break;
			case    '>': strcpy(p,"��");p+=2;break;
			case    '?': strcpy(p,"�H");p+=2;break;
			case    '@': strcpy(p,"��");p+=2;break;
			case    'A': strcpy(p,"�`");p+=2;break;
			case    'B': strcpy(p,"�a");p+=2;break;
			case    'C': strcpy(p,"�b");p+=2;break;
			case    'D': strcpy(p,"�c");p+=2;break;
			case    'E': strcpy(p,"�d");p+=2;break;
			case    'F': strcpy(p,"�e");p+=2;break;
			case    'G': strcpy(p,"�f");p+=2;break;
			case    'H': strcpy(p,"�g");p+=2;break;
			case    'I': strcpy(p,"�h");p+=2;break;
			case    'J': strcpy(p,"�i");p+=2;break;
			case    'K': strcpy(p,"�j");p+=2;break;
			case    'L': strcpy(p,"�k");p+=2;break;
			case    'M': strcpy(p,"�l");p+=2;break;
			case    'N': strcpy(p,"�m");p+=2;break;
			case    'O': strcpy(p,"�n");p+=2;break;
			case    'P': strcpy(p,"�o");p+=2;break;
			case    'Q': strcpy(p,"�p");p+=2;break;
			case    'R': strcpy(p,"�q");p+=2;break;
			case    'S': strcpy(p,"�r");p+=2;break;
			case    'T': strcpy(p,"�s");p+=2;break;
			case    'U': strcpy(p,"�t");p+=2;break;
			case    'V': strcpy(p,"�u");p+=2;break;
			case    'W': strcpy(p,"�v");p+=2;break;
			case    'X': strcpy(p,"�w");p+=2;break;
			case    'Y': strcpy(p,"�x");p+=2;break;
			case    'Z': strcpy(p,"�y");p+=2;break;
			case    '[': strcpy(p,"�m");p+=2;break;
			case    '\\': strcpy(p,"��");p+=2;break;
			case    ']': strcpy(p,"�n");p+=2;break;
			case    '^': strcpy(p,"�O");p+=2;break;
			case    '_': strcpy(p,"�Q");p+=2;break;
			case    '`': strcpy(p,"�e");p+=2;break;
			case    'a': strcpy(p,"��");p+=2;break;
			case    'b': strcpy(p,"��");p+=2;break;
			case    'c': strcpy(p,"��");p+=2;break;
			case    'd': strcpy(p,"��");p+=2;break;
			case    'e': strcpy(p,"��");p+=2;break;
			case    'f': strcpy(p,"��");p+=2;break;
			case    'g': strcpy(p,"��");p+=2;break;
			case    'h': strcpy(p,"��");p+=2;break;
			case    'i': strcpy(p,"��");p+=2;break;
			case    'j': strcpy(p,"��");p+=2;break;
			case    'k': strcpy(p,"��");p+=2;break;
			case    'l': strcpy(p,"��");p+=2;break;
			case    'm': strcpy(p,"��");p+=2;break;
			case    'n': strcpy(p,"��");p+=2;break;
			case    'o': strcpy(p,"��");p+=2;break;
			case    'p': strcpy(p,"��");p+=2;break;
			case    'q': strcpy(p,"��");p+=2;break;
			case    'r': strcpy(p,"��");p+=2;break;
			case    's': strcpy(p,"��");p+=2;break;
			case    't': strcpy(p,"��");p+=2;break;
			case    'u': strcpy(p,"��");p+=2;break;
			case    'v': strcpy(p,"��");p+=2;break;
			case    'w': strcpy(p,"��");p+=2;break;
			case    'x': strcpy(p,"��");p+=2;break;
			case    'y': strcpy(p,"��");p+=2;break;
			case    'z': strcpy(p,"��");p+=2;break;
			case    '{': strcpy(p,"�o");p+=2;break;
			case    '|': strcpy(p,"�b");p+=2;break;
			case    '}': strcpy(p,"�p");p+=2;break;
			default:
				*p=*ptr;
				p++;
				*p='\0';
				break;
		}
	}
	strcpy(str,buf);
	free(buf);

	return(0);
}
