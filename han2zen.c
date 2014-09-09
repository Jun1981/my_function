//îºäpÇ©ÇÁëSäpÇ÷ïœä∑
#include	<stdio.h>
#include	<string.h>


int han2zen(char *str)
{
char	*buf,*p,*ptr;

	buf=(char *)calloc(strlen(str)*2+1,sizeof(char));

	for(ptr=str,p=buf;*ptr!='\0';*ptr++){
		switch((int)*ptr){
			case    ' ': strcpy(p,"Å@");p+=2;break;
			case    '!': strcpy(p,"ÅI");p+=2;break;
			case    '"': strcpy(p,"Åh");p+=2;break;
			case    '#': strcpy(p,"Åî");p+=2;break;
			case    '$': strcpy(p,"Åê");p+=2;break;
			case    '%': strcpy(p,"Åì");p+=2;break;
			case    '&': strcpy(p,"Åï");p+=2;break;
			case    '\'': strcpy(p,"Åf");p+=2;break;
			case    '(': strcpy(p,"Åi");p+=2;break;
			case    ')': strcpy(p,"Åj");p+=2;break;
			case    '*': strcpy(p,"Åñ");p+=2;break;
			case    '+': strcpy(p,"Å{");p+=2;break;
			case    ',': strcpy(p,"ÅC");p+=2;break;
			case    '-': strcpy(p,"Å|");p+=2;break;
			case    '.': strcpy(p,"ÅD");p+=2;break;
			case    '/': strcpy(p,"Å^");p+=2;break;
			case    '0': strcpy(p,"ÇO");p+=2;break;
			case    '1': strcpy(p,"ÇP");p+=2;break;
			case    '2': strcpy(p,"ÇQ");p+=2;break;
			case    '3': strcpy(p,"ÇR");p+=2;break;
			case    '4': strcpy(p,"ÇS");p+=2;break;
			case    '5': strcpy(p,"ÇT");p+=2;break;
			case    '6': strcpy(p,"ÇU");p+=2;break;
			case    '7': strcpy(p,"ÇV");p+=2;break;
			case    '8': strcpy(p,"ÇW");p+=2;break;
			case    '9': strcpy(p,"ÇX");p+=2;break;
			case    ':': strcpy(p,"ÅF");p+=2;break;
			case    ';': strcpy(p,"ÅG");p+=2;break;
			case    '<': strcpy(p,"ÅÉ");p+=2;break;
			case    '=': strcpy(p,"ÅÅ");p+=2;break;
			case    '>': strcpy(p,"ÅÑ");p+=2;break;
			case    '?': strcpy(p,"ÅH");p+=2;break;
			case    '@': strcpy(p,"Åó");p+=2;break;
			case    'A': strcpy(p,"Ç`");p+=2;break;
			case    'B': strcpy(p,"Ça");p+=2;break;
			case    'C': strcpy(p,"Çb");p+=2;break;
			case    'D': strcpy(p,"Çc");p+=2;break;
			case    'E': strcpy(p,"Çd");p+=2;break;
			case    'F': strcpy(p,"Çe");p+=2;break;
			case    'G': strcpy(p,"Çf");p+=2;break;
			case    'H': strcpy(p,"Çg");p+=2;break;
			case    'I': strcpy(p,"Çh");p+=2;break;
			case    'J': strcpy(p,"Çi");p+=2;break;
			case    'K': strcpy(p,"Çj");p+=2;break;
			case    'L': strcpy(p,"Çk");p+=2;break;
			case    'M': strcpy(p,"Çl");p+=2;break;
			case    'N': strcpy(p,"Çm");p+=2;break;
			case    'O': strcpy(p,"Çn");p+=2;break;
			case    'P': strcpy(p,"Ço");p+=2;break;
			case    'Q': strcpy(p,"Çp");p+=2;break;
			case    'R': strcpy(p,"Çq");p+=2;break;
			case    'S': strcpy(p,"Çr");p+=2;break;
			case    'T': strcpy(p,"Çs");p+=2;break;
			case    'U': strcpy(p,"Çt");p+=2;break;
			case    'V': strcpy(p,"Çu");p+=2;break;
			case    'W': strcpy(p,"Çv");p+=2;break;
			case    'X': strcpy(p,"Çw");p+=2;break;
			case    'Y': strcpy(p,"Çx");p+=2;break;
			case    'Z': strcpy(p,"Çy");p+=2;break;
			case    '[': strcpy(p,"Åm");p+=2;break;
			case    '\\': strcpy(p,"Åè");p+=2;break;
			case    ']': strcpy(p,"Ån");p+=2;break;
			case    '^': strcpy(p,"ÅO");p+=2;break;
			case    '_': strcpy(p,"ÅQ");p+=2;break;
			case    '`': strcpy(p,"Åe");p+=2;break;
			case    'a': strcpy(p,"ÇÅ");p+=2;break;
			case    'b': strcpy(p,"ÇÇ");p+=2;break;
			case    'c': strcpy(p,"ÇÉ");p+=2;break;
			case    'd': strcpy(p,"ÇÑ");p+=2;break;
			case    'e': strcpy(p,"ÇÖ");p+=2;break;
			case    'f': strcpy(p,"ÇÜ");p+=2;break;
			case    'g': strcpy(p,"Çá");p+=2;break;
			case    'h': strcpy(p,"Çà");p+=2;break;
			case    'i': strcpy(p,"Çâ");p+=2;break;
			case    'j': strcpy(p,"Çä");p+=2;break;
			case    'k': strcpy(p,"Çã");p+=2;break;
			case    'l': strcpy(p,"Çå");p+=2;break;
			case    'm': strcpy(p,"Çç");p+=2;break;
			case    'n': strcpy(p,"Çé");p+=2;break;
			case    'o': strcpy(p,"Çè");p+=2;break;
			case    'p': strcpy(p,"Çê");p+=2;break;
			case    'q': strcpy(p,"Çë");p+=2;break;
			case    'r': strcpy(p,"Çí");p+=2;break;
			case    's': strcpy(p,"Çì");p+=2;break;
			case    't': strcpy(p,"Çî");p+=2;break;
			case    'u': strcpy(p,"Çï");p+=2;break;
			case    'v': strcpy(p,"Çñ");p+=2;break;
			case    'w': strcpy(p,"Çó");p+=2;break;
			case    'x': strcpy(p,"Çò");p+=2;break;
			case    'y': strcpy(p,"Çô");p+=2;break;
			case    'z': strcpy(p,"Çö");p+=2;break;
			case    '{': strcpy(p,"Åo");p+=2;break;
			case    '|': strcpy(p,"Åb");p+=2;break;
			case    '}': strcpy(p,"Åp");p+=2;break;
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
