# SnakeGame

**Autor:** Rotaru Daniel  
**An:** 2024  

## Descrierea proiectului

SnakeGame este un joc clasic în care utilizatorul controlează un șarpe pentru a colecta mere și a evita coliziunile. Jocul a fost implementat în C++ utilizând o structură modulară, cu clase precum `Point`, `Board`, `Snake` și altele.

## Regulile jocului

1. Jucătorul controlează șarpele folosind tastele săgeți.
2. Obiectivul jocului este să colectezi mere și să obții un scor cât mai mare.
3. Jocul se termină dacă șarpele:
   - Se lovește de pereții tablei de joc.
   - Se lovește de propriul corp.

## Schimbări aduse proiectului

- Adăugarea documentației detaliate folosind Doxygen.
- Implementarea testelor pentru clasele principale (`Point`, `Snake`).
- Adăugarea unui **Makefile** pentru gestionarea compilării și testării.
- Organizarea fișierelor sursă și a directoarelor proiectului.

## Dependențe

Pentru a compila și rula proiectul, sunt necesare:
- Compilator **g++**.
- Utilitarul **Make** pentru rularea automatizată a comenzilor.
- **Doxygen** pentru generarea documentației.
