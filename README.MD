# Modificări pentru utilizarea bibliotecii standard C++

Acest proiect conține cod adaptat pentru a utiliza facilitățile oferite de biblioteca standard C++ (STL). În cadrul modificărilor, am realizat următoarele ajustări pentru a respecta cerințele laboratorului:

1. **Înlocuirea vectorilor**: Toate structurile de date dinamice au fost refăcute folosind containere STL corespunzătoare, precum `std::vector` și `std::map`.

2. **Utilizarea fluxurilor de intrare/ieșire**: În locul operațiilor clasice de intrare/ieșire, am implementat `std::istream` și `std::ostream` pentru a facilita citirea și afișarea datelor.

3. **Smart Pointers și Referințe**: În locul pointerilor raw și alocării dinamice, am folosit `std::shared_ptr` și `std::unique_ptr` acolo unde a fost necesar, pentru o gestionare mai sigură a memoriei.

4. **Utilizarea `std::string`**: Toate șirurile de caractere de tip `char*` au fost înlocuite cu `std::string` pentru o manipulare mai eficientă și mai sigură a textului.

5. **Algoritmi STL**: Am înlocuit buclele de căutare, sortare, comparare și copiere cu funcții și algoritmi STL (`std::find`, `std::sort`, etc.) pentru a optimiza codul.

Aceste modificări îmbunătățesc siguranța și lizibilitatea codului, eliminând necesitatea gestionării manuale a memoriei și optimizând operațiunile comune cu ajutorul algoritmilor STL.

---