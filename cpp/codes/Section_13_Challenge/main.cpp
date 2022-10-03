#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Movie{
    private:
        string name;
        string rating;
        int watch_count;
    public:
        void set_name(string n){name = n;}
        string get_name(){return name;}
        
        void set_rating(string r){rating = r;}
        string get_rating(){return rating;}
        
        void increment_watch_count(){watch_count++;}
        int get_watch_count(){return watch_count;}
        
        void display(){
            cout << name << "\t" << rating << "\t" << watch_count;
        }
        
        Movie(string n, string r, int w){
            name = n;
            rating = r;
            watch_count = w;
        }
};

class Movies{
    private:
        vector<Movie> movies;
    
    public:
    
        bool add_movie(string name, string rating, int watched){
            for (Movie &m : movies){
                if(m.get_name() == name){
                    return false;
                }
            }
            Movie temp {name, rating, watched};
            movies.push_back(temp);
            return true;
        }
        
        bool increment_watch_count(string name){
            for (Movie &m : movies){
                if(m.get_name() == name){
                    m.increment_watch_count();
                    return true;
                }
            }
            return false;
        }
        
        void display(){
            if(movies.size() == 0){
                cout << "Sorry, no movies to display" << endl;
            }
            else{
                for (Movie &m : movies){
                    m.display();
                    cout << endl;
                }
            }
        }
};

void increment_watch_count(Movies &m, string name) {
    if (m.increment_watch_count(name)) {
        cout << name << " watch incremented" <<  endl;
    } 
    else {
        cout << name << " not found" <<  endl;
    }
}

void add_movie(Movies &m, string name, string rating, int watched) {
    if (m.add_movie(name,rating,watched)) {
        cout << name << " added" << std::endl;
    } 
    else {
        cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);
    add_movie(my_movies,"Star Wars", "PG",5);
    add_movie(my_movies,"Cinderella", "PG",7);
     
    my_movies.display();
    
    add_movie(my_movies,"Cinderella", "PG",7);
    add_movie(my_movies,"Ice Age", "PG",12);
 
    my_movies.display();
    
    increment_watch_count(my_movies,"Big");
    increment_watch_count(my_movies,"Ice Age");
    
    my_movies.display();
    
    increment_watch_count(my_movies,"XXX");
    
    return 0;
}