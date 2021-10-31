#include<iostream>
#include<list>
using namespace std;
class YouTubeChannel
{
public:
	string ChannelName;
	string OwnerName;
	int SubcriberCount;
	list<string>PublishedVideoTitle;

	YouTubeChannel(string name, string ownerName) {
		ChannelName = name;
		OwnerName = ownerName;
		SubcriberCount = 0;
	}
	void GetInfo() {
		cout << "Name :" << ChannelName << endl;
		cout << "Owner Name: " << OwnerName << endl;
		cout << "Subcribers : " << SubcriberCount << endl;
		cout << "Videos : " << endl;
		for (string videoTitle : PublishedVideoTitle)
		{
			cout << videoTitle << endl;
		}
	}

};
int main()
{
	YouTubeChannel ytChannel("Ajey Nagar","Carry Minati");
	ytChannel.PublishedVideoTitle.push_back("Gold Digger");
	ytChannel.PublishedVideoTitle.push_back("Rap Star Roast");
	ytChannel.PublishedVideoTitle.push_back("Kissing Prank");
	ytChannel.SubcriberCount = 30000;
	YouTubeChannel ytChannel2("Ashish Chanchalani", "Ashish Vines");

	ytChannel.GetInfo();
	ytChannel2.GetInfo();

	system("pause>0");
}