
# Poker hand evaluation algorithm
===

Vid 5 korts poker finns det bara c(52, 5), eller  2 598 960 olika händer. Men det finns bara 7462 olika händer som ger olika "resultat" d.v.s om man rankar händerna så kan varje hand få mella 1 och 7462 poäng.

För att snabbt kunna evaluera poker händerna utan att behöva sortera dem så får varje kort ett primtal tilldelat till sig beroende på kort värdet.

| Value | Prime nr |
| ------|:--------:|
| 2     | 2        |
| 3     | 3        |  
| 4     | 5        |
| 5     | 7        |
| 6     | 11       |  
| 7     | 13       |
| 8     | 17       |
| 9     | 19       |  
| 10    | 23       |
| Jack  | 29       |
| Queen | 31       |  
| King  | 37       |
| Ace   | 41       |
