
// Funkcja sprawdzająca formacje dwóch oczu na planszy Go
int dwojeoczu(plansza* stol)
 {
    int ile_formacji = 0;
    char pionek = stol->gracz_na_ruchu;
 for(int i = 0 ; i < wiersze * kolumny ; i++)
 {
    if(i % kolumny == kolumny - 1 && stol->wartosci[i] == pionek )  //Sprawdzanie czy jest przy prawej krawędzi i czy X
    {
       if(stol->wartosci[i - 1] == pionek && stol->wartosci[i - 1 + kolumny] == pionek && stol->wartosci[i - 1 + 2*kolumny] == pionek && stol->wartosci[i + 2*kolumny] == pionek && stol->wartosci[i - 1 + 3*kolumny] == pionek && stol->wartosci[i - 1 + 4*kolumny] == pionek&& stol->wartosci[i + 4*kolumny] == pionek) ile_formacji++;
    }
    if(i % kolumny == 0 && stol->wartosci[i] == pionek)  //Sprawdzanie czy jest przy lewej krawędzi  
    {
         if(stol->wartosci[i + 1] == pionek && stol->wartosci[i + 1 + kolumny] == pionek && stol->wartosci[i + 1 + 2*kolumny] == pionek && stol->wartosci[i + 2*kolumny] == pionek && stol->wartosci[i + 1 + 3*kolumny] == pionek && stol->wartosci[i + 1 + 4*kolumny] == pionek&& stol->wartosci[i + 4*kolumny] == pionek) ile_formacji++;
    }
    if(i < kolumny && stol->wartosci[i] == pionek)    //Sprawdzanie czy jest przy górnej krawędzi
    {
        if(stol->wartosci[i + kolumny ] == pionek && stol->wartosci[i + kolumny + 1] == pionek && stol->wartosci[i + kolumny + 2 ] == pionek && stol->wartosci[i + 2 ] == pionek && stol->wartosci[i + kolumny + 3] == pionek&& stol->wartosci[i + kolumny + 4] == pionek && stol->wartosci[i + 4] == pionek) ile_formacji++;
    }
    if(i > kolumny * (kolumny - 1) && stol->wartosci[i] == pionek) //Sprawdzanie czy jest przy dolnej krawędzi
    {
        if(stol->wartosci[i - kolumny ] == pionek && stol->wartosci[i - kolumny + 1] == pionek && stol->wartosci[i - kolumny + 2] == pionek && stol->wartosci[i + 2] == pionek&& stol->wartosci[i - kolumny + 3] == pionek && stol->wartosci[i - kolumny + 4] == pionek&& stol->wartosci[i + 4] == pionek ) ile_formacji++;
    }
 }
    return ile_formacji;
}


int schody(plansza* stol) // symetryczne schody
 {
     int ile_formacji = 0;
    char pionek = stol->gracz_na_ruchu;
    for(int i = 0 ; i < kolumny * wiersze ; i++)
    {
        if(stol->wartosci[i] == pionek)
        {
            if (stol->wartosci[i - kolumny - 1] == pionek && stol->wartosci[i - 2 * kolumny - 2] == pionek && stol->wartosci[i - kolumny + 1] == pionek && stol->wartosci[i - 2 * kolumny + 2] == pionek ) ile_formacji++;
            if (stol->wartosci[i - kolumny + 1] == pionek && stol->wartosci[i - 2 * kolumny + 2] == pionek && stol->wartosci[i + kolumny + 1] == pionek && stol->wartosci[i + 2 * kolumny + 2] == pionek ) ile_formacji++;
            if (stol->wartosci[i + kolumny - 1] == pionek && stol->wartosci[i + 2 * kolumny - 2] == pionek && stol->wartosci[i + kolumny + 1] == pionek && stol->wartosci[i + 2 * kolumny + 2] == pionek ) ile_formacji++;
            if (stol->wartosci[i + kolumny + 1] == pionek && stol->wartosci[i + 2 * kolumny + 2] == pionek && stol->wartosci[i - kolumny + 1] == pionek && stol->wartosci[i - 2 * kolumny + 2] == pionek ) ile_formacji++;
        }
    }
    return ile_formacji;
}


