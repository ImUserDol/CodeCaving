The code changes on the fly, outputting to the error stream (highlighted in red) instead of the standard stream as in the code.
Код изменяется на лету, выводя результаты в поток ошибок (выделено красным цветом) вместо стандартного потока, как в коде.

# Для компиляции:
# For compile:
```
g++ -O0 -fno-pie -no-pie -fno-asynchronous-unwind-tables -fno-stack-protector -o a.out main.cpp
```
