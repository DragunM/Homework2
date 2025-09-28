#Бинарная куча
import heapq

# Min-heap пример
heap = []
heapq.heappush(heap, 5)
heapq.heappush(heap, 2)
heapq.heappush(heap, 8)
print(heapq.heappop(heap))  # 2

# Max-heap (используем отрицательные значения)
max_heap = []
heapq.heappush(max_heap, -5)
heapq.heappush(max_heap, -2)
heapq.heappush(max_heap, -8)
print(-heapq.heappop(max_heap))  # 8


#Биноминальная куча
class BinomialHeap:
    class Node:
        def init(self, key):
            self.key = key
            self.degree = 0
            self.parent = None
            self.child = None
            self.sibling = None
    
    def init(self):
        self.head = None
    
    def merge(self, h1, h2):
        # Реализация слияния биномиальных куч
        pass
    
    def insert(self, key):
        new_heap = BinomialHeap()
        new_heap.head = self.Node(key)
        self.head = self.merge(self.head, new_heap.head)
    
    def extract_min(self):
        # Реализация извлечения минимума
        pass


#Хеш таблица
# Встроенная хеш-таблица (dict)
hash_table = {}
hash_table["apple"] = 1
hash_table["banana"] = 2
hash_table["orange"] = 3

print(hash_table["apple"])  # 1
print("banana" in hash_table)  # True

# Удаление
del hash_table["orange"]




#Куча Фибоначи
class FibonacciHeap:
    class Node:
        def init(self, key):
            self.key = key
            self.degree = 0
            self.marked = False
            self.parent = None
            self.child = None
            self.left = self
            self.right = self
    
    def init(self):
        self.min_node = None
        self.count = 0
    
    def insert(self, key):
        new_node = self.Node(key)
        if self.min_node is None:
            self.min_node = new_node
        else:
            self._add_to_root_list(new_node)
            if key < self.min_node.key:
                self.min_node = new_node
        self.count += 1
        return new_node
    
    def _add_to_root_list(self, node):
        # Добавление узла в корневой список
        pass


