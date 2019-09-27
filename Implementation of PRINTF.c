#include<stdio.h>
#include<stdarg.h>
void myprintf(char*fmt,...)
{
	char* p;
	int i_val;float d_val;
	va_list ap;
	va_start (ap,fmt);
	for(p=fmt;*p;p++)
	{
		if(*p!='%')
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 'd':
				i_val=va_arg(ap,int);
				printf("%d",i_val);
			case 'f':
				d_val=va_arg(ap,double);
				printf("%f",d_val);		 	
		}
	}
}
main()
{
	int i=5;float d=5.00;
	myprintf("integer=%d double=%f",i,d);
}
