#include<stdio.h>
#include<stdlib.h>//atoi
#include<string.h>//strlen
#pragma warning(disable:4996)

//����͈�(�ŏ��O�A�ő�X�j�̈ꌅ�̐��������͂��ꂽ�Ƃ��͂��̒l��Ԃ��B
//����ȊO�̐����╶���񂪓��͂��ꂽ�Ƃ��͂P�O��Ԃ�

//int yomi(int x1, int x2);

int yomi(int x1, int x2)
{
	char a[20];
	int b;
			
	scanf("%s",&a);
	b = strlen(a);

	if (b == 1)
	{

		b = atoi(a);
		if (b >= x1 && b <= x2)
		{
			return (b);
		}

	}

	return 10;
		
}