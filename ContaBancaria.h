#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef struct{
int numero;
double saldo;
}Conta;


void inicializar(Conta *c,int v, double s){
c->numero=v;
c->saldo=s;
}
void depositar(Conta *c, double d){
if(d>0){
  c->saldo=c->saldo+d;
  printf("Depositou:%.2f\n", d);
}else
 printf("Deposito invalido\n");
}

void sacar(Conta *c, double s){
if(c->saldo>=s){
  c->saldo=c->saldo-s;
  printf("Sacou:%.2f\n", s);
}else
 printf("Saque invalido\n");
}

void imprime(Conta *c){
printf("Numero:%d\n",c->numero);
printf("Saldo:%.2f\n",c->saldo);
}

#endif // ContaBancaria
