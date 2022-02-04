/*
* * Huffman encoding compresses data by using fewer bits to encode more frequently
 * occurring characters so that not all characters are encoded with 8 bits
* 
*/

#include <iostream>
#include <queue>
#include <vector>

struct HeapNode
{
    char data;
    unsigned int frequency;
    HeapNode* left;
    HeapNode* right;

    HeapNode(char d, unsigned int fr)
        : data{ d },
        frequency{ fr },
        left{ nullptr },
        right{ nullptr }
    {}
};

// to compare the two nodes
struct compare
{
    bool operator() (HeapNode* node1, HeapNode* node2)
    {
        return (node1->frequency > node2->frequency);
    }
};

void generateHuffmanCodeUtil(HeapNode* root, std::string str)
{
    if (!root)
        return;

    if (root->data != '$')
    {
        std::cout << root->data << " : " << str << std::endl;
    }

    generateHuffmanCodeUtil(root->left, str + '0');
    generateHuffmanCodeUtil(root->right, str + '1');
}

void generateHuffmanCode(std::string data, std::vector<int> frequencies)
{
    HeapNode* left, * right, * top;

    // Create a minimum heap based on frequency and inserts all characters in it
    //
    std::priority_queue<HeapNode*, std::vector<HeapNode*>, compare> minHeap;
    unsigned int size = frequencies.size();
    for (unsigned int i = 0; i < size; ++i)
    {
        minHeap.push(new HeapNode(data[i], frequencies[i]));
    }

    while (minHeap.size() != 1)
    {
        // Get minimum nodes from heap
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        // Combine the above two nodes (their frequecies) to generate a
        // new node. Makes the two nodes left and right children of the new node.
        // 
        //
        top = new HeapNode('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    // generate tree 
    //
    generateHuffmanCodeUtil(minHeap.top(), "");
}

int main()
{
    std::string data{ "abcdef" };
    std::vector<int> frequencies = { 5, 9, 12, 13, 16, 45 };

    generateHuffmanCode(data, frequencies);
    return 0;
}