/**
 *  \file   log.h
 *  \brief  log declarations
 *  \author Guillaume Chelius & Elyes Ben Hamida
 *  \date   2007
 **/
#ifndef __log__
#define __log__

#include <include/options.h>
// <-RF00000000-AdamXu-2018/04/25-write log into files
#ifdef ADAM_LOG_FILE
#include <stdio.h>
#endif
// ->RF00000000-AdamXu


#ifdef LOG_REPLAY
// <-RF00000000-AdamXu-2018/04/25-write log into files
#ifdef ADAM_LOG_FILE
#define PRINT_REPLAY(x...) do{\
		FILE* file;\
		if(NULL == (file = fopen(ADAM_LOG_NAME, "w+")))\
		{\
			printf("Cannot open log file!\n");\
			break;\
		}\
		fprintf(x);\
	}while(0);
#else
#define PRINT_REPLAY(x...) printf(x)
#endif
// ->RF00000000-AdamXu
#else //LOG_REPLAY
#define PRINT_REPLAY(x...) do { } while (0)
#endif //LOG_REPLAY

#ifdef LOG_APPLICATION
#define PRINT_APPLICATION(x...) printf(x)
#else //LOG_APPLICATION
#define PRINT_APPLICATION(x...) do { } while (0)
#endif //LOG_APPLICATION

#ifdef LOG_ROUTING
#define PRINT_ROUTING(x...) printf(x)
#else //LOG_ROUTING
#define PRINT_ROUTING(x...) do { } while (0)
#endif //LOG_ROUTING

#ifdef LOG_MAC
#define PRINT_MAC(x...) printf(x)
#else //LOG_MAC
#define PRINT_MAC(x...) do { } while (0)
#endif //LOG_MAC

#ifdef LOG_RADIO
#define PRINT_RADIO(x...) printf(x)
#else //LOG_RADIO
#define PRINT_RADIO(x...) do { } while (0)
#endif //LOG_RADIO

#ifdef LOG_ANTENNA
#define PRINT_ANTENNA(x...) printf(x)
#else //LOG_ANTENNA
#define PRINT_ANTENNA(x...) do { } while (0)
#endif //LOG_ANTENNA

#ifdef LOG_MOBILITY
#define PRINT_MOBILITY(x...) printf(x)
#else //LOG_MOBILITY
#define PRINT_MOBILITY(x...) do { } while (0)
#endif //LOG_MOBILITY

#ifdef LOG_ENERGY
#define PRINT_ENERGY(x...) printf(x)
#else //LOG_ENERGY
#define PRINT_ENERGY(x...) do { } while (0)
#endif //LOG_ENERGY

#ifdef LOG_ENVIRONMENT
#define PRINT_ENVIRONMENT(x...) printf(x)
#else //LOG_ENVIRONMENT
#define PRINT_ENVIRONMENT(x...) do { } while (0)
#endif //LOG_ENVIRONMENT

#ifdef LOG_MONITOR
#define PRINT_MONITOR(x...) printf(x)
#else //LOG_MONITOR
#define PRINT_MONITOR(x...) do { } while (0)
#endif //LOG_MONITOR

#ifdef LOG_MODULATION
#define PRINT_MODULATION(x...) printf(x)
#else //LOG_MODULATION
#define PRINT_MODULATION(x...) do { } while (0)
#endif //LOG_MODULATION

#ifdef LOG_INTERFERENCES
#define PRINT_INTERFERENCES(x...) printf(x)
#else //LOG_INTERFERENCES
#define PRINT_INTERFERENCES(x...) do { } while (0)
#endif //LOG_INTERFERENCES

#ifdef LOG_PROPAGATION
#define PRINT_PROPAGATION(x...) printf(x)
#else //LOG_PROPAGATION
#define PRINT_PROPAGATION(x...) do { } while (0)
#endif //LOG_PROPAGATION

/* edit by Loic Lemaitre */
#ifdef LOG_WORLDSENS
#define PRINT_WORLDSENS(x...) printf(x)
#else //LOG_WORLDSENS
#define PRINT_WORLDSENS(x...) do { } while (0)
#endif //LOG_WORLDSENS
/* end of edition */

#endif //__log__
