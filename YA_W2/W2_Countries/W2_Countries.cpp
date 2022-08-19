#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main()
{
    map <string, string> base_country;
    string zapros, country, capital, new_capital, old_country_name, new_country_name;
    int Q = 0, i = 0;
    cin >> Q;
    while (i < Q)
    {
        cin >> zapros;
        if (zapros == "CHANGE_CAPITAL")
        {
            cin >> country >> new_capital;
            auto it = base_country.find(country);
            if (base_country.count(country) == 0)
                {
                    base_country[country] = new_capital;
                    cout << "Introduce new country " << country << " with capital "
                        << new_capital << "\n";
                }
            else if (it->second == new_capital)
                {
                    cout << "Country " << country << " hasn't changed its capital\n";
                }
            else if (it->second != new_capital)
                {
                    cout << "Country " << country << " has changed its capital from "
                        << base_country[country] << " to " << new_capital << endl;
                    base_country[country] = new_capital;
                }
        }
        else if (zapros == "RENAME")
        {
            cin >> old_country_name >> new_country_name;
            // to finish this part @@
        }
        else if (zapros == "ABOUT")
        {
            cin >> country;
            if (base_country.count(country) == 0)
                {
                    cout << "Country " << country << " doesn't exist\n";
                }
            else if(base_country.count(country))
                cout << "Country " << country << " has capital " << base_country[country] << endl;
        }
        else if (zapros == "DUMP")
        {
            if (base_country.empty())
                cout << "There are no countries in the world";
            else
                {
                    for (auto dubl : base_country)
                        cout << dubl.first << "/" << dubl.second << " ";
                }
            cout << endl;
        }
        ++i;
    }
    return 0;
}
