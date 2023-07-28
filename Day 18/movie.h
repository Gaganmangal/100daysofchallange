#if !defined(_MOVIE_H_)
#define _MOVIE_H_

class movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    int watchcont;

public:
    static int count;
    movie(std::string nms = "", std::string mrat = "", int wr = 0);
    std::string get_name() const
    {
        return movie_name;
    }
    // static int count_val(){return count;}
    void display_all_detail() const
    {

        std::cout << "movie name =" << movie_name << std::endl;
        std::cout << "movie rating =" << movie_rating << std::endl;
        std::cout << "movie watch count =" << watchcont << std::endl;
    }
    void increase_watchcount()
    {
        watchcont++;
    }
    ~movie();
};

movie::movie(std::string nms, std::string mrat, int wr)
{
    movie_name = nms;
    movie_rating = mrat;
    watchcont = wr;
    count++;
}

movie::~movie()
{
    count--;
}
int movie::count;

#endif // movie