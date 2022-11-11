/*******************************************************************************
* Filename:   stack2.h
* Summary:    This program that prints out the array version of the stacks
*             from bottom to top and compares two stacks to see if they are the 
*             same.
* Author:      Alen Wilson
* Date:        11/8/2022
*******************************************************************************/
//
// CONSTRUCTOR for the stack<Item> template class:
//   stack( )
//     Postcondition: The stack has been initialized as an empty stack.
//
// MODIFICATION MEMBER FUNCTIONS for the stack<Item> class:
//   void push(const Item& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been pushed onto the stack.
//
//   Item pop( )
//     Precondition: size( ) > 0.
//     Postcondition: The top item of the stack has been removed.
//
// CONSTANT MEMBER FUNCTIONS for the stack<Item> class:
//   bool empty( ) const
//     Postcondition: Return value is true if the stack is empty.
//
//   size_type size( ) const
//     Postcondition: Return value is the total number of items in the stack.
//
//   Item top( )
//     Precondition: size( ) > 0.
//     Postcondition: The return value is the top item of the stack (but the
//     stack is unchanged. This differs slightly from the STL stack (where
//     the top function returns a reference to the item on top of the stack).
//
// VALUE SEMANTICS for the stack<Item> class:
//   Assignments and the copy constructor may be used with stack<Item>
//   objects.
//
// DYNAMIC MEMORY USAGE by the stack<Item> template class:
//   If there is insufficient dynamic memory, then the following functions
//   throw bad_alloc:
//   the copy constructor, push, and the assignment operator.

#ifndef MAIN_SAVITCH_STACK2_H
#define MAIN_SAVITCH_STACK2_H
#include <cstdlib>   // Provides NULL and size_t
#include "node2.h"   // Node template class from Figure 6.5 on page 308

namespace main_savitch_7B
{
    template <class Item>
    class stack
    {
    public:
        // TYPEDEFS 
        typedef std::size_t size_type;
        typedef Item value_type;
        // CONSTRUCTORS and DESTRUCTOR
        stack( ) { top_ptr = NULL; }
        stack(const stack& source);
        ~stack( ) { list_clear(top_ptr); }
        // MODIFICATION MEMBER FUNCTIONS
        void push(const Item& entry);
        void pop( );
        void operator =(const stack& source);
        // CONSTANT MEMBER FUNCTIONS
        size_type size( ) const
	    { return main_savitch_6B::list_length(top_ptr); }
        bool empty( ) const { return (top_ptr == NULL); }
        Item top( ) const;
    private:
        main_savitch_6B::node<Item> *top_ptr;  // Points to top of stack
    };
}

#include "stackLinkedList.template" // Include the implementation 
#endif
