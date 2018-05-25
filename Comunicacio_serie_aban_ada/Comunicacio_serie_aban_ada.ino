/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;

//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
{
Serial.begin(9600);        // initialize serial
Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

}
//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:
while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();
    
    r2 = Serial.parseInt();
    
if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    }
  rSerie = r1 + r2;
  Serial.println(rSerie);
  
  rParalel = r1 * r2 / (r1 + r2);
  Serial.println(rParalel);
  }
}

//***************************FUNCIONS****************************
