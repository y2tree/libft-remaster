#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return(dst);
}

int	main(void)
{
	char dst[20] = "autres filles";
	char src[20] = "PPEERRRRIINNE";
	ft_memcpy(dst, src, 15);
	printf("%s\n", dst);
	return (0);
}