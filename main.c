#include <stdlib.h>
#include <stdio.h>
//#include "ft_strlen.c"
//#include "ft_isalpha.c"
//#include "ft_isdigit.c"
//#include "ft_isalnum.c"
//#include "ft_strchr.c"
//#include "ft_strrchr.c"
#include "ft_strncmp.c"


int main(void)
{
    const char *str = "hello11";
    const char *str2 = "hello12";

//    printf("%zu",ft_strlen(str));
//    printf("%d",ft_isalpha(str[5]));
//    printf("%d",ft_isdigit(str[5]));
//    printf("%d",ft_isalnum(str[5]));
//    printf("%s",ft_strrchr(str, 'l'));
    printf("%d",ft_strncmp(str, str2, 6));


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