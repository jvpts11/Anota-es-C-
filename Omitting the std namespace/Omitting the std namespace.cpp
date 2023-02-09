#include <iostream>

/*

typing std::cout or std::something everytime that you use from the std namespace is a little boring and annoying no?

as we saw in the namespace section, you can import everything in a namespace, we can do it with std too:

*/

using namespace std;

int main()
{

    string word = "With this extremely lazyness you saved some typing";

    cout << word;


    /*
    
    beside it works and etc etc, it is not a good practice doing this because conflicts might happen though your coding
    and then you don't know what's going on, omitting the std namespace is better when you do it inside a function or inside
    a namespace, something that isn't in the global scope because you're saying: HEY, EVERYONE, LISTEN, DO THIS SHIT AND IT'S FINEEEEE

    this is not good, and if you do it in a header file, it's worse because you're saying for everyone that will use that header file:

    HEEEEEEEEEEEY EVERYONEEEEEE USE THIS SHIT LIKE THIS, IS FINEEEEEEEE

    instead of doing this stupid shit, is better specifying WHAT you want to use, like this: using std::string; using std::cout;
    doing this you save your typing and avoid naming conflicts and other annoying things
    
    */

    return 0;
}