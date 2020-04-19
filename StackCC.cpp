Stack(const Stack& oldStack){
  
  oldNode = oldStack.top
  currNode = top;
  
  while (oldNode != NULL){
    currNode->val = oldNode->val;
    currNode->next = oldNode->next;
    oldNode = oldNode->next;
    currNode = currNode->next;
  }
}