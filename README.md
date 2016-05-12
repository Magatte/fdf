Bresenham method to draw lines

General formula : 1 + max(abs(xi - xf), abs(yi - yf)) pixels to draw

1- Draw horizontal or nearly horizontal lines
In this case I presume that abs(xi - xf) > abs(yi -yf)
The rule is to draw one pixel for each column

2- Draw vertical or nearly vertical lines
In this case I presume that abs(yi - yf) > abs(xi -xf)
The rule is to draw one pixel for each line
