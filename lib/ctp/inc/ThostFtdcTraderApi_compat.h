#pragma once

#include "ThostFtdcUserApiDataType.h"

#define THOST_FTDC_LCKT_Lock '1'
///?a??
#define THOST_FTDC_LCKT_Unlock '2'

typedef char TThostFtdcLockTypeType;

#define THOST_FTDC_IVLV_FirstLevel '1'
///?t??¨ª?¡Á¨º??
#define THOST_FTDC_IVLV_SecondLevel '2'
///¨¨y??¨ª?¡Á¨º??
#define THOST_FTDC_IVLV_ThirdLevel '3'

typedef char TThostFtdcLevelTypeType;


struct CThostFtdcInputLockField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///???¡§¨°y¨®?
	TThostFtdcOrderRefType	LockRef;
	///¨®??¡ì¡ä¨²??
	TThostFtdcUserIDType	UserID;
	///¨ºy¨¢?
	TThostFtdcVolumeType	Volume;
	///???¨®¡À¨¤o?
	TThostFtdcRequestIDType	RequestID;
	///¨°¦Ì??¦Ì£¤?a
	TThostFtdcBusinessUnitType	BusinessUnit;
	///???¡§¨¤¨¤D¨ª
	TThostFtdcLockTypeType	LockType;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
};


struct CThostFtdcLockField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///???¡§¨°y¨®?
	TThostFtdcOrderRefType	LockRef;
	///¨®??¡ì¡ä¨²??
	TThostFtdcUserIDType	UserID;
	///¨ºy¨¢?
	TThostFtdcVolumeType	Volume;
	///???¨®¡À¨¤o?
	TThostFtdcRequestIDType	RequestID;
	///¨°¦Ì??¦Ì£¤?a
	TThostFtdcBusinessUnitType	BusinessUnit;
	///???¡§¨¤¨¤D¨ª
	TThostFtdcLockTypeType	LockType;
	///¡À?¦Ì????¡§¡À¨¤o?
	TThostFtdcOrderLocalIDType	LockLocalID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
	///?¨¢?¡À¡ä¨²??
	TThostFtdcParticipantIDType	ParticipantID;
	///?¨ª?¡ì¡ä¨²??
	TThostFtdcClientIDType	ClientID;
	///o????¨²??¨°¡Á?¨´¦Ì?¡ä¨²??
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///??¨°¡Á?¨´??¨°¡Á?¡À¡ä¨²??
	TThostFtdcTraderIDType	TraderID;
	///¡ã2¡Á¡ã¡À¨¤o?
	TThostFtdcInstallIDType	InstallID;
	///?¡äDDD???¨¬¨¢??¡Á¡ä¨¬?
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///¡À¡§¦Ì£¤¨¬¨¢¨º?D¨°o?
	TThostFtdcSequenceNoType	NotifySequence;
	///??¨°¡Á¨¨?
	TThostFtdcDateType	TradingDay;
	///?¨¢??¡À¨¤o?
	TThostFtdcSettlementIDType	SettlementID;
	///???¡§¡À¨¤o?
	TThostFtdcOrderSysIDType	LockSysID;
	///¡À¡§¦Ì£¤¨¨??¨²
	TThostFtdcDateType	InsertDate;
	///2?¨¨?¨º¡À??
	TThostFtdcTimeType	InsertTime;
	///3¡¤?¨²¨º¡À??
	TThostFtdcTimeType	CancelTime;
	///???¡§¡Á¡ä¨¬?
	TThostFtdcOrderActionStatusType	LockStatus;
	///?¨¢???¨¢?¡À¡À¨¤o?
	TThostFtdcParticipantIDType	ClearingPartID;
	///D¨°o?
	TThostFtdcSequenceNoType	SequenceNo;
	///?¡ã??¡À¨¤o?
	TThostFtdcFrontIDType	FrontID;
	///?¨¢?¡ã¡À¨¤o?
	TThostFtdcSessionIDType	SessionID;
	///¨®??¡ì??2¨²?¡¤D??¡é
	TThostFtdcProductInfoType	UserProductInfo;
	///¡Á¡ä¨¬?D??¡é
	TThostFtdcErrorMsgType	StatusMsg;
	///2¨´¡Á¡Â¨®??¡ì¡ä¨²??
	TThostFtdcUserIDType	ActiveUserID;
	///?-?¨ª1???¡À¡§¦Ì£¤¡À¨¤o?
	TThostFtdcSequenceNoType	BrokerLockSeq;
	///¨®a¨°¦Ì2?¡À¨¤o?
	TThostFtdcBranchIDType	BranchID;
};

struct CThostFtdcLockPositionField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
	///¨ºy¨¢?
	TThostFtdcVolumeType	Volume;
	///?3?¨¢¨ºy¨¢?
	TThostFtdcVolumeType	FrozenVolume;
};

struct CThostFtdcQryLockPositionField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcInvestorLevelField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
	///¨ª?¡Á¨º??¡¤???¨¤¨¤D¨ª
	TThostFtdcLevelTypeType	LevelType;
};

struct CThostFtdcQryInvestorLevelField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
};

struct CThostFtdcExecFreezeField
{
	///¡À¨º¦Ì?o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///3?2??¨¤??¡¤??¨°
	TThostFtdcPosiDirectionType	PosiDirection;
	///?¨²¨¨¡§¨¤¨¤D¨ª
	TThostFtdcOptionsTypeType	OptionsType;
	///?3?¨¢¦Ì?¨ºy¨¢?_¦Ì£¤??1¨¦
	TThostFtdcVolumeType	Volume;
	///?3?¨¢?e??
	TThostFtdcMoneyType	FrozenAmount;
};

struct CThostFtdcQryLockField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
	///???¡§¡À¨¤o?
	TThostFtdcOrderSysIDType	LockSysID;
	///?a¨º?¨º¡À??
	TThostFtdcTimeType	InsertTimeStart;
	///?¨¢¨º?¨º¡À??
	TThostFtdcTimeType	InsertTimeEnd;
};

struct CThostFtdcQryExecFreezeField
{
	///?-?¨ª1???¡ä¨²??
	TThostFtdcBrokerIDType	BrokerID;
	///¨ª?¡Á¨º??¡ä¨²??
	TThostFtdcInvestorIDType	InvestorID;
	///o???¡ä¨²??
	TThostFtdcInstrumentIDType	InstrumentID;
	///??¨°¡Á?¨´¡ä¨²??
	TThostFtdcExchangeIDType	ExchangeID;
};
