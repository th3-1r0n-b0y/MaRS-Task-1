// C++ code
//
int potentio1 = A5;
int red = 11;
int green = 9;
int blue = 10;
int ledPin = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potentioVal = analogRead(potentio1);

  //int redValue = map(potentioVal, 0, 1023, 0, 255);
  //int greenValue = map(potentioVal, 0,1023, 255,0);
  //int blueValue = map(potentioVal, 0, 1023, 128, 255);
  if (potentioVal<171){
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  }
  else if (potentioVal<342){
  analogWrite(red, 101);
  analogWrite(green, 67);
  analogWrite(blue, 33);
  }
  else if (potentioVal<513){
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  }
  else if (potentioVal<684){
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  }
  else if (potentioVal<855){
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  }
  else if (potentioVal<=1023){
  analogWrite(red, 127);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  }
  
  int delayTime = map(potentioVal, 0, 1023, 100, 1000);

  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);
}