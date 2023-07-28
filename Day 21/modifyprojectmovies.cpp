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
    cout << "1 for add movie" << endl;
    cout << "2 for increase watchcount" << endl;
    cout << "3 for perticular movie detail with name" << endl;
    cout << "4 for movies detail with rating" << endl;
    cout << cout << "7 for display all the movies with full detail" << endl;
    cout << "5 for exit" << endl;
    int choise{0};
    while (choise != 5)
    {
        cout << "enter your choise" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "enter your choise:  :=";
            std::string nam, rat;
            cin >> nam;
            cout << "enter movie rating:  :=";
            cin >> rat;
            int atc;
            cout << "enter watch count  :=";
            cin >> atc;
            if (addmovie(nam, rat, atc))
            {
                cout << ""
            }
        }
    }
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