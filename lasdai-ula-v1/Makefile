#LaSDAI
biblioteca=	32bits
dir= lasdai-ula/biblioteca/$(biblioteca)/pr1-ula.o lasdai-ula/ejemplos/
dir2 =lasdai-ula/biblioteca/$(biblioteca)/

all: ejemplos simuladores

ejemplos: ejemplo1 ejemplo2 ejemplo3 ejemplo4 ejemplo5 ejemplo6 ejemplo7

simuladores: LRS1 LRS1-v1

ejemplo1: 
	gcc $(dir)ejemplo1.c -o ejemplo1.exe -lpthread

ejemplo2: 
	gcc $(dir)ejemplo2.c -o ejemplo2.exe -lpthread

ejemplo3: 
	gcc $(dir)ejemplo3.c -o ejemplo3.exe -lpthread

ejemplo4: 
	gcc $(dir)ejemplo4.c -o ejemplo4.exe -lpthread

ejemplo5: 
	gcc $(dir)ejemplo5.c -o ejemplo5.exe -lpthread

ejemplo6: 
	gcc $(dir)ejemplo6.c -o ejemplo6.exe -lpthread

ejemplo7: 
	gcc $(dir)ejemplo7.c -o ejemplo7.exe -lpthread

LRS1:
	gcc $(dir2)pr1-ula.o lasdai-ula/simuladores/LRS1.c -o LRS1.exe -lpthread

LRS1-v1:
	gcc $(dir2)pr1-ula.o lasdai-ula/simuladores/LRS1-v1/LRS1-v1.c -o LRS1-v1.exe -lpthread

instalar:
	gcc $(dir2)pr1-ula.o lasdai-ula/configurar/$(biblioteca)/instalar.o -o instalar.exe -lpthread

clear:
	rm *.exe