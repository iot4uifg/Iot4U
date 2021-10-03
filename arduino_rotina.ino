/**********
  Projeto IOT4U
  IFG Campus Goiânia
  Autor:    Matheus Yosimura
  Objetivo: Programa de criação de uma rotina
*********/


//Intrudução à Programação - Alguns conceitos de programção - Exemplo 4
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

//Rotina para somar + 1 à variável x até 5
int atecinco(int a){
  //Comando de repetição While
   while(a < 5){
	//Código para somar 1 à variável a
      	a=a+1;
      	//Comando para acender o led no pino 12
  	digitalWrite(12,HIGH );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
	//Comando para apagar o led no pino 12
    	digitalWrite(12,LOW );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
   }
}

  //Retorna 5 para x
  return a;
}

//Rotina para diminuir 1 da variável x até 0
int atezero(int b){
  //Comando de repetição While
  while(b>0){
	//Código para diminuir 1 da variável b	
      	b=b-1;
      	//Comando para acender o led no pino 11
  	digitalWrite(11,HIGH );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
	//Comando para apagar o led no pino 11
    	digitalWrite(11,LOW );
	//Comando para pausar a execução do programa por 500 milisegundos
 	delay(500); 
    }
  //Retorna 0 para x
  return b;
}

// Rotina de repetição de comandos 
void loop(){
  //Chamada da função atecinco enviando x=0 como parâmetro 
  x=atecinco(x);
  //Chamada da função atezero enviando x=5 como parâmetro
  x=atezero(x);
}
