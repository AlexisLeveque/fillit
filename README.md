# fillit

Projet de groupe effectué avec ybensimo

https://cdn.intra.42.fr/pdf/pdf/734/fillit.fr.pdf

Fillit does not consist of recoding Tetris, even if it’s still a variant of this game.
Your program will take a file as parameter which contains a list of Tetriminos and
arrange them to create the smallest square possible. Obviously, your main goal is to
find this smallest square in the minimal amount of time, despite a exponentially growing
number of possibilities each time a piece is added.
## Usage
`./fillit [file]`

Example:
```
  cat sample.fillit | cat -e
....$
##..$
.#..$
.#..$
$
....$
####$
....$
....$
$
#...$
###.$
....$
....$
$
....$
##..$
.##.$
....$
  ./fillit sample.fillit | cat -e
DDAA$
CDDA$
CCCA$
BBBB$
```
