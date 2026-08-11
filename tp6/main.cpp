#include <iostream>
#include <string>
#include "Vendeur.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
#include "Personnel.h"

int main()
{
    Personnel personnel;
    personnel.charger("test.txt");
    personnel.afficher();
    return 0;
}
