// C++ code
//
#include <Keypad.h>
#include <Servo.h>

Servo myservo;

int attempts = 3, correct = 0;
char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowpins[4] = {9, 8, 7, 6};
byte colpins[4] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowpins, colpins, 4, 4);

String password = "1234";
String input = "";

void setup() {
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  myservo.attach(10);
  myservo.write(0);
  Serial.println("Enter Password:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print(key);

    if (key == '*') {
      input = "";
      Serial.println("\nCleared");
    }
    else if (key == '#') {
      if (input == password) {
        Serial.println("\nAccess Granted");
        myservo.write(90); 
        attempts = 3;
        correct = 1;
        //delay(3000);
        //myservo.write(0); 
      } else {
        attempts-=1;
        digitalWrite(12, HIGH); 
        delay(1000);                   
        digitalWrite(12, LOW); 
        Serial.println("\nWrong Password.\nNo of attempts left:");
        Serial.print(attempts);
        Serial.println("");
        if(attempts){
          Serial.println("Enter Password:");
        }
      }
      input = "";
    }
    else {
      input += key;
    }
  }
  if(attempts==0){
    Serial.println("Try again after 10 sec");
    attempts = 3;
    delay(10000);
    Serial.println("Enter Password:");
  }
  else if(correct ==1){
    Serial.println("Type 1 to reset");
    char key1 = keypad.getKey();
    while(key1!='1'){
      key1 = keypad.getKey();
      if(key1){
        Serial.print(key1);
      }
    }
    myservo.write(0);
    correct = 0;
    Serial.println("\nLocked");
    Serial.println("Enter Password:");
  }
}