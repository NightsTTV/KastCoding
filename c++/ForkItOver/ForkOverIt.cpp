#include <iostream>
using namespace std;

int main(){
    /*
    ---------ForkItOver Problem and Solution---------
    n is the total number of days or version of the next input
    Anna carries bags for people each day --> bags and people are variables belonging to the for loop iterating over n.
    she keepes extra bags in a reserve that starts off initially empty --> reserve = 0 and at the end of each day reserve += extra
    If her reserve runs out she will have to buy how many are missing and that is our output
    If there are more bags than people then we add the surplus to the reserve. 

    Input: 
    (int) n 
    (int) bags, people 

    Output:
    (int) buys
    Variables:
    bags, buys, extra, n,  people, 

    */

    int n; // int n
    cin >> n;
    printf("n is %d\n", n);
    
    int extra = 0;
    int buys = 0;

    cout << "        Bags  " << "         People  " << endl;

    for (int i = 0; i < n; i++){ // FOR EACH n (day)
        
        cout << endl << " Anna's extra after day " << i << " is " << extra << endl;
        int bags, people; // initialize the bags and people

        cin >> bags >> people;
        cout << endl << "         " << bags << "           " << "         " << people << "  ";
        
        extra += bags; // add todays total bags to the extra we have from the reserved
        cout << endl << "Reserved from past days: " << extra << "  ";

        if (people > extra) { // if the amount of people is MORE THAN the number of toal bags that Anna has that day
            buys += people - extra; // the amount Anna is forced to buy is indicative of the amount of people minus the total bags Anna has that day
            extra = 0; // Anna now has no more extra bags
            cout << "On day " << i + 1 << " there were " << extra << " extra " << "and Anna bought " << buys << "bags" ; 
        }
        else { // the amount of people is LESS THAN the number of total bags Anna has that day
            extra -= people; // the amount extra left over that day is equal to the inital number of bags minus people
            cout << "On day " << i + 1 << " there were " << extra << " extra bags left over." ; 
        }
    }
    cout << endl << "Anna buys " << buys << "bags";
}