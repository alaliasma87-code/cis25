#include <iostream>
#include <list>
using namespace std;

// Base Class
class YouTubeChannel {
protected:
    string Name;
    int ContentQuality;
public:
    YouTubeChannel(string name) {
        Name = name;
        ContentQuality = 0;
    }
    void CheckAnalytics() {
        if (ContentQuality < 5)
            cout << Name << " has bad quality content." << endl;
        else
            cout << Name << " has great content!" << endl;
    }
};

// Derived Class 1
class CookingChannel : public YouTubeChannel {
public:
    CookingChannel(string name) : YouTubeChannel(name) {}
    void Practice() {
        cout << Name << " is practicing cooking new recipes..." << endl;
        ContentQuality++;
    }
};

// Derived Class 2
class SingersChannel : public YouTubeChannel {
public:
    SingersChannel(string name) : YouTubeChannel(name) {}
    void Practice() {
        cout << Name << " is taking singing and dancing classes..." << endl;
        ContentQuality++;
    }
};

int main() {
    CookingChannel cookingChannel("Amy's Kitchen");
    SingersChannel singersChannel("John Sings");

    cookingChannel.Practice();
    singersChannel.Practice();
    singersChannel.Practice(); // practicing more to show polymorphism

    // Using Pointers for Polymorphism
    YouTubeChannel* yt1 = &cookingChannel;
    YouTubeChannel* yt2 = &singersChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
