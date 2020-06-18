#ifndef IOBSERVER_HH
#define IOBSERVER_HH

#pragma once

class IObserver {

public:
	virtual void Notify(IObservable*) {}
	virtual ~IObserver() {}
};

#endif