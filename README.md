# lmrok
an esoteric language consits of 4 keywords "lmrok brk lmkhzen l9je3", a number and string counter
- `lmrok` increases the string counter by 1
- `lmkhzen` increases the number counter by 1
- both counters are reset on each brk/l9je3 call
- `brk` prints the current char the string counter is pointing to
- `l9je3` prints the current number the number counter is pointing to
- the string counter is the same as english alphabet order but - 1 and with additional new line '\n' and a space ' ' chars 
- the number counter is `lmrok` N times (ig `lmrok lmrok lmrok` is just 3)
# Hello World example
```
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; 's' index is 19 so need to write 'lmrok' 18 times ; 
brk ; prints the current character the string counter is refering to ;
brk ; since the string counter is reset to 0 and 'a' is the begining of the alphabet we just print anyway without increasing ;
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; character 'l';
brk
brk
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; 'm'; 
brk

lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; prints space ;
brk
lmkhzen lmkhzen lmkhzen ; increases the number counter by 3 ;
l9je3 ; print the number the number counter is refering to which is '3' in this case ;
brk ; prints 'a' ;
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; prints 'l' ;
brk
brk ; prints 'a' ;
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; prints 'm'; 
brk
lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok lmrok ; prints the newline '\n' character ;
brk
```
output
```
salam 3alam
```

# compiling
- clone the repo
```bash
$ clang++ main.cpp -O lmrok`
$ lmrok hello.lmrok
```
