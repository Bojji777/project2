#include <iostream>

using namespace std;

class Post
{
    private: 
        string body;
        string post_author;
        int num_likes;
        string date;

    public:
        Post();
        Post(string body_in,string post_author_in,int num_likes_in,string date_in);

        //getters
        string getPostBody();
        string getPostAuthor();
        int getPostLikes();
        string getPostDate();

        //setters
        void setPostBody(string body_in);
        void setPostAuthor(string post_author_in);
        void setPostLikes(int num_likes_in);
        void setPostDate(string date_in);
};