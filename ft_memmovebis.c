#include <stdio.h>
#include <string.h>

// void *ft_memmove(void *dst, const void *src, size_t len)
// {
//     size_t i = 0;
//     const unsigned char *tmp_src = src;
//     unsigned char *tmp_dst = dst;
//     unsigned char *tmp;
//     if (len == 0)
//         return (dst);
// 	while (len > 0)
// 	{
// 		tmp[i] = tmp_src[i];
//         tmp_dst[i] = tmp[i];
// 		len--;
// 	}
// 	return(dst);
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	// Test 1 : Copie normale, pas de chevauchement
	// {
	// 	char src[] = "123456789";
	// 	char dst[10];
	// 	ft_memmove(dst, src, 10);
	// 	printf("Test 1 : %s\n", dst);
	// }
	// Test 2 : Chevauchement (dst > src)
	{
		char str[] = "123456789";
		ft_memmove(str + 3, str, 6);
		printf("Test 2 : %s\n", str);
	}
	// // Test 3 : Chevauchement (dst < src)
	// {
	// 	char str[] = "123456789";
	// 	ft_memmove(str, str + 3, 6);
	// 	printf("Test 3 : %s\n", str);
	// }

	// // Test 4 : Taille nulle
	// {
	// 	char src[] = "123456789";
	// 	char dst[10];
	// 	ft_memmove(dst, src, 0);
	// 	printf("Test 4 : %s\n", dst);
	// }

	// // Test 5 : Pointeurs NULL (comportement indéfini, mais à tester)
	// {
	// 	ft_memmove(NULL, NULL, 5);
	// 	printf("Test 5 : Pointeurs NULL (pas de crash ?)\n");
	// }

	// // Test 6 : Buffer trop petit
	// {
	// 	char src[] = "123456789";
	// 	char dst[5];
	// 	ft_memmove(dst, src, 10);
	// 	printf("Test 6 : Buffer trop petit (risque de crash)\n");
	// }

	// // Test 7 : Copie de structure
	// {
	// 	typedef struct { int a; int b; } s_test;
	// 	s_test src = {42, 24};
	// 	s_test dst;
	// 	ft_memmove(&dst, &src, sizeof(s_test));
	// 	printf("Test 7 : %d %d\n", dst.a, dst.b);
	// }

	return 0;
}


// int main ()
// {
//     char dst[4] = "miaw";
//     char src[4] = "tigr";
    
//     ft_memmove(dst, src, 2);
//     printf("%s\n", dst);
//     return 0;

