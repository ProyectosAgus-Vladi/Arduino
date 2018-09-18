#include <EEPROM.h>
#include <Servo.h>




int direccion=0;
byte Val1; 
byte Val2; 

Servo myservo;
int Echo= A4;
int Trig= A5;
const int InputNodes= 3;
const int HiddenNodes= 4;
const int OutputNodes=4;
int i,j;
double Accum;
double  Hidden [HiddenNodes];
double Output [OutputNodes];
float HiddenWeights [3][4]{{direccion, informacion}}
float OutputWeights [4][4]{{direccion+1, valor}}



void Setup() {
Serial.begin(9600);
byte informacion=B11001;
int valor=analogRead(0);
EEPROM.write(direccion, informacion);
EEPROM.write(direccion+1,valor);
}

void loop() {
EEPROM.read(direccion);
EEPROM.read(direccion+1);

Serial.print("En la dirección esta:");
Serial.print(direccion);
Serial.print("Se encuentra");
Serial.print(Val1, DEC);
}

void Stop() {
  digitalWrite (ENA, LOW);
  digitalWrite (ENB, LOW);
  Serial.print ("Parar");
