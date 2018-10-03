class List{
  public:
    List();
    void AddNodeInit(int i);
    int GetFirst();
    Node *first, *last;
};

List::List(){
  first=last=NULL;
}

int List::GetFirst(){
  if(first == NULL){
    throw std::invalid_argument("Empty list");
  }
  return 0;
}

void List::AddNodeInit(int i){
}
