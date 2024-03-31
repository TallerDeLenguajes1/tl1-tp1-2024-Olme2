#include <stdio.h>
float cuadrado(float num);
void cuadradoVoid(float *pnum);
void mostrarVariable(float *vble);
void invertir(int *a,int *b);
void orden(int *a, int *b);

int main(){
    float num=5.4;
    int a=3, b=6;
    float numCuadrado=cuadrado(num);
    printf("%f\n",numCuadrado);
    cuadradoVoid(&num);
    printf("%f\n",num);
    mostrarVariable(&num);
    printf("a: %d\nb: %d\n",a,b);
    invertir(&a,&b);
    printf("a: %d\nb: %d\n",a,b);
    orden(&a, &b);
    printf("a: %d\nb: %d",a,b);
}   

float cuadrado(float num){
    return num*=num;
}
void cuadradoVoid(float *pnum){
    *pnum=*pnum*(*pnum);
}
void mostrarVariable(float *vble){
    printf("Direccion: %p\nContenido: %f\n", vble, *vble);
}
void invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void orden(int *a, int *b){
    int aux;
    if(*a>*b){
        aux=*a;
        *a=*b;
        *b=aux;
    }
}