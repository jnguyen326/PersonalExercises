#include <iostream>
#include<list>

using namespace std;

//a class is a user defined datatype, unique and different
// from int, bool, float, char, etc...
// so 'class YoutubeChannel' = datatype YoutubeChannel in other words
class YoutubeChannel {
    //what are attributes to a youtube channel?

public:                //this is called public access modifier
                       // we need this in order to use Name, OrderName etc outside
                       // ex. ytChannel.SubscribersCoumt
                       //by default members of a class are private and inaccessible to other functions
    string ChannelName;
    string OwnerName;
    int SubscribersCount;

    //need list template #include<list> AND 'using namespace' to work
    list<string> PublishedVideoTitles; //this is a list called Published videos of type string
                                       // strings are going to be the titles and will be stored in a list
                                       // you can replace string with a class you made that are the
                                       // attributes of the videos. ex -> class Description, class Likes, class Duration...


};
int main() {

    //creating an object
    YoutubeChannel ytChannel;   //variable ytChannel of class YoutubeChannel
    //now we can give properties to our variable ytchannel with a '.' and the properties
    //we made in 'class YoutubeChannel' above.

    ytChannel.ChannelName = "Stan Nijisanji";                                      //string Name
    ytChannel.OwnerName = "Jen";                                            //string OwnerName
    ytChannel.SubscribersCount = 10;                                        //int SubscribersCount
    ytChannel.PublishedVideoTitles = {"Nijirock Concert Live Highlights",   //list PublishedVideoTitles
                                      "2434 Anniversary",
                                      "Who Thought of Globalization?"};

    // list<string> is not simple to print like the others :)
    std:: cout << "Channel Name: " << ytChannel.ChannelName <<  endl;
    std:: cout << "Owner Name: " << ytChannel.OwnerName <<  endl;
    std:: cout << "Subscriber Count: " << ytChannel.SubscribersCount <<  endl;

    cout << "\n";

    cout << "Videos: \n";
    //to write out a list we need to use a loop
    // we need to force all the titles into a single variable
    //so let's call the new single variable 'videoTitles
    // new type string 'videoTitles' because the titles will be strings
    // after colon, specify which List we were getting the titles from
    for(string videoTitles: ytChannel.PublishedVideoTitles){
        cout << videoTitles << endl;
    }


    return 0;
}

/*Output
Channel Name: Stan Nijisanji
Owner Name: Jen
Subscriber Count: 10

Videos:
Nijirock Concert Live Highlights
2434 Anniversary
Who Thought of Globalization?

Process finished with exit code 0*/
