#LaSDAI

biblioteca = 32bits
dir = lasdai-ula/biblioteca/$(biblioteca)/pr1-ula.o lasdai-ula/ejemplos/
dir2 = lasdai-ula/biblioteca/$(biblioteca)/
robots = LRS1 LRS1-v1

ejecutables = ejemplo1 ejemplo2 ejemplo3 ejemplo4 ejemplo5 ejemplo6 ejemplo7

all: ejemplos simuladores

ejemplos: $(ejecutables)

simuladores: $(robots)

ejemplo1: 
	gcc $(dir)ejemplo1.c -o ejemplo1 -lpthread

ejemplo2: 
	gcc $(dir)ejemplo2.c -o ejemplo2 -lpthread

ejemplo3: 
	gcc $(dir)ejemplo3.c -o ejemplo3 -lpthread

ejemplo4: 
	gcc $(dir)ejemplo4.c -o ejemplo4 -lpthread

ejemplo5: 
	gcc $(dir)ejemplo5.c -o ejemplo5 -lpthread

ejemplo6: 
	gcc $(dir)ejemplo6.c -o ejemplo6 -lpthread

ejemplo7: 
	gcc $(dir)ejemplo7.c -o ejemplo7 -lpthread

LRS1:
	gcc $(dir2)pr1-ula.o lasdai-ula/simuladores/LRS1.c -o LRS1 -lpthread

LRS1-v1:
	gcc $(dir2)pr1-ula.o lasdai-ula/simuladores/LRS1-v1/LRS1-v1.c -o LRS1-v1 -lpthread

instalar:
	gcc lasdai-ula/instalador/$(biblioteca)/instalar.o -o instalar -lpthread

clear:
	rm -f $(ejecutables) $(robots) instalar