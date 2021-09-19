# 6GEI311_Lab1

##Description
Cours: 6GEI311 - Architecture des Logiciels
Laboratoire 1: Introduction à DirectShow et à des composantes COM
Auteurs: Raphaëlle Martin (MARR24569507) et David-Emmanuel Perron-Chouinard (PERD17119702)

##Instructions d'utilisation:
Le programme est compilé directement dans Visual Studio.
Avant d'exécuter le programme:
-Aller dans le fichier main.cpp à la ligne #8
-Modifier la ligne afin qu'elle contienne l'emplacement du ficher "Exemple.alv",voir exemple ci-dessous:
    wstring path_input = L"PATH_TO_FILE/Example.avi";

##Dépendances:
L'utilisateur doit avoir "DirectShow" installé sur son ordinateur.


##Guide d'utilisation
Lors de l'exécution du programme les commandes: P, A, R et Q peuvent être entrées dans la console ouverte par Visual Studio lors de l'exécution du programme.

Appuyer sur la touche P pause la vidéo si elle jouait et la fait jouer si elle était pausée
Appuyer sur la touche A met la vitesse de la vidéo à 2x le rythme normal si elle était au rythme normal. Si la vidéo était déjà accélérée, cette touche remet sa vitesse à la normale
Appuyer sur la touche R recommence la vidéo au début
Appuyer sur la touche Q ferme le programme


