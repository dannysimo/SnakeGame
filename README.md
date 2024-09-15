# SnakeGame

## Descrierea Proiectului

SnakeGame este o implementare simplificată a jocului clasic "Snake". În acest joc, jucătorul controlează un șarpe care se mișcă pe o tablă și trebuie să mănânce fructe pentru a crește în lungime. Obiectivul este să eviți coliziunile cu pereții și cu propria coadă, în timp ce acumulezi puncte.

## Regulile Jocului Snake

1. Mișcare: Șarpele se mișcă într-o direcție constantă și poate fi schimbat pentru a merge în sus, jos, stânga sau dreapta.
2. Scopul: Mănâncă fructele care apar aleatoriu pe tablă pentru a crește lungimea șarpelui.
3. Coliziuni: Dacă șarpele se lovește de pereți sau de propria coadă, jocul se termină.

## Fișierele Codului

### `Point.hpp`

- Scop: Definește o structură de bază numită `Point`, care reprezintă un punct în spațiu cu coordonate `x` și `y`. Este utilizată pentru a stoca pozițiile pe tablă (de exemplu, poziția șarpelui sau a fructelor).
- Structura `Point`: Conține două variabile, `x` și `y`, care definesc coordonatele unui punct în spațiul de joc. Include un constructor implicit și unul cu parametri pentru inițializarea coordonatelor.

### `Board.hpp`

- Scop: Reprezintă tabla de joc și definește dimensiunile acesteia. Oferă metode pentru a obține lățimea și înălțimea tablei, care sunt esențiale pentru gestionarea limitelor de mișcare ale șarpelui.
- Clasa `Board`: Include variabilele `width` și `height`, care definesc dimensiunile tablei, și metodele `GetWidth` și `GetHeight` pentru a returna aceste dimensiuni.

### `Snake.hpp`

- Scop: Reprezintă șarpele și gestionează comportamentul său în joc. Stochează segmentele șarpelui și oferă funcționalități pentru mișcare și creștere.
- Clasa `Snake`: Utilizează un array de tip `Point` pentru a stoca segmentele șarpelui. Include un constructor pentru inițializarea șarpelui, metoda `Move` pentru mișcare, `Grow` pentru a crește lungimea șarpelui și `GetHeadPosition` pentru a obține poziția capului șarpelui.
