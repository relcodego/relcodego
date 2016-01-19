#include <iostream>

#include <sstream>

#include <string>

#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/text_oarchive.hpp>

#include <vector>

#include <boost/serialization/vector.hpp>

#include <fstream>

using namespace std;

using namespace boost::serialization;

using namespace boost::archive;


int main()

{

     vector<int> v;

     for(int i=0;i!=12;i++)

     {   

         v.push_back(i);

     }   

    ofstream os("file",ios::out);

    text_oarchive oa(os);
     oa<<v;
    os.close();    

     ifstream is("file",ios::in);

     text_iarchive ia(is);


    vector<int> vr; 

    ia>>vr;


is.close();


    for(size_t i=0;i!=vr.size();++i)                                                                           

      cout<<vr[i]<<endl;                                                                                       

                                                                                                                                                                                    

    return 0;                                                                                                  

}              
