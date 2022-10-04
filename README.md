Gilles Coutard
I Fork ()

Vous pouvez exécuter ce TP sur weblinux.remisharrock.fr ou en salle de TP. LA seconde option est fortement recommandée.

Compilez le code suivant (appelez le fichier hellofork.c par exemple).

    #include <stdio.h> 
    #include <unistd.h> 
    int i=0; 
    int main(int argc, char* argv[]){ printf("Bonjour\n"); 
    fork();
    printf("Au revoir 1!\n"); 
    fork(); 
    printf("Au revoir 2!\n"); 
    return 0;}

    1 . Combien de processus ont été alloués par le système d'exploitation pour exécuter ce programme (a priori 1 au moins mais peut être plus) ?

        Il y a 6 processus d'alloués par le systéme sachant que la fonction fork()    
        Clone the calling process, creating an exact copy.


    2 . Le lien de parenté entre processus défini un arbre, quel est la forme de l'arbre (un noeud par processus et un arc entre un parent et sa descendance)
    3 . On voit plusieurs fois s'afficher Au revoir 2!, Peut on dire (sans modifier le code) quel processus est responsable de l'affichage de 1) la première occurrence de Au revoir 2!, 2) la seconde ? (réponse oui non attendue... si vous ne savez pas posez moi la question ou cf en bas du tp)
    4 . Exécutez la ligne de commande suivante pour pouvoir utiliser l'application ltrace : export PATH=$PATH:/cal/homes/trobert/tool/.
    5 . Puis, en supposant que vous avez généré le fichier binaire hellofork, exécutez ltrace -f ./hellofork  pour déterminer quels processus a affiché quoi et quand ? (nota à la compilation printf peut être remplacé par puts, donc vous devrez rechercher l'une ou l'autre, ltrace peremt de voir quand et quelles fonctions sont appelée dans un processus). 
    6 . Est ce que l'ordre d'affichage des différents processus est toujours le même ? (relancez plusieurs fois la commande ltrace -e "p*" -f ./hellofork pour se concentrer sur les fonctions d'affichage printf et puts ). Quel composant du système d'exploitation fixe cet ordre ? ( réponse en bas du sujet de TP)
    7 . Modifiez la ligne printf("Au revoir 1!") et remplacez la par printf("Au revoir i =%d\n", i++);. Recompilez et répétez la commande ltrace -e "p*" -f ./hellofork# tp01hellofork
