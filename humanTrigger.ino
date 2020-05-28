int triger1 = A0;
int triger2 = A1;
int triger3 = A2;
int triger4 = A3;
int triger5 = A4;
int triger6 = A5;
int triger7 = A6;

int trigerstatus1 = 0;
int trigerstatus2 = 0;
int trigerstatus3 = 0;
int trigerstatus4 = 0;
int trigerstatus5 = 0;
int trigerstatus6 = 0;
int trigerstatus7 = 0;

int umbralbajo = 600;
int umbralalto = 200;

int salida1 = 13;
int salida2 = 12;
int salida3 = 11;
int salida4 = 10;
int salida5 = 9;
int salida6 = 8;
int salida7 = 7;

void setup() {

  Serial.begin(57600);

  pinMode(salida1, OUTPUT);
  pinMode(salida2, OUTPUT);
  pinMode(salida3, OUTPUT);
  pinMode(salida4, OUTPUT);
  pinMode(salida5, OUTPUT);
  pinMode(salida6, OUTPUT);
  pinMode(salida7, OUTPUT);


  digitalWrite(salida1, LOW);
  digitalWrite(salida2, LOW);
  digitalWrite(salida3, LOW);
  digitalWrite(salida4, LOW);
  digitalWrite(salida5, LOW);
  digitalWrite(salida6, LOW);
  digitalWrite(salida7, LOW);


}

void loop() {

  //triger 1

  trigerstatus1 = analogRead(triger1);

  if (trigerstatus1 < 500)
  {
    digitalWrite (salida1, LOW);
    Serial.println(trigerstatus1);
    delay(100);
    //        Serial.print ("t");
    //        Serial.write (1);
  }
  else
  {
    digitalWrite(salida1, HIGH);
    // Serial.print("no:");
    Serial.println( trigerstatus1);
  }
  

  // triger 2

  trigerstatus2 = analogRead(triger2);

  if (trigerstatus2  > umbral)
  {
    digitalWrite(salida2, HIGH);
    //        Serial.print ("t");
    //        Serial.write (2);
  }
  else
  {
    digitalWrite(salida2, LOW);
    //Serial.print("no");

  }

  //triger 3

  trigerstatus3 = analogRead(triger3);

  if (trigerstatus3  > umbral)
  {

    digitalWrite(salida3, HIGH);
    //        Serial.print ("t");
    //       Serial.write (3);
  }
  else
  {
    digitalWrite(salida3, LOW);

    //  Serial.print("no");

  }


  //triger 4

  trigerstatus4 = analogRead(triger4);
  //Serial.println (trigerstatus4);
  if (trigerstatus4  > umbral)
  {
    digitalWrite(salida4, HIGH);

    //       Serial.print ("t");
    //        Serial.write (4);
  }
  else
  {
    digitalWrite(salida4, LOW);
    //   Serial.print("no");

  }

  //triger 5

  trigerstatus5 = analogRead(triger5);

  if (trigerstatus5  > umbral)
  {
    digitalWrite(salida5, HIGH);
    //       Serial.print ("t");
    //        Serial.write (5);
  }
  else
  {
    digitalWrite(salida5, LOW);
    //   Serial.print("no");

  }

  //triger 6

  trigerstatus6 = analogRead(triger6);

  if (trigerstatus6  > umbral)
  {

    digitalWrite(salida6, HIGH);
    //        Serial.print ("t");
    //        Serial.write (6);
  }
  else
  {
    digitalWrite(salida6, LOW);

    //Serial.print("no");

  }

  //triger 7

  trigerstatus7 = analogRead(triger7);

  if (trigerstatus7  > umbral)
  {
    digitalWrite(salida7, HIGH);
    //        Serial.print ("t");
    //        Serial.write (7);
  }
  else
  {
    digitalWrite(salida7, LOW);
    //  Serial.print("no");

  }

  delay (50);

}
