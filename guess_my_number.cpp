
#include <iostream>
using namespace std;


void Guess(int i, int l) {// EGER SONSUZ BIR DU-ONGU ISTIYORSAK WHILE( == ) İ KULLANMAMIZ DAHA UYGUN OLUR
	while (i != l) {// İ L YE ESIT OLMADIGI ICIN BU DONGU SUREKLI TEKRARLANIR VE BITMEZ
		// ONCEKI DENEMELERDE SMALLER VE GREATER YAPINCA OTOMATIK BITIYORDU AMA BURDA OYLE OLMUYOR
		if (i > l) {// EGER GİZLİ SAYI BUYUKSE BURDA BELİRTİR
			cout << "Number is bigger than " << l << endl;
			cin >> l;
		}
		if (i < l) {//EGER GİZLİ SAYI KUCUKSE BURDA BELIRTIR
			cout << "Number is smaller than " << l << endl;
			cin >> l;
		}
		while (i == l) {
			cout << "Congrats" << endl;
			break;// EHER BUNU YAZMAZSAK SONSUZ DONGU ICINE GIRIYOR

		}

	}

}
int main()
{
	cout << "Guess my number , what is it?" << endl;
	int i, l;
	i= rand()  ;
	cin >> l ;
	Guess(i, l);// BURADA I VE L DEGERLERINI FONKSIYONA GONDERIYORUZ

	
}

