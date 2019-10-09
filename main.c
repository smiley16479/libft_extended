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
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_calloc.c"
#include "ft_strdup.c"
#include "ft_substr.c"
#include "ft_strjoin.c"

int main(void)
{
    const char *str = "hello11";
    const char *str2 = "hello123456";
//    const char *str2 = "l";
    int tab[10];
    int src1[10]= {48,49,50,51,52,53,54,55,0};
//    int src2[10]= {48,49,50,50,52,53,54,55,0};


	char *str3 = ft_strdup(str);

	int i = 0;
	while (i < 7)
	{
		write(1, &str3[i], 1);
		i++;
	}

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

//	ft_memmove(src, &src[4], 7);

//	printf("%s\n", ft_memchr(src, 54, 36));


//	printf("%d\n", memcmp(src1, src2, 36));
//	int i = 0;
//	while (i < 10)
//	{
//		write(1, &sr[i], 1);
//		i++;
//	}
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
    return (0);
}