## Editorial - It's not coming home
We use an adjacency matrix *adj[]* to store whether or not two cities (say c<sub>i</sub> and c<sub>j</sub> are *adjacent* or not, i.e. have a road connecting them.
To calculate the value of arena[i] for each *i*, that is the congestion if the city c<sub>i</sub> were to be made the arena city, we use a recursive DFS (Depth First Search)
function, which calculates the sum of the values of congestion for each city that a particular city is connected to. The city with the minimum value of arena[] is the required arena city. 
