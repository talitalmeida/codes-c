#include<stdio.h>
#include<stdlib.h>
class ponto1d(){
    protected:
        float x;
        char name;
    public:
        ponto1d(){
            printf("Nomeie o ponto: ");
            scanf("%c",&name);
            printf("Valor de x: ");
            scanf("%f",&x);
        }
        ~ponto1d(){
            printf("Objeto destruído!");
        }
        void exibir(){
            printf("Ponto %c coordx(%f)",name,x);
        }
        void mover(float addx){ //sobrecarregando métodos
            x=x+addx;
        }
        void origem(){
            x=0;
        }
};
class ponto2d: public ponto1d{
    protected:
        float y;
    public:
        ponto2d(){
            printf("Valor para y: ");
            scanf("%f",&y);
        }
        ~ponto2d(){
            printf("Objeto_2 destruido!");
        }
        void exibir2(){
            exibir();
            printf("coordy(%f)",y);
        }
        void mover2(float addx, addy){
            mover(addx); //enviando o addx para o mover do ponto1d, ou pelo menos devia... ahhhhhhh
            y=y+addy;
        }
        void origem2(){
            origem();
            y=0;
        }
};
class ponto3d: private ponto2d{
    float z;
    public:
        ponto3d(){
            printf("Valor para z: ")
            scanf("%f",&z);
        }
        ~ponto3d(){
            printf("Objeto_3 destruido!");
        }
        void exibir3(){
            exibir2();
            printf("coordz(%f)",z);
        }
        void origem3(){
            origem2();
            y=0;
        }
        void mover3(float addx,float addy,float addz){
            mover2(addx,addy);
            z=z+addz;
        }
};
int main(){
    ponto3d *p;
    float addx
    int op = 0, dimen=0;
    do{
        printf("1 - Tipo de dimensão a escolher\n ");
      //printf("2 - Quantidades de ponto\n");
      //printf("3 - Exibir os pontos e suas coordenadas\n");
      //printf("4 -Escolher posicao no vetor\n");
        printf("5 - Criar um ponto\n");
        printf("6 - Mover um ponto\n");
        printf("7 - Exibir um ponto\n");
        printf("8 - Levar um ponto a origem\n");
        printf("9 - Destruir um ponto\n");
        printf("0 - Sair\n");
        scanf("%d",&op);
        switch(op){
            case 1:{
                printf("1 - Unidimensional");
                printf("2 - Bidimensional\n");
                printf("3 - Tridimensional\n");
                scanf("%d",&dimen);
            }break;
            case 5:{
                if(dimen==1){
                    ponto1d *uni = new ponto1d;
                }
                 if(count2==dimen){
                    ponto2d *bid = new ponto2d;
                }
                if(int count2==dimen){
                    ponto3d *trid = new ponto3d;
                }
            }break;
            case 6:{
                if(dimen==1){
                    printf("")
                }
            }break;
        }
    }while(op!=0);
}