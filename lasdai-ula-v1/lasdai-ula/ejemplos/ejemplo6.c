#include "../biblioteca/pr1-ula.h"

int main(){

  int id = conectarRobot(ROBOT);
  
  narrarRobot(id, vozSusurro, "Hola puedo susurrar");
  esperarMilisegundos(500);
  narrarRobot(id, vozTriste, "No me gusta estar triste");
  esperarMilisegundos(500);
  narrarRobot(id, vozDespacio, "puedo hablar despacio para que me entiendas");
  esperarMilisegundos(500);
  narrarRobot(id, vozFuerte, "o, hablar duro para que me escuches");
  esperarMilisegundos(500);
  narrarRobot(id, vozIngles,"Hi, in can speak in english");
  esperarMilisegundos(500);
  narrarRobot(id, vozFrances,"Bonjour, je parle français");

  desconectarRobot(id);

}
