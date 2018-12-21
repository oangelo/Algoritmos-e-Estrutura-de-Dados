class Tree{
  public:
    Tree(int value){
      root = new Node(value);
    };
    ~Tree(){
      //!!!!!!!!!!!!
      //!!!!!!!!!!!!
    }
    Node* get_root(){return root;};
    void add(int value){
      Node* aux = new Node(value);
      Node *position(root);
      while(position != NULL){
        if(value > position->get_value()){
          if (position->get_right() == NULL){
            position->set_right(aux);
            return;
          }
          position = position->get_right();
        }else{
          if (position->get_left() == NULL){
            position->set_left(aux);
            return;
          }
          position = position->get_left();
        }
      };
    };
    bool has(int value){
      Node *position(root);
      while(position != NULL){
        if(position->get_value() == value)
          return true;
        else
          if(value > position->get_value())
            position = position->get_right();
          else
            position = position->get_left();
      };
      return false;
    };
  private:
    Node *root;
};
