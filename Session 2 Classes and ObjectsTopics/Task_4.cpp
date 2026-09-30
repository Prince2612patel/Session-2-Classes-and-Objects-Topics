//4.
//Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. 
//Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> 
//Initialize songs as an empty array inside the constructor.</em>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string date, bool publicStatus) {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
    }

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }
};

int main() {
    Playlist p("My Playlist", "24-09-2026", true);

    p.addSong("Perfect");
    p.addSong("Believer");
    p.addSong("Shape of You");

    cout << "Songs in Playlist:" << endl;

	for(int i=0 ; i<p.songs.size() ; i++)
	{
		cout<<p.songs[i]<<endl;
	}

    return 0;
}
