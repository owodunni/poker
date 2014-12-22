
# Poker hand evaluation algorithm
===

Vid 5 korts poker finns det bara c(52, 5), eller  2 598 960 olika händer. Men det finns bara 7462 olika händer som ger olika "resultat" d.v.s om man rankar händerna så kan varje hand få mella 1 och 7462 poäng.

För att snabbt kunna evaluera poker händerna utan att behöva sortera dem så får varje kort ett primtal tilldelat till sig beroende på kort värdet.

| Value    | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Jack | King | Queen | Ace |
| ---------|---|---|---|---|---|---|---|---|----|------|------|-------|:---:|
| Prime nr | 2 | 3 | 5 | 7 | 11| 13| 17| 19| 23 | 29   | 31   | 37    | 41  |

Multiplicerar man samman en hands primtal så får man ett värde på handen som är oberoende av kortens ordning. Vi måste också lägga till en bit för kortets färg. För att lätt kunna evaluera korten så sparar vi alla information om dem på en integer med förljande form.

| xxxbbbbb | bbbbbbbb| cdhsrrrr| xxxppppp |
|----------|---------|---------|:--------:|


