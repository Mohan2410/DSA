#include<iostream>
using namespace std;
int main()
{
  for(int row=0;row<5;row++){
    for(int col=0;col<row+1;col++){
      cout<<col+1 ;
    }
    cout<<endl;
  }
}


// full pyramid
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int row=0;row<n;row++){
    // space
    for(int col=0;col<n-row-1;col++){
      cout<<" ";
    }
    // stars
    for(int col=0;col<row+1;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

// inverted pyramin

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int row=0;row<n;row++){
    // spaces
    for(int col=0;col<row;col++)
    {
      cout<<" ";
    }
    // star
    for(int col=0;col<n-row;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

//Diamond(combination of full pyramid and inverted full pyramid

#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  int n = num/2;
  
  for(int row=0;row<n;row++){
    // space
    for(int col=0;col<n-row-1;col++){
      cout<<" ";
    }

    // star
    for(int col=0;col<row+1;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int row=0;row<n;row++){
    // space 
    for(int col=0;col<row;col++){
      cout<<" ";
    }

    // star 
    for(int col=0;col<n-row;col++){
      cout<<"* "; 
    }
    cout<<endl;
  }
}


//hollow pyramid

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int row=0;row<n;row++){
    // spaces
    for(int col=0;col<n-row-1;col++){
      cout<<" ";
    }
    // stars
    for(int col=0;col<row+1;col++){
      if(col==0 || col==row+1-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}

