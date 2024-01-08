// deleting a node 
very simple bas {temp->next = tail->next}se isko padhoge temp ke next ko equal kardo 
tail ke next se aur jaise current ko tail banana hai aur fir bas memory free karwnai hai using
destructor

toh current->next=tail->next kardo

first node deletion
//iske liye head ko next pe assign kardoge aur 1st ki memory free karwadoge

voidDeletenode(int position , Node* &head){
//deleting first node 

if (position ==1){
Node* temp = head; // ek temp naam de diya aur usme head store kar diya
head= head->next;// next wale ka address new head mein daal diya
//memory free kardo
temp-> next =NULL; //mein ye chata hu ki temp ke next ko null karke mere data ko jo woh point krra tha usko  hata du
delete temp;// fir uss extra temp ko khaali kar diya

}
else{
//deleting the middle aur last node 
Node* curr = head; //abhi current o assign kiya hai head 
Node* prev = NULL; //  aur prev ki value hai null kyuki hum node 1 pe hai

int cnt =1; //count 1 daal diya
while(cnt<= position){ // mein jab tak loop mein rahunga jab tak count chota nhi hota position se aur prev ko current ki jagah doong aur current wale ko current ka next doonga 
prev = curr ;
curr = curr->next;
cnt ++;

}
prev->next = curr->next;
curr->next = NULL;//mein ye chata hu ki CURR ke next ko null karke mere data ko jo woh point krra tha usko  hata du
delete curr;
}


}
