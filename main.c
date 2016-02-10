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
	printf("ret = %d\n", ft_printf("%.d, %.0d", 0, 0));
	printf("ret = %d\n\n", printf("%.d, %.0d", 0, 0));
	printf("ret = %d\n", ft_printf("%.10d", -42));
	printf("ret = %d\n\n", printf("%.10d", -42));
	printf("ret = %d\n", ft_printf("%.4i", 42));
	printf("ret = %d\n\n", printf("%.4i", 42));
	printf("ret = %d\n", ft_printf("%4.15i", 42));
	printf("ret = %d\n\n", printf("%4.15i", 42));
	return (0);
}
