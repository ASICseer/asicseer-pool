#ifndef DONATION_H
#define DONATION_H

/* Some constants related to auto-donation. Donations go as the 2nd and 3rd
   outputs of the coinbase generation tx, and are subtracted from pool fee. */

#define DONATION_FRACTION 10 // 10% of pool_fee per address above (set to 0 if you wish to disable donation)

#define DONATION_ADDRESS_CALIN "bchtest:qq065wmq2uk4yswugk0a2mkn57xfguzlxqx7ev944a"/*"1Ca1inCimwRhhcpFX84TPRrPQSryTgKW6N"*/ // Calin (dev)
#define DONATION_ADDRESS_BCHN "bchtest:qqhmdlmsyp20naq63tmhvgcvth5cncvv850xz5etd0"/*"3NoBpEBHZq6YqwUBdPAMW41w5BTJSC7yuQ"*/  // BCHN donation wallet
#define DONATION_NUM_ADDRESSES 2

#define DONATION_CALIN_ENABLED 1
#define DONATION_BCHN_ENABLED 1

#endif
