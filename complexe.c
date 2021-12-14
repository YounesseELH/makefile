/*  #include<math.h> */
 #include "complexe.h"
 
 complexe nouveauComplexe(double r, double i)
 {
        complexe z;
        z.re = r;
        z.im = i;
        return z;
 }
 
 complexe plus(complexe z1, complexe z2)
 {
 return nouveauComplexe(z1.re+z2.re,z1.im+z2.im);
 }
 
 complexe moins(complexe z1, complexe z2)
 {
 return nouveauComplexe(z1.re-z2.re,z1.im-z2.im);
 }
 
 double module(complexe z)
 {
        return 1.1;
// return sqrt(z.re*z.re+z.im*z.im);
 }
 
 double argument(complexe z){
 //return atan(z.im/z.re);
 return 2.2;
 }
