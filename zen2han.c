//�S�p���甼�p�֕ϊ�
int zen2han(char *str)
{
char	*buf,*p,*ptr;

	buf=(char *)calloc(strlen(str)+1,sizeof(char));

	for(ptr=str,p=buf;*ptr!='\0';*ptr++){
		if(strncmp(ptr,"�@",2)==0){*p=' ';p++;ptr++;}
		else if(strncmp(ptr,"�I",2)==0){*p='!';p++;ptr++;}
		else if(strncmp(ptr,"�h",2)==0){*p='"';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='#';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='$';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='%';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='&';p++;ptr++;}
		else if(strncmp(ptr,"�f",2)==0){*p='\'';p++;ptr++;}
		else if(strncmp(ptr,"�i",2)==0){*p='(';p++;ptr++;}
		else if(strncmp(ptr,"�j",2)==0){*p=')';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='*';p++;ptr++;}
		else if(strncmp(ptr,"�{",2)==0){*p='+';p++;ptr++;}
		else if(strncmp(ptr,"�C",2)==0){*p=',';p++;ptr++;}
		else if(strncmp(ptr,"�|",2)==0){*p='-';p++;ptr++;}
		else if(strncmp(ptr,"�D",2)==0){*p='.';p++;ptr++;}
		else if(strncmp(ptr,"�^",2)==0){*p='/';p++;ptr++;}
		else if(strncmp(ptr,"�O",2)==0){*p='0';p++;ptr++;}
		else if(strncmp(ptr,"�P",2)==0){*p='1';p++;ptr++;}
		else if(strncmp(ptr,"�Q",2)==0){*p='2';p++;ptr++;}
		else if(strncmp(ptr,"�R",2)==0){*p='3';p++;ptr++;}
		else if(strncmp(ptr,"�S",2)==0){*p='4';p++;ptr++;}
		else if(strncmp(ptr,"�T",2)==0){*p='5';p++;ptr++;}
		else if(strncmp(ptr,"�U",2)==0){*p='6';p++;ptr++;}
		else if(strncmp(ptr,"�V",2)==0){*p='7';p++;ptr++;}
		else if(strncmp(ptr,"�W",2)==0){*p='8';p++;ptr++;}
		else if(strncmp(ptr,"�X",2)==0){*p='9';p++;ptr++;}
		else if(strncmp(ptr,"�F",2)==0){*p=':';p++;ptr++;}
		else if(strncmp(ptr,"�G",2)==0){*p=';';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='<';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='=';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='>';p++;ptr++;}
		else if(strncmp(ptr,"�H",2)==0){*p='?';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='@';p++;ptr++;}
		else if(strncmp(ptr,"�`",2)==0){*p='A';p++;ptr++;}
		else if(strncmp(ptr,"�a",2)==0){*p='B';p++;ptr++;}
		else if(strncmp(ptr,"�b",2)==0){*p='C';p++;ptr++;}
		else if(strncmp(ptr,"�c",2)==0){*p='D';p++;ptr++;}
		else if(strncmp(ptr,"�d",2)==0){*p='E';p++;ptr++;}
		else if(strncmp(ptr,"�e",2)==0){*p='F';p++;ptr++;}
		else if(strncmp(ptr,"�f",2)==0){*p='G';p++;ptr++;}
		else if(strncmp(ptr,"�g",2)==0){*p='H';p++;ptr++;}
		else if(strncmp(ptr,"�h",2)==0){*p='I';p++;ptr++;}
		else if(strncmp(ptr,"�i",2)==0){*p='J';p++;ptr++;}
		else if(strncmp(ptr,"�j",2)==0){*p='K';p++;ptr++;}
		else if(strncmp(ptr,"�k",2)==0){*p='L';p++;ptr++;}
		else if(strncmp(ptr,"�l",2)==0){*p='M';p++;ptr++;}
		else if(strncmp(ptr,"�m",2)==0){*p='N';p++;ptr++;}
		else if(strncmp(ptr,"�n",2)==0){*p='O';p++;ptr++;}
		else if(strncmp(ptr,"�o",2)==0){*p='P';p++;ptr++;}
		else if(strncmp(ptr,"�p",2)==0){*p='Q';p++;ptr++;}
		else if(strncmp(ptr,"�q",2)==0){*p='R';p++;ptr++;}
		else if(strncmp(ptr,"�r",2)==0){*p='S';p++;ptr++;}
		else if(strncmp(ptr,"�s",2)==0){*p='T';p++;ptr++;}
		else if(strncmp(ptr,"�t",2)==0){*p='U';p++;ptr++;}
		else if(strncmp(ptr,"�u",2)==0){*p='V';p++;ptr++;}
		else if(strncmp(ptr,"�v",2)==0){*p='W';p++;ptr++;}
		else if(strncmp(ptr,"�w",2)==0){*p='X';p++;ptr++;}
		else if(strncmp(ptr,"�x",2)==0){*p='Y';p++;ptr++;}
		else if(strncmp(ptr,"�y",2)==0){*p='Z';p++;ptr++;}
		else if(strncmp(ptr,"�m",2)==0){*p='[';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='\\';p++;ptr++;}
		else if(strncmp(ptr,"�n",2)==0){*p=']';p++;ptr++;}
		else if(strncmp(ptr,"�O",2)==0){*p='^';p++;ptr++;}
		else if(strncmp(ptr,"�Q",2)==0){*p='_';p++;ptr++;}
		else if(strncmp(ptr,"�e",2)==0){*p='`';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='a';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='b';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='c';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='d';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='e';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='f';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='g';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='h';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='i';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='j';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='k';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='l';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='m';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='n';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='o';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='p';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='q';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='r';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='s';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='t';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='u';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='v';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='w';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='x';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='y';p++;ptr++;}
		else if(strncmp(ptr,"��",2)==0){*p='z';p++;ptr++;}
		else if(strncmp(ptr,"�o",2)==0){*p='{';p++;ptr++;}
		else if(strncmp(ptr,"�b",2)==0){*p='|';p++;ptr++;}
		else if(strncmp(ptr,"�p",2)==0){*p='}';p++;ptr++;}
		else{ *p=*ptr; p++; }
	}
	strcpy(str,buf);
	free(buf);

	return(0);
}