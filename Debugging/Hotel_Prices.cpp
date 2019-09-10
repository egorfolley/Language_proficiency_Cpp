#include <bits/stdc++.h>

class HotelRoom
{
public:
    HotelRoom(int bedrooms, int bathrooms) : m_bedrooms(bedrooms), m_bathrooms(bathrooms) {}

    virtual int get_price() { return 50 * m_bedrooms + 100 * m_bathrooms; }
private:
    int m_bedrooms;
    int m_bathrooms;
};

class HotelApartment : public HotelRoom
{
public:
    HotelApartment(int bedrooms, int bathrooms) : HotelRoom(bedrooms, bathrooms) {}

    int get_price() { return HotelRoom::get_price() + 100; }
};

int main() {
    uint16_t n;
    std::cin >> n;

    std::vector<HotelRoom*> rooms;
    for ( int i = 0; i < n; ++i )
    {
        std::string room_type;
        uint16_t bedrooms;
        uint16_t bathrooms;

        std::cin >> room_type >> bedrooms >> bathrooms;

        if ( room_type == "standard" ) { rooms.push_back(new HotelRoom(bedrooms, bathrooms)); }
        else { rooms.push_back(new HotelApartment(bedrooms, bathrooms)); }
    }

    int total_profit = 0;
    for ( auto &room : rooms )
        total_profit += room->get_price();

    std::cout << total_profit << std::endl;

    for (auto &room : rooms)
        delete room;
    rooms.clear();

    return 0;
}
