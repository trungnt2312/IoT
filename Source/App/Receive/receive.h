/*
 * receive.h
 *
 *  Created on: Mar 15, 2022
 *      Author: TrungNT
 */

#ifndef SOURCE_APP_RECEIVE_RECEIVE_H_
#define SOURCE_APP_RECEIVE_RECEIVE_H_

#define LED_OFF								0
#define LED_ON								1

/* Function prototypes -----------------------------------------------*/

uint8_t checkBindingTable(uint8_t localEndpoint);
boolean emberAfPreCommandReceivedCallback(EmberAfClusterCommand* cmd);
bool RECEIVE_HandleLevelControlCluster(EmberAfClusterCommand* cmd);
bool RECEIVE_HandleOnOffCluster(EmberAfClusterCommand* cmd);

#endif /* SOURCE_APP_RECEIVE_RECEIVE_H_ */
