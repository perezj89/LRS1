#include "../biblioteca/pr1-ula.h"

int verificar(int, int, int, int);
void intercambiar(int *, int *);

int main(){
	
	int id = conectarRobot(ROBOT);

	int resultado = 0,		
		expresion = 0,
		pregunta = 10,	
		auxiliar = 0,
		puntos = 0,	
		vidas = 2,
		signo = 0,
		num2 = 0,	
		num = 0;	

  	char cad[20];	
  	char cad2[20];						
    
    while(pregunta > 0 && vidas > 0){

		signo = generarAleatorio(0,2);
		auxiliar = generarAleatorio(0,3);

		if(auxiliar == 0){
			num = generarAleatorio(1,9);
			num2 = num - 1;

		}else if(auxiliar == 1){
			num = generarAleatorio(2,8); 
			num2 = num - 2;

		}else{
			num = generarAleatorio(3,7); 
			num2 = num - 3;
		}

		if(signo != 1)
			intercambiar(&num, &num2);

		if (num == 0 || num2 == 0)
			num++, num2++;
		
    int2string(num,cad);
    int2string(num2,cad2);
	 	
	 	if(signo == 0){
			resultado = (-num + num2);
			
			hablarRobot(id, "menos");
			hablarRobot(id, cad);
			hablarRobot(id, "más");
			hablarRobot(id, cad2);

		}else if(signo == 1){
			resultado = (num - num2);			
			
			hablarRobot(id, cad);
			hablarRobot(id, "menos");
			hablarRobot(id, cad2);
		}

	    esperarMilisegundos(500);
	    int opcion = recibirRobot(id);
		esperarMilisegundos(500);

		int chequear = verificar(opcion,resultado,expresion, id);
   
	   if(chequear == 1){
	      puntos = 10 + puntos;

	      if(puntos == 50){
	     	hablarRobot(id, "¡Muy bien!");
	     	esperar(1);
	      }
	      if(puntos == 100){
	      	hablarRobot(id, "¡Excelente!");
		  	reproducirAudioInterno("ganador");
		  	esperar(5);
	      }

	   }else{ 
	   		vidas--;

		   	if(vidas == 0){
		   		hablarRobot(id, "perdiste");
			  	reproducirAudioInterno("perdedor");
			  	esperar(4);
		   	} 
	   }
		pregunta--;

	}
	
	hablarRobot(id, "El juego ha finalizado, obtuviste");
	int2string(puntos,cad);	
	hablarRobot(id, cad);
	hablarRobot(id, "puntos");
	esperar(1);

  desconectarRobot(id);
}

int verificar(int opcion, int resultado, int expresion, int id){

	if(opcion == resultado){
		enviarRobot(id, expresarFeliz);
      	expresion = 1;
  	}else{
		enviarRobot(id, expresarTriste);
 		expresion = 0;
	}
	esperar(2);
    return expresion;
}

void intercambiar(int *i, int *j){
   int t = *i;
   *i = *j;
   *j = t;
}
