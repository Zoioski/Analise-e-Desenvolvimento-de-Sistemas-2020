#define LED 13

char ch;

void setup() {
  pinMode(LED, OUTPUT)
  Serial.begin(9600);
  while(!Serial){
    ;
  }
  Serial.println("Setup Complete");
  Serial.println("Digite L para ligar o LED");
}

void loop() {
  ch = 0;
  if(Serial.available() > 0){
    ch = Serial.read();
  }
  if (ch == 'L' || ch == 'l') {
    digitalWrite(LED, HIGH);
  }
  if (ch == 'D') {
    digitalWrite(LED, LOW);
  }
}
