#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
#include "kernel/riscv.h"
// Required includes .. I think
int
main(int argc, char *argv[])
{
  char* addr = sbrk(0);// End of program
  sbrk(1024); // extend our program to swallow the floating data
  int i = 32; // Explained later
  while(addr[i] != '\0' ){ // Read one string using string semantics
    printf("%c", addr[i]); // Print it
    i++;
  }
  exit(0); // adieu
}
