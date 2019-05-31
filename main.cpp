#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Astar
{
public:

      std::vector<std::vector <int> > tab (7,vector<int>(7));


   void wczytaj()
   {
       std::ifstream plik;
        plik.open("tab.txt");
        int a;
        int i=0, j=0;
        while(i<7)
        {
            while(j<7)
          {
              std::cin.get(int)>>a;
              tab[i][j];
              j++;
          }
            i++;
        }
        plik.close();

   }



};


int main()
{
    Astar astar;
    astar.wczytaj();
}



