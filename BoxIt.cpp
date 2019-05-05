class Box{
     private : 
    
       int l=0,b=0,h=0;
     
    public:
        // Constructors
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }

        Box(int l1,int b1, int h1){
          //
          l = l1;
          b = b1;
          h = h1;
          
        }

        // Copy Constructor
        Box(const Box &B){
            l = B.l;
            b = B.b;
            h = B.h;
        }

        int getLength(){
              return Box::l;
        }

        int getBreadth(){
             return Box::b;
        }

        int getHeight(){
            return Box::h;
        } 

        long long CalculateVolume(){
             long long volume = l;
             volume *= b;
             volume *= h;
             return volume;
        }

        bool operator < (Box& B){
            if(l < B.l) {
                return true;
            }
            else if((b < B.b) && (l == B.l)){
                 return true;
                  }

            else if((h < B.h)&&(b == B.b)&&(l == B.l)){
                return true;
            }
            else{
                return false;
            }
        }

        void print(ostream &ostr) {
        ostr << l << "\t" << b<< "\t" << h;    
        }

};
//template <class T>
std::ostream & operator<<(std::ostream& out, Box& B){
                B.print(out);
                return out;
        }