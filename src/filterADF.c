/*
 ============================================================================
 Name        : filterADF.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#define LEN 80
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int T_Array[16], T_tempA, T_temp;

unsigned int fiter(unsigned int);
int main(void)
{
	FILE *fp1;  //�����ļ���ָ�룬���ڴ򿪶�ȡ���ļ�
	char text[1024];  //����һ���ַ������飬���ڴ洢��ȡ���ַ�
	char fn[32];
	printf("�������ļ�����");
	fflush(stdout);
	scanf("%s", fn);
	strcat(fn, ".txt");
	if ((access(fn, 0)) == -1)
	{
		printf("�ļ�������\n");
		exit(0);
	}
	fp1 = fopen(fn, "r");  //ֻ����ʽ���ļ�a.txt
	T_tempA = 1;
	while (fgets(text, 1024, fp1) != NULL)  //���ж�ȡfp1��ָ���ļ��е����ݵ�text��
	{
		T_temp = atof(text) + 1;
		T_temp = fiter(T_temp);
		T_tempA = T_temp;
		sprintf(text, "%d", T_temp);
		puts(text);  //�������Ļ
	}
	fclose(fp1);  //�ر��ļ�a.txt���д򿪾�Ҫ�йر�
	return EXIT_SUCCESS;
}
unsigned int fiter(unsigned int TA)
{

	return TA;
}
