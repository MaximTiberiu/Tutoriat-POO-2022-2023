# Tutoriat POO 2022-2023

> Tutoriatul #03

## Probleme propuse - Moștenirea & Tratarea Excepțiilor

#### Să se implementeze următoarea aplicație care respectă regulile de mai jos:
- Există un lanț de magazine definite de un id. 
---
- Într-un magazin există case de marcat, produse pe rafturi (unde există un stoc al acestora) și clienți. Un client este caracterizat de: nume, de un id de client, dar și de suma totală pe care o poate cheltui în magazin. De asemenea, la înregistrarea unui client, se va specifica magazinul din care dorește să își facă cumpărăturile.
	- ID-ul este generat automat la înregistrarea unui client și are următoarea formă: XDDMMAANNNN, unde
		- X este tipul de client (O - obișnuit, F - fidel, S - special);
		- DD - ziua din data nașterii;
		- MM - luna din data nașterii;
		- AA - anul din data nașterii;
		- NNNN - un număr de patru cifre ales aleator.
---
- Există trei tipuri de clienți, care pot fi diferențiați pe baza id-ului acestora: obișnuiți, fideli, speciali.
	- Clientul obișnuit nu are benefiicii în magazine. 
	- Clientul fidel adună puncte de fidelitate, într-un procent stabilit la înregistrarea acestuia. Dacă clientul este născut înainte de 2000, acesta adună 10% puncte de fidelitate din suma totală. Dacă este născut după 2000 (inclusiv), acesta adună 5% puncte de fidelitate din suma totală. NOTĂ! Se ia doar partea întreagă din acest calcul.
	- Clientul special conține motivul pentru care este special: "student", "pensionar", "dizabilități, "veteran". În funcție de statutul clientului, acesta beneficiază de reduceri de 5%, 10%, 15%, respectiv 20% din valoarea totală a cumpărăturilor.
---
- Fiecare client poate să adauge produse de pe raft sau să renunțe la produse deja adăugate (un produs este caracterizat de nume, preț). Aceste produse sunt adăugate în coșul de cumpărături al clientului, stocând și numărul de bucăți.
---
- Fiecare casă de marcat are câte o coadă de clienți. Casa de marcat are posibilitatea de a primi un client în coada sau de a servi un client. În cadrul procesului de servire client se va calcula și afișa suma de plată pentru produsele selectate de client. În cazul depășirii sumei maxime se va afișa un mesaj corespunzător. 
- O casă de marcat poate fi închisă sa deschisă. De asemenea, aceasta are o capacitiate maximă specificată în configurația inițială.
- Atribuirea se va face automat de către algoritmul de atribuire al magazinului.
---
- La finalul sesiunii aplicației, se va salva un fișier de tip log. Acesta trebuie să stocheze detalii despre magazinele în care s-au făcut cumpărături, date despre clienții care au făcut cumpărături, valoarea totală a cumpărăturilor și stocul produselor la finalul sesiunii.
- Aplicația va fi utilizată prin intermediul unui meniu interactiv.
