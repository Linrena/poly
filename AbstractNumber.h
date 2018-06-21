#ifndef AbstractNumber_h
#define AbstractNumber_h

#include<stdio.h>
#include<iostream>
using namespace std;

class AbstractNumber
{
	void print()=0;
	AbstractNumber add (const AbstractNumber& other) = 0;
	AbstractNmuber mul (const AbstractNumber& other) = 0;
}
