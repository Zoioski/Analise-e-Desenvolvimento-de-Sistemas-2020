#define E7 2
#define E6 3
#define E5 4

#define S1 5
#define S2 6
#define S3 7

int botao = 0;

void setup() {
  pinMode(E7, INPUT);
  pinMode(E6, INPUT);
  pinMode(E5, INPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  Serial.begin(9600);
  while(!Serial){
    ;
  }
  Serial.println("Setup Complete");
}
char tc;
char le_teclado(){
  tc=0;
  if(Serial.available()>0){
    tc = Serial.read();
    return(tc);
  }
}
int le_botao(char tc){
 digitalWrite(S1, HIGH);
 if(digitalRead(E7)== HIGH){
   digitalWrite(S1, LOW);
   return(1);    
 }
 if(digitalRead(E6)== HIGH){
   digitalWrite(S1, LOW);
   return(4);    
 }
 if(digitalRead(E5)== HIGH){
   digitalWrite(S1, LOW);
   return(7);    
 }
 digitalWrite(S1, LOW);
 digitalWrite(S2, HIGH);
 if(digitalRead(E7)== HIGH){
   digitalWrite(S2, LOW);
   return(2);    
 }
 if(digitalRead(E6)== HIGH){
   digitalWrite(S2, LOW);
   return(5);    
 }
 if(digitalRead(E5)== HIGH){
   digitalWrite(S2, LOW);
   return(8);    
 }
 digitalWrite(S2, LOW);
 digitalWrite(S3, HIGH);
 if(digitalRead(E7)== HIGH){
   digitalWrite(S3, LOW);
   return(3);    
 }
 if(digitalRead(E6)== HIGH){
   digitalWrite(S3, LOW);
   return(6);    
 }
 if(digitalRead(E5)== HIGH){
   digitalWrite(S3, LOW);
   return(9);    
 }
 digitalWrite(S3, LOW);
}

int jogo[3][3];

void zerar(){
  for(int x=1;x<4;x++){
    for(int y=1;y<4;y++){
      jogo[x][y]=0;
    }
  }
  Serial.println("Tabuleiro Zerado");
}

int verifica(le_botao){
  if(lebotao==1)&&(jogo[1][1]==0){  return(1);  }else{
  if(lebotao==2)&&(jogo[2][1]==0){  return(1);  }else{
  if(lebotao==3)&&(jogo[3][1]==0){  return(1);  }else{
  if(lebotao==4)&&(jogo[2][1]==0){  return(1);  }else{
  if(lebotao==5)&&(jogo[2][2]==0){  return(1);  }else{
  if(lebotao==6)&&(jogo[2][3]==0){  return(1);  }else{
  if(lebotao==7)&&(jogo[3][1]==0){  return(1);  }else{
  if(lebotao==8)&&(jogo[3][2]==0){  return(1);  }else{
  if(lebotao==9)&&(jogo[3][3]==0){  return(1);  }else{
    Serial.println("Jogada Inválida");
  }}}}}}}}}
}

int win(){
  if(jogo[1][1]==1)&&(jogo[2][1]==1)&&(jogo[3][1]==1){  return(10); }else{
  if(jogo[2][1]==1)&&(jogo[2][2]==1)&&(jogo[2][3]==1){  return(20); }else{
  if(jogo[3][1]==1)&&(jogo[3][2]==1)&&(jogo[3][3]==1){  return(30); }else{

void loop(){

}


