#define LED 13

char ch;
int entrada;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(entrada, INPUT);
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
entrada = digitalRead(entrada);
  
  if (ch == 'L') || (entrada == 1) {
    digitalWrite(LED, HIGH);
  }
  if (ch == 'D') || (entrada == 0) {
    digitalWrite(LED, LOW);
  }
}
