export module atemc.ast.types.exprast;

export import atemc.ast.types.stmtast;

export namespace atemc 
{
	class ExprAST: public StmtAST
	{
	public:
		auto accept(ASTVisitor* visitor) -> void override
		{
			
		}
	};
}