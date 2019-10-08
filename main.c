#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
//#include "ft_strlen.c"
//#include "ft_isalpha.c"
//#include "ft_isdigit.c"
//#include "ft_isalnum.c"
//#include "ft_strchr.c"
//#include "ft_strrchr.c"
//#include "ft_strncmp.c"
//#include "ft_strlcpy.c"
//#include "ft_strlcat.c"
//#include "ft_strnstr.c"
//#include "ft_atoi.c"
#include "ft_memset.c"
//#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"


int main(void)
{
    const char *str = "hello11";
//    const char *str2 = "hello12";
    const char *str2 = "l";
    int tab[10];
    int src[10]= {1,2,3,4,5,6,41};

//    printf("%zu",ft_strlen(str));
//    printf("%d",ft_isalpha(str[5]));
//    printf("%d",ft_isdigit(str[5]));
//    printf("%d",ft_isalnum(str[5]));
//    printf("%s",ft_strrchr(str, 'l'));
//    printf("%d",ft_strncmp(str, str2, 6));
//    printf("%lu",strlcat(str2, str, 20));
//      printf("\n%s\n", str2);
//    printf("officielle  : %s\n",strnstr(str, str2, 3));
//    printf("ma fonction : %s\n",ft_strnstr(str, str2, 3));
//    printf("officielle  : %d\n",   atoi("2147483647"));
//    printf("ma fonction : %d\n",ft_atoi("2147483647"));

//    ft_bzero(tab, 10);

	ft_memccpy(tab, src, 41, 7);
	int i = 0;
	while (i < 10)
	{
		write(1, &tab[i], 1);
		i++;
	}
/*
	write(1, "\n", 1);
	for (size_t i = 0; i < 10; i++)
	{
		src[i] = 0;
	}


	ft_memccpy(tab, src, 41, 7);
	i = 0;
	while (i < 10)
	{
		write(1, &tab[i], 1);
		i++;
	}
*/

//	printf("sizeof : %lu\n", sizeof(int));

	
/*
    //atoi
    printf("%d\n", atoi(" 165"));
    printf("%d\n", atoi("     -+165"));
    printf("%d\n", atoi("--165"));
    printf("%d\n", atoi("-165"));
    printf("%d\n", atoi("-++ 165"));
    printf("%d\n", atoi("--+-+-165"));
*/
    return (0);
}