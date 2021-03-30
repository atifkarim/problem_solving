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

    void get1(this);

    void add_file_name(std::string name);

    void add_text_line(DataStatus enum_val);
};

void DataHolder::add_file_name(std::string name)
{

}

void DataHolder::add_text_line(DataStatus enum_val)
{

}


int main(){
    std :: vector <std :: tuple <DataStatus , DataHolder>> dataOverview ;
    std::string testText1 = "Add me";
    std::string testText2 = "Write me";
    std::cout<<"Hello\n";

    // std::cout<<"Enum Red: "<<static_cast<int>DataStatus::Red<<std::endl;

    return 0;
}