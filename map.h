#include <stdio.h>
#include <iostream>
#include <location.h>
#include <string>
using std::string;
class Map{
    private:
        int length = 0;//keeps track of the length of the map
        int width = 0;//keeps track of the heighth of the map
        Location playerloc();//Location object keeps track of player location
        string map;//string that represents the map, player and all, will be converted
                    //to an array and back at runtime
    public:
        /**
         * param: none
         * pre: none
         * post: creation of Map object
         * returns: none
         * Constructor of a Map object with no length and no width
         */
        Map();
        /**
         * param: l int that will be asigned to length
         * param: w int that will be assigned to width
         * pre: l > 0
         * pre: w > 0
         * post: creation of Map object
         * post: length = l
         * post: width = w
         * returns: none
         * Constructor of a Map object and assigning length and width
         *      to passed ints
         */
        Map(int l, int w);
        /**
         * param: none
         * pre: length must be initialized
         * pre: width must be initialized
         * post: length unchanged
         * post: width unchanged
         * returns: string formatted representative of the game layout
         * converts the game map into a string, formats it, and returns the map
         * 
         */
        string printMap();
        /**
         * param: movH int the number of spaces the player will move horizontally
         * param: movV int the numbre of spaces the player will move to the vertically
         * pre: movL > -length && < length
         * pre: movR > -width && < width
         * post: player.x = player.x + movh
         * post: player.y = player.y + movV
         * returns: void
         * Changes the location of the player in the map based on the passed ints
         */
        void playerMove(int movH, int movV);
        /**
         * param: none
         * pre: none
         * post: length unchanged
         * returns: int that is the length
         * Returns the length of the map
         */
        int getlength();
        /**
         * param: none
         * pre: none
         * post: width unchanged
         * returns: int that is the width
         * Returns the width of the map
         */
        int getwidth();

};
