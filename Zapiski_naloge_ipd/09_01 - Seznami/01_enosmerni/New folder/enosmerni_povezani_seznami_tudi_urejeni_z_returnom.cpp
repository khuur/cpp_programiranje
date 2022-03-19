struct Element {
	Zgoscenka podatek;
	Element *nasl;
} *zacetek = NULL;


void push_na_zacetek(Zgoscenka zgoscenka) {
	
	Element novi_zapis = new Element;
	novi_zapis.podatek = zgoscenka;
	novi_zapis.nasl = NULL;
	
	// 1. opcija == v seznamu ni nobenega elementa
	if(zacetek == NULL) {
		zacetek = novi_zapis;
	} else {
		// 2. opcija == v seznamu so drugi elementi
		
		novi_zapis.nasl = zacetek; // kaže na prvi element v seznamu
		
		zacetek = novi_zapis;
	}
}


void push_na_konec(Zgoscenka zgoscenka) {
	
	Element novi_zapis = new Element;
	novi_zapis->podatek = zgoscenka;
	novi_zapis->nasl = NULL;
	
	// 1. opcija == v seznamu ni nobenega elementa
	if(zacetek == NULL) {
		zacetek = novi_zapis;
	} else {
		Element *tmp = zacetek;
		
		if(tmp->nasl == NULL) {
			// pomeni, da smo na koncu
			tmp->nasl = novi_zapis;
		} else {
			// pomen, da si nekje v sredini in da se premakni naprej za en element
			
			tmp = tmp->nasl;
		}		
	}
}

bool push_na_sredino(Zgoscenka zgoscenka) {
	
	Element novi_zapis = new Element;
	novi_zapis->podatek = zgoscenka;
	novi_zapis->nasl = NULL;
		
	// 1. opcija == v seznamu ni nobenega elementa
	if(zacetek == NULL) {
		zacetek = novi_zapis;
		return true;
	} else {
		Element *tmp = zacetek;
		
		if(zac->podatki.cena < novi_zapis->podatki.cena) {
			// push_na_zacetek()
			novi_zapis->nasl = zacetek;
			zacetek = novi_zapis;
			return true;
		} else {
			
			// vstavljanje v sredino
			while(tmp->nasl != NULL) {
				// ta bo šou do konca, če ga ne prekinemo
				
				if(tmp->nasl->podatki.cena < novi_zapis->podatki.cena) {
					novi_zapis = tmp->nasl;
					tmp->nasl = novi_zapis;	
					return true;			
				}				
				tmp = tmp->nasl;
			}
			
			tmp->nasl = novi_zapis;
			return true;
		}	
	}	
	return false;
}



int main() {
	
	if(push_na_sredino("ACDC", 100) == false) {
		cout << "Jou neki je šlo narobe" << endl;
	};
	push_na_sredino("Bruno Mars", 200);
	
	
}