#!/bin/bash
#LaSDAI


count=`ls $dir |wc -l`
rand=`awk 'BEGIN{srand();print rand()}'`
rand=`echo $rand \* $count + 1 | bc | awk -F. '{printf $1}'` 
#bg=`ls $dir|head -n $rand |tail -n 1 |sed "s:^:$dir/:"`

if [ $1 -eq 0 ]; 
then
	sed -i "s#FontName=.*#FontName=Monospace 12#" ~/.config/xfce4/terminal/terminalrc
elif [ $1 -eq 1 ]; 
then
	sed -i "s#FontName=.*#FontName=Monospace 14#" ~/.config/xfce4/terminal/terminalrc
else
	echo "Default"
fi
	sed -i "s#BackgroundMode=.*#BackgroundMode=TERMINAL_BACKGROUND_IMAGE#" ~/.config/xfce4/terminal/terminalrc
	sed -i "s#BackgroundDarkness=.*#BackgroundDarkness=0,000000#" ~/.config/xfce4/terminal/terminalrc
	sed -i "s#BackgroundImageStyle=.*#BackgroundImageStyle=TERMINAL_BACKGROUND_STYLE_STRETCHED#" ~/.config/xfce4/terminal/terminalrc
	sed -i "s#MiscDefaultGeometry=.*#MiscDefaultGeometry=80x24#" ~/.config/xfce4/terminal/terminalrc
	