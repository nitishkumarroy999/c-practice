#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangle(vector<int> &heights)
{
    int n = heights.size();

    /*	The stack holds indexes of heights[] array.
    	The bars stored in the stack are always in
    	increasing order of their heights.
    */
    stack<int> currentStack;

    // Initialize max area.
    int maxArea = 0;

    // To store the top of the stack.
    int topOfStack = 0;

    // To store an area with the top bar as the smallest bar.
    int areaWithTop = 0;

    // Run through all bars of a given histogram.
    int i = 0;
    while (i < n)
    {

        /*  If this bar is higher than the bar on the top stack,
        	push it to stack.
        */

        if (currentStack.empty() || heights[currentStack.top()] <= heights[i])
        {
            currentStack.push(i++);
        }
        else
        {

            /*	Calculate the area with heights[topOfStack]
        		stack as the smallest bar.
            */
            topOfStack = heights[currentStack.top()];
            currentStack.pop();
            areaWithTop = topOfStack * i;

            if (!currentStack.empty())
                areaWithTop = topOfStack * (i - currentStack.top() - 1);

            maxArea = max(maxArea, areaWithTop);
        }
    }

    /*	Now pop the remaining bars from the stack and
    	calculate the area with every popped bar
    	as the smallest bar.
    */
    while (!currentStack.empty())
    {
        topOfStack = heights[currentStack.top()];
        currentStack.pop();
        areaWithTop = topOfStack * i;

        if (!currentStack.empty())
            areaWithTop = topOfStack * (i - currentStack.top() - 1);

        maxArea = max(maxArea, areaWithTop);
    }
    return maxArea;
}

int main()
{
    int numHeights;
    cout << "Enter number of heights: ";
    cin >> numHeights;

    vector<int> heights(numHeights);
    cout << "Enter heights of the histogram\n";
    for (int i = 0; i < numHeights; i++)
        cin >> heights[i];
    cout << "Area of largest rectangle in histogram: ";
    cout << largestRectangle(heights);
}