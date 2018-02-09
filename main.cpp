//Author:
#include<iostream>

using namespace std;

int main()
{
  bool type = false;
  char Char;
  char lower [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char upper [] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  cout<<"What character do you want to know about?\n";
  cin >> Char;
  int ascii = Char;

  for(int i = 0; i < 26; i++){
  if(Char == lower[i]){
  type = true;}}
  
  if(type){
  cout<<Char <<" is an lower case letter!\n";}

  if(type != true){
  for(int i = 0; i < 26; i++){
  if(Char == upper[i]){
  type = true;}}
  
  if(type){
  cout<<Char <<" is an upper case letter!\n";}}

  if(type == false){
	  cout<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: " << ascii;

  return 0;
}