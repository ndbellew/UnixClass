#include <dirent.h>
#include <iostream>
#include <iomanip>
using namespace std;
int showDirectory(char *dir) {
    DIR *pdir;
    struct dirent *pent;
    pdir = opendir (dir); 
    if (pdir == NULL) { 
        cerr<< "ERROR! pdir could not be initialised correctly" << endl;
        return 2; 
    }
    while (pent = readdir (pdir)){
        if (pent == NULL) 
        { 
            cerr<< "ERROR! pent could not be initialised correctly" <<endl;
            return 3;
        }
        if (pent->d_name[0]!='.')
          cout << pent->d_name << endl;
    }
    cout << endl;
    closedir(pdir);
    return 0;
}
int main(int argc,char **argv) {
    if (argc<2) {
        cerr << "myls <directory>" << endl;
        return 1;
    }
    showDirectory(argv[1]);
    return 0;

}
