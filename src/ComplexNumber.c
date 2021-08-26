#include <stdlib.h>
#include <stdio.h>
#include "../libs/ComplexNumber.h"

static ComplexNumber initNewComplexNumber(ComplexNumber newComplexNumber);

static ComplexNumber initNewComplexNumber(ComplexNumber newComplexNumber){
  newComplexNumber->real=0;
  newComplexNumber->imaginary=0;
  return newComplexNumber;
}

ComplexNumber newComplexNumber (void){
  ComplexNumber myComplexNumber=NULL;
  myComplexNumber=malloc(sizeof(struct _Complex_Number));
  myComplexNumber=initNewComplexNumber(myComplexNumber);
  return myComplexNumber;
}


ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary){
  ComplexNumber myComplexNumber;
  myComplexNumber->real=real;
  myComplexNumber->imaginary=imaginary;
  return myComplexNumber;
}

ComplexNumber getComplexNumberComponents(ComplexNumber phasor, float *real, float *imaginary){

}

ComplexNumber freeComplexNumber(ComplexNumber phasor){
  ComplexNumber phasor;
  num=phasor;
  free(num);
}
