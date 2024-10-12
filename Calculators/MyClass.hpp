#include <iostream>
using namespace std;

/*
    PolyNode为链表节点，包括coefient、exponent、next三个成员变量。
    coeffient为系数，exponent为指数，next为下一个节点的指针。
*/
typedef struct PolyNode{
    double coefficient;
    int exponent;
    struct PolyNode* next;

    PolyNode(double c = 0, int e = 0 , struct PolyNode* n = nullptr):coefficient(c),exponent(e),next(n){}
}PolyNode;

/*
    多项式的类，包括构造函数，析构函数，运算符重载，计算函数，求导函数，友元函数等。
    其中，PolyNode为链表节点，Polynomial为多项式类。
    head为链表头指针，指向dummy哑结点。
    指数高的多项式在链表中靠前。
 */
class Polynomial{
    private:
        PolyNode* head;
    public:
        Polynomial();
        Polynomial(PolyNode* h);
        Polynomial(const Polynomial& other);
        ~Polynomial();
        Polynomial operator+(const Polynomial& other) const;
        Polynomial operator-(const Polynomial& other) const;
        double calculate(double x) const;         
        Polynomial derivative() const;    
        void insert(double c, int e);
        Polynomial operator*(const Polynomial& other) const;
        Polynomial operator*(double k) const;
        Polynomial& operator=(const Polynomial& other);
        void clear();
        void stringToPoly(string& str); //为了适应Qt而添加的函数
        string polyToString(); //为适应Qt而添加的函数
        friend ostream& operator<<(ostream& o, const Polynomial& p);           
        friend istream& operator>>(istream& i, Polynomial& p);
};
