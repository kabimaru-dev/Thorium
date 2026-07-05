#include <iostream>
#include <chrono>
#include <thread>
#include <string>

void blocked(int time_block);

void entrance_to();

int main() {
  std::string password;
  int failattempts = 0;
  bool entrance = false;
  
  std::cout << "Write your password: \n";

  do
  {
    std::cin >> password;
    
    if (password == "12345678" && failattempts <= 2) {
      entrance = 1;
    } 
    else if (failattempts >= 2) {
      int time_block = 3;
      std::cout << "\nBlocked for " << time_block << " seconds\n\n";

      blocked(time_block);
      failattempts = 0;

      std::cout << "You are unblocked. Please, write your password again: \n";
    } 
    else {
      std::cout << "You are fail log in, please try again: \n";
      failattempts++;
    }

  } while (!entrance);

  std::cout << "\nWelcome To Home\n";
  entrance_to();

  return 0;
}

void blocked(int time_block){
  std::this_thread::sleep_for(std::chrono::seconds(time_block));
}

void entrance_to(){
  while (true)
  {
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ cd ~/Downloads \n");
    blocked(1);
    printf("[User@Thorium Downloads] $ \n");
    blocked(1);
    printf("[User@Thorium Downloads] $ find ./ -name \"Thorium\" 2>/dev/null \n");
    blocked(1);
    printf("/home/User/Downloads/Thorium \n");
    blocked(1);
    printf("[User@Thorium Downloads] $ \n");
    blocked(1);
    printf("[User@Thorium Downloads] $ cd \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
    blocked(1);
    printf("[User@Thorium ~] $ \n");
  }  
}