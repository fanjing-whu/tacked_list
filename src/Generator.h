/*
 * Generator.h
 *
 *  Created on: 2013-9-20
 *      Author: Fanjing
 */

#ifndef _GENERATOR_H_
#define _GENERATOR_H_

#include "helper.h"
#include "common.h"

/*
 *
 */
class Generator {
public:
	Generator();
	virtual ~Generator();
public:
	//Add member variable here.
public:
	bool output(const char* fileName, unsigned int t); // create a file to record the request list. Return true if succeed.
	double getNext(Request* rq); //generate a request and return the interval before this request.
};

#endif /* GENERATOR_H_ */