class List{
  public:
    List();
    ~List();
    void AddNodeInit(int i);
    void AddNodeEnd(int i);
    bool HasValue(int value);
    int GetFirst();
    int GetLast();
    bool IsEmpty();
    void PopFirst();
    void PopLast();
    Node *first, *last;
};

List::List(){
  first=last=NULL;
}

List::~List(){
  while(!IsEmpty())
    PopFirst();
}


bool List::HasValue(int value){
  Node *aux(first);
  while(aux != NULL){
    if(aux->info == value){
      return true;
    }
    aux = aux->next;
  }
  return false;
}

bool List::IsEmpty(){
  if(first==NULL or last==NULL){
    return true;
  }else{
    return false;
  }
}

void List::PopFirst(){
  if(IsEmpty()){
    throw std::invalid_argument("Empty list");
  }
  Node *aux;
  aux = first;
  first = first->next;
  delete aux;
}


void List::PopLast(){
  if(IsEmpty()){
    throw std::invalid_argument("Empty list");
  }
  Node *aux;
  aux = last;
  last=first;
  while(last->next != aux){
    last = last->next;
  }
  delete aux;
}

int List::GetFirst(){
  if(IsEmpty()){
    throw std::invalid_argument("Empty list");
  }
  return first->info;
}

int List::GetLast(){
  if(IsEmpty()){
    throw std::invalid_argument("Empty list");
  }
  return last->info;
}

void List::AddNodeInit(int i){
  Node* aux = new Node(i,first);
  first=aux;
  if(IsEmpty())
    last = aux;
}

void List::AddNodeEnd(int i){
  if(IsEmpty()){
    first=last=new Node(i);
  }else{
    last->next = new Node(i);
    last = last->next;
  }
}
