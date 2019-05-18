#include "../../biblioteca/pr1-ula.h"
#include <string.h>
#include <stdlib.h>

void dibujarRostro(int);
void mostrarRostro(int);
void* rostro(void *);
void* botones(void *);
char* direccion(char* , char*);

char * comando="lasdai-ula/simuladores/LRS1-v1/./LRS1.sh";
char * comando2="lasdai-ula/simuladores/LRS1-v1/./Fuente.sh";

int expresiones[7][5][8]={{{0,0,0,0,0,0,0,0},
                           {0,2,0,0,0,0,2,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,1,1,1,1,0,0},
                           {0,0,0,0,0,0,0,0}},

                          {{0,0,0,0,0,0,0,0},
                           {0,2,0,0,0,0,2,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,1,3,3,1,0,0},
                           {0,0,0,0,0,0,0,0}},

                          {{0,0,0,0,0,0,0,0},
                           {0,2,0,0,0,0,2,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,3,1,1,3,0,0},
                           {0,0,0,0,0,0,0,0}},

                          {{0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,2,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,1,1,1,1,0,0},
                           {0,0,0,0,0,0,0,0}},

                          {{0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,1,1,1,1,0,0},
                           {0,0,0,0,0,0,0,0}},

                          {{0,0,0,0,0,0,0,0},
                           {0,2,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,1,1,1,1,0,0},
                           {0,0,0,0,0,0,0,0}},                          

                          {{0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0}}};

int estado = 1;
info infor;

int main() {

  ejecutar(direccion("chmod +x ",comando));
  ejecutar(direccion("chmod +x ",comando2));

  ejecutar(direccion(comando2," 1"));
  ejecutar(direccion(comando," 5"));
  mostrarRostro(6);
  
  iniciarRostro(&botones);

  infor = iniciarRobot();

  if (iniciarRostro(&rostro) == 0){

    do{    
      estado = recibir(infor.t);
    }while(estado!=58);
  }

  finalizarRobot(infor);
  esperar(2);
  ejecutar(direccion(comando," 0"));
  ejecutar("reset");
  esperar(1);
  ejecutar(direccion(comando2," 0"));
  
}	

void dibujarRostro(int n){
  int i,j;
  saltar(5);
  for(i=0;i<5;i++){
     espaciar(36);
     
    for(j=0;j<8;j++){
      if (expresiones[n][i][j]==1)
        imprimirColor("CIAN","NEGRO","▀");

      else if (expresiones[n][i][j]==2){
        imprimirColor("CIAN","NORMAL","▀");

      }else if (expresiones[n][i][j]==3){
        imprimirColor("CIAN","NORMAL","■");

      }else if (expresiones[n][i][j]==4){
        imprimirColor("NORMAL","NORMAL","\n");

      }
      else
        imprimir(" ");
        
    }
    imprimirColor("NORMAL","NORMAL","\n");
    
  }
}

void mostrarRostro(int n){
  limpiar();
  dibujarRostro(n);
  esperarMilisegundos(200);
}

char* direccion(char * comando, char* numero){
	char * enviarRuta;
	enviarRuta = malloc(sizeof(char)*100);
	strcpy(enviarRuta, comando);
	strcat(enviarRuta, numero);
  return enviarRuta;
}

void* rostro(void *arg){
  do{

    switch(estado){

      case 1: //Default
        mostrarRostro(0);
        break;
      case 4: //expresarNormal
        mostrarRostro(0);
        break;
      case 5: //cerrarIzquierdo
        mostrarRostro(5);
        break;
      case 6: //abrirIzquiedo
        mostrarRostro(0);
        break;
      case 7: //cerrarDerecho
        mostrarRostro(3);
        break;
      case 8: //abrirderecho
        mostrarRostro(0);
        break;
       case 9: //comenzarHabla
        mostrarRostro(0);
        mostrarRostro(1);
        break;
      case 44: //terminarHabla
        mostrarRostro(0);
        break;
      case 55: //expresarFeliz
        mostrarRostro(1);
        break;
      case 56: //expresarTriste
        mostrarRostro(2);
        break;
      case 59: //cerrarOjos
        mostrarRostro(4);
      break;
      case 45:{ //moverIzquierda
     	  
        ejecutar(direccion(comando," 4"));
        esperarMilisegundos(350);
        mostrarRostro(6); 
        break;
      }
      case 46:{ //moverCentro
      	
        ejecutar(direccion(comando," 5"));
        esperarMilisegundos(570);
        mostrarRostro(0);
        break;
      }   
      case 47:{ //moverDerecha
      	
        ejecutar(direccion(comando," 3"));
        esperarMilisegundos(350);
        mostrarRostro(6); 
        break;
      }   
      case 48:{ //moverArriba
       
        ejecutar(direccion(comando," 1"));
        esperarMilisegundos(350);
        mostrarRostro(6);
        break;
      }
      case 49:{ //moverCuelloCe
      	
        ejecutar(direccion(comando," 5"));
        esperarMilisegundos(580);
        mostrarRostro(0);
        break;
      }
      case 54:{ //moverAbajo
      	
        ejecutar(direccion(comando," 2"));
        esperarMilisegundos(350);
        mostrarRostro(6);        
        break;
      }

    }

  }while(estado);
}

void* botones(void *arg){
  char boton;
  
  do{  
    boton = leerTecla();
    if(boton == 49){
      ejecutar(direccion(comando," -1"));
      enviar(infor.t,1);

    }else if (boton == 50){
      ejecutar(direccion(comando," -2"));
      enviar(infor.t,2);

    }else if (boton == 51){
      ejecutar(direccion(comando," -3"));
      enviar(infor.t,3);

    }
  }while(boton != 48); //boton != 48, 1
}
