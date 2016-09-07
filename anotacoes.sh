

# opcao para getch()
getchar();


# Compilar C automaticamente no eclipse
Either do Build All and then compile :)
Install G++ Compiler
Windows->Preferences->NEW CDT PRoject-> Makefile-> Binary Parsers-> Choose Cywin or Window PE depending on your Os :)
Change your toolchain to cywin gcc
Project->Properties->Environment-> Release Active

c/c++ build > settings > binary parsers > 
Gygwin PE
GNU Elf Parser


 __fpurge(stdin);



scanf desconsiderando o enter
scanf(" %c", &letra);