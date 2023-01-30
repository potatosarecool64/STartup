#include <iostream>
using namespace std;

class grid {
   private:
     char axis[7][7];
   public:
     void fill(bool &direction, int &swimm);
     void display();
   };
   bool direct;
   grid box;
   int swim;

int main() {
  swim = 0;
  direct = true;
  while (swim != -1) {
  box.fill(direct, swim);
  box.display();
  system("CLS");
 }
}
void grid::fill(bool &direction, int & swimm) {
  int i, j;

  for (i = 0; i < 7; i++) {
    for (j = 0; j < 7; j++) {
      if (swimm == i && j == 4) {
        this->axis[i][3] = 'x';
      }
      switch (i) {
        case 0:
        this->axis[i][j] = '-';
        break;
        case 6:
        this->axis[i][j] = '-';
        break;
        default:
          switch (j) {
            case 0:
            case 2:
            case 4:
            case 6:
            this->axis[i][j] = '|';
            break;
            default:
            this->axis[i][j] = ' ';
          }
       }
     }
   }
   if (direction) {
     swimm++;
   } else {
     swimm--;
   }
   if (swimm == 1) {
     direction = true;
   } else if (swimm == 5) {
     direction = false;
   }
 }
void grid::display() {
  int i;
  for (i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      cout << this->axis[i][j];
    }
    cout << endl;
  }
}
