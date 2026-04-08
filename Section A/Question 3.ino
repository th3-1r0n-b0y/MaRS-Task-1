// C++ code
//

int Pushpin = 12;
int Ledpin = 5;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  pinMode(Pushpin, INPUT_PULLUP);
  pinMode(Ledpin, OUTPUT);
}

void loop()
{
  Serial.println("Start");
  int Delaytime = random(1000, 5000);
  delay(Delaytime);
  
  unsigned long starttime = millis();
  digitalWrite(Ledpin, HIGH);
  
  while (digitalRead(Pushpin)!=LOW);
  
  unsigned long endtime = millis();
  digitalWrite(Ledpin, LOW);
  
  Serial.println("Reaction Time : ");
  unsigned long Timetaken = endtime- starttime;
  Serial.print(Timetaken);
  Serial.println(" ms");
  while (digitalRead(Pushpin) == LOW);

  Serial.println("\nPress button for retake!\n");
  while (digitalRead(Pushpin)!=LOW);
  
  while (digitalRead(Pushpin) == LOW);
}