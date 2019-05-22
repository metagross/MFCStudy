#include "iostream"

//#include "CView.h" CPractice5_4View
//View Class 안에 public : vector<myGraphicalString>

vector<myGraphicalString> strVector;
 
class myGraphicalString{
	public : 
		CString inputText;
		int x,y;
		CString colorStr;
		CString fontStr;
		myGraphicalString(CString _inputText, int _x, int _y, CString _colorStr, CString _fontStr);
}

myGraphicalString::myGraphicalString(CString _inputText, int _x, int _y, CString _colorStr, CString _fontStr){
	inputText = _inputText;
	x = _x;
	y = _y;
	colorStr = _colorStr;
	fontStr = _fontStr;
}

void inputStrVector(CString _inputText, int _x, int _y, CString _colorStr, CString _fontStr){
	strVector.push_back(new myGraphicalString(_inputText, _x, _y, _colorStr, _fontStr));
}

myGraphicalString selectStrVector(int _x, int _y){
	int i;
	for(i=strVector.size(); i>0; i--){
		
	}
}

void setStrVector(){
	
	return;
}

void deleteStrVector(){
	
	return;
}

