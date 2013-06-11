/*************************************************************
* 04/06/2013                                      Javier I H *
* javierih.blogspot.com                                      *
*                                                            *
* Primera prueba de la funcion move como substituta a la     *
* funcion del Motion de R+                                   *
*                                                            *
* La velocidad se recalcula dinamicamente para alcanzar la   *
* posicion pedida en un tiempo especificado                  *
*                                                            *
*************************************************************/

void moveT(int uno, int dos, int tres, int cuatro, int cinco, int seis, int siete, int ocho, int nueve, int diez, int once, int doce, int trece, int catorce, int quince, int dieciseis, int diecisiete, int dieciocho, float tiempo){

//LECTURA DE POSICION 

  int posicion[]={0,uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve,diez,once,doce,trece,catorce,quince,dieciseis,diecisiete,dieciocho};
  //(Si, es muy salvaje, pero es la forma sencilla de pasar los datos desde Excel)

//CALCULO DE VELOCIDADES Y POSICIONAMIENTO

  for(int i=1; i<19; i++){   
    Dxl.writeWord(i, 32,(abs(Dxl.readWord(i, 36)-posicion[i])/tiempo)*0.65);   //Se escribe la velocidad en cada servo 
                                                                               //El factor 0,65 es para que acorden las unidades                                                                       
    Dxl.writeWord(i, 30, posicion[i]);  //Posicionamiento del servo i en posicion[i]
  }  
  delay(tiempo*1000);
}


void setup() {
    Dxl.begin(1); //Inicializacion
}

void loop() {
    moveT(512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,1);
    moveT(512,512,512,512,512,512,512,512,412,612,412,612,412,612,412,612,412,612,1);
}
