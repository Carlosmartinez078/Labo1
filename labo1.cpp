#include <iostream>

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
        std::cout << "hola mundo";
        break;
    
    case 2:

        break;

    case 3:
        
        break;

    case 4:

        break;
    
    case 5:
    if (opciones > 4){
    std::cout<< "opcion invalida \n";
    }
        break;
    }

    return 0;
}