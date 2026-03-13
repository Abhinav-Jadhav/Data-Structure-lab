struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    
    NODE new_node = (NODE)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = NULL;
    return new_node;
}

NODE addNode(NODE first, int x) {
    
    NODE new_node = createNode(x);
    if (first == NULL) {
        return new_node;
    }
    NODE temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return first;
}

NODE concatenate(NODE t1, NODE t2) {
  
    if (t1 == NULL) {
        return t2;
    }
    if (t2 == NULL) {
        return t1;
    }
    NODE temp = t1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = t2;
    return t1;
}

void displayList(NODE first) {
   
    NODE temp = first;
    while (temp != NULL) {
        printf("%d --> ", temp->data); // Print data and "-->"
        temp = temp->next;
    }
    printf("NULL\n");
}
