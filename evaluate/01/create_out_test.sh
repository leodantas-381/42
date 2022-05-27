gcc  c/test/ex00/ft_ft.c evaluate/01/main/main_00.c -Wall -Wextra -Werror -o 00
gcc  c/test/ex01/ft_ultimate_ft.c evaluate/01/main/main_01.c -Wall -Wextra -Werror -o 01
gcc  c/test/ex02/ft_swap.c evaluate/01/main/main_02.c -Wall -Wextra -Werror -o 02
gcc  c/test/ex03/ft_div_mod.c evaluate/01/main/main_03.c -Wall -Wextra -Werror -o 03
gcc  c/test/ex04/ft_ultimate_div_mod.c evaluate/01/main/main_04.c -Wall -Wextra -Werror -o 04
gcc  c/test/ex05/ft_putstr.c evaluate/01/main/main_05.c -Wall -Wextra -Werror -o 05
gcc  c/test/ex06/ft_strlen.c evaluate/01/main/main_06.c -Wall -Wextra -Werror -o 06
norminette c/test/ -R CheckForbiddenSourceHeader
mv 0* evaluate/01/binary_test