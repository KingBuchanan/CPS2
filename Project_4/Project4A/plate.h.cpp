#ifndef plate

class Plate
{
	private:
	int column,row;
	
	public:
	Plate(); 
	void displayPlate();
	bool distributeHeat();
	double plateValue(column,row); 	
	
	
}
#endif