class Node{
  public:
    Node(int inf, Node* node=NULL);
    int info;
    Node* next;
};

Node::Node(int inf, Node* node){
  info=inf;
  next=node;
}
