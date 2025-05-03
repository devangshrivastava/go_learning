#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <queue>
#include <deque>
#include <list>
#include <bitset>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
using namespace std;



class snake_and_ladder{
    public:
        vector<pair<int, int>> snakes;
        vector<pair<int, int>> ladders;
        vector<int> players;        
};


int main() {

    int snakes_count;
    int ladders_count;

    snake_and_ladder game;

    cout<<"Enter the number of snakes: ";
    cout<<"Enter the snake position (between 1-100) and the mouth position > tail position";
    cin>>snakes_count;
    for(int i=0; i<snakes_count; i++){
        int tail=1, head=99;
        cout<<"Enter snake "<<i+1<<"tail, head: ";
        cin>>tail>>head;

        if(tail>head){
            cout<<"Invalid snake position"<<endl<<"Tail should be less than head"<<endl;
            i--;
            continue;
        }
        if(tail<1 || tail>100 || head<1 || head>100){
            cout<<"Invalid snake position"<<endl<<"Position should be between 1-100"<<endl;
            i--;
            continue;
        }
        game.snakes.push_back(make_pair(tail, head));
    }

    cout<<"Enter the number of ladders: ";
    cin>>ladders_count;
    cout<<"Enter the ladder position (between 1-100) and start position < end position";

    for(int i=0; i<ladders_count; i++){
        int start=1, end=99;
        cout<<"Enter ladder "<<i+1<<"start, end: ";
        cin>>start>>end;

        if(start>end){
            cout<<"Invalid ladder position"<<endl<<"Start should be less than end"<<endl;
            i--;
            continue;
        }
        if(start<1 || start>100 || end<1 || end>100){
            cout<<"Invalid ladder position"<<endl<<"Position should be between 1-100"<<endl;
            i--;
            continue;
        }
        game.ladders.push_back(make_pair(start, end));
    }


    return 0;
}