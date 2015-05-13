#include <iostream>
#include <vector>
#include <string>

using namespace std;

main()
{
   vector<string> SS;

   SS.push_back("The number is 10");
   SS.push_back("The number is 20");
   SS.push_back("The number is 30");

   cout << "Loop by index:" << endl;

   int ii;
   for(ii=0; ii < SS.size(); ii++)
   {
      cout << SS[ii] << endl;
   }

   //Forward Iterate---------------------------
   cout << endl << "Constant Iterator:" << endl;

   vector<string>::const_iterator cii;
   for(cii=SS.begin(); cii!=SS.end(); cii++)
   {
      cout << *cii << endl;
   }
   //------------------------------------------

   cout << "front and back of vector" << endl;
   cout << SS.front() << endl;
   cout<< SS.back() <<endl;

   //Reverse Iterate---------------------------
   cout << endl << "Reverse Iterator:" << endl;

   vector<string>::reverse_iterator rii;
   for(rii=SS.rbegin(); rii!=SS.rend(); ++rii)
   {
      cout << *rii << endl;
   }
   //------------------------------------------
   cout << endl << "Sample Output:" << endl;

   cout << SS.size() << endl;
   cout << SS[2] << endl;


   cout << SS.empty() << endl;
   cout << SS.size() << endl;
   //Copying Vector to another Vector----------
   vector <string> TT(SS);
   cout << TT.size() << endl;
   //------------------------------------------

   //pop from the vector-----------------------
   TT.pop_back();
   cout<<"After Popping" << endl;
   for(cii=TT.begin(); cii!=TT.end(); cii++)
   {
      cout << *cii << endl;
   }
   //------------------------------------------

   //Abbreviated Loop--------------------------
   for (auto& v : SS){
        cout << v << endl;
    }
   //------------------------------------------


   //Assigning to vectors----------------------
   TT.assign(SS.begin(), SS.end());
   cout << "TT = " << endl;
   for (auto& v : TT) cout << v << endl;
   cout << endl;
   cout << TT.size() << endl;

   TT.assign(7, "XC");
   cout << "TT = " << endl;
   for (auto& v : TT) cout << v << " ";
   cout << endl;
   cout<<TT.size() << endl;

   TT.assign({ "GF","HI","JK"});
   for (auto& v : TT) cout << v << " ";
   cout << endl;
   cout<<TT.size() <<endl;
   //------------------------------------------

   ///swap(SS[0], SS[2]);

}