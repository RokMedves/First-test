class complexNumber{

	public:
		complexNumber(double r, double i){ 
			real = r;
			imag = i;
		}


		void print(){
			std::cout << real  << " + i " << imag  << std::endl;
		}
	private:
		double real;
		double imag;

};
