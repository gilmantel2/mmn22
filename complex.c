#include "complex.h"
#include <math.h>
#include <stdio.h>

void readComp(complex* var, double r, double i){
    var->r = r;
    var->i = i;
}

void printComp (complex *var) {
    printf("%.2f + (%.2f)i", var->r, var->i);
}

void addComp(complex *a, complex *b) {
    complex sum;
    sum.r = (a->r + b->r);
    sum.i = (a->i + b->i);
    printComp (&sum);
}

void subComp (complex *a, complex *b) {
    complex sub;
    sub.r = (a->r - b->r);
    sub.i = (a->i - b->i);
    printComp (&sub);

}

void multCompReal ( complex *var, double x) {
    complex result;
    result.r = x*(var->r);
    result.i = x*(var->i);
    printComp (&result);
}

void multCompImg (complex *var, double x ) {
    complex result;
    result.r = -x * (var->i);
    result.i = x * (var->r);
    printComp(&result);
}

void multCompComp (complex *a, complex *b ) {
    complex result;
    result.r = ((a->r)*(b->r) - (a->i)*(b->i)) ;
    result.i = ((a->r)*(b->i) + (b->r)*(a->i)) ;
    printComp(&result);
}

void absComp(complex *var) {
    complex result;
    result.r =  sqrt(pow(var->r,2));
    result.i = sqrt(pow(var->i,2));
    printComp(&result);

}















