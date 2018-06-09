
#ifndef COMPLEXH
#define COMPLEXH
#endif

class complexNumber{

	public:
		complexNumber(double r, double i){ 
			real = r;
			imag = i;
		}


		void print(){
			std::cout << real  << " + i " << imag  << std::endl;
		}

		complexNumber add(complexNumber w){
				//adds the current and another coplex number together; outputs a complex number
				return complexNumber(real + w.real, imag + w.imag);
		}
	private:
		double real;
		double imag;

};
