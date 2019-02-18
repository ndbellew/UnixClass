 #include <iostream>
 #include <iomanip>
 #include <string>
 #include <unistd.h>
 
 using namespace std;
 
 int submain1(string message, int index);
 int submain2(string message, int index);
 
 int main(int argc, char** argv)
 {
 int pid;
 pid=fork();
 
 if(pid > 0){
    for(int i = 0; i < 10; i++){
      submain1("Main One Works!", i);
      usleep(50);
    }
  }

  else{
    for(int i = 0; i < 10; i++){
      submain2("Main Two works!", i);
      usleep(20);
    }
  }

  return 0;
}

int main1(string message, int index){
  cout << "Main 1: " << message + " " << index << std::endl;
  return 0;
}

int main2(string message, int index){
  cout << "Main 2:" << message + " " << index << std::endl;
  return 0;
}
