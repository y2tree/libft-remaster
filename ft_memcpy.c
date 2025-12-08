#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src = src;

	i = 0;
	tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
	if (src == NULL || dst == NULL)
		return (dst);
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
        	printf("%s\n", tmp_dst);
        	printf("%s\n", tmp_src);

		n--;
	}
	// dst = tmp_dst;
	return (dst);
}

int	main(void)
{
	char dst[10] = "migre";
	char src[10] = "tiawe";
	ft_memcpy(dst, src, 2);
	printf("%s\n", dst);
	return (0);
}