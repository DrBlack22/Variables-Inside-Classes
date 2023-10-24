#include <iostream>
#include <string>
using namespace std;

class TheLightSecretariat{
    public:
        string TheLight;
};

class ProjectBlackBriar{
    public:
        void selectAsset(string x){
            Asset = x;
        };
        void getAsset(){
            cout << Asset << endl;
        };
    private:
        string Asset;
};

int main()
{
    TheLightSecretariat Product;
    Product.TheLight = "Let There Be Light";
    cout << Product.TheLight << endl;

    ProjectBlackBriar asset;
    asset.selectAsset("Jason Bourne");
    asset.getAsset();

    return 0;
}


/*   USING VARIABLES INSIDE THE CLASSSES

- Easy way to use variables from inside a class is by setting access modifier of those variables as public.

- By setting access modifier as public, you can access those variables from inside a certain class outside the class.

- But this is not the apt way of doing things, if you want to land a job as a software engineer.

- The proper way of using variables from inside a class while making sure the access modifier is set to private
is by keeping variables private but creating public functions inside the class to set and get the values of those
variables outside the class.

- This practice covers both ways of using variables; the wrong/easy/good way and the right/difficult/bad way of using variables
from inside a class.

- Have fun and don't forget to practice.

 */
