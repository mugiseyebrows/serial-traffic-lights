

#define BLUE_LED 3
#define GREEN_LED 4
#define RED_LED 5

void setup() {
  Serial.begin(9600);
  pinMode(RED_LED,OUTPUT);
  pinMode(BLUE_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT); 
  digitalWrite(RED_LED,LOW);
  digitalWrite(BLUE_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
}

void loop() {
  if (Serial.available()) {
    byte b = Serial.read();
    digitalWrite(RED_LED,LOW);
    digitalWrite(BLUE_LED,LOW);
    digitalWrite(GREEN_LED,LOW);
    if (b == 'b') {
      digitalWrite(BLUE_LED,HIGH);
    } else if (b == 'g') {
      digitalWrite(GREEN_LED,HIGH);
    } else if (b == 'r') {
      digitalWrite(RED_LED,HIGH);
    }
  }
  delay(10);
}
