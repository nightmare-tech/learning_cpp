// Refer here for video explanation: https://youtu.be/BnMnozsSPmw

#include <iostream>
using namespace std;
#include <list>

struct YoutubeChannel {

    string Name;
    int SubscriberCount;

    YoutubeChannel(string name, int subscriberCount){
        Name = name;
        SubscriberCount = subscriberCount;
    }

    bool operator==(const YoutubeChannel& channel)const
    {
        return this->Name == channel.Name && this->SubscriberCount==channel.SubscriberCount;
    }
};




ostream& operator<<(ostream& COUT, YoutubeChannel& ytChannel){
    COUT<<"Name: " << ytChannel.Name << endl;
    COUT<<"Subscribers: " << ytChannel.SubscriberCount << endl;
    return COUT;
}


struct MyCollection {
    list<YoutubeChannel>myChannels;
    
    void operator+=(YoutubeChannel& channel){
        this->myChannels.push_back(channel);
    }


    void operator-=(YoutubeChannel& channel)
    {
        this->myChannels.remove(channel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection)
{
    for(YoutubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    
    return COUT;
}


int main(){
    
    YoutubeChannel yt1=YoutubeChannel("CodeBeauty", 75000);
    YoutubeChannel yt2=YoutubeChannel("FreeCodeCamp", 6370000);
    MyCollection myCollection;
    // cout << yt1;
    // operator<<(cout,yt1); // We can directly call operator function too !
    myCollection += yt1;
    myCollection += yt2;
    cout << myCollection;

    myCollection -= yt2;
    cout << "\nEdited Collection:\n"<<endl; 

    cout << myCollection;
    



    return 0;
}
