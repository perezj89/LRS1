#define LRS1 2

typedef int Entero;
typedef char Caracter;

typedef struct{
  int s;
  int t;
}info;

typedef struct{
  char d[99];
}data;

typedef enum{
  normal=4,
  cerrar_ojoI=5,
  abrir_ojoI=6,
  cerrar_ojoD=7,
  abrir_ojoD=8,
  comenzar_habla=9,
  parar_habla=44,
  mover_cuelloI=45,
  mover_cuelloC=46,
  mover_cuelloD=47,
  mover_cuelloAr=48,
  mover_cuelloCe=49,
  mover_cuelloAb=54,
  feliz=55,
  triste=56,
  habilitar_entradas=57,
  deshabilitar_entradas=58,
}comandos;

typedef struct{
  int *id;
  comandos *comando;
}inf;

void imprimir(char *);
void imprimirColor(char *, char *, char *);
void imprimirEntero(Entero);
void imprimirCaracter(Caracter);
void reproducirAudio(char *);
void ejecutar(char *);
void esperar(Entero);
void esperarMilisegundos(Entero);
void saltar(Entero);
void espaciar(Entero);
void limpiar();
int leerEntero();

Entero generarAleatorio(Entero, Entero);
Caracter cargarCaracteres();
Caracter obtenerCaracter();
Caracter siguienteCaracter();

info iniciarRobot();
void finalizarRobot(info);
int conectarRobot(int); //1: Digital, 2: Fisico
void desconectarRobot(int);
void enviarRobot(int, int);
void enviar(int,int);
int recibir(int);
int iniciarRostro(void *(*)());
void hablar(char *);
void hablarRobot(int, char *);
void narrar(char *, char *);
void asignarCadena(char *, char *);
int iguales(char *, char *);
int recibirRobot(int);

int comunicarRobot(int*,comandos*);
