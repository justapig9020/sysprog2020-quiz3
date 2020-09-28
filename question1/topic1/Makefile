all: shift

shift: shift.s
	gcc -o shift shift.s

shift.s: shift.c
	gcc -S -masm=intel -o shift.s shift.c

clean:
	rm -f shift shift.s
