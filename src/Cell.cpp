#include "Cell.h"

using namespace std;

Cell::Cell(int x, int y) : m_x(x), m_y(y)
{
/**
  *\ Methode permettant la construction d'une cellule
  *\ param x est la premiere coordonnee de la cellule
  *\ param y est la deuxieme coordonnee de la cellule 
*/
}

Cell::~Cell()
{
/**
  *\ c'est le destructeur
*/
}


void Cell::add_neighb(Cell *n1)
{
/**
  *\ Methode permettant l'ajout d'une cellule comme voisin de celle active
  *\ param n1 est le pointeur vers la cellule a ajouter comme voisine
*/

  for(int i = 0 ; i < m_nb_neighb ; i++)
    if(m_neighb[i] == n1)
      return;

  m_nb_neighb++;

  Cell **new_neighb = new Cell*[m_nb_neighb];
  for(int i = 0 ; i < m_nb_neighb - 1 ; i++)
    new_neighb[i] = m_neighb[i];

  new_neighb[m_nb_neighb - 1] = n1;
  delete[] m_neighb;
  m_neighb = new_neighb;

  n1->add_neighb(this);
}

void Cell::add_neighb(Cell *n1, Cell *n2)
{
/**
  *\ Methode permettant l'ajout de 2 cellules comme voisines de celle active
  *\ param n1 est le pointeur vers la cellule a ajouter comme voisine
  *\ param n2 est le pointeur vers la deuxieme cellule a ajouter comme voisine
*/
  add_neighb(n1);
  add_neighb(n2);
}

void Cell::add_neighb(Cell *n1, Cell *n2, Cell *n3)
{
/**
  *\ Methode permettant l'ajout de 2 cellules comme voisines de celle active
  *\ param n1 est le pointeur vers la cellule a ajouter comme voisine
  *\ param n2 est le pointeur vers la deuxieme cellule a ajouter comme voisine
  *\ param n3 est le pointeur vers la troisieme cellule a ajouter comme voisine
*/
  add_neighb(n1);
  add_neighb(n2);
  add_neighb(n3);
}