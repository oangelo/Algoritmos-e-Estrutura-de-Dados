
class Node{
  public:
    Node(int value, Node *left=NULL, Node *right=NULL):value(value), left(left), right(right) {};
    Node* get_left(){return left;};
    void set_left(Node* left){
      this->left=left;
    };
    Node* get_right(){return right;};
    void set_right(Node* right){
      this->right=right;
    };
    int get_value(){return value;};
    void set_value(int value){this->value = value;};
  private:
    int value;
    Node *left, *right; 
};
