#include "../biblioteca/pr1-ula.h"

void dibujarRostro(int);
void mostrarRostro(int);
void* rostro(void *);

int expresiones[3][5][8]={{{1,1,0,0,0,0,1,1},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,1,1,1,1,1,1,0},
                           {0,0,0,0,0,0,0,0}},

                          {{1,1,0,0,0,0,1,1},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,1,1,0,0,1,1,0},
                           {0,0,0,1,1,0,0,0}},

                          {{1,1,0,0,0,0,1,1},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0},
                           {0,0,0,1,1,0,0,0},
                           {0,1,1,0,0,1,1,0}}};

int estado=1;

int main() {

  mostrarRostro(0);

  info inf = iniciarRobot();
 
  if (iniciarRostro(&rostro) == 0){
    do{    
      estado = recibir(inf.t);
    }while(estado);
  }

  finalizarRobot(inf);
}	

void dibujarRostro(int n){
  int i,j;
  for(i=0;i<5;i++){
    for(j=0;j<8;j++){
      if (expresiones[n][i][j]==1)
        imprimirColor("AZUL","AZUL"," ");
      else
        espaciar(1);
    }
    saltar(1);
  }
}

void mostrarRostro(int n){
  limpiar();
  dibujarRostro(n);
  esperarMilisegundos(200);
}

void* rostro(void *arg){
  do{
    switch(estado){
      case 44: //Normal
        mostrarRostro(0);
        break;
      case 55: //Feliz
        mostrarRostro(1);
        break;
      case 56: //Triste
        mostrarRostro(2);
        break;
      case 9: //Hablar
        mostrarRostro(0);
        mostrarRostro(1);
        break;
    }
  }while(1);
}
