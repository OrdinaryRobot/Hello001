#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
        struct student {
                string name;
                int score;
        };
        struct team{
                string name;
                student members[2];

        };
        team part={
                "bilibili",
                {{"sb",100},{"chu",23}}
        };
        cout << part.members[0].name;


        return 0;
}
//swap(a,b)¿É½»»»Î»ÖÃ//