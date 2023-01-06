//
// Created by Anca on 12/10/2022.
//
#ifndef UNTITLED1_NGO_H
#define UNTITLED1_NGO_H
#include "Client.h"
#include "Regular.h"

class NGO: public Client{
    int volunteers;
public:
    NGO(const std::string& name, int volunteers);
    ~NGO() = default;
    std::shared_ptr<Client> clone() const override;

    NGO& operator=(NGO other);
    friend void swap(NGO& ngo1, NGO& ngo2);

    double get_total() override;
};

#endif //UNTITLED1_NGO_H
