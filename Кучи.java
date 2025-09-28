#Бинарная куча
import java.util.PriorityQueue;

public class BinaryHeapExample {
    public static void main(String[] args) {
        // Min-heap
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        minHeap.add(5);
        minHeap.add(2);
        minHeap.add(8);
        System.out.println(minHeap.poll()); // 2

        // Max-heap
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a, b) -> b - a);
        maxHeap.add(5);
        maxHeap.add(2);
        maxHeap.add(8);
        System.out.println(maxHeap.poll()); // 8
    }
}



#Биноминальная куча
import java.util.*;

public class BinomialHeap {
    class Node {
        int key;
        int degree;
        Node parent, child, sibling;
        
        Node(int key) {
            this.key = key;
            this.degree = 0;
        }
    }
    
    private Node head;
    
    public void insert(int key) {
        BinomialHeap newHeap = new BinomialHeap();
        newHeap.head = new Node(key);
        head = merge(head, newHeap.head);
    }
    
    private Node merge(Node h1, Node h2) {
        // Реализация слияния
        return null;
    }
}

#Хеш таблица
import java.util.*;

public class HashTableExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashTable = new HashMap<>();
        hashTable.put("apple", 1);
        hashTable.put("banana", 2);
        hashTable.put("orange", 3);
        
        System.out.println(hashTable.get("apple")); // 1
        System.out.println(hashTable.containsKey("banana")); // true
        
        hashTable.remove("orange");
    }
}

#Куча Фибоначи
import java.util.*;

public class FibonacciHeap {
    class Node {
        int key;
        int degree;
        boolean marked;
        Node parent, child, left, right;
        
        Node(int key) {
            this.key = key;
            this.degree = 0;
            this.marked = false;
            this.left = this;
            this.right = this;
        }
    }
    
    private Node minNode;
    private int count;
    
    public Node insert(int key) {
        Node newNode = new Node(key);
        if (minNode == null) {
            minNode = newNode;
        } else {
            addToRootList(newNode);
            if (key < minNode.key) {
                minNode = newNode;
            }
        }
        count++;
        return newNode;
    }
    
    private void addToRootList(Node node) {
        // Добавление в корневой список
    }
}
