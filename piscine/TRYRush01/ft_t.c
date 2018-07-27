/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_t.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 17:31:01 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/14 18:56:03 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define INCONNU 0

int grille[81];
int compteur_noeuds;

/* Lire la grille sur stdin. La grille est codée avec uniquement les
   caractères 0->9 et . pour une case inconnue. Les autres caracteres
   sont ignores. */
void lire_grille()
{
  int k = 0;
  
  while (k < 81) {
    char c = getchar();
    if (c >= '1' && c <= '9')
      grille[k++] = c-'0';
    else if (c == '.')
      grille[k++] = INCONNU;
    else if (c == EOF) {
      fprintf(stderr, "Lecture de la grille : mauvais format\n");
      exit(1);
    }
  }
}

/* afficher la grille courante sur stdout */
void afficher_grille()
{
  int c, l;
  
  for (l = 0; l < 9; l++) {
    for (c = 0; c < 9; c++) {
      int k = l*9+c;
      if (grille[k] == INCONNU)
	printf(".");
      else
	printf("%c", grille[k]+'0');
    }
    printf("\n");
  }
  printf("\n");
}

/* verifier toutes les contraintes qui font intervenir la case i */
int verifier_constraintes(int i)
{
  int l = i / 9, c = i % 9;
  int lb = l / 3, lr = l % 3;
  int cb = c / 3, cr = c % 3;
  int l2, c2, lr2, cr2;
  
  /* verifier la colonne contenant la case i */
  for (l2 = 0; l2 < 9; l2++)
    if (l2 != l && grille[l2*9+c] == grille[i])
      return 0;
  
  /* verifier la ligne contenant la case i */
  for (c2 = 0; c2 < 9; c2++)
    if (c2 != c && grille[l*9+c2] == grille[i])
      return 0;
  
  /* verifier la region (carre 3x3) contenant la case i */
  for (lr2 = 0; lr2 < 3; lr2++)
    for (cr2 = 0; cr2 < 3; cr2++)
      if ((lr2 != lr || cr2 != cr) && grille[(lb*3+lr2)*9+(cb*3+cr2)] == grille[i])
	return 0;
  
  return 1;
}

/* resolution par backtracking, en supposant que toutes les cases
   d'indices j<i ont deja ete remplies */
void backtrack(int i)
{
  if (i == 81) {
    afficher_grille();/* afficher la solution */
    return;
  }
  
  if (grille[i] != INCONNU) {
    backtrack(i+1);/* case deja remplie */
    return;
  }
  
  compteur_noeuds++;
  for (grille[i] = 1; grille[i] <= 9; grille[i]++)
    if (verifier_constraintes(i))
      backtrack(i+1);
  grille[i] = INCONNU;/* laisser la grille dans l'etat ou on
			 l'a trouvee en entrant */
}

int main()
{
  lire_grille();
  afficher_grille();
  backtrack(0);
  printf("%d noeuds cherches\n", compteur_noeuds);
  return 0;
}
