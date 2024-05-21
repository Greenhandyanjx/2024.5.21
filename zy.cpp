#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
        vector<vector<int>>res;
        vector<int> path;

        void backtracking(int n, int k,int startindex){
            if (path.size() == k)
            {
                res.push_back(path);
                return;
            }
            for (int i = startindex;i <= n;i++)
            {
                path.push_back(i);
                backtracking(n, startindex + 1);
                path.pop_back();
            }
        }
    vector<vector<int>> combine(int n, int k) {
        backtracking(n, k, 1);
        return res;

    }
};
//class A
//{
//public:
//    virtual void func(int x) {
//        cout << "func() in class A with input " << x << endl;
//    }
//};
//
//class B : public A
//{
//public:
//    void func(int x) final {
//        cout << "func() in class B with input " << x << endl;
//    }
//};
//
//class C : public B
//{
//public:
//    void func(int x) {
//        cout << "func() in class C with input " << x << endl;
//    }
//};
//int main() {
//
//}
//class OrderedList {
//protected:
//    listNode* root;
//
//public:
//    OrderedList() : root(nullptr) {}
//
//    virtual void insert(int val) = 0; // 纯虚函数
//
//    void printList() const {
//        listNode* current = root;
//        while (current != nullptr) {
//            std::cout << current->val << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//
//    virtual ~OrderedList() {
//        listNode* current = root;
//        while (current != nullptr) {
//            listNode* next = current->next;
//            delete current;
//            current = next;
//        }
//    }
//};
//
//class AscendOrderedList : public OrderedList {
//public:
//    void insert(int val) override {
//        listNode* newNode = new listNode(val, nullptr, nullptr);
//
//        if (root == nullptr) {
//            root = newNode;
//        }
//        else if (root->val >= val) {
//            newNode->next = root;
//            root->prev = newNode;
//            root = newNode;
//        }
//        else {
//            listNode* current = root;
//            while (current->next != nullptr && current->next->val < val) {
//                current = current->next;
//            }
//            newNode->next = current->next;
//            if (current->next != nullptr) {
//                current->next->prev = newNode;
//            }
//            current->next = newNode;
//            newNode->prev = current;
//        }
//    }
//};
//
//class DescendOrderedList : public OrderedList {
//public:
//    void insert(int val) override {
//        listNode* newNode = new listNode(val, nullptr, nullptr);
//
//        if (root == nullptr) {
//            root = newNode;
//        }
//        else if (root->val <= val) {
//            newNode->next = root;
//            root->prev = newNode;
//            root = newNode;
//        }
//        else {
//            listNode* current = root;
//            while (current->next != nullptr && current->next->val > val) {
//                current = current->next;
//            }
//            newNode->next = current->next;
//            if (current->next != nullptr) {
//                current->next->prev = newNode;
//            }
//            current->next = newNode;
//            newNode->prev = current;
//        }
//    }
//};