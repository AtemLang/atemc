export module atemc.exception.internalexception;

import <string>;

import <boost/stacktrace.hpp>;

import atemc.exception.abstractexception;

export namespace atemc
{
	namespace bs = boost::stacktrace;
	class InternalException: public AbstractException
	{
	public:
		InternalException(std::string_view msg, const bs::stacktrace& current_stacktrace = bs::stacktrace()) : AbstractException(msg, current_stacktrace) {}
	};
}