/*********************************************************************
Teht�v�: HARJOITUS 16
Tekij�: Pekka Melgin
PVM: 27.10.2013
Kuvaus:
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot nayt�lle.
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
	cin >> henktiedot.etunimi;
	cout << "Anna keng�nnumero :";
	cin >> henktiedot.kengannumero;
	cout << "Anna sukunimi :";
	cin >> henktiedot.sukunimi;
	cout << "Anna koulumatkan pituus :";
	cin >> henktiedot.koulumatka;
	cout << "Anna osoitteesi :";
	cin.get();
	cin.get(henktiedot.osoite,20);
	cout << "Anna postinumerosi :";
	cin >> henktiedot.postinumero;

	cout << henktiedot.etunimi << " " << henktiedot.sukunimi << endl << henktiedot.osoite << endl << henktiedot.postinumero << endl << henktiedot.kengannumero << endl << henktiedot.koulumatka << endl;
}