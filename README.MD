# Snake Game - Schimbări în Cod

În această versiune a proiectului Snake, am realizat următoarele modificări importante în cod:

## 1. Organizarea codului
Am organizat proiectul în directoare pentru o structură mai clară:
- `src/`: Conține fișierele sursă `.cpp` pentru logica jocului.
- `include/`: Conține fișierele de header `.hpp` pentru declarațiile claselor și funcțiilor.
  
## 2. Implementarea claselor
Am adăugat fișiere pentru gestionarea elementelor din joc:
- **Apple (`apple.hpp` și `apple.cpp`)**: Clasa care gestionează poziția și comportamentul mărului din joc.
- **Board (`board.hpp` și `board.cpp`)**: Clasa care se ocupă de tabla de joc, inclusiv dimensiunile și desenarea acesteia.
- **Point (`point.hpp` și `point.cpp`)**: Structura pentru a reprezenta coordonatele (x, y) ale elementelor pe tabla de joc.
- **Snake (`snake.hpp` și `snake.cpp`)**: Clasa care definește comportamentul șarpelui, inclusiv mișcarea și creșterea acestuia.

## 3. Makefile
Am modificat Makefile-ul pentru a compila corect fișierele sursă și pentru a lega bibliotecile necesare. Makefile-ul include acum:
- Construirea fișierelor obiect din fișierele sursă.
- Crearea bibliotecilor statice și dinamice.
- Generarea executabilului `app`.
  
## 4. Curățare fișiere temporare
Am adăugat comanda `make clean`, care șterge fișierele obiect, bibliotecile și executabilul pentru o recompilare complet curată.
