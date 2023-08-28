#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - It Enumeration of card suits.
 * @SPADE: It is the Spades suit.
 * @HEART: It is the Hearts suit.
 * @CLUB: It is the Clubs suit.
 * @DIAMOND: It is the Diamonds suit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - It Plays card
 * @value: It is the Value of the card
 * 	   From "Ace" to "King"
 * @kind: It is the Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - It is the Deck of card
 * @card: It is the Pointer to the card of the node
 * @prev: It is the Pointer to the previous node of the list
 * @next: It is the Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
