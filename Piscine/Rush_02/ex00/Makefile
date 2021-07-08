rush-02.out: main.o ft_itoa.o ft_atoi.o ft_strstr.o ft_value.o ft_read.o ft_three.o ft_write.o cut.o ft_unit.o dict.o input.o check.o ft_strlen.o ft_strcmp.o
	gcc -o rush-02.out main.o ft_itoa.o ft_atoi.o ft_strstr.o ft_value.o ft_read.o ft_three.o ft_write.o cut.o ft_unit.o dict.o input.o check.o ft_strlen.o ft_strcmp.o

main.o: main.h main.c
	gcc -c -o main.o main.c

ft_itoa.o: main.h ft_itoa.c
	gcc -c -o ft_itoa.o ft_itoa.c

ft_atoi.o: main.h ft_atoi.c
	gcc -c -o ft_atoi.o ft_atoi.c

ft_strstr.o: main.h ft_strstr.c
	gcc -c -o ft_strstr.o ft_strstr.c

ft_strcmp.o: main.h ft_strcmp.c
	gcc -c -o ft_strcmp.o ft_strcmp.c

ft_value.o: main.h ft_value.c
	gcc -c -o ft_value.o ft_value.c

ft_read.o: main.h ft_read.c
	gcc -c -o ft_read.o ft_read.c

ft_three.o: main.h ft_three.c
	gcc -c -o ft_three.o ft_three.c

ft_write.o: main.h ft_write.c
	gcc -c -o ft_write.o ft_write.c

cut.o: main.h cut.c
	gcc -c -o cut.o cut.c

ft_unit.o: main.h ft_unit.c
	gcc -c -o ft_unit.o ft_unit.c

input.o: main.h input.c
	gcc -c -o input.o input.c

dict.o: main.h dict.c
	gcc -c -o dict.o dict.c

check.o: main.h check.c
	gcc -c -o check.o check.c

ft_strlen.o: main.h ft_strlen.c
	gcc -c -o ft_strlen.o ft_strlen.c

fclean:
	rm -f *.o
	rm -f rush-02.out
