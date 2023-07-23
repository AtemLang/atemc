export module atemc.semantic.types.concrete.integertype;

import atemc.semantic.types.concrete.compositetype;

export namespace atemc
{
	class IntegerType : public CompositeType
	{
	public:
		IntegerType()
		{
			
		}

		auto operator==(const AbstractType& that) const -> bool override
		{
			if(auto that_ptr = dynamic_cast<const IntegerType*>(&that))
			{
				return true;
			}
			return false;
		}
		auto operator!=(const AbstractType& that) const -> bool override
		{
			return not this->operator==(that);
		}

		auto accept(TypeVisitor* visitor) -> void override
		{
			
		}
	};
}
