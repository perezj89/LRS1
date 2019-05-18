#include "../biblioteca/pr1-ula.h"

void presentar(int);

int main() {
  
  int id = conectarRobot(ROBOT);
  
  presentar(id);

  desconectarRobot(id);

}

void presentar(int id){
  
  hablarRobot(id, "Hola soy L, ERRE, S, 1.");
  esperar(1);

  hablarRobot(id, "puedo hacer dos expresiones faciales");
  esperar(1);

  hablarRobot(id, "felicidad");
  enviarRobot(id, expresarFeliz);
  esperar(2);

  hablarRobot(id, "y tristeza");
  enviarRobot(id, expresarTriste);
  esperar(2);

  hablarRobot(id, "puedo cerrar un ojo");
  enviarRobot(id, cerrarIzquierdo);
  esperar(1);
  enviarRobot(id, abrirIzquierdo);
  esperar(1);

  hablarRobot(id, "y puedo cerrar el otro");
  enviarRobot(id, cerrarDerecho);
  esperar(1);
  enviarRobot(id, abrirDerecho);
  esperar(1);

  hablarRobot(id, "puedo mover el cuello, a la derecha");
  enviarRobot(id, moverDerecha);
  esperar(3);
  enviarRobot(id, moverCentro);
  esperar(1);

  hablarRobot(id, "y tambien a la izquieda");
  enviarRobot(id, moverIzquierda);
  esperar(3);
  enviarRobot(id, moverCentro);
  esperar(1);

  hablarRobot(id, "puedo moverlo hacia arriba");
  enviarRobot(id, moverArriba);
  esperar(3);
  enviarRobot(id, mover_cuelloCe);
  esperar(1);

  hablarRobot(id, "y hacia abajo");
  enviarRobot(id, moverAbajo);
  esperar(3);
  enviarRobot(id, mover_cuelloCe);
  esperar(1);
  
  hablarRobot(id, "hasta pronto");
  esperar(1);

}
