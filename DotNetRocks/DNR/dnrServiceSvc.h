#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class dnrServiceSvc_LogUserAction;
@class dnrServiceSvc_LogUserActionResponse;
@class dnrServiceSvc_GetGuestInfo;
@class dnrServiceSvc_GetGuestInfoResponse;
@class dnrServiceSvc_ArrayOfShowGuest;
@class dnrServiceSvc_ShowGuest;
@class dnrServiceSvc_GetLinks;
@class dnrServiceSvc_GetLinksResponse;
@class dnrServiceSvc_ArrayOfShowLink;
@class dnrServiceSvc_ShowLink;
@class dnrServiceSvc_GetShowByShowNumber;
@class dnrServiceSvc_GetShowByShowNumberResponse;
@class dnrServiceSvc_ShowInfo;
@class dnrServiceSvc_GetTop20Shows;
@class dnrServiceSvc_GetTop20ShowsResponse;
@class dnrServiceSvc_ArrayOfShowInfo;
@class dnrServiceSvc_SearchByTitle;
@class dnrServiceSvc_SearchByTitleResponse;
typedef enum {
	dnrServiceSvc_UserAction_none = 0,
	dnrServiceSvc_UserAction_Loading,
	dnrServiceSvc_UserAction_Playing,
	dnrServiceSvc_UserAction_Stopping,
	dnrServiceSvc_UserAction_Closing,
	dnrServiceSvc_UserAction_AdClick,
	dnrServiceSvc_UserAction_LinkClick,
} dnrServiceSvc_UserAction;
dnrServiceSvc_UserAction dnrServiceSvc_UserAction_enumFromString(NSString *string);
NSString * dnrServiceSvc_UserAction_stringFromEnum(dnrServiceSvc_UserAction enumValue);
@interface dnrServiceSvc_LogUserAction : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * ShowNumber;
	NSNumber * LogCounter;
	dnrServiceSvc_UserAction Action;
	NSNumber * ActionTimeSeconds;
	NSString * Tag;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_LogUserAction *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * ShowNumber;
@property (retain) NSNumber * LogCounter;
@property (assign) dnrServiceSvc_UserAction Action;
@property (retain) NSNumber * ActionTimeSeconds;
@property (retain) NSString * Tag;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_LogUserActionResponse : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_LogUserActionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetGuestInfo : NSObject {
	
/* elements */
	NSNumber * ShowNumber;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetGuestInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ShowNumber;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ShowGuest : NSObject {
	
/* elements */
	NSNumber * ShowNumber;
	NSString * GuestName;
	NSString * Bio;
	NSString * PhotoUrl;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ShowGuest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ShowNumber;
@property (retain) NSString * GuestName;
@property (retain) NSString * Bio;
@property (retain) NSString * PhotoUrl;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ArrayOfShowGuest : NSObject {
	
/* elements */
	NSMutableArray *ShowGuest;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ArrayOfShowGuest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addShowGuest:(dnrServiceSvc_ShowGuest *)toAdd;
@property (readonly) NSMutableArray * ShowGuest;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetGuestInfoResponse : NSObject {
	
/* elements */
	dnrServiceSvc_ArrayOfShowGuest * GetGuestInfoResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetGuestInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) dnrServiceSvc_ArrayOfShowGuest * GetGuestInfoResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetLinks : NSObject {
	
/* elements */
	NSNumber * ShowNumber;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetLinks *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ShowNumber;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ShowLink : NSObject {
	
/* elements */
	NSString * URL;
	NSString * Text;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ShowLink *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * URL;
@property (retain) NSString * Text;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ArrayOfShowLink : NSObject {
	
/* elements */
	NSMutableArray *ShowLink;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ArrayOfShowLink *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addShowLink:(dnrServiceSvc_ShowLink *)toAdd;
@property (readonly) NSMutableArray * ShowLink;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetLinksResponse : NSObject {
	
/* elements */
	dnrServiceSvc_ArrayOfShowLink * GetLinksResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetLinksResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) dnrServiceSvc_ArrayOfShowLink * GetLinksResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetShowByShowNumber : NSObject {
	
/* elements */
	NSNumber * ShowNumber;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetShowByShowNumber *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ShowNumber;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ShowInfo : NSObject {
	
/* elements */
	NSNumber * ShowID;
	NSNumber * ShowNumber;
	NSString * ShowTitle;
	NSString * Description;
	NSString * DatePublished;
	NSString * DownloadUrl;
	NSString * ShowUrl;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ShowInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ShowID;
@property (retain) NSNumber * ShowNumber;
@property (retain) NSString * ShowTitle;
@property (retain) NSString * Description;
@property (retain) NSString * DatePublished;
@property (retain) NSString * DownloadUrl;
@property (retain) NSString * ShowUrl;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetShowByShowNumberResponse : NSObject {
	
/* elements */
	dnrServiceSvc_ShowInfo * GetShowByShowNumberResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetShowByShowNumberResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) dnrServiceSvc_ShowInfo * GetShowByShowNumberResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetTop20Shows : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetTop20Shows *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_ArrayOfShowInfo : NSObject {
	
/* elements */
	NSMutableArray *ShowInfo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_ArrayOfShowInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addShowInfo:(dnrServiceSvc_ShowInfo *)toAdd;
@property (readonly) NSMutableArray * ShowInfo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_GetTop20ShowsResponse : NSObject {
	
/* elements */
	dnrServiceSvc_ArrayOfShowInfo * GetTop20ShowsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_GetTop20ShowsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) dnrServiceSvc_ArrayOfShowInfo * GetTop20ShowsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_SearchByTitle : NSObject {
	
/* elements */
	NSString * Title;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_SearchByTitle *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Title;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface dnrServiceSvc_SearchByTitleResponse : NSObject {
	
/* elements */
	dnrServiceSvc_ArrayOfShowInfo * SearchByTitleResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (dnrServiceSvc_SearchByTitleResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) dnrServiceSvc_ArrayOfShowInfo * SearchByTitleResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "dnrServiceSvc.h"
@class dnrServiceSoapBinding;
@class dnrServiceSoap12Binding;
@interface dnrServiceSvc : NSObject {
	
}
+ (dnrServiceSoapBinding *)dnrServiceSoapBinding;
+ (dnrServiceSoap12Binding *)dnrServiceSoap12Binding;
@end
@class dnrServiceSoapBindingResponse;
@class dnrServiceSoapBindingOperation;
@protocol dnrServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(dnrServiceSoapBindingOperation *)operation completedWithResponse:(dnrServiceSoapBindingResponse *)response;
@end
@interface dnrServiceSoapBinding : NSObject <dnrServiceSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(dnrServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (dnrServiceSoapBindingResponse *)LogUserActionUsingParameters:(dnrServiceSvc_LogUserAction *)aParameters ;
- (void)LogUserActionAsyncUsingParameters:(dnrServiceSvc_LogUserAction *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
- (dnrServiceSoapBindingResponse *)GetGuestInfoUsingParameters:(dnrServiceSvc_GetGuestInfo *)aParameters ;
- (void)GetGuestInfoAsyncUsingParameters:(dnrServiceSvc_GetGuestInfo *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
- (dnrServiceSoapBindingResponse *)GetLinksUsingParameters:(dnrServiceSvc_GetLinks *)aParameters ;
- (void)GetLinksAsyncUsingParameters:(dnrServiceSvc_GetLinks *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
- (dnrServiceSoapBindingResponse *)GetShowByShowNumberUsingParameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters ;
- (void)GetShowByShowNumberAsyncUsingParameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
- (dnrServiceSoapBindingResponse *)GetTop20ShowsUsingParameters:(dnrServiceSvc_GetTop20Shows *)aParameters ;
- (void)GetTop20ShowsAsyncUsingParameters:(dnrServiceSvc_GetTop20Shows *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
- (dnrServiceSoapBindingResponse *)SearchByTitleUsingParameters:(dnrServiceSvc_SearchByTitle *)aParameters ;
- (void)SearchByTitleAsyncUsingParameters:(dnrServiceSvc_SearchByTitle *)aParameters  delegate:(id<dnrServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface dnrServiceSoapBindingOperation : NSOperation {
	dnrServiceSoapBinding *binding;
	dnrServiceSoapBindingResponse *response;
	id<dnrServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) dnrServiceSoapBinding *binding;
@property (readonly) dnrServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<dnrServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface dnrServiceSoapBinding_LogUserAction : dnrServiceSoapBindingOperation {
	dnrServiceSvc_LogUserAction * parameters;
}
@property (retain) dnrServiceSvc_LogUserAction * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_LogUserAction *)aParameters
;
@end
@interface dnrServiceSoapBinding_GetGuestInfo : dnrServiceSoapBindingOperation {
	dnrServiceSvc_GetGuestInfo * parameters;
}
@property (retain) dnrServiceSvc_GetGuestInfo * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetGuestInfo *)aParameters
;
@end
@interface dnrServiceSoapBinding_GetLinks : dnrServiceSoapBindingOperation {
	dnrServiceSvc_GetLinks * parameters;
}
@property (retain) dnrServiceSvc_GetLinks * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetLinks *)aParameters
;
@end
@interface dnrServiceSoapBinding_GetShowByShowNumber : dnrServiceSoapBindingOperation {
	dnrServiceSvc_GetShowByShowNumber * parameters;
}
@property (retain) dnrServiceSvc_GetShowByShowNumber * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters
;
@end
@interface dnrServiceSoapBinding_GetTop20Shows : dnrServiceSoapBindingOperation {
	dnrServiceSvc_GetTop20Shows * parameters;
}
@property (retain) dnrServiceSvc_GetTop20Shows * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetTop20Shows *)aParameters
;
@end
@interface dnrServiceSoapBinding_SearchByTitle : dnrServiceSoapBindingOperation {
	dnrServiceSvc_SearchByTitle * parameters;
}
@property (retain) dnrServiceSvc_SearchByTitle * parameters;
- (id)initWithBinding:(dnrServiceSoapBinding *)aBinding delegate:(id<dnrServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_SearchByTitle *)aParameters
;
@end
@interface dnrServiceSoapBinding_envelope : NSObject {
}
+ (dnrServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface dnrServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
@class dnrServiceSoap12BindingResponse;
@class dnrServiceSoap12BindingOperation;
@protocol dnrServiceSoap12BindingResponseDelegate <NSObject>
- (void) operation:(dnrServiceSoap12BindingOperation *)operation completedWithResponse:(dnrServiceSoap12BindingResponse *)response;
@end
@interface dnrServiceSoap12Binding : NSObject <dnrServiceSoap12BindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(dnrServiceSoap12BindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (dnrServiceSoap12BindingResponse *)LogUserActionUsingParameters:(dnrServiceSvc_LogUserAction *)aParameters ;
- (void)LogUserActionAsyncUsingParameters:(dnrServiceSvc_LogUserAction *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
- (dnrServiceSoap12BindingResponse *)GetGuestInfoUsingParameters:(dnrServiceSvc_GetGuestInfo *)aParameters ;
- (void)GetGuestInfoAsyncUsingParameters:(dnrServiceSvc_GetGuestInfo *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
- (dnrServiceSoap12BindingResponse *)GetLinksUsingParameters:(dnrServiceSvc_GetLinks *)aParameters ;
- (void)GetLinksAsyncUsingParameters:(dnrServiceSvc_GetLinks *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
- (dnrServiceSoap12BindingResponse *)GetShowByShowNumberUsingParameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters ;
- (void)GetShowByShowNumberAsyncUsingParameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
- (dnrServiceSoap12BindingResponse *)GetTop20ShowsUsingParameters:(dnrServiceSvc_GetTop20Shows *)aParameters ;
- (void)GetTop20ShowsAsyncUsingParameters:(dnrServiceSvc_GetTop20Shows *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
- (dnrServiceSoap12BindingResponse *)SearchByTitleUsingParameters:(dnrServiceSvc_SearchByTitle *)aParameters ;
- (void)SearchByTitleAsyncUsingParameters:(dnrServiceSvc_SearchByTitle *)aParameters  delegate:(id<dnrServiceSoap12BindingResponseDelegate>)responseDelegate;
@end
@interface dnrServiceSoap12BindingOperation : NSOperation {
	dnrServiceSoap12Binding *binding;
	dnrServiceSoap12BindingResponse *response;
	id<dnrServiceSoap12BindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) dnrServiceSoap12Binding *binding;
@property (readonly) dnrServiceSoap12BindingResponse *response;
@property (nonatomic, assign) id<dnrServiceSoap12BindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate;
@end
@interface dnrServiceSoap12Binding_LogUserAction : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_LogUserAction * parameters;
}
@property (retain) dnrServiceSvc_LogUserAction * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_LogUserAction *)aParameters
;
@end
@interface dnrServiceSoap12Binding_GetGuestInfo : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_GetGuestInfo * parameters;
}
@property (retain) dnrServiceSvc_GetGuestInfo * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetGuestInfo *)aParameters
;
@end
@interface dnrServiceSoap12Binding_GetLinks : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_GetLinks * parameters;
}
@property (retain) dnrServiceSvc_GetLinks * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetLinks *)aParameters
;
@end
@interface dnrServiceSoap12Binding_GetShowByShowNumber : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_GetShowByShowNumber * parameters;
}
@property (retain) dnrServiceSvc_GetShowByShowNumber * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetShowByShowNumber *)aParameters
;
@end
@interface dnrServiceSoap12Binding_GetTop20Shows : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_GetTop20Shows * parameters;
}
@property (retain) dnrServiceSvc_GetTop20Shows * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_GetTop20Shows *)aParameters
;
@end
@interface dnrServiceSoap12Binding_SearchByTitle : dnrServiceSoap12BindingOperation {
	dnrServiceSvc_SearchByTitle * parameters;
}
@property (retain) dnrServiceSvc_SearchByTitle * parameters;
- (id)initWithBinding:(dnrServiceSoap12Binding *)aBinding delegate:(id<dnrServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(dnrServiceSvc_SearchByTitle *)aParameters
;
@end
@interface dnrServiceSoap12Binding_envelope : NSObject {
}
+ (dnrServiceSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface dnrServiceSoap12BindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
