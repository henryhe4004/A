int gcd(int x, int y)
{	if (y)			
            return gcd(y, x%y);		
        else			
            return x;
} 
int main(){
    int a =1000;
    int b =100;
    c = gcd(a,b);    
    return c;
}
