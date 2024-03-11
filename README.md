README
Description:
    Projet techdev outtilage de Feehan Noah,
    Contient le projet FizzBuzz séparé en deux fichiers.c et un header,
    le fichier sorting.c contient le boucle for et créer un string qui est passé au fichier mainFizz pour être imprimé.
    Contains the FizzBuzz project separated into two .c folders and a header,
    the sorting.c file has the for loop and creates the string that the mainFizz.c file will use to print the result.

Instructions:
    Seulement le fichier mainFizz.c contient un main, le scanf et printf, c'est le seul où il faut intéragir avec.
    Only the mainFizz.c file contains a main, the input and printf, it is the only one you need to interact with.
    Archive command: 
        git archive --format=zip --output=techdev-projet-outillage-FeehanNoah.zip HEAD techdev-projet-outillage-FeehanNoah
    Clean Command:
        git clean -nX techdev-projet-outillage-FeehanNoah
    General usage Valgrind check:
        valgrind --leak-check=full --show-leak-kinds=all ./your_program_executable techdev-projet-outillage-FeehanNoah