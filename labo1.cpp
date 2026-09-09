#include <iostream>

void consultarsaldo(float saldoF);
void deposito(float &saldo);
void retiro(float *saldo);
float saldo= 150.00;

int main(){
    int opciones;

    std::cout<<"Bienvenido al cajero que opcion deseas usar: \n";
    std::cout<<"1. Ver el Saldo" << std::endl;
    std::cout<<"2. Depositar dinero" << std::endl;
    std::cout<<"3. Retirar dinero" << std::endl;
    std::cout<<"4. Salir" << std::endl;
    std::cin>>opciones;


    switch (opciones) {
    case 1:
    consultarsaldo(saldo);
        break;
    
    case 2:
    deposito(saldo);
        break;

    case 3:
    retiro(&saldo);    
        break;

    case 4:
    std::cout<<"saliendo del menu" << std::endl;
        break;
    
    case 5:
    if (opciones > 4){
    std::cout<< "opcion invalida \n";
    }
        break;
    }

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