#ifndef __SOL_PERUANO__
#define __SOL_PERUANO__

#include <iostream>

class SolPeruano{
    private:
        int soles;
        int centimos;
    public:
        SolPeruano(int s=0, int c=0) : soles{s}, centimos{c}{}
        int getSoles() const {
            return soles;
        }
        int getCentimos() const {
            return centimos;
        }
        void setSoles(int s) {
            soles = s;
        } 
        void setCentimos(int c) {
            centimos = c;
        }
        void print() const {
            std::cout << "S/. " << soles << "." << centimos << std::endl;
        }

        SolPeruano operator+(const SolPeruano &o) const {
            SolPeruano tmp;
            tmp.soles = soles + o.soles;
            tmp.centimos = centimos + o.centimos;
            if(tmp.centimos >= 100) {
                tmp.soles++;
                tmp.centimos -= 100;
            }
            return tmp;
        }
        bool operator<(const SolPeruano &o) const {

            if (soles < o.soles) {
                return true;
            }
            return false;
        }
};
#endif