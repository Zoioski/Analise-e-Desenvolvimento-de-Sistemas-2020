/*----------------------------------------------------------------------------------------------------------------*
                          Prática de logica de programação com o auxilio do arduino
*                                                                                                                 *
  Programação da lógica do jogo da velha utilizando as 6 pinos de entrada e 2 pinos de saidas do arduino
*                                                                                                                 *
  Estrutura fisica do sistema
     pinos 2,3,4 -> configurar como entrada
     pinos 5,6,7 -> configurar como saída
*                                                                                                                 *
  Tabuleiro
*                                                                                                                 *
      E7 -> 1   2   3
      E6 -> 4   5   6
      E5 -> 7   8   9
            |   |   |
           S2   S3  S4
  Autor:
  -----------------------------------------------------------------------------------------------------------------*/

#define S2 2
#define S3 3
#define S4 4
#define E5 5
#define E6 6
#define E7 7

char ch;
int Jogo[3][3] ;
int player1 = -1;
int player2 = 1;
int vez;
int pos;
int jogada;
int jVez;
int aaa;

void setup()
{
  int x, y;
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);

  pinMode(E5, INPUT);
  pinMode(E6, INPUT);
  pinMode(E7, INPUT);

  //-----------------taxa de comunicação-------------------
  Serial.begin (9600);
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Comunicacao concluida");
  Serial.println("------------------------ JOGO DA VELHA  V 1.0 ---------------------");

  //----------------inicia tabuleiro-----------------------

  Serial.println("---Montando Tabuleiro ---");
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
      Jogo[x][y] = 0;
    }
  }
  Serial.println("Tabuleiro montado!!");
  Serial.println("");
  jVez = player1;
  imprime_tabuleiro(Jogo);
}

//----------------le botao ---------------------------------
int leBotao()
{
  digitalWrite(S2, HIGH);
  if (digitalRead(E7) == 1) {
    digitalWrite(S2, LOW);
    delay(500);
    return (1);
  }
  else if (digitalRead(E6) == 1) {
    digitalWrite(S2, LOW);
    delay(500);
    return (4);
  }
  else if (digitalRead(E5) == 1) {
    digitalWrite(S2, LOW);
    delay(500);
    return (7);
  }
    digitalWrite(S2, LOW);
    //-------------------------------------------------------
    digitalWrite(S3, HIGH);
    if (digitalRead(E7) == 1) {
      digitalWrite(S3, LOW);
      delay(500);
      return (2);
    }
    else if (digitalRead(E6) == 1) {
      digitalWrite(S3, LOW);
      delay(500);
      return (5);
    }
    else if (digitalRead(E5) == 1) {
      digitalWrite(S3, LOW);
      delay(500);
      return (8);
    }
    
      digitalWrite(S3, LOW);
      //-------------------------------------------------------
      digitalWrite(S4, HIGH);
      if (digitalRead(E7) == 1) {
        digitalWrite(S4, LOW);
        delay(500); return (3);
      }
      else if (digitalRead(E6) == 1) {
        digitalWrite(S4, LOW);
        delay(500);
        return (6);
      }
      else if (digitalRead(E5) == 1) {
        digitalWrite(S4, LOW);
        delay(500);
        return (9);
      }
      else {
        digitalWrite(S4, LOW);
        return (0);
      }

}

//------------------le teclado-----------------------------
int leTeclado()
{
  ch = 0;
  if (Serial.available ( ) > 0)
  {
    ch = Serial.read ( );
    Serial.print(ch);

    if (ch == '1') {
      delay(500);
      jogada = 1;
    }
    else if (ch == '2') {
      delay(500);
      jogada = 2;
    }
    else if (ch == '3') {
      delay(500);
      jogada = 3;
    }
    else if (ch == '4') {
      delay(500);
      jogada = 4;
    }
    else if (ch == '5') {
      delay(500);
      jogada = 5;
    }
    else if (ch == '6') {
      delay(500);
      jogada =6;
    }
    else if (ch == '7') {
      delay(500);
      jogada = 7;
    }
    else if (ch == '8') {
      delay(500);
      jogada = 8;
    }
    else if (ch == '9') {
      delay(500);
      jogada = 9;
    }
  }
}

//------------------------verifica quem ganhou---------------------------
int velha(int Jogo[3][3])
{
  int j1, j2, j3, j4, j5, j6, j7, j8;

  j1 = Jogo[0][0] + Jogo[0][1] + Jogo[0][2];
  j2 = Jogo[1][0] + Jogo[1][1] + Jogo[1][2];
  j3 = Jogo[2][0] + Jogo[2][1] + Jogo[2][2];

  j4 = Jogo[0][0] + Jogo[1][0] + Jogo[2][0];
  j5 = Jogo[0][1] + Jogo[1][1] + Jogo[2][1];
  j6 = Jogo[0][2] + Jogo[1][2] + Jogo[2][2];

  j7 = Jogo[0][0] + Jogo[1][1] + Jogo[2][2];
  j8 = Jogo[0][2] + Jogo[1][1] + Jogo[2][0];

  if (j1 == -3){
    return (1);
  }
  else if (j2 == -3) {
    return (1);
  }
  else if (j3 == -3) {
    return (1);
  }
  else if (j4 == -3) {
    return (1);
  }
  else if (j5 == -3) {
    return (1);
  }
  else if (j6 == -3) {
    return (1);
  }
  else if (j7 == -3) {
    return (1);
  }
  else if (j8 == -3) {
    return (1);
  }
  else if (j1 == 3) {
    return (2);
  }
  else if (j2 == 3) {
    return (2);
  }
  else if (j3 == 3) {
    return (2);
  }
  else if (j4 == 3) {
    return (2);
  }
  else if (j5 == 3) {
    return (2);
  }
  else if (j6 == 3) {
    return (2);
  }
  else if (j7 == 3) {
    return (2);
  }
  else if (j8 == 3) {
    return (2);
  }

}

//-----------------------------------verifica jogada-----------------------------
int validaPosicao(int pos)
{
  if ((pos == 1) && (Jogo[0][0] == 0)) {
    return (1);
  }
  else if ((pos == 2) && (Jogo[0][1] == 0)) {
    return (1);
  }
  else if ((pos == 3) && (Jogo[0][2] == 0)) {
    return (1);
  }
  else if ((pos == 4) && (Jogo[1][0] == 0)) {
    return (1);
  }
  else if ((pos == 5) && (Jogo[1][1] == 0)) {
    return (1);
  }
  else if ((pos == 6) && (Jogo[1][2] == 0)) {
    return (1);
  }
  else if ((pos == 7) && (Jogo[2][0] == 0)) {
    return (1);
  }
  else if ((pos == 8) && (Jogo[2][1] == 0)) {
    return (1);
  }
  else if ((pos == 9) && (Jogo[2][2] == 0)) {
    return (1);
  }
  else if ((pos == 1) && (Jogo[0][0] == 1) && (jogada == 1)) {
    return (2);
  }
  else if ((pos == 2) && (Jogo[0][1] == 1) && (jogada == 2)) {
    return (2);
  }
  else if ((pos == 3) && (Jogo[0][2] == 1) && (jogada == 3)) {
    return (2);
  }
  else if ((pos == 4) && (Jogo[1][0] == 1) && (jogada == 4)) {
    return (2);
  }
  else if ((pos == 5) && (Jogo[1][1] == 1) && (jogada == 5)) {
    return (2);
  }
  else if ((pos == 6) && (Jogo[1][2] == 1) && (jogada == 6)) {
    return (2);
  }
  else if ((pos == 7) && (Jogo[2][0] == 1) && (jogada == 7)) {
    return (2);
  }
  else if ((pos == 8) && (Jogo[2][1] == 1) && (jogada == 8)) {
    return (2);
  }
  else if ((pos == 9) && (Jogo[2][2] == 1) && (jogada == 9)) {
    return (2);
  }
  else if ((pos == 1) && (Jogo[0][0] == -1) && (jogada == 1)) {
    return (2);
  }
  else if ((pos == 2) && (Jogo[0][1] == -1) && (jogada == 2)) {
    return (2);
  }
  else if ((pos == 3) && (Jogo[0][2] == -1) && (jogada == 3)) {
    return (2);
  }
  else if ((pos == 4) && (Jogo[1][0] == -1) && (jogada == 4)) {
    return (2);
  }
  else if ((pos == 5) && (Jogo[1][1] == -1) && (jogada == 5)) {
    return (2);
  }
  else if ((pos == 6) && (Jogo[1][2] == -1) && (jogada == 6)) {
    return (2);
  }
  else if ((pos == 7) && (Jogo[2][0] == -1) && (jogada == 7)) {
    return (2);
  }
  else if ((pos == 8) && (Jogo[2][1] == -1) && (jogada == 8)) {
    return (2);
  }
  else if ((pos == 9) && (Jogo[2][2] == -1) && (jogada == 9)) {
    return (2);
  }
  else{
    return(0);
  }

}
void imprime_tabuleiro(int Jogo[3][3])
{
  int x, y;
  Serial.println("----------------");
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
      Serial.print (Jogo[x][y]);
      Serial.print ("  |  ");
    }
    Serial.println("");
  }
  Serial.println("----------------");
}
//-------------------------------------------------------
// Marca a jogada no tabuleiro
int marcaJogada(int pos)
{
  if (pos == 1) {
    Jogo[0][0] = jVez;
  }
  else if (pos == 2) {
    Jogo[0][1] = jVez;
  }
  else if (pos == 3) {
    Jogo[0][2] = jVez;
  }
  else if (pos == 4) {
    Jogo[1][0] = jVez;
  }
  else if (pos == 5) {
    Jogo[1][1] = jVez;
  }
  else if (pos == 6) {
    Jogo[1][2] = jVez;
  }
  else if (pos == 7) {
    Jogo[2][0] = jVez;
  }
  else if (pos == 8) {
    Jogo[2][1] = jVez;
  }
  else if (pos == 9) {
    Jogo[2][2] = jVez;
  }
}

//-------------------------------------------------------
void trocarJogador() {
  if (jVez == -1) {
    jVez = player2;
  }
  else {
    jVez = player1;
  }
}
//-------------------------------------------------------
void loop()
{
  
  
  retorno:
  jogada = 0;
  vez = 0; 
  pos = 0;
  ch = 0;
  if (Serial.available ( ) > 0)
  {
    ch = Serial.read ( );
    Serial.print(ch);

    if (ch == '1') {
      delay(500);
      jogada = 1;
    }
    else if (ch == '2') {
      delay(500);
      jogada = 2;
    }
    else if (ch == '3') {
      delay(500);
      jogada = 3;
    }
    else if (ch == '4') {
      delay(500);
      jogada = 4;
    }
    else if (ch == '5') {
      delay(500);
      jogada = 5;
    }
    else if (ch == '6') {
      delay(500);
      jogada =6;
    }
    else if (ch == '7') {
      delay(500);
      jogada = 7;
    }
    else if (ch == '8') {
      delay(500);
      jogada = 8;
    }
    else if (ch == '9') {
      delay(500);
      jogada = 9;
    }
  }
  if (jogada == 0) {
    jogada = leBotao();
  }
    
   
  pos = jogada;
  vez = validaPosicao(pos);
  while(vez == 0){
    goto retorno;
  }
  if(vez == 1){
    marcaJogada(pos);
    aaa = velha(Jogo);
    imprime_tabuleiro(Jogo);
    trocarJogador();
  }
  else if(vez == 2){
    Serial.print("\nJogada Invalida\n");
    goto retorno;
  }
  if (aaa == 1) {
    Serial.print("\nJogador 1 Ganhou\n");
  }
  else if (aaa == 2) {
    Serial.print("\nJogador 2 Ganhou\n");
  }
}
