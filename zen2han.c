//ëSäpÇ©ÇÁîºäpÇ÷ïœä∑
int zen2han(char *str)
{
char	*buf,*p,*ptr;

	buf=(char *)calloc(strlen(str)+1,sizeof(char));

	for(ptr=str,p=buf;*ptr!='\0';*ptr++){
		if(strncmp(ptr,"Å@",2)==0){*p=' ';p++;ptr++;}
		else if(strncmp(ptr,"ÅI",2)==0){*p='!';p++;ptr++;}
		else if(strncmp(ptr,"Åh",2)==0){*p='"';p++;ptr++;}
		else if(strncmp(ptr,"Åî",2)==0){*p='#';p++;ptr++;}
		else if(strncmp(ptr,"Åê",2)==0){*p='$';p++;ptr++;}
		else if(strncmp(ptr,"Åì",2)==0){*p='%';p++;ptr++;}
		else if(strncmp(ptr,"Åï",2)==0){*p='&';p++;ptr++;}
		else if(strncmp(ptr,"Åf",2)==0){*p='\'';p++;ptr++;}
		else if(strncmp(ptr,"Åi",2)==0){*p='(';p++;ptr++;}
		else if(strncmp(ptr,"Åj",2)==0){*p=')';p++;ptr++;}
		else if(strncmp(ptr,"Åñ",2)==0){*p='*';p++;ptr++;}
		else if(strncmp(ptr,"Å{",2)==0){*p='+';p++;ptr++;}
		else if(strncmp(ptr,"ÅC",2)==0){*p=',';p++;ptr++;}
		else if(strncmp(ptr,"Å|",2)==0){*p='-';p++;ptr++;}
		else if(strncmp(ptr,"ÅD",2)==0){*p='.';p++;ptr++;}
		else if(strncmp(ptr,"Å^",2)==0){*p='/';p++;ptr++;}
		else if(strncmp(ptr,"ÇO",2)==0){*p='0';p++;ptr++;}
		else if(strncmp(ptr,"ÇP",2)==0){*p='1';p++;ptr++;}
		else if(strncmp(ptr,"ÇQ",2)==0){*p='2';p++;ptr++;}
		else if(strncmp(ptr,"ÇR",2)==0){*p='3';p++;ptr++;}
		else if(strncmp(ptr,"ÇS",2)==0){*p='4';p++;ptr++;}
		else if(strncmp(ptr,"ÇT",2)==0){*p='5';p++;ptr++;}
		else if(strncmp(ptr,"ÇU",2)==0){*p='6';p++;ptr++;}
		else if(strncmp(ptr,"ÇV",2)==0){*p='7';p++;ptr++;}
		else if(strncmp(ptr,"ÇW",2)==0){*p='8';p++;ptr++;}
		else if(strncmp(ptr,"ÇX",2)==0){*p='9';p++;ptr++;}
		else if(strncmp(ptr,"ÅF",2)==0){*p=':';p++;ptr++;}
		else if(strncmp(ptr,"ÅG",2)==0){*p=';';p++;ptr++;}
		else if(strncmp(ptr,"ÅÉ",2)==0){*p='<';p++;ptr++;}
		else if(strncmp(ptr,"ÅÅ",2)==0){*p='=';p++;ptr++;}
		else if(strncmp(ptr,"ÅÑ",2)==0){*p='>';p++;ptr++;}
		else if(strncmp(ptr,"ÅH",2)==0){*p='?';p++;ptr++;}
		else if(strncmp(ptr,"Åó",2)==0){*p='@';p++;ptr++;}
		else if(strncmp(ptr,"Ç`",2)==0){*p='A';p++;ptr++;}
		else if(strncmp(ptr,"Ça",2)==0){*p='B';p++;ptr++;}
		else if(strncmp(ptr,"Çb",2)==0){*p='C';p++;ptr++;}
		else if(strncmp(ptr,"Çc",2)==0){*p='D';p++;ptr++;}
		else if(strncmp(ptr,"Çd",2)==0){*p='E';p++;ptr++;}
		else if(strncmp(ptr,"Çe",2)==0){*p='F';p++;ptr++;}
		else if(strncmp(ptr,"Çf",2)==0){*p='G';p++;ptr++;}
		else if(strncmp(ptr,"Çg",2)==0){*p='H';p++;ptr++;}
		else if(strncmp(ptr,"Çh",2)==0){*p='I';p++;ptr++;}
		else if(strncmp(ptr,"Çi",2)==0){*p='J';p++;ptr++;}
		else if(strncmp(ptr,"Çj",2)==0){*p='K';p++;ptr++;}
		else if(strncmp(ptr,"Çk",2)==0){*p='L';p++;ptr++;}
		else if(strncmp(ptr,"Çl",2)==0){*p='M';p++;ptr++;}
		else if(strncmp(ptr,"Çm",2)==0){*p='N';p++;ptr++;}
		else if(strncmp(ptr,"Çn",2)==0){*p='O';p++;ptr++;}
		else if(strncmp(ptr,"Ço",2)==0){*p='P';p++;ptr++;}
		else if(strncmp(ptr,"Çp",2)==0){*p='Q';p++;ptr++;}
		else if(strncmp(ptr,"Çq",2)==0){*p='R';p++;ptr++;}
		else if(strncmp(ptr,"Çr",2)==0){*p='S';p++;ptr++;}
		else if(strncmp(ptr,"Çs",2)==0){*p='T';p++;ptr++;}
		else if(strncmp(ptr,"Çt",2)==0){*p='U';p++;ptr++;}
		else if(strncmp(ptr,"Çu",2)==0){*p='V';p++;ptr++;}
		else if(strncmp(ptr,"Çv",2)==0){*p='W';p++;ptr++;}
		else if(strncmp(ptr,"Çw",2)==0){*p='X';p++;ptr++;}
		else if(strncmp(ptr,"Çx",2)==0){*p='Y';p++;ptr++;}
		else if(strncmp(ptr,"Çy",2)==0){*p='Z';p++;ptr++;}
		else if(strncmp(ptr,"Åm",2)==0){*p='[';p++;ptr++;}
		else if(strncmp(ptr,"Åè",2)==0){*p='\\';p++;ptr++;}
		else if(strncmp(ptr,"Ån",2)==0){*p=']';p++;ptr++;}
		else if(strncmp(ptr,"ÅO",2)==0){*p='^';p++;ptr++;}
		else if(strncmp(ptr,"ÅQ",2)==0){*p='_';p++;ptr++;}
		else if(strncmp(ptr,"Åe",2)==0){*p='`';p++;ptr++;}
		else if(strncmp(ptr,"ÇÅ",2)==0){*p='a';p++;ptr++;}
		else if(strncmp(ptr,"ÇÇ",2)==0){*p='b';p++;ptr++;}
		else if(strncmp(ptr,"ÇÉ",2)==0){*p='c';p++;ptr++;}
		else if(strncmp(ptr,"ÇÑ",2)==0){*p='d';p++;ptr++;}
		else if(strncmp(ptr,"ÇÖ",2)==0){*p='e';p++;ptr++;}
		else if(strncmp(ptr,"ÇÜ",2)==0){*p='f';p++;ptr++;}
		else if(strncmp(ptr,"Çá",2)==0){*p='g';p++;ptr++;}
		else if(strncmp(ptr,"Çà",2)==0){*p='h';p++;ptr++;}
		else if(strncmp(ptr,"Çâ",2)==0){*p='i';p++;ptr++;}
		else if(strncmp(ptr,"Çä",2)==0){*p='j';p++;ptr++;}
		else if(strncmp(ptr,"Çã",2)==0){*p='k';p++;ptr++;}
		else if(strncmp(ptr,"Çå",2)==0){*p='l';p++;ptr++;}
		else if(strncmp(ptr,"Çç",2)==0){*p='m';p++;ptr++;}
		else if(strncmp(ptr,"Çé",2)==0){*p='n';p++;ptr++;}
		else if(strncmp(ptr,"Çè",2)==0){*p='o';p++;ptr++;}
		else if(strncmp(ptr,"Çê",2)==0){*p='p';p++;ptr++;}
		else if(strncmp(ptr,"Çë",2)==0){*p='q';p++;ptr++;}
		else if(strncmp(ptr,"Çí",2)==0){*p='r';p++;ptr++;}
		else if(strncmp(ptr,"Çì",2)==0){*p='s';p++;ptr++;}
		else if(strncmp(ptr,"Çî",2)==0){*p='t';p++;ptr++;}
		else if(strncmp(ptr,"Çï",2)==0){*p='u';p++;ptr++;}
		else if(strncmp(ptr,"Çñ",2)==0){*p='v';p++;ptr++;}
		else if(strncmp(ptr,"Çó",2)==0){*p='w';p++;ptr++;}
		else if(strncmp(ptr,"Çò",2)==0){*p='x';p++;ptr++;}
		else if(strncmp(ptr,"Çô",2)==0){*p='y';p++;ptr++;}
		else if(strncmp(ptr,"Çö",2)==0){*p='z';p++;ptr++;}
		else if(strncmp(ptr,"Åo",2)==0){*p='{';p++;ptr++;}
		else if(strncmp(ptr,"Åb",2)==0){*p='|';p++;ptr++;}
		else if(strncmp(ptr,"Åp",2)==0){*p='}';p++;ptr++;}
		else{ *p=*ptr; p++; }
	}
	strcpy(str,buf);
	free(buf);

	return(0);
}