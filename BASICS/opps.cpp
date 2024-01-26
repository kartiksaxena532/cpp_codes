//oop part-1
ek object ek entity hoti hai jiske paas do cheezien hoti hai 
1.state /property
2.behaviour

let ek hero hai 
uska naame hota hai 
health hoti hai 
konse level ka paul hai
uska behaviour hai attack karna 

CLASS is a user defined data type hai uksa naam hai hero let say
usi class ka intance object hai

class Hero{
public:
char name [100];
int health;
char level;
};

int main(){
// yahan meine ek hero type ka object bana diya jiska naam remesh hai
Hero remesh;
remesh.level =70;
remesh.health=80;
cout<<"size:"<< sizeof(h1)<<endl;
cout<<"level is:"<<ramesh.level<<endl;

return 0;

}

Ya toh hero ko ek seperate file bana ke usko #include "Hero.cpp" likh ke include kardo
aur uss hero file mein class likh lo

//acess modifiers
3 types ke hote hai
1.private // defalut ye hota hai hrr object ka
2.public
3.protected

private ko class ke anadr hi access hi kar saskte hai bahar nhi

agar kisi class mein koi element ko priavte kar rakha hai toh usko 
getter aur setter se use kar sakte hai 

public:
char level;
private : 
int health;

void getHealth(){
return health;

}
int setLevel(char ch){
level= ch;

}

int main(){
Hero ramesh;
cout<<"Ramesh health is "<< ramesh.getHealth()<<endl;
ramesh.setHealth(70);


}
//PADDING
Structure padding is defined as the process of adding one
 or more empty bytes between the different data types to
 align data in memory. Structure padding increases memory 
consumption but is reduces CPU cycles. Structure contains 
structure members which can be accessed by a processor in 
chunks of 4 bytes at a time.


kisi bhi object ko initailize karne ke liye humko constructor chaiye 
hota hai toh program ke pass ek default constructor hota hai
jo class name ke saath ban jaat hai
object.class() 
iska koi return type nhi hota hai


jaise constructor hrr obejct ke liye ek hi baar call hota hai waise hi
destructor hrr object ke liye ek hi baar call hota hai

//////////////////////////////////////////////////
There are a certain set of rules for the declaration and initialization of the constant variables:

The const variable cannot be left un-initialized at the time of the assignment.
It cannot be assigned value anywhere in the program.
Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.

//syntax to initialise 
datatype ClassName :: feildname = value;
