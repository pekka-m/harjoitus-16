/*********************************************************************
Tehtävä: HARJOITUS 16
Tekijä: Pekka Melgin
PVM: 8.10.2013
Kuvaus:
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*********************************************************************/
#include <iostream> 
using namespace std; 
struct henktiedot 
{ 
 char etunimi[10];
 char sukunimi[15];
 float koulumatka;
 char osoite[20];
 char postinumero[6];
 int kengannumero;
}; 
int main() 
{ 
	henktiedot henktiedot;

	cout << "Anna etunimi :";
	cin >> ws >> henktiedot.etunimi;
	cout << "Anna kengännumero :";
	cin >> ws >> henktiedot.kengannumero;
	cout << "Anna sukunimi :";
	cin >> ws >> henktiedot.sukunimi;
	cout << "Anna koulumatkan pituus :";
	cin >> ws >> henktiedot.koulumatka;
	cout << "Anna osoitteesi :";
	cin >> ws >> henktiedot.osoite;
	cin.get();
	cout << "Anna postinumerosi :";
	cin >> ws >> henktiedot.postinumero;
}