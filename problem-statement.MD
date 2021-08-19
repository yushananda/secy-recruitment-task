# It's not coming home

After England’s heartbreaking loss in the finals of the Euro Cup, thousands of disappointed fans get in their cars and drive home from the game, causing heavy congestion on the roads. A wealthy Italian entrepreneur wants to build a new arena. Your task is to help him select a location for the arena to minimize the traffic congestion after future games.

Suppose that the country is organized into cities connected by a network of roads. All roads are bidirectional, and there is exactly one route connecting any pair of cities.

A route connecting the cities c<sub>0</sub> and c<sub>k</sub> is a sequence of distinct cities c<sub>0</sub>,...,c<sub>k</sub> such that there is a road from c<sub>i-1</sub> to c<sub>i</sub> for each <i>i</i>. The new arena must be built in one of the cities, which we will call the arena city.

All football fans travel from the arena city to their home city, except those who already live in the arena city. The amount of congestion on each road is proportional to the number of fans that travel along the road.

You must locate the arena city such that the amount of congestion on the most congested road is as small as possible. If there are several equally good locations, you should output the one with the lowest index.

## Input Format

The first line of input is a positive integer N, the number of cities. The cities are numbered from 0 to N−1.

The next line of input will contain an P of N positive integers. For each <i>i</i>, P[i] is the number of fans living in the city numbered <i>i</i>. The total number of fans in all the cities will be at most 2*10<sup>9</sup>.

The next N−1 lines will each contain 2 integers, representing the arrays S and D respectively. S and D are arrays of N−1 integers each, specifying the locations of roads. For each i, there is a road connecting the two cities whose numbers are S[i] and D[i].

## Constraints

1 <= N <= 10<sup>6</sup>

## Output Format

A single integer, the number of the city that should be the arena city.

   > Sample Input 0\
   5\
   10 10 10 20 20\
   0 2\
   1 2\
   3 2\
   4 3

   > Sample Output 0\
   3
   
   ![image](https://user-images.githubusercontent.com/84017927/130087213-feb23ac1-1463-4199-8f6c-b28b93ba1233.png)
   
   >Explanation 0\
   As an example, consider the network of five cities in the top diagram, where cities 0, 1 and 2 contain 10 fans each, and cities 3 and 4 contain 20 fans each. The middle diagram shows the congestions when the new arena is in city 2, the worst congestion being 40 on the thicker arrow. The bottom diagram shows the congestions when the new arena is in city 3, the worst congestion being 30 on the thicker arrow. Therefore, city 3 would be a better location for the arena than city 2.
