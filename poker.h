#ifndef _POKER_H_
#define _POKER_H_

#ifdef __cplusplus
extern "C" {
#endif

/** 
 * maximum number of cards for a poker hand.
 */
#define MAX_POKER_CARDS 5

/**
 * define the poker hand ranking.
 */
typedef enum _poker_rank_
{
   ERROR = 0,
   HIGH,
   ONE_PAIR,
   TWO_PAIRS,
   THREE_OF_A_KIND,
   STRAIGHT,
   FLUSH,
   FULL_HOUSE,
   FOUR_OF_A_KIND,
   STRAIGHT_FLUSH,
} ePokerRank;

/**
 * define the card's suits.
 */
typedef enum _poker_suit_
{
   DIAMOND = 0,
   CLUB,
   HEART,
   SPADE,
} ePokerSuit;

/**
 * define the card's values.
 */
typedef enum _poker_value_
{
   TWO = 2,
   THREE,
   FOUR,
   FIVE,
   SIX,
   SEVEN,
   EIGHT,
   NINE,
   TEN,
   JACK,
   QUEEN,
   KING,
   ACE,
} ePokerValue;

/**
 * define a poker card.
 */
typedef struct _poker_card_
{
   ePokerValue value;
   ePokerSuit suit;
} sPokerCard;

/** 
 * a poker hand is a set of five cards. 
 */
typedef struct _poker_hand_
{
   sPokerCard cards[MAX_POKER_CARDS];
} sPokerHand;

/**
 * Analyse the hand to determine the rank.
 * @param[in] hand   The hand, that is a set of poker cards.
 * @return A rank of type ePokerRank or an error if the hand is NULL.
 */
ePokerRank getPokerHandRank(const sPokerHand *hand);

#ifdef __cplusplus
}
#endif

#endif /* _POKER_H_ */
