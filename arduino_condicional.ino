/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa sobre testes condicionais
*********/

//Declaração da variável x
int x=8; 

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
//Comando de condicional if/else
  if(x>10){
  	digitalWrite(12,HIGH );
 	delay(500); 
    digitalWrite(12,LOW );
 	delay(500); 
  }else{
  	digitalWrite(11,HIGH );
 	delay(500); 
    digitalWrite(11,LOW );
 	delay(500); 
  }
}
