#include <bits/stdc++.h>
using namespace std;

void input_file(char* filename, vector<int> &destination)// vector<int> &destination)
{
    int i = 0;
    ifstream infile(filename);
    string num;
    getline(infile, num);
    stringstream stream(num);

    while(stream)
    {
        int key = 0;
        stream >> key;
        if(key != 0)
        {
            destination[i] = key;
            i = i + 1;
        } 
        
    }
//    cout << i << endl;
    
}

int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    int stack1 = 0;

    for(int h1_i = 0; h1_i < n1;h1_i++){
       input_file("1.txt", h1);
       //cin >> h1[h1_i];
       //cout << "Input taken" << endl;
       
    }
    
    
    for (int i = n1 - 1 ;  i >= 0 ; i-- )
    {
        stack1 = h1[i] + stack1;        
    }
    vector<int> h2(n2);
    int stack2 = 0;
    for(int h2_i = 0;h2_i < n2;h2_i++){
       input_file("2.txt", h2);
       //cin >> h2[h2_i];
    }
    
    for(int i = n2 - 1 ; i >= 0 ; i--)
    {
        stack2 = h2[i] + stack2; 
    }
    
    vector<int> h3(n3);
    int stack3 = 0;
    for(int h3_i = 0;h3_i < n3;h3_i++){
    
       input_file("3.txt", h3);
       //cin >> h3[h3_i];
    }
    
    for(int i = n3 - 1 ; i >= 0 ; i--)
    {
        stack3 = h3[i] + stack3;     
    }


    int top1 = stack1, top2 = stack2, top3 = stack3, val = 10;
    
    int h1_counter = 0, h2_counter = 0, h3_counter = 0; 
    while(!(top1 == top2 && top2 == top3))
    {
        if(h1_counter == n1 || h2_counter == n2 || h3_counter == n3)
        {
            cout << 0 << endl;
            val = 0;
            break;
        }
        
        if(top1 >= top2 && top1 >= top3)
        {
            top1 = top1 - h1[h1_counter];
            h1_counter = h1_counter + 1;
            
        }
        if(top2 >= top1 && top2 >= top3)
        {
            top2 = top2 - h2[h2_counter];
            h2_counter = h2_counter + 1;
            
        }
        if (top3 >= top2 && top3 >= top1)
        {
            top3 = top3 - h3[h3_counter];
            h3_counter = h3_counter + 1;
            
            //stack3.top();
        }
    }
    if (val == 10)
    
    {cout << top1 << endl;}
    return 0;
}