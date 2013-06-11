/*************************************************************
* 11/06/2013                                      Javier I H *
* javierih.blogspot.com                                      *
*                                                            *
* Segunda funcion de movimiento como substituta a la funcion *
* de R+ Motion                                               *
*                                                            *
* Tanto la velocidad como el tiempo son parametros de la     *
* funcion.                                                   *
* La velocidad sera comun para las 18 articulaciones         *
*                                                            *
*************************************************************/

void moveV(int uno, int dos, int tres, int cuatro, int cinco, int seis, int siete, int ocho, int nueve, int diez, int once, int doce, int trece, int catorce, int quince, int dieciseis, int diecisiete, int dieciocho, float tiempo, int velocidad){

//LECTURA DE POSICION 

  int posicion[]={0,uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,once,doce,trece,catorce,quince,dieciseis,diecisiete,dieciocho};
  //(Si, es muy salvaje, pero es la forma sencilla de pasar los datos desde Excel)

//POSICIONAMIENTO

  for(int i=1; i<19; i++){   
    Dxl.writeWord(i, 32,velocidad);   //Velocidad comun                                                        
    Dxl.writeWord(i, 30, posicion[i]);  //Posicionamiento del servo i en posicion[i]
  }  
  delay(tiempo*1000);
}



void setup() {
    Dxl.begin(1); //Inicializacion
}

void loop() {
    moveV(512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,1,200);
    moveV(512,512,512,512,512,512,512,512,412,612,412,612,412,612,412,612,412,612,1,200);
}
