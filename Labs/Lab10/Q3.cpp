#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Position {
private:
    int x, y, z;
public:

    Position(int x1, int y1, int z1) {
        x = x1;
        y = y1;
        z = z1;
    }

    //setters
    void setX(int i) {
        x = i;
    }
    void setY(int i) {
        y = i;
    }
    void setZ(int i) {
        z = i;
    }

    //getters
    int getX() { return x; }
    int getY() { return y; }
    int getZ() { return z; }

};

class Airplane {
    static int numPlanes;
    int ID;
    string airline;
    Position *p;
    string type; //military or civil

public:
    Airplane(string typ, string Airline_name, int x, int y, int z ) {
        numPlanes++;
        ID = numPlanes;
        p = new Position(x, y, z);
        type = typ;
        airline = Airline_name;
    }
    //getters
    int getX() { return p->getX(); }
    int getY() { return p->getY(); }
    int getZ() { return p->getZ(); }

    string getAirlineName() { return airline; }
    string gettype() { return type; }


    //setters
    void setAirlineName(string a) { airline = a; }
    void settype(string t) { type = t; }

    void setX(int i) {
        p->setX(i);
    }
    void setY(int i) {
        p->setY(i);
    }
    void setZ(int i) {
        p->setZ(i);
    }


    //member functions
    void printInfo() {
        cout << "ID = " << ID << "    type - " << type << "  airline name - " << airline << " position: " << p->getX() << " " << p->getY() << " " << p->getZ() << endl;
        
    }

    int distance(Airplane a) {
        return sqrt((a.getX() - p->getX()) * (a.getX() - p->getX()) + (a.getY() - p->getY()) * (a.getY() - p->getY()) + (a.getZ() - p->getZ()) * (a.getZ() - p->getZ()));
    }

};


class Zone {
private:
    Position* zPtr;
    Airplane* planes[20];
    int activeplanes=0;
    static int numZones;
    int r;
public:
    Zone(int x, int y, int z, int rad) {
        activeplanes = 0;
        numZones++;
        r = rad;
        zPtr = new Position(x, y, z);
    }

    //setters
    void setRadius(int i) {
        r = i;
    }
    void setX(int i) {
        zPtr->setX(i);
    }
    void setY(int i) {
        zPtr->setY(i);
    }
    void setZ(int i) {
        zPtr->setZ(i);
    }

    //member functions

    void addPlane(Airplane* p) {
        if (activeplanes < 20) {
            planes[activeplanes] = p;
            activeplanes++;
        }
        else {
            cout << "more than 20 planes in the zone\n";
        }
    }

    void checkPlanes() {
        for (int i = 0; i < activeplanes; i++) {
            for (int j = 0; j < i; j++) {
                if (planes[i]->distance(*planes[j]) < 2) {
                    cout << "planes are close to each other\n";
                }
            }
        }
    }

    ~Zone() {
        delete[] zPtr;
        delete[] planes;
    }

};

int Zone::numZones = 0;
int Airplane::numPlanes = 0;

int main()
{
    Zone z(1, 1, 1, 10);

    Airplane A("civil", "kitri", 1, 1, 2);

    z.addPlane(&A);
   

    return 0;
}
