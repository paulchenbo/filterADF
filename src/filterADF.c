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
	FILE *fp1;  //定义文件流指针，用于打开读取的文件
	char text[1024];  //定义一个字符串数组，用于存储读取的字符
	char fn[32];
	printf("请输入文件名：");
	fflush(stdout);
	scanf("%s", fn);
	strcat(fn, ".txt");
	if ((access(fn, 0)) == -1)
	{
		printf("文件不存在\n");
		exit(0);
	}
	fp1 = fopen(fn, "r");  //只读方式打开文件a.txt
	T_tempA = 1;
	while (fgets(text, 1024, fp1) != NULL)  //逐行读取fp1所指向文件中的内容到text中
	{
		T_temp = atof(text) + 1;
		T_temp = fiter(T_temp);
		T_tempA = T_temp;
		sprintf(text, "%d", T_temp);
		puts(text);  //输出到屏幕
	}
	fclose(fp1);  //关闭文件a.txt，有打开就要有关闭
	return EXIT_SUCCESS;
}
unsigned int fiter(unsigned int TA)
{

	return TA;
}
