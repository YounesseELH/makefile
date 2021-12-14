typedef struct {
        double re;
        double im;
} complexe;

complexe nouveauComplexe(double r, double i);
complexe plus(complexe z1, complexe z2);
complexe moins(complexe z1, complexe z2);
double module(complexe z);
double argument(complexe z);                                                                                         
