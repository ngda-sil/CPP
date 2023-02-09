#ifndef SAMPLE_HPP
# define SAMPLE_HPP

# include <>

class Sample
{
	public:
		Sample();
		~Sample();
		Sample(const Sample &a);
		Sample & operator=(const Sample &a);
	
	private:
};

#endif
