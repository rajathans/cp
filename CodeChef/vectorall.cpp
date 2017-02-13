#include <bits/stdc++.h>
using namespace std;

int main() 
{
	vector<int> vec(10,9);  //eqivalent to vec.assign(10,9)

	for(int i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
	cout<<endl;

	vec.clear(); // resizes vector to 0 destroys all elements

	for(int i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
	cout<<endl;
	if(vec.empty())
		cout<<"Empty"<<endl;

	vec.assign(10,9);
	if(vec.empty())  // true is vector is of size 0, false otherwise
		cout<<"Empty"<<endl;
	else
		cout<<"Not empty"<<endl;

	cout<<"Size before erasing = "<<vec.size()<<endl;
	vec.erase(vec.begin()+5);  //deletes the 6th element from the vector
	cout<<"After erasing size = "<<vec.size()<<endl;
	vec.erase(vec.begin(),vec.begin()+3);
	cout<<"And further, size = "<<vec.size()<<endl;

	//---------------------------------------------------------------------

	vector<int> myvector (3,100);
	vector<int>::iterator it;

	it = myvector.begin();
	it = myvector.insert ( it , 200 );

	myvector.insert (it,2,300);

	cout<<endl;
	cout<<"After first insert:"<<endl;
	for(int i=0;i<myvector.size();i++)
		cout<<myvector[i]<<" ";
	cout<<endl;

	// "it" no longer valid, get a new one:
	it = myvector.begin();

	vector<int> anothervector (2,400);
	myvector.insert (it+2,anothervector.begin(),anothervector.end());

	cout<<endl;
	cout<<"After inserting anothervector:"<<endl;
	for(int i=0;i<myvector.size();i++)
		cout<<myvector[i]<<" ";
	cout<<endl;

	int myarray [] = { 501,502,503 };
	myvector.insert (myvector.begin(), myarray, myarray+3);
    
    cout<<endl;
    cout<<"After inserting myarray:"<<endl;
    for(int i=0;i<myvector.size();i++)
		cout<<myvector[i]<<" ";
	cout<<endl;

	return 0;
}

