#include "client.h"

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count])
		count++;
	return(count);
}

char	*ft_putnbr_base(int n) 
{
	char	*result;
	char	*binary_quot;
	int		len;

    if (n == 0) 
	{
        result = malloc(2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    if (n == 1) {
        char* result = malloc(2);
        result[0] = '1';
        result[1] = '\0';
        return result;
    }
    binary_quot = ft_putnbr_base(n / 2);
    len = ft_strlen(binary_quot);
    result = malloc(len + 2);
    strcpy(result, binary_quot);
    result[len] = '0' + (n % 2);
    result[len + 1] = '\0';
    free(binary_quot);
    return result;
}
char	*ft_put_zero(char *str)
{
	int	i;
	int	len;
	int	zero;
	char *dst;

	len = ft_strlen(str);
	dst = malloc(sizeof(char*) * 9);
	if (!dst)
		return (NULL);
	i = 0;
	zero = 8 - len;
	while(i < zero)
	{
		dst[i] = '0';
		i++;
	}
	while(str[i - zero])
	{
		dst[i] = str[i - zero];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
