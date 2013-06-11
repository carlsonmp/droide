/*************************************************************
* 25/04/2013                                      Javier I H *
* javierih.blogspot.com                                      *
*                                                            *
* Tercera prueba de funcionamiento de la controladora CM-900 *
*                                                            *
* El programa lee las posiciones de las articulaciones del   *
* brazo izquierdo y las copia en el brazo derecho            *
*                                                            *
* Puedes ver este programa en acción en:                     *
* http://www.youtube.com/watch?v=PCi61UOsWs8                 *
*                                                            *
*************************************************************/

void setup() {
    Dxl.begin(1); //Inicializacion
    SerialUSB.begin();
}

void loop() {
    
    Dxl.writeWord(1,30,1024-Dxl.readWord(2, 36)); //Escribe en el servo 1 el valor que lee del servo 2
    Dxl.writeWord(3,30,1024-Dxl.readWord(4, 36)); //Escribe en el servo 3 el valor que lee del servo 4
    Dxl.writeWord(5,30,1024-Dxl.readWord(6, 36)); //Escribe en el servo 5 el valor que lee del servo 6
   

}
