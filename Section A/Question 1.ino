// C++ code
//
const int ledPin1 = 9,ledPin2 = 10,ledPin3 = 11;

unsigned long ptime1 = 0, ptime2 = 0, ptime3 = 0;
const long interval1 = 500,interval2 = 1000,interval3 = 1500;

bool ledState1 = LOW,ledState2 = LOW,ledState3 = LOW;


void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  unsigned long ctime = millis();
  
  if (ctime - ptime1 >= interval1) {
    ptime1 = ctime;
    digitalWrite(ledPin1, ledState1= !ledState1);
  }
  if (ctime - ptime2 >= interval2) {
    ptime2 = ctime;
    digitalWrite(ledPin2, ledState2= !ledState2);
  }
  if (ctime - ptime3 >= interval3) {
    ptime3 = ctime;
    digitalWrite(ledPin3, ledState3= !ledState3);
  }
}