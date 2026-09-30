//1.
//Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). 
//Instantiate an object of Playlist and print all its properties.

#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool publicStatus) {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
    }
};

int main() {
    Playlist p("My Favorites", "24-09-2026", true);

    cout << "Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Is Public: " << boolalpha << p.isPublic << endl;

    return 0;
}
