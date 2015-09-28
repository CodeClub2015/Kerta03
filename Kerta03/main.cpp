#include <iostream>
#include "Player.h"
int main() {
	Player a("adolf", 1337, 100);
	Player b("putin", 555, 100);
	Player c("stalin", 111, 100);
	// tulostetaan stalinin tiedot
	c.print();

	// toinen tapa tulostaa koska ylikirjotettiin operaattori
	//std::cout << a << std::endl;
	/*

	1. Luokaa luokka Player/Pelaaja
	2. 3 muuttujaa name (string), damage (int), hp (int)
	3. Metodit joilla voidaan muokata ja hakea
	   tietoja (getters & setters)
	   getDamage(), setDamage(int) jne.

	   Muistakaa muodostimet!
	   Player a("nimi", damage, hp);

	4. Metodi jolla voidaan tulostaa pelaajan tiedot
	   esim. void print();

	ja lopuksi näytetään operaattorin ylikirjoittaminen
	
	*/
	// Kotitehtäviä ":D"
	// pistä stalin taistelemaan putinin kanssa


	return 0;
}