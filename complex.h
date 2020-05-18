

#ifndef MMN22_COMPLEX_H
#define MMN22_COMPLEX_H

void readComp(complex* var, double r, double i);
void printComp (complex *var);
void addComp(complex *a, complex *b);
void subComp (complex *a, complex *b);
void multCompReal ( complex *var, double x);
void multCompImg (complex *var, double x );
void multCompComp (complex *a, complex *b );
oid absComp(complex *var);



typedef struct complex
{
    double r;
    double i;
} complex;



#endif //MMN22_COMPLEX_H
