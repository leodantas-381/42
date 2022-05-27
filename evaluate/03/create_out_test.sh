gcc  test/ex00/ft_strcmp.c evaluate/03/main/main_00.c -Wall -Wextra -Werror -o 00
gcc  test/ex01/ft_strncmp.c evaluate/03/main/main_01.c -Wall -Wextra -Werror -o 01
gcc  test/ex02/ft_strcat.c evaluate/03/main/main_02.c -Wall -Wextra -Werror -o 02
gcc  test/ex03/ft_strncat.c evaluate/03/main/main_03.c -Wall -Wextra -Werror -o 03
norminette test -R CheckForbiddenSourceHeader
mv 0* evaluate/03/binary_test