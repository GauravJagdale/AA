from collections import deque

def bfs(graph, start_node):
    visited = set()
    queue = deque([start_node])

    while queue:
        node = queue.popleft()
        if node not in visited:
            print(node, end=" ")
            visited.add(node)
            neighbours = graph[node]
            queue.extend(neighbours)

def dfs(graph, start_node, visited=None):
    if visited is None:
        visited = set()

    visited.add(start_node)
    print(start_node, end=" ")

    for neighbour in graph[start_node]:
        if neighbour not in visited:
            dfs(graph, neighbour, visited)


graph = {}
num_edges = int(input("Enter the number of edges in the graph: "))

for _ in range(num_edges):
    src, dest = input("Enter an edge (source destination): ").split()
    if src not in graph:
        graph[src] = []
    if dest not in graph:
        graph[dest] = []
    graph[src].append(dest)
    graph[dest].append(src)



start_node = input("Enter the starting node: ")
print("BFS traversal:")
bfs(graph, start_node)

print("\n\nDFS traversal: ")
dfs(graph, start_node)


# A->B->C
# |
# D->F  