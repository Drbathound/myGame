#include <stdio.h>
#include <iostream>
#include <location.h>
#include <string>
using std::string;
class Map{
    private:
        int length;
        int width;
        Location playerloc();
        string map;
    public:
        Map();
        Map(int l, int w);
        string printMap();
        string emptyMap();
        void playerMove(int movL, int movR);

};