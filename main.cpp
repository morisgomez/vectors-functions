//myPermutation applies a special permutation to the numbers: moving the last
//element to the beginning. For example, a vector 1 2 3 will become 3 1 2 after the
//function call.
#include <iostream>
#include <vector>
using namespace std;
void myPermutation(vector<int> & vec)
{
    int value = vec[vec.size() - 1]; //gets last value from vec.
    vec.pop_back(); //removes last element in vec.
    vector<int> newVec; //creates empty vec.
    newVec.push_back(value); //add the last value from vec into the first element from new empty vector newVec.
    //for loop begins here.
    for (int counter = 0; counter < vec.size(); counter++)
    {
        newVec.push_back(vec[counter]); //adds the remaining elements to newVec in indexing order.
    } //closes for loop.
    vec = newVec; //the vec from main is assigned the newVec;
}//close function

int main ()
{
    vector<int> userVec = {10, 20, 30};
    myPermutation(userVec);
    cout << userVec[0] << " " << userVec[1] << " " << userVec[2]; //has to be 3, 1, 2
    return 0;
}
//sidenote/question: const with & avoids changing the original vector - only const avoids changing the original function too????
