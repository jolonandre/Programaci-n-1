#ifndef CALCULADORA_H
#define CALCULADORA_H


class calculadora
{
    public:
        calculadora();
        float Suma(int v, int y);
        float Resta(int v, int y);
        float division(int x, int y);
        float multi(int x, int y);

        virtual ~calculadora();

    protected:

    private:
};

#endif // CALCULADORA_H
