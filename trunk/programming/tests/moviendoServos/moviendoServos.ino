/*************************************************************
* 22/04/2013                                      Javier I H *
* javierih.blogspot.com                                      *
*                                                            *
* Primera prueba de funcionamiento de la controladora CM-900 *
* Control de los servos 4 y 6 (brazo derecho) del bioloid    *
*                                                            *
* Puedes ver este programa en acción en:                     *
* http://www.youtube.com/watch?v=jzv-lP9OGC0                 *
*                                                            *
*************************************************************/

void setup() {
    Dxl.begin(1); //Inicializacion
    Dxl.writeWord(6, 32, 60);   //Velocidad del servo 6
    Dxl.writeWord(4, 32, 60);   //Velocidad del servo 4 
}

void loop() {
    

    Dxl.writeWord(6, 30, 400);  //Posicionamiento del servo 6 en 400
    Dxl.writeWord(4, 30, 700);  //Posicionamiento del servo 4 en 700
    delay(1000);              

    Dxl.writeWord(4, 30, 400);  //Posicionamiento del servo 4 en 400
    Dxl.writeWord(6, 30, 700);  //Posicionamiento del servo 6 en 700
    delay(1000);
    

}
