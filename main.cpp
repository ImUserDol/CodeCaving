#include <cmath>
#include <iostream>
#include <unistd.h>
#include <sys/mman.h>

union Datta {
    volatile unsigned long long* forShellCode;
    volatile unsigned* forAnyShell;
    volatile unsigned char* forShell;
    void* forPerms;
    volatile unsigned long long forPlus;
};



int main() {
    volatile int fdSh = 0;
    volatile Datta dq{reinterpret_cast<volatile unsigned long long*>(main)};
    dq.forPlus = static_cast<unsigned long long>(std::floor(dq.forPlus/4096))*4096;
    mprotect(dq.forPerms, sizeof(dq.forPerms), PROT_READ|PROT_WRITE|PROT_EXEC);
    dq.forShellCode = reinterpret_cast<volatile unsigned long long*>(main);
  // (1:)
    dq.forPlus+=154;
    *dq.forAnyShell = 0x02F445C7;
    // Закомментируйте текст помеченный (1:) выше и раскомментируйте данный текст, чтобы вывести текст скомпилировав как написано в README
    // Comment out the text marked (1:) above and uncomment this text to output the text compiled as written in README.
    // dq.forPlus+=148;
    // *dq.forShell = 0x02;
    fdSh = 1;
    write(fdSh, "hello world\n", 12);
    return 0;
}
