#include "Post.h"
#include <iostream>
#include <string>

using namespace std;

Post::Post()
{
    body = "";
    post_author = "";
    date = "";
    num_likes = 0;
}


Post::Post(string body_in,string post_author_in,int num_likes_in,string date_in)
{
    body = body_in;
    post_author = post_author_in;
    num_likes = num_likes_in;
    date = date_in;
    
}

string Post::getPostBody()
{
    return body;
}

void Post::setPostBody(string body_in)
{
    body = body_in;
}

string Post::getPostAuthor()
{
    return post_author;
}

void Post::setPostAuthor(string post_author_in)
{  
    post_author = post_author_in;
}

int Post::getPostLikes()
{
    return num_likes;
}

void Post::setPostLikes(int num_likes_in)
{
    if(num_likes_in >= 0)
    {
        num_likes = num_likes_in;
    }
    
}

string Post::getPostDate()
{
    return date;
}

void Post::setPostDate(string date_in)
{
    date = date_in;
}

int main()
{
    Post my_post_1 = Post(); // default constructor
    cout << "Post author " << my_post_1.getPostAuthor() << endl;
    cout << "Post body " << my_post_1.getPostBody() << endl;
    cout << "Post date " << my_post_1.getPostDate() << endl;
    cout << "Post likes " << my_post_1.getPostLikes() << endl;

    Post my_post_2 = Post("new post","Raegan", 10, "10/02/22"); // parameterized constructor
    cout << "Post author " << my_post_2.getPostAuthor() << endl;
    cout << "Post body " << my_post_2.getPostBody() << endl;
    cout << "Post date " << my_post_2.getPostDate() << endl;
    cout << "Post likes " << my_post_2.getPostLikes() << endl;

    return 0;
}