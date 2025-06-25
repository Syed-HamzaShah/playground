graph = {
    'A' : ['B' , 'C'],
    'B' : ['D' , 'E'],  
    'C' : ['F' , 'G'],
    'D' : [],  
    'E' : [],  
    'F' : [],  
    'G' : []  
}

def dfs(start, visited = None):
    if visited is None:
        visited = []
    visited.append(start)

    for neighbor in graph[start]:
        if neighbor not in visited:
            dfs(neighbor, visited)

    return visited
    
dfs_order = dfs('A')
print("DFS Traversal Order:", '->'.join(dfs_order))   








# from collections import deque

# graph = {
# 'A': ['B'  , 'C' , 'D'],
# 'B': ['E' , 'F'],
# 'C' :['G' , 'H'],
# 'D' :['I'],
# 'E' :['J' , 'K'],
# 'F' :[],
# 'G' :['L'],
# 'H' :[],
# 'I' :['M'],
# 'J' :[],
# 'K' :['N'],
# 'L' :[],
# 'M' :[],
# 'N' :[]
# }

# def bfs(start):
#     visited = []
#     queue = deque([start])
#     while queue:
#         node = queue.popleft()
#         if node not in visited:
#           visited.append(node)
#           queue.extend(graph[node])
#     return visited
# bfs_order = bfs('A')
# print("BFS Traversal Order:" ,' -> '.join(bfs_order))






# from os import confstr_names
# from os import confstr
# import heapq

# graph = {
#     'S': {'B': 4,'C': 3},
#     'B': {"F": 5},
#     'C': {'D': 7, 'E': 10},
#     'D': {'E': 2},
#     'E': {'F': 4, 'G': 5},
#     'F': {'G': 16},
#     'G': {}
# }

# heuristics = {
#     'S': 14,
#     'B': 12,
#     'C': 11,
#     'D': 6,
#     'E': 4,
#     'F': 11,
#     'G': 0
# }

# def a_star(start,goal):
#     open_list = []
#     heapq.heappush(open_list, (heuristics[start],[start],0))

#     while open_list:
#         f_score, path, g_score = heapq.heappop(open_list)
#         current = path[-1]

#         if current == goal:
#             return path, g_score

#         for neighbor, cost in graph[current].items():
#             new_g = g_score + cost 
#             new_f = new_g + heuristics[neighbor]
#             heapq.heappush(open_list, (new_f, path + [neighbor], new_g))

#     return None, float('inf')

# path, cost = a_star('S', 'G')
# print("Shortest path:", '->'.join(path))
# print("Total Cost:", cost)