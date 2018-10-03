class List{
  public:
    List();
    void AddNodeInit(int i);
    int GetFirst();
    bool IsEmpty();
    void PopFirst();
    Node *first, *last;
};

bool List::IsEmpty(){
  if(first==NULL){
    return true;
  }else{
    return false;
  }
}

void List::PopFirst(){
  if(first == NULL){
    throw std::invalid_argument("Empty list");
  }
  Node *aux;
  aux = first;
  first = first->next;
  delete aux;
}

List::List(){
  first=last=NULL;
}

int List::GetFirst(){
  if(first == NULL){
    throw std::invalid_argument("Empty list");
  }
  return first->info;
}

void List::AddNodeInit(int i){
  Node* aux = new Node(i,first);
  first = aux;
}
