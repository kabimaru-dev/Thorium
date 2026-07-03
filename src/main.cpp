#include <iostream>
#include <chrono>
#include <thread>

void blocked(int time_block){
  std::this_thread::sleep_for(std::chrono::seconds(time_block));
}

int main() {
  // const char* cstring = "Hello";
  char * password;
  int failattempts = 0;

  
  printf("\nWrite your password: ");

  while (true)
  {
    if (failattempts <= 2)
    {

      scanf("%s", &password);

      if (password == "12345678")
      {
        printf("\nWelcome To Home\n");
      } 
      else if (failattempts >= 2) 
      {
        int time_block = 1800;

        printf("\nBlocked for %d seconds\n", time_block);

        // printf("\nBlocked");
        // \n");

        blocked(time_block);

        failattempts = 0;

        printf("\nYou are unblocked. Please, write your password again: ");
      } 
      else 
      {
        printf("\nYou are fail log in, please try again: ");
        failattempts++;
      }
    } else {
      // int time_block = 10;
      // printf("\nBlocked" + 10 + '\n');
      printf("\nBlocked\n");

      failattempts = 0;
      // blocked(time_block);
    }
  }

  return 0;
}
