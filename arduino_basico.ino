/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa básico de apresentação da IDE Arduino
*********/
//Intrudução à Programação - Alguns conceitos de programção - Exemplo 1
// Rotina de configuração dos pinos
void setup()
{
  //Configuração do pino 12 para saida de dados
  pinMode(12,OUTPUT);
  //Configuração do pino 11 para saida de dados
  pinMode(11,OUTPUT);
}

// Rotina de repetição de comandos
void loop()
{
  //Comando para acender o led no pino 12
  digitalWrite(12,HIGH);
  //Comando para pausar a execução do programa por 500 milisegundos
  delay(500); 
  //Comando para apagar o led no pino 12
  digitalWrite(12,LOW);
  //Comando para acender o led no pino 11
  digitalWrite(11,HIGH);
  //Comando para pausar a execução do programa por 500 milisegundos
  delay(500);
  //Comando para apagar o led no pino 11
  digitalWrite(11,LOW);
}
