// https://stackoverflow.com/questions/321801/enum-c-get-by-index/321828
# include <iostream>
# include <vector>
# include <tuple>
# include <string>

enum DataStatus{
    Red,
    Green
};

struct DataHolder{
    // DataStatus enum_val;
    std::string fileName;
    std::vector<std::string> lines;

    DataHolder(){}

    // void get1(this);

    void add_file_name(std::string name);

    void add_text_line();
};

void DataHolder::add_file_name(std::string name)
{
    lines.push_back(name);
}

void DataHolder::add_text_line()
{

}

std::tuple<int , DataHolder> give_me_tuple(int index, DataHolder obj){
    DataStatus myValue = (DataStatus)index;
    return std::make_tuple(myValue, obj.lines[index]);
}


int main(){
    enum DataStatus d;
    d = Red;

    using UserUndT = std::underlying_type<DataStatus>::type;

    std :: vector <std :: tuple <int , DataHolder>> dataOverview ;
    std::string testText1 = "Add me";
    std::string testText2 = "Write me";
    std::cout<<"Hello\n";

    DataHolder obj;
    obj.add_file_name(testText1);
    obj.add_file_name(testText2);

    // for(int i = 0; i< obj.lines.size(); i++){
    //     std::cout<<obj.lines[i]<<" ";
    // }

    std::tuple<int , DataHolder> first_tuple;
    // first_tuple = std::make_tuple(DataStatus::Red , obj.lines[0]);

    // std::cout<<"Enum Red: "<<static_cast<int>DataStatus::Red<<std::endl;

    return 0;
}