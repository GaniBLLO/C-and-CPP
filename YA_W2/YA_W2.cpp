#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map <string, string> base_country;
    string zapros, country, new_capital, old_country_name, new_country_name;
    int Q = 0, i = 0;
    cin >> Q;
    while (i < Q)
    {
        cin >> zapros;
        if (zapros == "CHANGE_CAPITAL")
            {
                cin >> country >> new_capital;
                if (base_country.count(country) == 0)
                    {
                        base_country[country] = new_capital;
                        cout << "Introduce new country " << country << " with capital "
                            << new_capital << "\n";
                    }
                else if (base_country.count(new_capital))
                    {
                        cout << "Country " << country << " hasn't changed its capital";
                    }
                else if (base_country.count(new_capital))
                    {
                        cout << "Country " << country << " has changed its capital from "
                            << 1 + 1 << " to " << new_capital << endl;
                    }
            }
        else if (zapros == "RENAME")
            {
                cin >> old_country_name >> new_country_name;
                if (base_country.count(new_country_name) == 0 || )
                    {
                        cout << "Incorrect rename, skip" << endl;
                    }
                else
                    {
                    
                    }
            }
        else if (zapros == "ABOUT")
            {
                cin >> country;
                if (base_country)
            }
        else if (zapros == "DUMP")
            {
                ;
            }
        ++i;
    }
    return 0;
}
