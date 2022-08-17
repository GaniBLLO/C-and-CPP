#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    map<string, vector<string>> bus_stop;
    vector<std::string> stops;
    string zapros, bus, stop;
    int Q = 0, i, stop_count;
    cin >> i;
    while (Q < i)
    {
        cin >> zapros;
        if (zapros == "ALL_BUSES")
        {
            if (bus_stop.empty())
                cout << "No buses\n";
            else
            {
                for (auto ui : bus_stop)
                {
                    cout << "Bus " << ui.first << ": ";
                    for (int i = 0; i < ui.second.size(); i++)
                        cout << ui.second[i] << " ";
                }
                cout << endl;
            }
        }
        else if (zapros == "STOPS_FOR_BUS")
        {
            cin >> bus;
            if (bus_stop.empty())
                cout << "No bus\n";
            else if (bus_stop.count(bus) == 0)
                {
                    cout << "no interchange\n";
                }
            else 
                {
                if (bus_stop.count(bus))
                {
                    for (auto ui : bus_stop)
                        {
                            cout << "Bus " << ui.first << ": ";
                            for (int i = 0; i < ui.second.size(); i++)
                                cout << ui.second[i] << " ";
                        }
                    cout << endl;
                }
                }
        }
        else if (zapros == "BUSES_FOR_STOP")
        {
            cin >> stop;
            if (bus_stop.empty())
                cout << "No stop\n";
            else
            {
                for (auto ui : bus_stop)
                    {
                    for (int i = 0; i < ui.second.size(); i++)
                        {
                            if (ui.second[i] == stop)
                            {
                                cout << ui.first << " ";
                                break;
                            }
                        }
                    }
                cout << endl;
            }
        }
        else if (zapros == "NEW_BUS")
        {
            cin >> bus >> stop_count;
                for (int i = 0; i < stop_count; i++)
                {
                    cin >> stop;
                    stops.push_back(stop);
                }
                bus_stop[bus] = stops;
                stops.clear();
        }
        Q++;
    }
    return 0;
}