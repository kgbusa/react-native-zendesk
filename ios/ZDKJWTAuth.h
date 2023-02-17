#import <Foundation/Foundation.h>
#import <ChatProvidersSDK/ChatProvidersSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZDKJWTAuth: NSObject<ZDKJWTAuthenticator>

@property (strong, nonatomic) NSString *token;

- (instancetype)initWithToken:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
