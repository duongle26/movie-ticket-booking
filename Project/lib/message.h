#ifndef MESSAGE_H
#define MESSAGE_H

#include "user.h"
#include "movie.h"
#include "cinema.h"
#include "time.h"
#include "seat.h"
#include "pay.h"

enum
{
    SUCCESS,
    FAILURE,
    SIGNUP,
    LOGIN,
    BOOKING,
    ORDERS,
    MOVIE,
    SELECT_MOVIE,
    CINEMA,
    SELECT_CINEMA,
    TIME,
    SELECT_TIME,
    SEAT,
    SELECT_SEAT,
    PAY,
    SELECT_PAY,
    CONFIRM
};

typedef struct message
{
    int state;
    user user;
    movie movie;
    cinema cinema;
    time time;
    seat seat;
    pay pay;
} message;

#endif