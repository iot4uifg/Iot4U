/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa sobre comando de repetição
*********/


//Intrudução à Programação - Alguns conceitos de programção - Exemplo 3
//Declaração da variável x
int x=0; 

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
  //Comando de repetição While
  while(x<5){
	//Código para somar 1 à variável x
	x=x+1;
  	//Comando para acender o led no pino 12
  	digitalWrite(12,HIGH );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
	//Comando para apagar o led no pino 12
    	digitalWrite(12,LOW );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
  }
  //Comando de repetição While
  while(x>0){
	//Código para diminuir 1 da variável x
  	x=x-1;
  	//Comando para acender o led no pino 11
  	digitalWrite(11,HIGH );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
	//Comando para apagar o led no pino 11
    	digitalWrite(11,LOW );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
  }
}
