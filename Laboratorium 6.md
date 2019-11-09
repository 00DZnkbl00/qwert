# Zadania
* [ ] 1. W pliku plik.txt znajdź wiersze zawierające co najmniej jeden znak.
```
grep -n "." plik.txt
```
* [ ] 2. Znajdź w plikach pl* wiersze rozpoczynające się od cyfry.
```
grep -in "^[0-9]" pl*
```
* [ ] 3. Znajdź pliki, zawierające wiersz w którym na 9 pozycji występuje litera r.
```
egrep -l "^........r" *
```
* [ ] 4. Policz, ilu użytkowników systemu używa powłoki bash (zgodnie z zapisami w pliku /etc/passwd).


* [ ] 5. Znajdź wiersze zawierające liczby rzymskie w pliku plik.txt.
