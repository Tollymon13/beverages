//======================================================================
======
// Name : assignment_1.cpp
// Author : 
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
//======================================================================
======
#include <iostream>
#include <vector> // POINT 18
#include <algorithm> // POINT 19
#include <memory> // POINT 20
#include "beveragesClass.h"
#include "fruitJuiceClass.h"
#include "energyDrinkClass.h"
#include "carbonatedDrinksClass.h"
using namespace std;
void outputFunction(fruitJuice x){ // POINT 18
x.display();
}
int main() {
// NOTE:
// COMMENTING/UNCOMMETING INDIVIDUAL POINTS IS RECOMMANDED FOR EASIER TEST CODE EXPERIENCE (I.E. LOTS OF PRINTS)
// E.G. UNCOMMENT POINT 1 TEST CODE, THEN COMMENT IT BACK BEFORE UNCOMMETING TEST CODE 2
// HELP: To uncomment/comment large sections of code, use CNTRL + /
// POINT 1 TEST CODE
// carbonatedDrinks g("Cola", "Cherry", 50, 2, "High", "Low", "no vitamins", "High");
// cout << endl;
// g.display();
// POINT 2 TEST CODE - NO TEST CODE
// POINT 3 TEST CODE
// fruitJuice c("Innocent", "Bannana", 20, 4, "Vitamin C and D");
// c.display();
// cout << endl;
// energyDrinks f("RedBull", "Cactus", 40, 3, "High", "Medium");
// f.display();
// POINT 4 TEST CODE
// usage of protected variables
// fruitJuice c("Innocent", "Bannana", 20, 4, "Vitamin C and D");
// c.changeSugarGrams(c, 30);
// cout << endl;
// c.display();
// POINT 5 TEST CODE
// // pass by reference
// energyDrinks f("RedBull", "Cactus", 40, 3, "High", "Medium");
// f.caffeineChange(f, "Low");
// cout << endl;
// f.display();
//
// // pass by value
// f.brandChange(f, "Lucozade");
// cout << endl;
// f.display();
//
// // POINT 6 TEST CODE
// //constant qualifier
// const fruitJuice e("Innocent", "Berries", 25, 3, "Vitamin F and E");
// cout << endl;
// cout << e.getVitamins() << endl;
//
// //constant reference
// cout << endl;
// cout << e.getFlavour(e) << endl;
//
// // POINT 7 TEST CODE
// energyDrinks *a = new energyDrinks("Burn", "Tropical", 0, 2, "High", "Low");
// cout << endl;
// a->display();
// delete a;
//
// // Point 8 TEST CODE
// fruitJuice *o[3];
// o[0] = new fruitJuice("Caprisun", "Oranges", 30, 2, "Vitamin C");
// o[1] = new fruitJuice("Naked", "Blueberries", 40, 5, "Vitamin G and E");
// o[2] = new fruitJuice("Tropicana", "Pineapple", 35, 3, "Vitamin D");
//
// process(o, sizeof(o)/sizeof(o[0]));
// // POINT 9 TEST CODE
// energyDrinks f("RedBull", "Cactus", 40, 3, "High", "Medium");
// fruitJuice c("Innocent", "Bannana", 20, 4, "Vitamin C and D");
// carbonatedDrinks g("Cola", "Cherry", 50, 2, "High", "Low", "no vitamins", "High");
//
// // POINT 10 TEST CODE
// energyDrinks *ptrF = &f;
// carbonatedDrinks *ptrG = &g;
//
// ptrF->display();
// ptrG->display();
//
// cout << endl;
//
// ptrF = ptrG;
//// ptrG = ptrF =f; not allowed
// ptrF->display();
// ptrG->display();
// // POINT 11 TEST CODE
// energyDrinks f("RedBull", "Cactus", 40, 3, "High", "Medium");
// energyDrinks d("RedBull", "Cactus", 60, 3, "High", "Medium");
// energyDrinks g = f + d;
//
// g.display();
// energyDrinks h("RedBull", "Cactus", 40, 3, "High", "Medium");
// energyDrinks v("RedBull", "Cactus", 50, 3, "High", "Medium");
//
// if (h == v)
// {
// cout << "true" << endl;
// }
// POINT 12 TEST CODE
// energyDrinks h("RedBull", "Cactus", 40, 3, "High", "Low"); // FIRST
// energyDrinks f("RedBull", "Cactus", 40, 3, "High", "Medium"); // SECOND
// energyDrinks x("RedBull", "Cactus", 40, 3, "High", "High"); // THIRD
//
// h.display();
// f.display();
// x.display();
//
// h = f = x;
//
// h.display();
// f.display();
// x.display();
// POINT 13 TEST CODE
//fruitJuice c("Innocent", "Bannana", 20, 4, "Vitamin C and D");
//c.new_vitamins_display();
// POINT 14 TEST CODE
// pass by value
// energyDrinks h = energyDrinks("RedBull", "Cactus", 40, 4, "High", "Low"); // FIRST
// energyDrinks a(h);
// h.display();
// a.display();
// pass by reference
// fruitJuice c("Innocent", "Bannana", 20, 4, "Vitamin C and D");
// fruitJuice a(&c);
// c.display();
// cout << endl;
// a.display();
// POINT 15 TEST CODE
// static casting
//long s = 2432403204.4343123213;
//int x = static_cast<int>(s);
//cout << x << endl;
//
//// dynamic down casting
//Beverages *a = new energyDrinks("RedBull", "Cactus", 40, 4, "High", "Low");
//energyDrinks *d = dynamic_cast<energyDrinks*>(a);
//
// POINT 16 TEST CODE
//energyDrinks h = energyDrinks("RedBull", "Cactus", 40, 4, "High", "Low");
//energyDrinks g = energyDrinks("RedBull", "Cactus", 40, 4, "High", "Low");
//
//h.display();
//g.display();
//
//h.printCurrentPrice();
// POINT 17 TEST CODE
// ?
// POINT 18/19 TEST CODE
//
// string x;
// vector<fruitJuice> vect; // vector creation
//
// fruitJuice c = fruitJuice("Innocent", "Bannana", 25, 4, "Vitamin C and D") ;
// fruitJuice d = fruitJuice("Naked", "Green Fruits", 20, 4, "Vitamin C and D");
//
// vect.push_back(c); // insert in vector
// vect.push_back(d); // insert in vector
//
// sort(vect.begin(), vect.end()); // sort algorithm
// for_each(vect.begin(), vect.end(), outputFunction); // for_each algorithm
// POINT 20 TEST CODE
// unique_ptr<energyDrinks> p(new energyDrinks("RedBull", "Cactus", 40, 4, "High", "Low"));
// p.reset(new energyDrinks("Monster", "Mango", 50, 3, "High", "Medium")); // destroys the object and 
replace it with a new one
// auto d = move(p); // move pointer to a new pointer d
// p.release(); // release from memory without calling the destructor
return 0;
}
Code (beveragesClass.h and beveragesClass.cpp)
/*
* beveragesClass.h
*
* Created on: 13 Oct 2022
* Author: tolly
*/
#ifndef BEVERAGESCLASS_H_
#define BEVERAGESCLASS_H_
#include <iostream>
#include <string>
using std::string; //better practice
class Beverages {
protected:
string brand;
string flavour;
int sugarGrams;
int price;
public:
Beverages(string, string, int, int);
virtual void display() = 0; // POINT 3
virtual ~Beverages();
};
#endif /* BEVERAGESCLASS_H_ */
#include <iostream>
using std::string;
using std::endl;
using std::cout;
#include "beveragesClass.h"
Beverages::Beverages(string brand, string flavour, int sugarGrams, int price):
brand(brand), flavour(flavour), sugarGrams(sugarGrams), price(price) {}
void Beverages::display() {
cout << "Beverage by: " << brand << ", with: " << flavour << " flavour." << endl;
cout << "The above drink has " << sugarGrams << " grams of sugar"
" with the price tag of: " << price << " euros." << endl;
}
Beverages::~Beverages() {}
Class (fruitJuiceClass.h and fruitJuiceClass.cpp)
/*
* fruitJuiceClass.h
*
* Created on: 13 Oct 2022
* Author: tolly
*/
#ifndef FRUITJUICECLASS_H_
#define FRUITJUICECLASS_H_
#include <iostream>
#include "beveragesClass.h"
using std::string;
using std::cout;
using std::endl;
class fruitJuice: public virtual Beverages {
private:
string vitamins;
friend void setVitamins(fruitJuice*, string); // POINT 13
friend void process(fruitJuice* [], int); // POINT 8
public:
fruitJuice(string, string, int, int, string);
virtual void display();
virtual ~fruitJuice();
virtual void changeSugarGrams(fruitJuice &, int); // POINT 4
virtual string getVitamins() const; // POINT 6
virtual string getFlavour(const fruitJuice &) const; // POINT 6
virtual void vitamins_display();
virtual void new_vitamins_display(); // POINT 13
fruitJuice(fruitJuice*);
bool operator < (const fruitJuice &) const; // POINT 18/19
};
#endif /* FRUITJUICECLASS_H_ */
/*
* fruitJuiceClass.cpp
*
* Created on: 13 Oct 2022
* Author: tolly
*/
#include <iostream>
#include "fruitJuiceClass.h"
using std::string;
using std::cout;
using std::endl;
fruitJuice::fruitJuice(string brand, string flavour, int sugarGrams, int price, string vitamins):
Beverages(brand, flavour, sugarGrams, price), vitamins(vitamins) {}
fruitJuice::~fruitJuice() {}
void fruitJuice::vitamins_display() {
cout << "There are " << vitamins << " in this beverage." << endl;
}
void fruitJuice::display() {
Beverages::display();
vitamins_display();
}
void fruitJuice::changeSugarGrams (fruitJuice &a, int sugarGrams){ // POINT 4 = PROTECTED
a.sugarGrams = sugarGrams;
}
string fruitJuice::getVitamins() const{ // POINT 6
return vitamins;
}
string fruitJuice::getFlavour(const fruitJuice& a) const { // POINT 6
return a.flavour;
}
void setVitamins(fruitJuice * a, string newVitamins) // POINT 13
{
a->vitamins = newVitamins;
}
void process(fruitJuice* a[], int b){ // POINT 8
for (int i=0; i<b; i++)
{
a[i]->display();
}
}
void fruitJuice::new_vitamins_display() { // POINT 13
setVitamins(this, "Vitamins C");
vitamins_display();
}
fruitJuice::fruitJuice(fruitJuice* s) : Beverages(s->brand, s->flavour, s->sugarGrams, s->price), vitamins(s-
>vitamins) { // POINT 14
vitamins = "No vitamins";
}
bool fruitJuice::operator < (const fruitJuice & a) const { // POINT 18/19
if (sugarGrams < a.sugarGrams)
return true;
else
return false;
}
Class (energyDrinksClass.h and energyDrinksClass.cpp)
/*
* energyDrinkClass.h
*
* Created on: 13 Oct 2022
* Author: tolly
*/
#ifndef ENERGYDRINKCLASS_H_
#define ENERGYDRINKCLASS_H_
#include <iostream>
#include "beveragesClass.h"
using std::string;
using std::cout;
using std::endl;
class energyDrinks: public virtual Beverages {
private:
string healthRisk;
string caffeine;
static int addToPrice; // POINT 16
public:
virtual void display();
energyDrinks(string, string, int, int, string, string);
virtual ~energyDrinks();
virtual void caffeineChange(energyDrinks &, string); // POINT 5 = PASS BY REFERENCE
virtual void brandChange(energyDrinks, string); // POINT 5 = PASS BY VALUE
virtual void caffeine_healthRisk_display();
energyDrinks operator + (energyDrinks); // POINT 11
bool operator == (energyDrinks); // POINT 11
energyDrinks & operator = (const energyDrinks &); // POINT 12
energyDrinks (const energyDrinks &); // POINT 14
virtual void increasePrice(); // POINT 16
static void printCurrentPrice() { // POINT 16
cout << addToPrice << endl;
}
};
#endif /* ENERGYDRINKCLASS_H_ */
/*
* energyDrinkClass.cpp
*
* Created on: 13 Oct 2022
* Author: tolly
*/
#include <iostream>
#include "energyDrinkClass.h"
using std::string;
using std::cout;
using std::endl;
energyDrinks::energyDrinks(string brand, string flavour, int sugarGrams, int price, string caffeine, string
healthRisk): // POINT 1: INHERITANCE THROUGH MULTIPLE CLASSES
Beverages(brand, flavour, sugarGrams, price), caffeine(caffeine), healthRisk(healthRisk) {
increasePrice(); // POINT 16
}
energyDrinks::~energyDrinks() { // POINT 9
cout << "The energyDrinks object got destroyed!" << endl;
}
void energyDrinks::caffeine_healthRisk_display() {
cout << "There is " << caffeine << " caffeine level in this drink." << endl;
cout << "The health risk is " << healthRisk << endl;
}
void energyDrinks::display(){
Beverages::display();
caffeine_healthRisk_display();
}
void energyDrinks::caffeineChange(energyDrinks &a, string caffeineLevel) { // POINT 5 = CALL BY REFERENCE
a.caffeine = caffeineLevel;
}
void energyDrinks::brandChange(energyDrinks a, string brand) { // POINT 5 = CALL BY VALUE
a.brand = brand;
}
energyDrinks energyDrinks::operator + (energyDrinks a){ // POINT 11
return energyDrinks(brand, flavour, sugarGrams + a.sugarGrams, price, caffeine, healthRisk);
}
bool energyDrinks::operator ==(energyDrinks a){ // POINT 11
if (caffeine == a.caffeine)
return true;
else
return false;
}
energyDrinks & energyDrinks::operator = (const energyDrinks & s) { // POINT 12w
if (this != &s)
{
healthRisk = s.healthRisk;
}
return *this;
}
energyDrinks::energyDrinks(const energyDrinks& s) : Beverages(s.brand, s.flavour, s.sugarGrams, 
s.price), caffeine(s.caffeine), healthRisk(s.healthRisk) { // Point 14
// s.caffeine = "No caffeine"; ATTEMPT TO ALLOCATE
}
int energyDrinks::addToPrice = 1; // POINT 16
void energyDrinks::increasePrice() { //POINT 16
price = addToPrice++;
}
Class (carbonatedDrinksClass.h and carbonatedDrinksClass.cpp)
/*
* carbonatedDrinksClass.h
*
* Created on: 15 Oct 2022
* Author: tolly
*/
#ifndef CARBONATEDDRINKSCLASS_H_
#define CARBONATEDDRINKSCLASS_H_
#include "energyDrinkClass.h"
#include "fruitJuiceClass.h"
class carbonatedDrinks : public energyDrinks,
public fruitJuice {
private:
string fizziness;
public:
virtual ~carbonatedDrinks();
virtual void display();
carbonatedDrinks(string, string, int, int, string, string, string, string);
};
#endif /* CARBONATEDDRINKSCLASS_H_ */
/*
* carbonatedDrinksClass.cpp
*
* Created on: 15 Oct 2022
* Author: tolly
*/
#include "carbonatedDrinksClass.h"
carbonatedDrinks::carbonatedDrinks(string brand, string flavour, int sugarGrams, int price, string caffeine, 
string healthRisk, string vitamins, string fizziness):
Beverages(brand, flavour, sugarGrams, price), energyDrinks(brand, flavour, sugarGrams, price, caffeine, 
healthRisk), fruitJuice(brand, flavour, sugarGrams, price, vitamins), fizziness(fizziness) {}
carbonatedDrinks::~carbonatedDrinks() {}
void carbonatedDrinks::display() {
Beverages::display();
energyDrinks::caffeine_healthRisk_display();
fruitJuice::vitamins_display();
cout << "Also, the fizziness levels are: " << fizziness << endl;
}