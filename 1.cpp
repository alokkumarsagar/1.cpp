#include<iostream>

using namespace std;

class node //craete a class of type node
{  public :
    int data;
    node *next;
};

class link //create a class of type link
{
    node *head;  //create head node
    node *tail;  //create tail node

  public:
    link () //constructor
    {
      head = NULL;  //make head null
      tail = NULL;  //make head null
    }
       void insert_list(int data);
       void insert_at(int pos, int data);
       void delete_list();
       void delete_at(int pos);
       void display_l();
       int count_l();
};

void menu()  //menu of functions one can use
{ cout<<"\n This is the list of thing you can do using this programme."<<endl;
  cout<<" (a) create a linked list."<<endl;
  cout<<" (b) insert data in linked list."<<endl;
  cout<<" (c) insert a data at any position. "<<endl;
  cout<<" (d) delete the linked list. "<<endl;
  cout<<" (e) delete data of a specific position."<<endl;
  cout<<" (f) display the elements of linked list."<<endl;
  cout<<" (g) count the number of elements in the list."<<endl;
  cout<<" Press 'x' and hit 'enter' to exit."<<endl;
  cout<<" Choose the option what you want to do : \n -> ";
}

int main()
{ char ch;  //character type variable
  link l_l; //create an object
 //start while loop
 while (ch != 'x')  //condition : input is not x otherwise break the loop
   { menu();
     cin>> ch;
     //give different output depending on the character variable using 'if else'
     if (ch=='a') 
     {
        cout<<"\n Linked list is created."<<endl;
     }
     else if (ch=='b')
     {
         int num;
         cout<<"\n How many data do you want to add ? \n ->";
         cin>>num;
         for(int i=1;i<=num;i++)
         {   int data;
             cout<<"Data "<<i<<" = ";
             cin >> data;
             l_l.insert_list(data); //calling the insert_list(int data) function
         }
     }
     else if (ch=='c')
     {   int post, data;
         int num;
         num = l_l.count_l(); //calling the count_l() function to check the number element in the list
         cout<<"\n Enter the position where you want to insert a data : ";
         cin>>post;
         if (0 < post && post < num+1) //condition for nonempty linked list
         {
             cout<<"\n Enter the new data : ";
             cin >> data;
             l_l.insert_at(post, data); //calling the insert_at() function
         }
         else { cout<<" Invalid position. \n ";} //condition when position entered is not valid for the linked list

     }
     else if (ch=='d')
     {
         l_l.delete_list();  //calling delete_list() function
     }
     else if (ch=='e')
     {
         int post;
         int num;
         num = l_l.count_l();  //calling the count_l() function to check the number element in the list
         cout <<"\n Enter the position of data you want to delete : ";
         cin >> post;
         if (0 < post && post <= num)  //condition for nonempty linked list
         {
             l_l.delete_at(post);  //calling the delete_at() function
         }
         else {cout<<"Invalid position.";}  //condition when position entered is not valid for the linked list
     }
     else if (ch=='f')
     {
         cout<<"This are your data :"<<endl;
         l_l.display_l();  //calling the display_l() function
     }
     else if (ch=='g')
     {   int num;
         num = l_l.count_l();  //calling the count_l() funtion
         cout<<"\n There is ";
         cout<<num;
         cout<<" elements in your linked list. \n ";
     }
     else
        {
             cout<<"\n You have entered an invalid key try again.";  //when one enter a invalid character
        }

     cout <<"\n  Thank you for using this programme.";
     cout <<"\n  If you want to continue press any key and hit 'enter'.";  //run the while loop again
     cout <<"\n  If you want to exit press 'x' and hit 'enter'. \n -> ";   //break the while loop
     cin >> ch; 
   }

return 0;
}
    
       
