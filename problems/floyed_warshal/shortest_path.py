n = int(input("enter no of vertices"))

              
dist = list(map(lambda i: list(map(lambda j: j, i)), graph))
def floyid_varshal():
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j])

__name__ = "main"                
            graph[][]= { {0,   3,  INF, 7},
            {8,  0,  2,  15},
            {5, 8, 0,   1},
            {2,5, INF, 0} }
