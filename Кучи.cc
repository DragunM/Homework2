#Бинарная куча
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Min-heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);
    std::cout << minHeap.top() << std::endl; // 2
    minHeap.pop();

    // Max-heap (по умолчанию)
    std::priority_queue<int> maxHeap;
    maxHeap.push(5);
    maxHeap.push(2);
    maxHeap.push(8);
    std::cout << maxHeap.top() << std::endl; // 8
    
    return 0;
}


#Биноминальная куча
#include <iostream>

class BinomialHeap {
private:
    struct Node {
        int key;
        int degree;
        Node* parent;
        Node* child;
        Node* sibling;
        
        Node(int k) : key(k), degree(0), parent(nullptr), 
                     child(nullptr), sibling(nullptr) {}
    };
    
    Node* head;
    
public:
    BinomialHeap() : head(nullptr) {}
    
    void insert(int key) {
        BinomialHeap newHeap;
        newHeap.head = new Node(key);
        head = merge(head, newHeap.head);
    }
    
private:
    Node* merge(Node* h1, Node* h2) {
        // Реализация слияния
        return nullptr;
    }
};


#Хеш таблица
#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> hashTable;
    hashTable["apple"] = 1;
    hashTable["banana"] = 2;
    hashTable["orange"] = 3;
    
    std::cout << hashTable["apple"] << std::endl; // 1
    std::cout << (hashTable.find("banana") != hashTable.end()) << std::endl; // 1
    
    hashTable.erase("orange");
    
    return 0;
}





#Куча Фибоначи
#include <iostream>

class FibonacciHeap {
private:
    struct Node {
        int key;
        int degree;
        bool marked;
        Node* parent;
        Node* child;
        Node* left;
        Node* right;
        
        Node(int k) : key(k), degree(0), marked(false), 
                     parent(nullptr), child(nullptr) {
            left = this;
            right = this;
        }
    };
    
    Node* minNode;
    int count;
    
public:
    FibonacciHeap() : minNode(nullptr), count(0) {}
    
    Node* insert(int key) {
        Node* newNode = new Node(key);
        if (!minNode) {
            minNode = newNode;
        } else {
            addToRootList(newNode);
            if (key < minNode->key) {
                minNode = newNode;
            }
        }
        count++;
        return newNode;
    }
    
private:
    void addToRootList(Node* node) {
        // Добавление в корневой список
    }
};
