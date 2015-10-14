#ifndef __CUBETA_H__
#define __CUBETA_H__

class Cubeta {
    private:
	/* Estado interno */
	double capacidad;
	double nivel;

    public:
	Cubeta();
	/* Acciones */
	double cargar(double cantidad);
	double extraer(double cantidad);
	double get_nivel();
};
#endif
