const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;

const int pot = 0;

int var = 0;
  
 void setup()
 { 
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   
Serial.begin(9600);
 }
 
 void loop()
 {
  var = analogRead(pot);
  Serial.println(var);
  delay(200);
 }
