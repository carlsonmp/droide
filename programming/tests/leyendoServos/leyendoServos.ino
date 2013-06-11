/*************************************************************
* 25/04/2013                         Javier Isabel Hernandez *
* Segunda prueba de funcionamiento de la controladora CM-900 *
*                                                            *
* Lectura de la posicion del servo 6                         *
*                                                            *
*************************************************************/

void setup() {
    Dxl.begin(1); //Inicializacion
    SerialUSB.begin();
}

void loop() {
    long datos=Dxl.readWord(6, 36);  //Leemos la posicion del servo 6
    delay(2000);
    SerialUSB.print("\nDatos:");  
    SerialUSB.print(datos);  
}
