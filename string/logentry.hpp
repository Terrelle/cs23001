#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:   
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
            Date() {};
            Date(String);
            /*
            Date(String d){
            day = toInt(d.substr(1,2));
            month = d.substr(3,4);
            year = toInt(d.substr(5,6));
            }
            */



            //GET
            String getDay()const { return day; };
            String getMonth()const { return month; };
            int getYear()const { return year; };
            // FRIEND
            friend std::ostream& operator<<(std::ostream&, Date);
            


private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
            Time() {};
            Time(String);


            friend std::ostream& operator<<(std::ostream&, Time);
  private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
            LogEntry() {};
            LogEntry(String);
            // GET
            String getHost()const { return host; };
            String getLog()const { return log; };
            Date getDate() const { return date; };
            Time getTime()const { return time; }; 
            String getRequest() const{ return request; };
            String getStatus() const{ return status; } ;
            int getNumberOfBytes() const{ return number_of_bytes; } ;

    friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
    String log;
};


////////////////////////////////////////////////////////////
//
// Free functions
//


std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);
int                     toInt();

#endif
 
