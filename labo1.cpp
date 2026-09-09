#include <iostream>

void consultarsaldo(float saldoF);
void deposito(float &saldo);
void retiro(float *saldo);
float saldo= 150.00;
double main(){
    consultarsaldo(saldo);
    deposito(saldo);
    retiro(&saldo);
    return 0;
 }


    void consultarsaldo(float saldoF){
    std::cout << "El saldo actual es: $" << saldoF << std::endl;
 }
void deposito(float &saldo){
    float monto=0;
    std::cout << "Ingrese el monto a depositar: ";
    std::cin >> monto;
    if (monto > 0) {
        saldo += monto;
        std::cout << "Deposito exitoso. Nuevo saldo: $" << saldo << std::endl;
    } else {
        std::cout << "Monto invalido. No se realizo el deposito." << std::endl;
    }
 }
 void retiro(float *saldo){
    int monto=0;
    std::cout << "Ingrese el monto a retirar: ";
    std::cin >> monto;
    if (monto > 0 && monto <= *saldo && (monto % 5 == 0)) {
        *saldo -= monto;
        std::cout << "Retiro exitoso. Nuevo saldo: $" << *saldo << std::endl;
    } else {
        std::cout << "Monto invalido o insuficiente. No se realizo el retiro." << std::endl;
    }
}