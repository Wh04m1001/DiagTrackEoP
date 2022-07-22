# DiagTrackEoP

Just another way to abuse SeImpersonate privilege.

This PoC is based on this [blog](https://www.crisprx.top/archives/561) by [@crisprss](https://github.com/crisprss).

In this blog @crisprss showed some interesting method to abuse SeImpersonate privilege using AzureAttestService which comes with recent verions of SQL server, PoC for that can be found here https://github.com/crisprss/magicAzureAttestService.

In that blog he also shows another possible way to abuse SeImpersonate privilege using DiagTrack service but author failed to weaponize it, this is taken from that blog (Translated from Chinese so maybe not 100% accurate) :

```
But just when I thought it could be triggered normally, I didn't realize that this service is transparent to service users, which also means that it is not feasible to simulate pipeline privilege escalation through service users, because service users such as sqlserver There is no way to call the RPC interface, which also means that you can only escalate rights from the administrator user to SYSTEM in this way, so here is just a process sharing
```

And yeah if you try to call method exposed by that RPC server from service user you get access denied error 

![imgage](https://user-images.githubusercontent.com/44291883/180334245-6d674068-856c-4f30-b868-2eaba574d879.png)

But why normal , unprivileged users are able to call this method? 

My assumption was that because service users operate in session 0 they will not have NT AUTHORITY\INTERACTIVE SID in their token while normal users who login over RDP or interactively will have it.

So how we can get NT AUTHORITY\INTERACTIVE SID from session 0 ? Very easy actually Secondary Logon service will do that for us.
We can use LogonUser API call to get token with  NT AUTHORITY\INTERACTIVE SID and we dont need valid credentials as we will use NewCredentials(9) logon type.
When NewCredentials logon type is used Secondary Logon will make new logon session and copy caller token but it will also insert a NT AUTHORITY\INTERACTIVE SID, this is perfect situation for us as we dont need to have valid credentials ( credentials used with NewCredentials logon type are not verified until user tries to access network resource).

So now that we have token with  NT AUTHORITY\INTERACTIVE SID will eploit work ? Yeah it will :D 

![image](https://user-images.githubusercontent.com/44291883/180335749-0f98deae-6525-4ef7-96f0-8562f1d19929.png)

This PoC is tested on Windows 10 and Windows 2019.

# Credits

[@crisprss](https://github.com/crisprss) - https://www.crisprx.top/archives/561

[@itm4n](https://twitter.com/itm4n) - https://github.com/itm4n/PrintSpoofer

[@splinter_code](https://twitter.com/splinter_code) - https://github.com/antonioCoco/RunasCs
