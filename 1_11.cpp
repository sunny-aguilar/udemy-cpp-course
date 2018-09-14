///*********************************************************************
//** Author:          Sandro Aguilar and Kuljot Biring
//** Date:            AUgust 28, 2018
//** Description:     Inheritance - public vs protected vs private
//*********************************************************************/
//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//
//class Person {
//    private:
//        int age;
//
//    protected:
//        string eyeColor;
//
//    public:
//        Person() {}
//        int getAge() { return age; }
//        void setAge(int age) { this->age = age;}
//        void setColor(string color) { this->eyeColor = color; }
//        string getColor() { return eyeColor; }
//        int publicInt;
//        void setPublic(int num) { publicInt = num; }
//};
//
//class Student: public Person {
//    private:
//        int height;
//    public:
//        Student() {};
//        Student(string color) { eyeColor = " "; }
//        int setAge(int a) { publicInt = a; }
//        string getColor() { return eyeColor; }
//        int getPublic() { return publicInt; }
//};
//
//int main() {
//    Person sunny;
//    Student sandro;
//    sunny.setAge(36);
//    sunny.setColor("hazel");
//    sandro.setPublic(10);
//
//    cout << "sunny age: " << sunny.getAge() << endl;
//    cout << "sandro eye color: " << sunny.getColor() << endl;
//    cout << "sandro age: " << sandro.getAge() << endl;
//    cout << "sandro eye color: " << sandro.getColor() << endl;
//
//    cout << "Get public Int: " << sandro.getPublic() << endl;
//
//    return 0;
//}
