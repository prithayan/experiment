
template <typename TYPE>
class stack{
	private:
		TYPE data;
	public:
		bool empty();
		unsigned int size();
		TYPE top();
		void push(TYPE);
		void pop();
};

template <typename TYPE>
bool stack<TYPE>::empty()
{
	return true ;
}
