template<typename T>
class counter{
public:
	counter(T* ptr) :m_ref(1), m_ptr(ptr){};
	~counter(){ m_ref = 0; };
	bool deleteRef();
private:
	int m_ref;
	T* m_ptr;
};

template<typename T>
bool counter::deleteRef()
{
	if (m_ref <= 1)
	{
		m_ref = 0;
		delete<T>[] m_ptr;
	}
	else
	{
		m_ref--;
	}
	return true;
}



template<typename T>
class smart_ptr{
public:
	~smart_ptr();
	smart_ptr(smart_ptr<T>* sptr);
	smart_ptr();

	void operator= (smart_ptr<T> &sptr);
	T* getPtr(){ return this->m_ptr; }
private:
	T* m_ptr;
	counter* m_count;
};


template<typename T>
smart_ptr::smart_ptr(smart_ptr<T>* sptr) :m_ptr(sptr->m_ptr), m_count(sptr->m_counter)
{
	m_count->m_ref++;
}

template<typename T>
smart_ptr::smart_ptr()
{
	m_ptr = new T;
	m_count = new counter(m_ptr);
}

template<typename T>
smart_ptr::~smart_ptr()
{
	m_count->deleteRef();
}

template<typename T>
void smart_ptr::operator = (smart_ptr<T> &sptr)
{
	this->m_count->deleteRef();
	this->m_ptr = sptr->m_ptr;
	this->m_count->m_ref = sptr->m_count->m_ref;
}

int main()
{
	return 0;
}