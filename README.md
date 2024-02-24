# ConjectureSyracuse
Code permettant d'expérimenter avec la conjecture de Syracuse.

Une suite de Syracuse est une suite d'entiers naturels définie de la manière suivante : on part d'un nombre entier strictement positif ; s’il est pair, on le divise par 2 ; s’il est impair, on le multiplie par 3 et l'on ajoute 1. En répétant l’opération, on obtient une suite d'entiers strictement positifs dont chacun ne dépend que de son prédécesseur.

Après que le nombre 1 a été atteint, la suite des valeurs 1, 4, 2, 1, 4, 2… se répète indéfiniment en un cycle de longueur 3, appelé cycle trivial.

Techniquement, il est possible qu'avec certaines valeurs de départ on n'atteigne jamais 1 mais pour l'instant on ne n'en a pas trouvé.

Ce code permet d'expérimenter avec différente valeur de départ.
