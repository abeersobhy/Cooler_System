/*
 * bit_math.h
 *
 * Created: 29/08/2022 01:59:38 ص
 *  Author: user
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR,BIT) ((VAR) |=(1<<(BIT)))
#define TOG_BIT(VAR,BIT) ((VAR) ^=(1<<(BIT)))
#define CLR_BIT(VAR,BIT) ((VAR) &=~(1<<(BIT)))
#define READ_BIT(VAR,BIT) (((VAR)>>(BIT)) & 1)


#endif /* BIT_MATH_H_ */