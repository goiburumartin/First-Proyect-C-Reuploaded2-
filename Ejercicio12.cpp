/*12. Hacer un menu que consideren las siguientes opciones:

caso 1: cubo de un numero
caso 2: numero par o impar
caso 3: salir.

*/


#include<iostream>
#include<math.h>

   using namespace std;
    
      int main(){
      	 int a,numero1,cubo,numero2;
      	
      	
      	cout<<"1. Cubo de un numero"<<endl;
      	cout<<"2. Numero par o impar"<<endl;
      	cout<<"3. Salir"<<endl;
      	cout<<"Ingrese la opcion que desea: "<<endl;
      	cin>>a;
      	
      	   switch(a){
      	   	
      	   	case 1: cout<<"Ingrese un numero: ";
      	   	        cin>>numero1;
      	   	        
      	   	        cubo = pow(numero1,3);
      	   	        
      	   	        cout<<"El cubo del numero ingresado es: "<<cubo<<endl; break;
      	   	        
      	   		
      	   	case 2: cout<<"Ingrese un numero: ";
      	   	        cin>>numero2;
      	   		
      	   		     if(a == 0){
      	   		     	
      	   		     	cout<<"El numero ingresado es 0"<<endl;
      	   		     	
      	   		     	
						  }
      	   		       else if(numero2 % 2 == 0){              // % devuelve el resto
							
							cout<<"El numero ingresado es par";
							
							}
      	   		         else{
      	   		         	
      	   		         	
      	   		         	cout<<"El numero ingresado es impar"; 
      	   		         	
      	   		         	break;
							  }
      	   	case 3: break;
      	
		  
		    default: cout<<"El numero ingresado no corresponde a las opciones"<<endl; 	
			 }
      	
      	
      	
      	
      	
      	
      	
      	
      	
      	
      	
      	return 0;
	  }
