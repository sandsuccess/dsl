#include<iostream> 
using namespace std; 

#define size 5

class JobQue {
private:
    struct queue {
        int que[size];
        int front, rear;
    } Q;

public:
    JobQue();        // Constructor
    int Qfull();
    int insert(int);
    int Qempty();
    int delet();
    void display();
};

JobQue::JobQue() {
    Q.front = -1;  // -1 indicates it is empty
    Q.rear = -1;
}

int JobQue::Qfull() {
    if (Q.rear >= size - 1)
        return 1;
    else
        return 0;
}

int JobQue::insert(int item) {
    if (Q.front == -1)
        Q.front++;
    
    Q.que[++Q.rear] = item;
    return Q.rear;
}

int JobQue::Qempty() {
    if ((Q.front == -1) || (Q.front > Q.rear))
        return 1;
    else
        return 0;
}

int JobQue::delet() {
    int item;
    item = Q.que[Q.front];
    Q.front++;
    cout << "\nThe deleted Job is: " << item;
    return Q.front;
}

void JobQue::display() {
    int i;
    cout << "\nJob Queue: ";
    for (i = Q.front; i <= Q.rear; i++)
        cout << Q.que[i] << " ";
}

int main(void) {
    int choice, item;
    char ans;
    JobQue obj;

    do {
        cout << "\n Main Menu";
        cout << "\n1. ADD Job\n2. Delete Job\n3. Display Job Queue";
        cout << "\n Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (obj.Qfull())
                    cout << "\nCannot insert the Job. Queue is full.";
                else {
                    cout << "\nEnter The Job number: ";
                    cin >> item;
                    obj.insert(item);
                }
                break;

            case 2:
                if (obj.Qempty())
                    cout << "\nQueue Underflow!";
                else
                    obj.delet();
                break;

            case 3:
                if (obj.Qempty())
                    cout << "\nJob Queue Is Empty!";
                else
                    obj.display();
                break;

            default:
                cout << "\nWrong choice!";
                break;
        }

        cout << "\nDo You Want to continue? (Y/N): ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');

    return 0;
}

