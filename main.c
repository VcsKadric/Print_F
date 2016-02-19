#include "printf.h"

int		main(void)
{

/*	printf("-----------TEST_PERCENTS-------------\n");
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
	printf("----------------END------------------\n\n");*/
	printf("----------PRECISION_FOR_DIU----------\n\n");
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
	printf("ret = %d\n", ft_printf("%2.d, %.0d", 1234, 0));
	printf("ret = %d\n\n", printf("%2.d, %.0d", 1234, 0));
	/*	printf("ret = %d\n", ft_printf("%.10d", -42));
	printf("ret = %d\n\n", printf("%.10d", -42));
	printf("ret = %d\n", ft_printf("%.4i", 42));
	printf("ret = %d\n\n", printf("%.4i", 42));
	printf("ret = %d\n", ft_printf("%4.15i", 42));
	printf("ret = %d\n\n", printf("%4.15i", 42));
*/
/*  printf("ret = %d\n", ft_printf("%o", 42));
  printf("ret = %d\n\n", printf("%o", 42));
  printf("ret = %d\n",ft_printf("before %o after", 42));
  printf("ret = %d\n\n",printf("before %o after", 42));
  printf("ret = %d\n",ft_printf("%o %o %o %o",1, 100, 999, 999988888));
  printf("ret = %d\n\n",printf("%o %o %o %o",1, 100, 999, 999988888));
  //  ft_printf("%o\n", 999988888);
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
 printf("%s %d\n", str, 42); */
  char *str = "bonjour";
  ft_printf("%p\n",str);
 printf("%p\n",str);
 ft_printf("%#x %#X\n", 42, 42);
 printf("%#x %#X\n", 42, 42);
 ft_printf("%o %o\n", 42, 42);
 printf("%o %o\n", 42, 42);
  ft_printf("%o %#.1o\n", 42, 42);
 printf("%o %#.1o\n", 42, 42);
  // printf("%o\n", 999988888);
  return (0);
}
