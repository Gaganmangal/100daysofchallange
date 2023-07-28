#include <iostream>
#include <string>
#include <vector>
#include "movie.h"
using namespace std;
bool addmovie(std::string mn, std::string mr, int w);
bool incwatch(std::string demostr);
void displaymovies();
vector<movie> movies;
int main()
{
    displaymovies();
    if (addmovie("Big", "PG-13", 2))
    {
        cout << "movie added sucessfully" << endl;
    }
    if (addmovie("star war", "PG", 12))
    {
        cout << "movie added sucessfully" << endl;
    }
    displaymovies();
    if (incwatch("star war"))
    {
        cout << "increment done" << endl;
    }
    displaymovies();

    return 0;
}

bool addmovie(std::string nm, std::string mr, int w)
{
    for (const movie &movie : movies)
    {
        if (movie.get_name() == nm)
        {
            return false;
        }
    }
    movie temp{nm, mr, w};
    movies.push_back(temp);
    return true;
}

bool incwatch(std::string demostr)
{
    for (movie &movie : movies)
    {
        if (movie.get_name() == demostr)
        {
            movie.increase_watchcount();
            return true;
        }
    }
    return false;
}
void displaymovies()
{
    if (movie::count != 0)
    {
        for (const movie &movie : movies)
        {
            movie.display_all_detail();
            cout << "=============================================" << endl;
        }
    }
    else
    {
        cout << "sorry there is nop record hase been recorded" << endl;
    }
}