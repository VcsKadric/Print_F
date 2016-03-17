#include "printf.h"
#include <locale.h>
#include <stdio.h>
int		main(void)
{/*
  printf("vrai %++d\n", 5);
  ft_printf("faux %++d\n", 5);
  printf("vrai %10x\n", 42);
  ft_printf("faux %10x\n", 42);
  printf("vrai %10X\n", 42);
  ft_printf("faux %10X\n", 42);
  printf("vrai %-10X\n", 42);
  ft_printf("faux %-10X\n", 42);*/
  /*    
  	printf("-----------TEST_PERCENTS-------------\n");
	printf("\nret = %d\n", ft_printf("%%"));
	printf("\nret = %d\n\n", printf("%%"));
	printf("\nret = %d\n", ft_printf("aa%%bb"));
	printf("\nret = %d\n\n", printf("aa%%bb"));
	printf("\nret = %d\n", ft_printf("%%%%%%%%%%"));
	printf("\nret = %d\n\n",printf("%%%%%%%%%%"));
	printf("\nret = %d\n", ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%."));
	printf("\nret = %d\n\n", printf(".%%.%%.%%.%%.%%.%%.%%.%%."));
	printf("\nret = %d\n", ft_printf("%"));
	printf("\nret = %d\n\n", printf("%"));
	printf("\nret = %d\n", ft_printf("% Zoooo"));
	printf("\nret = %d\n\n", printf("% Zoooo")); 
	printf("\nret = %d\n", ft_printf("{%}"));
	printf("\nret = %d\n\n", printf("{%}"));
	printf("\nret = %d\n", ft_printf("{% %}"));
	printf("\nret = %d\n\n", printf("{% %}"));
	printf("-----------TEST_PERCENTS-------------\n"); 
	printf("----------------END------------------\n\n"); 
	printf("----------PRECISION_FOR_DIU----------\n\n");*/
	printf("\nret = %d\n", ft_printf("%.4d", 42));
	printf("\nret = %d\n\n", printf("%.4d", 42));
	printf("\nret = %d\n", ft_printf("%.4d", 424242));
	printf("\nret = %d\n\n", printf("%.4d", 424242));
	printf("ret = %d\n", ft_printf("%.4d", -424242)); 
	printf("ret = %d\n\n", printf("%.4d", -424242));
	printf("ret = %d\n", ft_printf("%15.4d", 42));
	printf("ret = %d\n\n", printf("%15.4d", 42));
	printf("ret = %d\n", ft_printf("%15.4d", 424242));
	printf("ret = %d\n\n", printf("%15.4d", 424242));
	printf("ret = %d\n", ft_printf("%8.4d", 424242424));
	printf("ret = %d\n\n", printf("%8.4d", 424242424));
	printf("ret = %d\n", ft_printf("%15.4d", -42)); 
	printf("ret = %d\n\n", printf("%15.4d", -42));
	printf("ret = %d\n", ft_printf("%8.4d", -424242424));
	printf("ret = %d\n\n", printf("%8.4d", -424242424));
	printf("ret = %d\n", ft_printf("%4.15d", 42));
	printf("ret = %d\n\n", printf("%4.15d", 42));
	printf("ret = %d\n", ft_printf("%4.15d", 424242));
	printf("ret = %d\n\n", printf("%4.15d", 424242));
	printf("ret = %d\n", ft_printf("%4.8d", 424242424));
	printf("ret = %d\n\n", printf("%4.8d", 424242424));
	printf("ret = %d\n", ft_printf("%4.15d", -42));
	printf("ret = %d\n\n", printf("%4.15d", -42));
	printf("ret = %d\n", ft_printf("%4.15d", -424242));
	printf("ret = %d\n\n", printf("%4.15d", -424242));
	printf("ret = %d\n", ft_printf("%4.8d", -424242424));
	printf("ret = %d\n\n", printf("%4.8d", -424242424));  
	printf("ret = %d\n", ft_printf("%.d, %.0d", 0, 0));
	printf("ret = %d\n\n", printf("%.d, %.0d", 0, 0));/*
	printf("ret = %d\n", ft_printf("%.10d", -42));
	printf("ret = %d\n\n", printf("%.10d", -42));
	printf("ret = %d\n", ft_printf("%.4i", 42));
	printf("ret = %d\n\n", printf("%.4i", 42));
	printf("ret = %d\n", ft_printf("%4.15i", 42));
	printf("ret = %d\n\n", printf("%4.15i", 42));

  printf("ret = %d\n", ft_printf("%o", 42));
  printf("ret = %d\n\n", printf("%o", 42));
  printf("ret = %d\n",ft_printf("before %o after", 42));
  printf("ret = %d\n\n",printf("before %o after", 42));
  printf("ret = %d\n",ft_printf("%o %o %o %o",1, 100, 999, 999988888));
  printf("ret = %d\n\n",printf("%o %o %o %o",1, 100, 999, 999988888));
  ft_printf("%o\n", 1);
  printf("%o\n", 1);
  ft_printf("%o\n", 100);
  printf("%o\n", 100);
  ft_printf("%o\n", 999);
  printf("%o\n", 999);

  ft_printf("%o %o\n",100, 999);
  printf("%o %o\n",100, 999);
  char *str = "bonjour";
 ft_printf("%s %d\n", str, 42);
 printf("%s %d\n", str, 42);
 ft_printf("%p\n",str);
 printf("%p\n",str);
 ft_printf("%#x %#X\n", 42, 42);
 printf("%#x %#X\n", 42, 42);
 ft_printf("%o %o\n", 42, 42);
 printf("%o %o\n", 42, 42);
  ft_printf("%o %#.1o\n", 42, 42);
  printf("%o %#.1o\n", 42, 42); 
  printf("ret = %d\n",ft_printf("%c", 0));
  printf("ret = %d\n", printf("%c", 0));
  printf("ret = %d\n",ft_printf("%.c", 0));
  printf("ret = %d\n", printf("%.c", 0));
  printf("ret = %d\n", ft_printf("%.4s", "42 is the answer"));
  printf("ret = %d\n", printf("%.4s", "42 is the answer"));
  printf("ret = %d\n", ft_printf("%#X", 42));
  printf("ret = %d\n", printf("%#X", 42));
  printf("ret = %d\n", ft_printf("%+C", 0));
  printf("ret = %d\n", printf("%+C", 0));
  int	i = 14;
  printf("ret = %d\n",ft_printf("%p", &i));
  printf("ret = %d\n", printf("%p", &i));
  printf(">>>>>>>>>>>>>TEST>>>>>>>>>>>>>>\n");
  printf("ret = %d\n", ft_printf("%hhu / %hhu", SHRT_MAX - 42, SHRT_MAX - 4200));
  printf("ret = %d\n", printf("%hhu / %hhu", SHRT_MAX - 42, SHRT_MAX - 4200));
  printf("ret = %d\n", ft_printf("%hhd / %hhd", SHRT_MAX - 42, SHRT_MAX - 4200));
  printf("ret = %d\n", printf("%hhd / %hhd", SHRT_MAX - 42, SHRT_MAX - 4200));
  printf("ret = %d\n", ft_printf("%jd%jd", 0, 42));
  printf("ret = %d\n", printf("%jd%jd", 0, 42));
  printf("<<<<<<<<<<<<testHHo REAL PRTF>>>>>>>>>>>>>>>\n");
  printf("UCHAR_MAX = %o\n", UCHAR_MAX);
  printf("UCHAR_MAX + 45 = %o\n", UCHAR_MAX + 45);
  printf("UCHAR_MAX (hh) = %hho\n", UCHAR_MAX);
  printf("UCHAR_MAX (hh) + 45 = %hho\n", UCHAR_MAX + 45);
  printf("USHRT_MAX (o) = %o\n", USHRT_MAX);
  printf("USHRT_MAX (O) = %O\n", USHRT_MAX);
  printf("USHRT_MAX (hho) = %hho\n", USHRT_MAX);
  printf("USHRT_MAX (hhO) = %hhO\n", USHRT_MAX);
  printf("<<<<<<<<<<<<testHHo FT_PRTF>>>>>>>>>>>>>>>\n");
  ft_printf("USHRT_MAX (o) = %o\n", USHRT_MAX);
  ft_printf("USHRT_MAX (O) = %O\n", USHRT_MAX);
  ft_printf("USHRT_MAX (hho) = %hho\n", USHRT_MAX);
  ft_printf("USHRT_MAX (hhO) = %hhO\n", USHRT_MAX);
  printf("<<<<<<<<<<<<ENDtestHHo >>>>>>>>>>>>>>>\n");
  printf("ret = %d\n", ft_printf("%hho, %hho", 0, UCHAR_MAX + 42));
  printf("ret = %d\n", printf("%hho, %hho", 0, UCHAR_MAX + 42));
  printf("ret = %d\n", ft_printf("%hhO, %hhO", 0, USHRT_MAX));
  printf("ret = %d\n", printf("%hhO, %hhO", 0, USHRT_MAX));*/
  //  printf("ret = %d\n", ft_printf("{%15}"));
  //  printf("ret = %d\n", printf("{%15}"));
  /*  printf(">>>>>>>>>>>WTF>>>>>>>>>>>>>\n");
  printf("ret = %d\n", ft_printf("%.4s", "42"));
  printf("ret = %d\n", printf("%.4s", "42"));
  printf("ret = %d\n", ft_printf("%15.4s", "42"));
  printf("ret = %d\n", printf("%15.4s", "42"));
  printf("ret = %d\n", ft_printf("%15.4s", "I am 42"));
  printf("ret = %d\n", printf("%15.4s", "I am 42")); */
  return (0);
}
