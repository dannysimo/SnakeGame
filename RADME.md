# Snake Game

## Descriere
Acesta este un joc simplu Snake scris în C++, utilizând un mecanism de construire bazat pe Makefile. Jocul se desfășoară pe o tablă și permite utilizatorului să controleze un șarpe care se îngrașă cu fiecare măr consumat.

## Structura Proiectului
Proiectul conține următoarele fișiere:

- **`apple.cpp`**: 
  - Conține implementarea clasei `Apple`, care reprezintă mărul pe tablă. Include metode pentru inițializarea mărului și obținerea poziției acestuia.

- **`board.cpp`**: 
  - Implementează funcțiile din clasa `Board`, care gestionează dimensiunile tablei de joc și verifică dacă o poziție dată este în afara limitelor tablei.

- **`direction.cpp`**: 
  - Acest fișier definește enumerația `MoveDirection`, care specifică direcțiile în care se poate mișca șarpele: sus, jos, stânga și dreapta.

- **`game_engine.cpp`**: 
  - Conține implementările pentru clasa `GameEngine`, care se ocupă de inițializarea jocului și rularea acestuia. Aceasta este inima jocului, gestionând logica principală.

- **`painter.cpp`**: 
  - Oferă funcții pentru desenarea elementelor pe tablă și pentru a scrie text pe ecran, facilitând interfața utilizatorului.

- **`point.cpp`**: 
  - Implementarea clasei `Point`, care gestionează coordonatele pe tablă, oferind metode pentru inițializare și manipulare.

- **`snake.cpp`**: 
  - Implementează logica pentru clasa `Snake`, care reprezintă șarpele. Acest fișier conține metode pentru mișcarea șarpelui, extinderea acestuia și verificarea coliziunilor cu marginile tablei sau cu propriul corp.

- **`main.cpp`**: 
  - Punctul de intrare al aplicației. Aici este creat un obiect al clasei `GameEngine`, iar jocul este inițializat și pornit.