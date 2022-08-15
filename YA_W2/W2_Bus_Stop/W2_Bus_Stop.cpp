#include <map>
#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::map<std::string, std::vector<std::string>> bus_stop;
    std::vector<std::string> stops;
    std::string zapros, bus, stop;
    int Q = 0, i, stop_count;
    std::cin >> i;
    while (Q < i)
        {
            std::cin >> zapros;
            if (zapros == "ALL_BUSES")
                {
                    if (bus_stop.empty())
                        std::cout << "No buses";
                    else
                        {

                        }
                }
            else if (zapros == "STOP_FOR_BUS")
                {
                    std::cin >> bus;
                    if (bus_stop.empty())
                        std::cout << "No bus";
                    else
                        {

                        }
                }
            else if (zapros == "BUSES_FOR_STOP")
                {
                    std::cin >> stop;
                    if (bus_stop.empty())
                        std::cout << "No stop";
                    else
                        {
                            for (auto stopers : bus_stop)
                            {
                                std::cout << stopers.first << " ";
                                for (int i = 0; i < stops.size(); i++)
                                    std::cout << stops[i] << " ";
                            }
                        }
                }
            else if (zapros == "NEW_BUS")
                {
                    std::cin >> bus >> stop_count;
                    for (auto in : bus_stop)
                        {
                            for (int i = 0; i < stop_count; i++)
                                {
                                    std::cin >> stop;

                                }
                        }
                }
            Q++;
        }
    return 0;
}
