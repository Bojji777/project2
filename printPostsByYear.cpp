#include "Post.h"
#include <iostream>

using namespace std;

int split(string input_string, char separator, string arr[],int arr_size)
{
    int len = input_string.length();
    int indexArr = 0;
    int oldSeperator = -1;
    if(input_string == "")
        {
            return 0;
        }
    
    for(int indexStr = 0; indexStr < len; indexStr++)
    {
        if(input_string[indexStr] == separator)
        {
            if(indexArr < arr_size) // make sure we only store the asked amount of arrays
            {   
                arr[indexArr] = input_string.substr(oldSeperator + 1, indexStr - (oldSeperator + 1));
                indexArr++; // the string array index

            } else
            {
                return -1;
            }

            oldSeperator = indexStr;
        }
    }
    arr[indexArr] = input_string.substr(oldSeperator + 1, input_string.length() - (oldSeperator + 1)); 
    indexArr++;

    if(indexArr > arr_size)
    {
        return -1;
    }

    return indexArr;
}


int readPosts(string file_name,Post posts[], int num_posts_stored,int post_arr_size)
{
    string line;
    int size = 4; // test body, user handle, how many likes, post date
    char delim = ','; 
    int index = 0;
    string tempArr[4];

    ifstream infile;
    infile.open(file_name);

    if(num_posts_stored == post_arr_size && infile.fail())
    {
        return -2;
    }

    if(infile.fail())
    {
        return -1;
    }

    if(num_posts_stored == post_arr_size)
    {
        return -2;
    }

    while(!infile.eof())
    {
        getline(infile,line);

        int returnSplitValue = split(line, delim, tempArr, size);

        if(tempArr[0] != "" && tempArr[1] != "" && tempArr[2] != "" && tempArr[3] != "" && index < post_arr_size) //checking to see if the four elements are not NULL.
        {
        
            Post tempPost = Post(tempArr[0],tempArr[1],stoi(tempArr[2]), tempArr[3]); // temporary arr that is storing the values from the split function
            posts[index] = tempPost;

            index++;
        
        }

        // clears second to last arr
        tempArr[0] = "";
        tempArr[1] = "";
        tempArr[2] = "";
        tempArr[3] = "";
            
    }

    infile.close();

    return index;
    

}


void printPostsByYear(Post posts[], string year, int num_post_stored)
{
    for(int i = 0; i < num_post_stored; i++)
    {
        if(year == posts[])



    }





}


int main()
{

}