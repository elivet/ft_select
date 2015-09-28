# ft_select
Imperative programming, Rigor, Unix

note finale :
117 / 100

• Ecrire un programme "ft_select" qui prend en paramètre une série d’arguments.
La liste d’arguments s’affiche.

• L’utilisateur peut alors se déplacer dans la liste des arguments à l’aide des flèches
(la liste est circulaire).

• Un ou plusieurs choix peuvent être sélectionnés ou désélectionnés à l’aide de la
touche espace. A chaque sélection effectuée, le curseur doit automatiquement se
positionner sur l’élément suivant.

• Dès que l’utilisateur valide la sélection à l’aide de la touche return, la liste des
choix doit être renvoyée au shell. Les choix renvoyés devront être separés par
le caractère espace. Ceci permettra alors d’utiliser votre programme ft_select à
l’intérieur d’un script shell (pour faire un "set", par exemple).

• On doit pouvoir écrire les commandes suivantes :

$> set reponse = `ft_select choix1 choix2 choix3 choix4`
$> more `ft_select *.c`
$> rm `ft_select ~/*` 

• Vous devrez également gérer le redimensionnement de la fenêtre par l’utilisateur.
La liste doit s’afficher sur plusieurs colonnes si la taille de la fenêtre ne comporte
pas assez de lignes pour tout afficher en une seule colonne. Si l’utilisateur redimensionne
la fenêtre en cours d’utilisation, l’ensemble des choix doit se repositionner
automatiquement et les choix selectionnés doivent le rester. Le curseur de selection
doit être positionné de manière raisonnable après un redimensionnement.

• Si la fenêtre est trop petite pour tout afficher (pas assez de lignes et/ou de colonnes,
alors le programme doit réagir raisonnablement tant que la dimension de la fenêtre
n’est pas suffisante. En aucun cas il ne doit quitter. Lorsque la fenêtre est de
nouveau assez grande, le programme doit fonctionner de nouveau normalement.

• Si l’utilisateur appuie sur la touche echap, le programme ne doit rien renvoyer au
shell et terminer normalement.

• Si l’utilisateur appuie sur la touche delete ou backspace, l’élément sur lequel
pointe le curseur doit être effacé de la liste. S’il n’y a plus d’élément dans la liste,
le comportement est le même que si l’utilisateur avait appuyé sur la touche echap.

• choix non selectionné : texte normal.

• choix selectionné : texte video inversé.

• position curseur : texte souligné.

• choix selectionné + position curseur : texte video inversé souligné.

• Quelque soit le moyen par lequel votre programme se termine, la configuration
par defaut de votre terminal DOIT être restaurée. Oui, même après avoir reçu
un signal (sauf signaux qu’on ne peut pas intercepter, mais ca veut dire que votre
programme ne fonctionne pas de toute façon).

• On doit pouvoir interrompre votre programme avec un ctrl+z et le restaurer avec fg sans que cela influe sur son comportement.

• Si le programme est lancé avec un environnement vide, vous devez adopter un
comportement raisonnable.


Si vous avez réussi parfaitement la partie obligatoire, cette section propose quelques
pistes pour aller plus loin. Les bonus seront comptabilisés si vous validez la partie obligatoire.

• Les colonnes défilent de gauche à droite en fonction de la position du curseur quand
la fenêtre est trop petite.

• Après la terminaison du programme, ce qui doit l’être est effacé et le prompt
et le curseur apparaissent sur la ligne suivant l’appel du programme. Lancez la
commande tig pour voir ce que je veux dire. Pensez aux signaux !

• Une belle interface (c’est au correcteur de juger, pas à vous).

• Si les choix sont des fichiers, colorer selon l’extension (un peu comme ls -G sous
OSX).

• Positionnement du curseur lorsque l’on tape une séquence de caractères qui correspond
à un élément de la liste (recherche dynamique).
