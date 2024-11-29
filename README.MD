# Modificări efectuate în cadrul ramurii lab05

În această ramură am realizat următoarele schimbări conform cerințelor specificate:

## 1. Crearea și utilizarea bibliotecilor

Am refăcut structura codului pentru a include implementarea și utilizarea bibliotecilor statice sau dinamice în cadrul aplicației Snake. Aceste biblioteci sunt folosite pentru a organiza mai eficient codul și pentru a îmbunătăți modularitatea acestuia. Fiecare clasă din proiect (de exemplu, `Apple`, `Board`, `Snake`, etc.) a fost transformată într-o bibliotecă separată, iar fișierele relevante `.cpp` și `.hpp` au fost reorganizate în directoare specifice.

## 2. Integrarea fișierelor de antet și sursă

Fișierele de antet (header files, `.hpp`) și fișierele sursă (source files, `.cpp`) au fost plasate în directoarele `include/` și `src/` pentru a respecta o structură standard a proiectului. Aceasta permite gestionarea mai eficientă a fișierelor și utilizarea lor în diferite module.

## 3. Actualizarea Makefile-ului

Am actualizat fișierul `Makefile` pentru a include noile biblioteci și fișierele sursă. Makefile-ul este acum configurat pentru a construi aplicația folosind aceste biblioteci, asigurându-se că toate fișierele sunt corect legate și compilate într-un singur executabil.

## 4. Modificarea structurii directorului

Proiectul a fost reorganizat astfel încât fișierele sursă și antet să fie clar separate, iar fișierele obiect și executabile să fie plasate în directoare dedicate (`obj/` și `bin/`), care sunt create automat la rularea procesului de construcție.

Aceste schimbări au fost făcute pentru a respecta cerințele de structurare a unui proiect C++ modern și pentru a facilita extinderea și întreținerea ulterioară a aplicației.
