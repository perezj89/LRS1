#!/bin/bash
#LaSDAI

ruta="$(pwd)/lasdai-ula/simuladores/LRS1-v1"

if [ $1 -eq 1 ]; 
then
	dir="$ruta/moverArriba.PNG"
elif [ $1 -eq 2 ]; 
then
	dir="$ruta/moverAbajo.PNG"
elif [ $1 -eq 3 ]; 
then
	dir="$ruta/moverDerecha.PNG"
elif [ $1 -eq 4 ]; 
then
	dir="$ruta/moverIzquierda.PNG"
elif [ $1 -eq 5 ]; 
then
	dir="$ruta/moverNormal.PNG"
elif [ $1 -eq -1 ]; 
then
	dir="$ruta/boton1.PNG"
elif [ $1 -eq -2 ]; 
then
	dir="$ruta/boton2.PNG"
elif [ $1 -eq -3 ]; 
then
	dir="$ruta/boton3.PNG"
elif [ $1 -eq 0 ]; 
then
	dir="$ruta/desconectar.jpeg"
else
	echo "Default"
fi

count=`ls $dir |wc -l`
rand=`awk 'BEGIN{srand();print rand()}'`
rand=`echo $rand \* $count + 1 | bc | awk -F. '{printf $1}'` 
#bg=`ls $dir|head -n $rand |tail -n 1 |sed "s:^:$dir/:"`
sed -i "s#BackgroundImageFile=.*#BackgroundImageFile=$dir#" ~/.config/xfce4/terminal/terminalrc
