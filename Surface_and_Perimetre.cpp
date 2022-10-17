#include <iostream>
int main(){
    double longueur, largeur;
    std::cout << "Taper la longueur :"; std::cin >> longueur;
    std::cout <<"Taper la largeur :"; std::cin >> largeur;
    double surface = longueur*largeur;
    double perimetre = surface*2;
    std::cout << "Votre sur face est "<< surface<< " metres carrés et votre périmètre est " << perimetre <<std::endl;
}
