//2.
//Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called. 
//Demonstrate by toggling the value twice and printing the result each time.

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

    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p("My Playlist", "24-09-2026", false);

    cout << "Initial: " << boolalpha << p.isPublic << endl;

    p.togglePublic();
    cout << "After first toggle: " << p.isPublic << endl;

    p.togglePublic();
    cout << "After second toggle: " << p.isPublic << endl;

    return 0;
}
