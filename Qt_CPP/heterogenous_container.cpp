// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// struct XYZ {
//     int x;
//     string y;
//     float z;
// };
// // std::vector<XYZ> container;

// int main() {

//     std::vector<XYZ> container;
//     XYZ el;
//     el.x = 10;
//     el.y = "asd";
//     el.z = 1.1;
//     container.push_back(el);
//     container.push_back(el);
//     container.push_back(el);

//     vector<int> my_vector;
//     my_vector = {1,2,3,5};
//     for (int i =0;i<my_vector.size();i++)
//     {
//         cout<<my_vector[i]<<" "<<endl;
//     }
//     cout<<"*****************"<<endl;
//     for (int i =0;i<my_vector.size();i++)
//     {
//         std::cout<<my_vector.at(i)<<endl;
//         // cout<<container<<endl;
//     }

//     cout<<"*****************"<<endl;

//     for (auto i = my_vector.begin(); i != my_vector.end(); ++i)
//         std::cout << *i << ' ';

//     // container.visit(print_visitor{});
//     cout<<endl;
//     cout<<"*****************"<<endl;

//     cout<<container.size()<<endl;

//     return 0;

// }


#include<iostream>
#include<string>
#include<vector>
using namespace std;

// struct XYZ {

//     int x;
//     string y;
//     float z;
// };
struct XYZ {

    int x;
    string y;
    float z;
};
// std::vector<XYZ> container;

int main() {

    std::vector<XYZ> container;
    XYZ el[3];
    el[0].x = 10;
    el[0].y = "asd";
    el[0].z = 1.1;

    el[1].x = 107;
    el[1].y = "ad";
    el[1].z = 1.8;

    el[2].x = 108;
    el[2].y = "sd";
    el[2].z = 1.7;

    container.push_back(el[0]);
    container.push_back(el[1]);
    container.push_back(el[2]);
    // container.push_back(el);
    // container.push_back(el);

    vector<int> my_vector;
    my_vector = {1,2,3,5};
    for (int i =0;i<my_vector.size();i++)
    {
        cout<<my_vector[i]<<" "<<endl;
    }
    cout<<"*****************"<<endl;
    // for (int i =0;i<container.size();i++)
    // {
    //     std::cout<<container[i]<<endl;
    //     // cout<<container<<endl;
    // }
    // for (int i =0;i<container.size();i++){
    //     cout<<container[i].x<<endl;
    // }

    cout<<"\nContainer Vector Printing\n";
    for (int i =0;i<container.size();i++)
    {
        cout<<container[i].x<<endl;
    }


    cout<<endl;
    cout<<"*****************"<<endl;

    cout<<container.size()<<endl;

    return 0;

}
