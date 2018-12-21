  //poker face
  

  #include <iostream>
  #include <cmath>

  using namespace std;

  int main() {
  // delaration of variable 
  int card1, card2, card3, card4, card5, r1, r2, r3, r4, r5, s1, s2, s3, s4, s5;
  // get input from user
  cout << "Enter the card (0-51) seprated by spaces in increasing order: " << endl ;
  cin >> card1 >> card2 >> card3>> card4 >> card5;
  
   r1 = card1 % 13;
   r2 = card2 % 13;
   r3 = card3 % 13;
   r4 = card4 % 13;
   r5 = card5 % 13; 
    if(r1>r2 || r2>r3 || r3>r4 || r4>r5)
    {
    cout << "ERROR"<< endl;
    return 1;
    }

   s1 = card1 / 13;
   s2 = card2 / 13;
   s3 = card3 / 13;
   s4 = card4 / 13;
   s5 = card5 / 13;
   //Royal Flush
 

  if ((r1==8) && (card2==card1+1 && card3==card2+1 && card4 ==card3+1 && card5==card4+1))
     {
    cout << "Royal Flush" << endl;
     }
      // Straight Flush  
     else if ((r1<8) && (card2 == card1+1 && card3==card2+1 && card4==card3+1 && card5 ==(card4 +1)))
     {
    cout << "Straight Flush"<<endl;
    }
    // Four of a kind
    else if (r1==r4|| r2==r5)
     {
     cout<< "Four of Kind"<< endl;
     }
     // Full House
     // Three cards of one rank and two cards of different rank
     else if((r1==r3 && r4==r5) || (r1==r2 && r3==r5))
     {
     cout<< "Full House" <<endl; 
     }
     //Flush
     else if(s1==s2 && s2==s3 && s3==s4 && s4==s5)
         {
         cout<< "Flush" <<endl;
           } 
          //Straight
         else if(r2==r1+1 && r3==r2+1 && r4==r3+1 &&r5==r4+1)
             {
          cout<< "Straight" <<endl;
          }
        //Three of a kind
       else if (r1==r3 || r2==r4 || r3==r5)
        {
        cout<< "Three of kind"<<endl;
          }
         //Two Pair
        else if ((r1==r2 && r3==r4) || (r2==r3 && r4==r5) || (r1==r2 && r4==r5))
         {
        cout<<"Two pair" <<endl;
        }
       //One pair
         else if ((r1==r2) || (r2==r3) || (r3==r4) || (r4==r5))
           {
            cout << "One Pair" << endl;
            }
         //other sets
         else {
            cout<<" Any other set of five cards"<< endl;
           }
          return 0;

           }

 
