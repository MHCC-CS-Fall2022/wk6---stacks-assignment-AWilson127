/*******************************************************************************
* Filename:   stacksArray.cxx
* Summary:    This program that prints out the array version of the stacks
*             from bottom to top and compares two stacks to see if they are the 
*             same.
* Author:      Alen Wilson
* Date:        11/8/2022
*******************************************************************************/

#include <cctype>     // Provides isdigit
#include <cstdlib>    // Provides EXIT_SUCCESS
#include <cstring>    // Provides strchr
#include <iostream>   // Provides cout, cin, peek, ignore
#include <stack>      // Provides the stack template class
using namespace std;

void showBottomToTop(stack<int>);
// Precondition: The stack must have numbers in them
// Postcondition: The stack that is put in will be printed in the order
//                from top to bottom.

bool compareStacks(stack<int>, stack<int>);
// Precondition: The stack must have numbers in them
// Postcondition: This will compare two stacks to see if they are the same or not
//                and return true if they are the same or return false if not.

int main( )
{
    // stacks that are made
    stack<int> stack1;
    stack<int> stack2;

    // pushing numbers into the stack1 and stack2
    stack1.push(3);
    stack1.push(4);
    stack1.push(3);
    stack1.push(5);
    stack1.push(6);
    
    stack2.push(6);
    stack2.push(5);
    stack2.push(3);
    stack2.push(4);
    stack2.push(3);
    
    // shows the order from bottom to top in stack1
    cout << "Bottom to top" << endl;
    showBottomToTop(stack1);
       
    // sees if stack1 and stack2 have the same numbers in the same position
    cout << "Comparing two stacks" << endl;
    if(compareStacks(stack1, stack2))
       cout << "They are the same" << endl;
    else 
       cout << "They are not the same" << endl;
    
    return EXIT_SUCCESS;
}

// function that takes a stacks and transfers it to an array then reverses
// the array so that it goes from bottom to top instead of top to bottom
void showBottomToTop(stack<int> stack)
{
    int tempArray[stack.size()];
    int used = stack.size();
    for(int i = 0; i < stack.size()+i; i++)
    {
        tempArray[i] = stack.top();
        stack.pop();
    }
    
    for(int i = (used -1); i>=0; i--)
    {
        cout << tempArray[i] << ", ";
    }
    
    cout << endl;
}

// function that compares two stacks and returns true or false if they are
// the same or not the same
bool compareStacks(stack<int> stack1, stack<int> stack2)
{
    if(stack1 == stack2)
       return true;
    
    return false;
}

