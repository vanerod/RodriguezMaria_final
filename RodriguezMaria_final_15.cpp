#include <iostream>
#include <fstream>
using namespace std;


int main(){
    float t=0; 
    float delta_t= 0.1;
    double x[20];
    double y[20];
    double x_x[20];
    double y_y[20];
    double t_end = 10;
    
    ofstream outfile;
    outfile.open("data.dat");
    int i;

      for(i=0; i<3; i++){	
        x[i]= 0 ;
	}
      
      for(i=0; i<3; i++){	
        y[i]=0 ;
	}
    
      
    for(i=0; i>7; i++){	
        y[i]=0 ;
	}

    
	
  while(t<t_end){    
      
    
  
      
      x_x[i] = x[i];
      y_y[i] = y[i];
      x[i] = x[i] - delta_t  *y_y[i];
      y[i] = y[i] - delta_t * x_x[i];
      t = t + delta_t;
      
       for(i=0;i<10;i++){
            outfile << t <<x_x[i] << y_y[i]<< endl;
     
  }
   
        }
   
        outfile << "\n";
    
  outfile.close();
}
