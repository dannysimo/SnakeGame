# SnakeGame - Lab03 Update

## Descriere
Acest proiect implementează o versiune îmbunătățită a jocului **Snake** folosind limbajul C++ și respectă cerințele lucrării de laborator **Lab03**. În această lucrare, au fost adăugați constructori, operatori și diverse funcționalități suplimentare pentru a îmbunătăți clasele utilizate în proiect.

## Modificări

### 1. Clasa `Point`
- Adăugat constructor de copiere și operatori de atribuire (`=`) și egalitate (`==`).
- Suport pentru input/output prin supraîncărcarea operatorilor `>>` și `<<`.

### 2. Clasa `Apple`
- Adăugat constructor de copiere și operatori de atribuire și egalitate.
- Suport pentru input/output pentru a citi și afișa poziția unui măr.

### 3. Clasa `Board`
- Adăugat constructor de copiere și operatori de atribuire și egalitate.
- Suport pentru input/output pentru a citi și afișa dimensiunile tablei de joc.

### 4. Clasa `Direction`
- Enum definit pentru direcțiile posibile: `Top`, `Left`, `Right`, `Bottom`.
- Suport pentru output prin supraîncărcarea operatorului `<<`.

### 5. Clasa `AbstractPainter` și `Painter`
- Definirea unei clase abstracte pentru funcții de desenare (`DrawImage`) și text (`WriteText`).
- Implementarea clasei `Painter` care moștenește `AbstractPainter`.