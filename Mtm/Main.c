#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void facil();
void medio();
void dificil();
void somador(int a, int b);
void seletor(int opt);
void score(int points);

void menu(){
 int opt; 
      puts("selecione a dificuldade");
      puts("(1)facil");
      puts("(2)medio");
      puts("(3)dificil");
      puts("(0)sair"); 
      scanf("%d", &opt);
      seletor(opt);
 
} 

void facil(){ 
 srand((unsigned)time(NULL) ); 
  int a, b, resultado, resposta;
  a = rand()%51;
  b = rand()%51;
  puts("facil");
  printf(" %d + %d\n",a,b); 
  resultado = a + b;
  scanf("%d", &resposta);
  if(resposta == resultado){
    puts("Acertou");
    facil();
  }
    else{
    puts("errou");
    printf("a resposta era %d\n", resultado);

    menu();
  }
 
}


void medio(){
 srand((unsigned)time(NULL) ); 
  int a, b, resultado, resposta ;
  a = rand()%50+101;
  b = rand()%50+101;
  puts("medio");
  printf(" %d + %d\n",a,b); 
  resultado = a + b;
  scanf("%d", &resposta);
  if(resposta == resultado){
    puts("Acertou");
    medio();
  }
    else{
    puts("errou");
    printf("a resposta era %d\n", resultado);
    menu();
  }
}

void dificil(){
 srand((unsigned)time(NULL) ); 
  int a, b, resultado, resposta ;
  a = rand()%101+1001;
  b = rand()%101+1001;
  puts("dificil");
  printf(" %d + %d\n",a,b); 
  resultado = a + b;
  scanf("%d", &resposta);
  if(resposta == resultado){
    puts("Acertou");
    dificil();
  }
    else{
    puts("errou");
      printf("a resposta era %d\n", resultado);
 
    menu();
  }
}

void seletor(int opt){
  switch (opt){
    case 1:
     facil();
      break;
    case 2:
     medio();
      break;
    case 3:    
     dificil();
      break;
    case 0:
      break;
  }
}

void score(point);
  

int main(){
    menu(); 
}
