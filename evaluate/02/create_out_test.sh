gcc  test/ex00/ft_strcpy.c evaluate/02/main/main_00.c -Wall -Wextra -Werror -o 00
gcc  test/ex01/ft_strncpy.c evaluate/02/main/main_01.c -Wall -Wextra -Werror -o 01
gcc  test/ex02/ft_str_is_alpha.c evaluate/02/main/main_02.c -Wall -Wextra -Werror -o 02
gcc  test/ex03/ft_str_is_numeric.c evaluate/02/main/main_03.c -Wall -Wextra -Werror -o 03
gcc  test/ex04/ft_str_is_lowercase.c evaluate/02/main/main_04.c -Wall -Wextra -Werror -o 04
gcc  test/ex05/ft_str_is_uppercase.c evaluate/02/main/main_05.c -Wall -Wextra -Werror -o 05
gcc  test/ex06/ft_str_is_printable.c evaluate/02/main/main_06.c -Wall -Wextra -Werror -o 06
gcc  test/ex07/ft_strupcase.c evaluate/02/main/main_07.c -Wall -Wextra -Werror -o 07
gcc  test/ex08/ft_strlowcase.c evaluate/02/main/main_08.c -Wall -Wextra -Werror -o 08
norminette test/ -R CheckForbiddenSourceHeader
mv 0* evaluate/02/binary_test