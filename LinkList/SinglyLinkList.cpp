/**
 * why link list?
 * -----------------
 * i) size of array is fixed.
 * ii) inserting a new element in an array of elements is expensive
 * iii) deletion is also expensive
 *
 * advantage over arrays?
 * -----------------------
 * i) dynamic size
 * ii) ease of insertion/ deletion
 *
 * drawbacks?
 * ---------
 * i) random access not allowed. need to access sequentially, cannot apply any binary search
 * ii) extra memory space for pointer is required
 * iii) Not cache friendly. as array elements are contiguous locations so there is locality of reference for array but there is nothing such in linked list.
 *
 *
 * topic covered-
 * ---------------
 * i) insert head
 * ii) insert nth position
 * iii) insert last position
 * iv) delete
 * v) print
 * vi) print reverse
 * vii) reverse link list
 * viii) reverse link list by recursion
 *
 *
 */
#include<bits/stdc++.h>

using namespace std;

//start: representation of link list
class Node {
public:
    //data
    int data;

    //pointer to the next node
    Node *next;
};

//end: representation of link list

Node *head = NULL;

//insert at the starting and make the insert data as head
void insert(int data) {
    //create a new node
    Node *temp = new Node();
    //set data in that node
    temp->data = data;
    temp->next = head;

    head = temp;

}

//insert in n'th position
void insert(int data, int n) {
    Node *temp = new Node();
    temp->data = data;
    if (n == 1) {
        temp->next = head;
        head = temp;
    } else {
        Node *cur = head;
        for (int i = 0; i < n - 2; i++) {
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next = temp;

    }
}

void insert(Node **head_ref, int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}


//insert at the end
void insertLast(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    Node *tempHead = head;
    while (tempHead->next != NULL) {
        tempHead = tempHead->next;
    }
    tempHead->next = newNode;
    return;


}

//delete an element in specific position
void deleteNodefromNthPosition(int pos) {
    /**
     * delete case-
     * - delete first element => take temp var as head and head = head->next and free temp.
     * - delete 2nd/ any  element => loop through n-2, move head pointer to next in every iteration; assign temp->next in a var;  temp->next = temp->next->next; delete the var;
     */

    Node *temp = head;
    if (pos == 1) {
        head = head->next;
        // cout << "--------------> " << head->data << endl;
        free(temp);
        return;
    }

    // 1 2 3
    for (int i = 0; i < pos - 2; i++) {
        temp = temp->next;
    }
    Node *deleted_node = temp->next;
    temp->next = temp->next->next;
    free(deleted_node);
}

//delete first occurrence of a number
void deleteFirstOccurrence(int item) {
    Node *temp = head, *prev = NULL;
    //if head data need to be deleted
    if (temp->data == item) {
        head = head->next;
        delete (temp);
        return;
    }


    while (temp->data != item) {
        /**
         *  1 2 3 2
         *  deleteFirstOccurrence(2)
         *  deleteFirstOccurrence(1)
         */
        prev = temp;
        temp = temp->next;
    }
    Node *deleted_node = prev->next;
    prev->next = prev->next->next;
    delete (deleted_node);
}

//iterative reverse
void reverse() {
    Node *current, *previous = NULL, *next = NULL;
    current = head;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
    /*
     *              !
     *    (prev)  (cur)  (next)
     *                      !
     *            (prev) (cur)  (next)
     */
}

//recursive reverse
void reverse(Node *p) {
    if (p->next == NULL) {
        head = p;
        return;
    }
    reverse(p->next);
    p->next->next = p;
    p->next = NULL;
}

//delete a link list

void deleteLinkList() {
    Node *current = head, *next;
    while (current != NULL) {
        next = current->next;
        delete (current);
        current = next;
    }
    head = NULL;
}


void printReverse(Node *temp) {

    if (temp == NULL) {
        return;
    }
    //printf("%d ",temp->data);
    printReverse(temp->next);
    printf("%d ", temp->data);
}


int lengthOfLinkList(Node *listHead) {
    int count = 0;
    while (listHead != NULL) {
        count++;
        listHead = listHead->next;
    }
    return count;
}

int lengthOfLinkListRecursive(Node *listHead) {
    if (listHead == NULL)return 0;
    return lengthOfLinkListRecursive(listHead->next) + 1;
}


void print() {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print(Node *listHead) {
    while (listHead != NULL) {
        printf("%d ", listHead->data);
        listHead = listHead->next;
    }
    printf("\n");
}

bool isExistsItem(Node *listHead, int item) {
    while (listHead != NULL) {
        if (listHead->data == item)return true;
        listHead = listHead->next;
    }
    return false;
}

bool isExistsItemRecursive(Node *listHead, int item) {
    if (listHead == NULL) return false; //base case, after recurse when the node will return null then the list doesn't contain the item
    if (listHead->data == item)return true; // if list data is similiar to the item then return true
    bool isTruth =  isExistsItemRecursive(listHead->next, item);
    printf("\n====== FINISHED ONE TIME ============\n");
    return isTruth;
}

int getDataAtNthPosition(Node* headList, int pos){
    while(--pos){
        headList = headList->next;
    }
    return headList->data;
}
int getDataAtNthPositionRecursive(Node* headList, int pos){
    if(pos == 0 )return headList->data;
    return getDataAtNthPositionRecursive(headList->next, pos-1);
}

int printMiddleOfLinkList(Node* head){
    Node *fast = head, *slow = head;
    if(head!=NULL){
        while(fast != NULL && fast->next !=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow->data;
}

int printMiddleOfLinkListBitwiseOperator(Node *head){
    int count = 0;Node *mid = head;
    if(head!=NULL){
        while(head!=NULL){
            if(count &1 ){
                mid = mid->next;
            }
            count++;
            head=head->next;
        }
    }
    return mid->data;
}

int numberOfOccurrenceOfAnItem(Node* head, int item){
    int count = 0;
    while(head!=NULL){
        if(head->data == item)count++;
        head  = head->next;
    }
    return count;
}

//int numberOfOccurrence = 0 ;
int numberOfOccurrenceOfAnItemRecursive(Node *head, int item){
    if(head == NULL) return 0;
    int freq = numberOfOccurrenceOfAnItemRecursive(head->next, item);
    if(head->data == item) return 1+freq;

//    return numberOfOccurrence;
}
int numberOfOccurrence = 0 ;
int numberOfOccurrenceOfAnItemRecursive2(Node *head, int item){
    if(head == NULL) return numberOfOccurrence;
    if(head->data == item) numberOfOccurrence++;
    numberOfOccurrenceOfAnItemRecursive2(head->next, item);

//    return numberOfOccurrence;
}

// TODO Detect Loop in ll
/*
 *  Different way to solve the problem -
 *
 * 1. use hash table and check if current node exists in the table
 * L 2. keep an extra field in the node data structure which will check if the node already visited or not
 *  3. ** Floyd's Cycle-Finding Algorithm** -> Fastest solution. Traverse the LL with two pointers. Move one pointer by one and other pointer by two. If these pointers meet at same node there is a loop. If pointers do not meet then LL doesn't have any loop.
 *
 */





// TODO Find Length of loop in ll
/*
 * Firstly find the Node pointer which makes the loop (use Floyd's Cycle Finding Algorithm)
 * Iterate from  pointer->next to the pointer and increase the count
 * return the count
 */
/*
 * TODO palindrome check in ll
 *  Method 1: ( Stack Approach )
 *      i) push all elements of ll to a stack, ii) traverse the ll again and each time pop a node from stack and check with currently visited node, iii) If all match then palindrome else not
 *
 * Method 2: ( Reversing the list by half )
 *      i) get middle of ll, ii) reverse 2nd half, iii) check first half and 2nd half identical, iv) construct original ll by reversing the 2nd half again and attaching back to the first half
 *
 * Method 3: ( Recursion Approach )
 *      i) two pointer -> a) sub-list is palindrome, b)value at current left right matching
 *      => The idea is to use function call stack as a container, Recursively traverse till the end of the list. When we return form last NULL, we will be at last node. The last node to be compared with first node of list.
 *      => In order to access first node list,, we need list head to be available in the last call of recursion. Hence we pass head also to the recursive function. If they both match we need to compare (2,n-2) nodes. Again when recursion falls back to (n-2)th node, we reference to 2nd node from head thus advance the head pointer in previous call to refer to next node in the list.
 */

/*
 * TODO remove duplicate from sorted ll
 * 1 2 2 2 3 5 5 7
 *  traverse the list and compare each node with its next. if next node is same as current then delete next node and before delete need to store the next pointer of the node
 * 
 */
//region Remove duplicates from an unsorted link list
/*
 * Method 1 : two loop through and check
 * Method 2 : Sort with Merge Sort(O(nlogn)) then check with O(n)
 * Method 3 : Use hash map to find if an element already exists
 */

//endregion

//TODO swap nodes in linked list without swapping data
/*
 * Different Cases need to be handled - (1) x, y may not be adjacent (2) may be head node (3) may be last node (4) may not be present in the LL
 * Solution: check trivial case and return; loop through the list and keep track of the current and previous pointers and satisfy all conditions accordingly.
 *
 */
//TODO pairwise swap elements of a given ll
/*  Input:  1 -> 2 ->3 ->4 ->5 -> 6 -> 7
 *  Output: 2-> 1 ->4 ->3 ->6 -> 5 -> 7
 *  Method 1(Iterative)
 *      while tempHead and it's next not null swap items of them and make tempHead= tempHead->next->next
 *  Method 2(Recursive)
 *      while temHead and it's next not null then swap item and recurse with tempHead->next->next
 *
 */

//TODO move last element to front of a given ll
/*
 * save the head node in temp
 * traverse till last and save last and 2nd last
 * make 2nd last->next = null , last->next = temp, *head= last;
 *
 */

//TODO intersection of two sorted link list
/*
  Method 1: two loop through the link list and check reference of items
  Method 2: make a list circularl and check find loop in the second link list
  Method 3: keep extra item in node for visited which will cost memory
  Method 4: loop through len(list1) ~ len(list2) then loop through the bigger list till the difference so that each lists have equal no of nodes -> traverse both list in parallel to find common node. 
  Method 5: use hashing 
  

*/
//TODO intersection point of two link list
/*
  same as previous ( there may some sort of trick for sorted link list (think) ) 

*/

//TODO QuickSort on link list
/*
  #try after review the quick sort in array
*/

// TODO Segregate even and odd nodes in link list ( even first and odd last )
/*
 *  Method 1: Create two list, even and odd then add them
 *  Method 2: move odd elements to the end of the list
  
*/
// TODO Reverse a link list
/*
 * already exists in the first portion of the program
 */

void print(string str){
    printf("%s\n",str.c_str());
}

int main() {
    //freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);
    insert(10, 1);
    insert(11, 2);
    insert(4, 3);
    insert(15, 2);
    /*
     * after insertion -
     *  10  15 11 4
     */
    print();
    deleteNodefromNthPosition(4);
    /*
     * after deletion of 4th item
     * 10 15 11
     */
    print();
    reverse();
    /*
     * after reverse the link list
     * 11 15 10
     */
    print();
    //printf("\n");
    /*
     * print ll in reverse order
     */
    printReverse(head);
    printf("\n");

    /*
     * reverse again -
     * 10 15 11
     */
    reverse(head);
    print();
    /*
     * delete first occurrence with item 10
     * 15 11
     */
    deleteFirstOccurrence(10);
    print();
    /*
     * delete first occurrence with item 11
     * 15
     *
     */
    deleteFirstOccurrence(11);
    print();

    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    /*
     * after insert
     * 1 2 3 4 15
     *
     */
    /*
     * deleting link list
     */
    deleteLinkList();
    /*
     * print after delete
     */
    printf("START: Print after emptying link list - \n");
    print();
    printf("Entering 1 2 3 4 5 to the list again\n");
    insert(4), insert(3), insert(2), insert(1);
    print();
    printf("END: Print after emptying link list \n\n");


    printf("START: INSERT WITH HEAD POINTER - \n");

    Node *insertTestNode = NULL;
    insert(&insertTestNode, 4);
    insert(&insertTestNode, 3);
    insert(&insertTestNode, 2);
    insert(&insertTestNode, 1);
    insert(&insertTestNode, 0);
    print(insertTestNode);

    printf("END: INSERT WITH HEAD POINTER \n\n");

    printf("START: Link List Count-\n");
    printf("Count - %d \n", lengthOfLinkList(insertTestNode));
    printf("END: Link List Count\n\n");

    printf("START: Link List Count Recursive-\n");
    printf("Count - %d \n", lengthOfLinkListRecursive(insertTestNode));
    printf("END: Link List Count Recursive\n\n");


    printf("START: if an item exists\n");
    if (isExistsItem(insertTestNode, 1)) { printf("1 EXISTS\n"); }
    if (!isExistsItem(insertTestNode, 5)) { printf("5 doesn't EXISTS\n"); }
    printf("END: if an item exists\n\n");


    printf("START: if an item exists recursive\n");
    if (isExistsItemRecursive(insertTestNode, 1)) { printf("1 EXISTS\n"); }
//    if (!isExistsItemRecursive(insertTestNode, 5)) { printf("5 doesn't EXISTS\n"); }
    printf("END: if an item exists recursive\n\n");


    printf("START: data of 2nd position - \n");
    print(insertTestNode);
    printf("2nd position data - %d\n",getDataAtNthPosition(insertTestNode,2));
    printf("3nd position data - %d\n",getDataAtNthPosition(insertTestNode,3));
    printf("5th position data - %d\n",getDataAtNthPosition(insertTestNode,5));
    printf("END: data of 2nd position \n\n");


    printf("START: data of 2nd position recursive- \n");
    print(insertTestNode);
    printf("2nd position data - %d\n",getDataAtNthPositionRecursive(insertTestNode,2-1));
    printf("3nd position data - %d\n",getDataAtNthPositionRecursive(insertTestNode,3-1));

    printf("5th position data - %d\n",getDataAtNthPositionRecursive(insertTestNode,5-1));
    printf("END: data of 2nd position recursive\n\n");



    printf("========= START: print nth position from the last of link list ============\n");
    printf("2nd position data from last - %d\n", getDataAtNthPosition(insertTestNode, lengthOfLinkList(insertTestNode)-2+1));
    printf("1st position data from last - %d\n", getDataAtNthPosition(insertTestNode, lengthOfLinkList(insertTestNode)-1+1));
    printf("4th position data from last - %d\n", getDataAtNthPosition(insertTestNode, lengthOfLinkList(insertTestNode)-4+1));


    printf("========= END: print nth position from the last of link list ============\n\n");


    printf("==== Print Middle Element of Link List Check ====\n");
    Node* printMiddleLinkList = NULL;
    for(int i=5;i>=0;i--){
        insert(&printMiddleLinkList,i);
        print(printMiddleLinkList); printf("\t Mid ==>  %d\n",printMiddleOfLinkList(printMiddleLinkList));
    }

    printf("==== Print Middle Element of Link List Check ====\n\n");

    printf("==== Print Middle Element of Link List Check (BITWISE OPERATOR)====\n");
    Node* printMiddleLinkListBitwiseOperator = NULL;
//    deleteLinkList();
    for(int i=5;i>=0;i--){
        insert(&printMiddleLinkListBitwiseOperator,i);
        print(printMiddleLinkListBitwiseOperator); printf("\t Mid ==>  %d\n",printMiddleOfLinkListBitwiseOperator(printMiddleLinkListBitwiseOperator));
    }

    printf("==== Print Middle Element of Link List Check ====\n\n");

    printf("=== START: number of occurrence of an item in the link list =====\n");
    Node *checkNumberOfOccurrences = NULL;
    for(int i=5;i>=0;i--){
//        Node *newNode = new Node();
        insert(&checkNumberOfOccurrences,i);
    }
    insert(&checkNumberOfOccurrences,2);
    insert(&checkNumberOfOccurrences,2);
    insert(&checkNumberOfOccurrences,3);
    print(checkNumberOfOccurrences);

    printf("Number of Occurrence of 2 in the list is - > %d\n",numberOfOccurrenceOfAnItem(checkNumberOfOccurrences,2));
    printf("Number of Occurrence of 2 in the list is (rec)- > %d\n",numberOfOccurrenceOfAnItemRecursive(checkNumberOfOccurrences,2));
    numberOfOccurrenceOfAnItemRecursive2(checkNumberOfOccurrences,2);
    printf("Number of Occurrence of 2 in the list is (rec 2 )- > %d\n",numberOfOccurrence);

    printf("=== START: number of occurrence of an item in the link list =====\n\n");





    return 0;
}
