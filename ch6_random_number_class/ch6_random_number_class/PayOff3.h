//
//  PayOff3.h
//  ch6_random_number_class
//
//  Created by cheerzzh on 19/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#ifndef __ch6_random_number_class__PayOff3__
#define __ch6_random_number_class__PayOff3__

class PayOff
{
public:
    
    PayOff(){};
    
    virtual double operator()(double Spot) const=0;
    virtual ~PayOff(){}
    virtual PayOff* clone() const=0;
    
private:
    
};

class PayOffCall : public PayOff
{
public:
    
    PayOffCall(double Strike_);
    
    virtual double operator()(double Spot) const;
    virtual ~PayOffCall(){}
    virtual PayOff* clone() const;
    
private:
    
    double Strike;
    
};


class PayOffPut : public PayOff
{
public:
    
    PayOffPut(double Strike_);
    
    virtual double operator()(double Spot) const;
    virtual ~PayOffPut(){}
    virtual PayOff* clone() const;
    
private:
    
    double Strike;
    
};


#endif /* defined(__ch6_random_number_class__PayOff3__) */
