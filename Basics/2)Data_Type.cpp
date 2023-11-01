
int dataTypes(string type) {
	if(type=="Integer"){
		return 4;
	}
	else if(type=="Long"){
		return 8;
	}
	else if(type=="Float"){
		return 4;
	}
	else if(type=="Double"){
		return 8;
	}
	else if(type=="Character"){
		return 1;
	}
	return 0;
}
// above works but direct cout did'nt work


// #include<iostream>
// using namespace std;
// int dataTypes(string type) {
// 	if(type=="Integer"){
// 		cout<<"4";
// 	}
// 	else if(type=="Long"){
// 		cout<<"8";
// 	}
// 	else if(type=="Float"){
// 		cout<<"4";
// 	}
// 	else if(type=="Double"){
// 		cout<<"8";
// 	}
// 	else if(type=="Character"){
// 		cout<<"1";
// 	}
// 	return 0;
// }

// int main(){
//     string type;
// 	cin>>type;
// 	dataTypes(type);
//     return 0;
// }