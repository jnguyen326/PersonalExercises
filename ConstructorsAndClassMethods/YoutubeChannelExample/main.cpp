//improved youtube example using a constructor and class method

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
                                       // attributes of the videos. ex -> class Description, class Likes, class Duration.


    ////////////////////////////////
    //CONSTRUCTORS////////////////
    //constructors will help us make our code above less redundant
    //constructor is invoked each time you create an object of a specific class
    //RULES
    //1. constructor must have the same name as your class
    //2. the constructor does not have a return type

    //a constructor is invoked each time you create an object of a specific class
    // it will help us build our multiple objects FASTER!!!
    //RULES
    //1. constructor must have the same name as your class
    //2. the constructor does not have a return type

    //Constructor 'YoutubeChannel'
    YoutubeChannel(string channelName, string ownerName) {      //these NEW two parameters(in the parenthesis)
                                                                //will be passed through this constructor
                                                                //so that it will assign these new parameters to the properties
                                                                //of string ChannelName and string OwnerName declared above this block
        ChannelName = channelName;
        ownerName = ownerName;
        SubscribersCount = 0;  //new youtube channels don't have any subscribers so we don't need to pass it in our parameters

    }

    //making a class method to get rid of the repetitive code that was in main
    void GetInfo() {
        std::cout << "Channel Name: " << ChannelName << endl;
        std::cout << "Owner Name: " << OwnerName << endl;
        std::cout << "Subscriber Count: " << SubscribersCount << endl;
        cout << "Videos: \n";
        //to write out a list we need to use a loop
        // we need to force all the titles into a single variable
        //so let's call the new single variable 'videoTitles
        // new type string 'videoTitles' because the titles will be strings
        // after colon, specify which List we were getting the titles from
        for (string videoTitles: PublishedVideoTitles) {
            cout << videoTitles << endl;
        }
    }
};

int main() {

    //creating an object with our new constructor!
    YoutubeChannel ytChannel("Stan Nijisanji",
                             "Jen");  //pass the channelNme and ownerName parameters the constructor needs to receive
    //end of our constructor in action

    //what about our published video titles?
    //use .push_back with your object and attribute List
    ytChannel.PublishedVideoTitles.push_back("Nijirock Concert Live Highlights");
    ytChannel.PublishedVideoTitles.push_back("2434 Anniversary");
    ytChannel.PublishedVideoTitles.push_back("Who Thought of Globalization?");

    //let's get our info for youtube channel
    ytChannel.GetInfo();

    cout << "\n";

    //let's use the constructor and our class method to make a new 2nd channel
    YoutubeChannel ytChannel2("Cooking With The Dog", "Francis");
    ytChannel2.GetInfo();




    //don't need this anymore because of our constructor
/*  ytChannel.ChannelName = "Stan Nijisanji";                                      //string Name
    ytChannel.OwnerName = "Jen";                                            //string OwnerName
    ytChannel.SubscribersCount = 10;                                        //int SubscribersCount
    ytChannel.PublishedVideoTitles = {"Nijirock Concert Live Highlights",   //list PublishedVideoTitles
                                      "2434 Anniversary",
                                      "Who Thought of Globalization?"};*/


    //this is the repetitive code that was moved into our class method
//////////////////////////////////////////////////////////////////////////////////////////
    /* // list<string> is not simple to print like the others :)
     std:: cout << "Channel Name: " << ytChannel.ChannelName <<  endl;
     std:: cout << "Owner Name: " << ytChannel.OwnerName <<  endl;
     std:: cout << "Subscriber Count: " << ytChannel.SubscribersCount <<  endl;
     cout << "Videos: \n";
     //to write out a list we need to use a loop
     // we need to force all the titles into a single variable
     //so let's call the new single variable 'videoTitles
     // new type string 'videoTitles' because the titles will be strings
     // after colon, specify which List we were getting the titles from
     for(string videoTitles: ytChannel.PublishedVideoTitles){
         cout << videoTitles << endl;
     }*/
////////////////////////////////////////////////////////////////////////////////////////////////////

}

/*Output--
Channel Name: Stan Nijisanji
Owner Name:
Subscriber Count: 0
Videos:
Nijirock Concert Live Highlights
2434 Anniversary
        Who Thought of Globalization?

Channel Name: Cooking With The Dog
Owner Name:
Subscriber Count: 0
Videos:

Process finished with exit code 0*/

    
