#include<iostream>
using namespace std;

unsigned long long a[]={1,4,16,36,100,144,324,484,784,1024,1764,2116,3364,4096,5184,6400,9216,10404,14400,16384,19600,22500,29584,32400,40000,44944,52900,58564,72900,77284,94864,104976,118336,129600,147456,156816,186624,202500,224676,240100,280900,293764,341056,364816,394384,422500,484416,506944,568516,599076,649636,688900,777924,810000,883600,929296,1000000,1056784,1179396,1214404,1350244,1420864,1507984,1587600,1710864,1763584,1943236,2033476,2160900,2232036,2446096,2521744,2755600,2876416,3013696,3139984,3356224,3444736,3740356,3865156,4080400,4243600,4588164,4691556,4972900,5161984,5419584,5607424,6031936,6150400,6512704,6739216,7054336,7300804,7695076,7873636,8421604,8667136,9024016,9265936,9884736,10086976,10745284,11062276,11383876,11737476,12475024,12730624,13512976,13808656,14348944,14714896,15586704,15872256,16581184,17040384,17640000,18130564,18957316,19236996,20214016,20757136,21492496,22052416,23001616,23348224,24581764,25220484,26071236,26563716,27920656,28344976,29506624,30228004,31024900,31741956,33292900,33802596,35426304,36000000,37112464,37970244,39463524,40068900,41499364,42432196,43533604,44488900,46485124,47032164,49112064,50126400,51494976,52359696,54110736,54819216,57153600,58339044,59938564,60933636,63011844,63872064,66487716,67798756,69122596,70492816,73307844,74132100,76842756,77968900,79887844,81396484,84529636,85562500,87796900,89302500,91508356,93199716,96668224,97614400,101203600,102657424,105103504,106915600,109914256,111175936,114575616,116553616,118897216,120472576,124679556,126112900,130462084,132664324,134884996,136843204,141467236,142898116,147671104,149621824,152868496,155351296,159567424,161188416,165276736,167909764,171348100,173870596,178649956,179935396,185613376,188457984,192321424,195272676,199996164,202037796,207187236,210308004,214505316,216855076,222546724,224700100,231404944,234334864,238023184,241491600,248566756,250842244,258116356,260951716,264843076,268500996,276157924,278556100,284731876,288660100,293985316,297286564,305550400,307791936,316270656,320195236,326019136,330366976,336502336,339443776,347449600,351937600,358117776,361912576,371487076,374267716,382828356,387774864,392832400,397922704,408201616,411602944,420414016,424360000,431309824,436726404,447745600,451137600,460016704,464661136,472279824,478034496,489825424,493017616,505080676,510850404,517380516,523585924,532778724,536848900,549714916,556205056,564727696,569299600,582739600,587189824,600936196,607819716,614940804,620906724,632924964,637764516,651576676,657307044,667188900,674648676,689902756,694322500,706602724,714279076,723932836,731918916,746273124,750650404,764522500,772840000,784000000,792084736,805651456,811110400,828633796,835556836,847392100,854392900,872611600,878292496,896882704,906250816,914941504,924403216,943718400,950118976,967458816,975437824,988725136,997043776,1015314496,1022208784,1037612944,1048075876,1062108100,1072562500,1090716676,1096007236,1117966096,1128960000,1143521856,1154776324,1172788516,1179372964,1202563684,1213407556,1229063364,1238054596,1259256196,1266932836,1287948544,1300035136,1312757824,1325251216,1350562500,1358807044,1384584100,1393528900,1409702116,1421742436,1448411364,1457254276,1478710116,1492276900,1507147684,1521000000,1549052164,1556618116,1583721616,1598080576,1615718416,1627315600,1650634384,1660399504,1690360996,1704864100,1724740900,1736722276,1762824196,1772915236,1804380484,1817999044,1835094244,1850892484,1879916164,1889293156,1922296336,1934944144,1957177600,1974024900,2008115344,2019603600,2041232400,2058618384,2081549376,2099105856,2134809616,2143690000,2176409104,2192112400,2216526400,2235020176,2264617744,2276053264,2313994816,2333083204,2353996324,2369547684,2408650084,2421624100,2457184900,2477052900,2498600196,2515423716,2551664196,2564612164,2606102500,2622464100,2650396324,2671442596,2707537156,2721291556,2755620036,2775814596,2804973444,2824072164,2868673600,2878966336,2924213776,2946969796,2977011844,2999752900,3034908100,3050352900,3090248100,3113863204,3140705764,3159564100,3208089600,3224422656,3273670656,3294300816,3320064400,3345002896,3390965824,3407757376,3459086596,3477932676,3507719076,3530498724,3583219600,3600480016,3642846736,3669694084,3705643876,3729056356,3783972196,3798749956,3848217156,3876058564,3913503364,3941830656,3978077184,3996262656,4054123584,4083210000,4120099344,4142724496,4202150976,4217723136,4277944836,4307296900,4338856900,4369474404,4431298624,4450490944,4503483664,4528213264,4570300816,4601722896,4658881536,4680201744,4729587984,4756033296,4799164176,4832196196,4898880064,4916814400,4977584704,5011507264,5048955136,5080268176,5135155600,5158399684,5228446864,5263212304,5310328384,5334841600,5406660900,5430216100,5496443044,5528517316,5564264836,5600127556,5663164516,5687874724,5763239056,5793645456,5844296704,5882583204,5959840000,5982094336,6044129536,6078385296,6127132176,6166646784,6246689296,6266938896,6335523216,6376341904,6428190976,6469306624,6535105600,6562296064,6637035024,6672275856,6728592784,6760128400,6845907600,6873736464,6960564900,7004016100,7044244900,7088292864,7169347584,7196468224,7282574244,7318118116,7377779236,7414932100,7497828100,7528338756,7602096100,7648202116,7710596100,7757734084,7831896004,7857404164,7953429124,8001660304,8066195344,8112244624,8190250000,8216334736,8315616100,8365297444,8431279684,8468048484,8561060676,8593660804,8680648900,8732154916,8786062756,8837880100,8942728356,8976804516,9072562500,9109175364,9170360644,9224065764,9332332816,9367916944,9454839696,9509760324,9573056964,9627926884,9739716100,9768159556,9881155216,9928926736,10004800576,10052869696,10141295616,10180002816,10296566784,10351841536,10430128384,10475931904,10576888336,10616417296,10723845136,10783576336,10843473424,10904371776,11027100100,11062411684,11176295524,11225402500,11308620964,11369956900,11496557284,11535189604,11617821796,11681718724,11767476484,11824822564,11955235600,11990250000,12122010000,12177563904,12265119504,12331658304,12429574144,12474209344,12609942436,12674706724,12750474724,12804732964,12929964100,12973665604,13113456196,13183632400,13257219600,13312544400,13455072016,13502440000,13646445124,13702575364,13795442116,13868359696,13992997264,14038458256,14157192256,14231535616,14317558336,14392321024,14530855936,14565593344,14718057124,14793856900,14896202500,14973437956,15097036900,15148194084,15272510724,15341795044,15446015524,15509713444,15669531684,15722652100,15884065024,15950679616,16035663424,16108686400,16273084356,16328239524,16476803044,16538474404,16631197444,16714869796,16883883844,16940063716,17075694276,17159428036,17272793476,17345416804,17519169600,17561550400,17736912400,17824920100,17927603236,18015545284,18131699716,18189916900,18356456196,18446529124,18567332644,18639348676,18803539876,18856233124,19041240100,19134082276,19233806596,19320444004,19508826276,19571450404,19732944676,19804932900,19932357124,20017156324,20210602896,20272064400,20427269776,20511395524,20642218276,20738880100,20918993956,20969936100,21170250000,21270472336,21375609616,21476902500,21638998404,21704950276,21893937156,21997042596,22134893284,22206364324,22415479524,22480204356,22674938724,22771413604,22882612900,22989230884,23171537284,23242222116,23458598244,23544447364,23688288100,23796764644,24000826084,24060352996,24209492836,24320402500,24469093476,24581222656,24806880004,24867397636,25060789636,25169187904,25321720384,25436422144,25615362304,25685831824,25919068036,26011883524,26168885824,26262147136,26480401984,26558569024,26797690000,26917652356,27028017604,27143880516,27361791396,27441247716,27686297664,27782222400,27926420544,28030795776,28279803556,28360580836,28560324004,28686196900,28853099044,28961913124,29178789124,29247156324,29504245824,29630802496,29803188496,29919312784,30127239184,30202268944,30465607936,30597706084,30751831044,30852922500,31120488100,31209462244,31438836100,31573736100,31710349476,31846543936,32095439104,32187230464,32463390976,32549933056,32734941184,32874041344,33154583056,33246416896,33465580096,33606222400,33764797504,33907539600,34173219600,34244242704,34503805504,34634698816,34822545664,34948059136,35181754624,35279357584,35575240996,35723268036,35921620900,36039984964,36295584196,36387088516,36662292676,36814096900,36973905796,37126353124,37433736484,37517365636,37803024900,37927562500,38133497284,38289879684,38572174404,38675942244,38883896100,39026002500,39238063396,39396692196,39718098436,39804240100,40128102400,40262830336,40479830416,40624821136,40886457616,40990051600,41296742656,41462733376,41638851136,41769549376,42105398416,42217099024,42555564100,42724063204,42889581604,43033842916,43377225984,43487263296,43833284496,43970734864,44202539536,44364154384,44647690000,44764403776,45045817600,45198760000,45428659600,45607019364,45965644816,46048009744,46397160000,46578272400,46820304400,47002240000,47273195776,47393290000,47681089600,47862938176,48110035600,48250515600,48599084304,48722615824,49099469056,49259139136,49451085376,49639840000,50022006336,50129418816,50514360516,50665508100,50881824900,51076000000,51466367044,51597122500,51910154244,52107192900,52355846596,52520722276,52878842116,52981911684,53347140900,53546885604,53813792484,53997675876,54276884676,54411160644,54820603044,55025899776,55300225600,55450830400,55866049600,55985238544,56403400036,56585942884,56806908964,57017798656,57441708900,57579841764,57943229796,58112816356,58373459236,58588202500,58989722884,59133594276,59480380996,59667832900,59926060804,60145600516,60558319396,60676498276,61087076964,61284963364,61534755844,61757220100,62115592900,62265220900,62718190096,62944788544,63246214144,63391154176,63850214596,63995844676,64411394436,64643062500,64887372900,65119894596,65518593156,65666112516,66137437584,66318610576,66634194496,66871891216,67307038096,67431624976,67806076816,68046896164,68366560900,68601038724,69088019716,69214243396,69612600964,69857661636,70185785476,70432913664,70773025024,70926342400,71425769536,71637593104,71972012176,72169598736,72675533056,72843850816,73319642176,73571137600,73805675584,74034056464,74549749444,74720222500,75193317796,75390881476,75738342436,75949848100,76475477764,76648137316,77069532996,77334048100,77645822500,77912440384,78368643136,78512040000,79034076900,79277159844,79635711204,79906851684,80341634916,80491364100,81040424976,81291133456,81619918864,81839477776,82395406116,82581516900,83058087204,83338451856,83615818896,83893646736,84459984400,84648411136,85161246976,85357465600,85736524864,86023716804,86600718400,86789160000,87251707456,87516572224,87843475456,88099737856,88649107600,88792080400,89383060900,89670302500,90066012100,90318280900,90794947684,90992722500,91594601316,91896284736,92289579264,92532772864,92971327744,93173899536,93741293584,94047715584,94371840000,94680520804,95257415044,95435273476,96059084356,96307191556,96724732036,96998610916,97630001764,97825072900,98245887364,98562090916,98984485924,99304395876,99947028736,100108960000,100755456400,101029893904,101411676304,101738033296,102249015696,102456327744,103056408576,103385399296,103763871376,104026891024,104692367844,104909914404,105579504900,105878652100,106222542724,106504322500,107131836100,107357143716,108038430864,108291013776,108746933824,109090162944,109677542976,109900206144,110378101824,110725224516,111188902500,111535960900,112237060324,112397926564,113103070864,113455796224,113892750400,114216961600,114785440000,115002374400,115613600400,115957956676,116437912900,116721989316,117447402436,117686046916,118415821456,118713324304,119099531664,119431065744,120095516304,120339610000,121081729024,121376985664,121778665024,122147454016,122853054016,123102739600,123692890000,124070199696,124575114304,124871770384,125568174736,125772366736,126491190336,126875590416,127363334400,127749056400,128264259600,128522250000,129302091396,129670569604,130146334564,130458216100,131246798400,131455554624,132248595600,132646010436,133065907524,133463086276,134265082084,134529035524,135216527524,135510861924,136050322500,136422377316,137237647936,137498572864,138068723776,138416737936,138952999696,139364835856,140193331776,140409082944,141159506944,141574597696,142044564544,142463973136,143135102224,143407630864,144254116864,144637217344,145203675136,145496473600,146294010256,146538902416,147399173476,147829484196,148291227396,148724379904,149437911184,149722563600,150596772624,150944682256,151467299344,151906621504,152702755984,152956081216,153664000000,154103353600,154697475856,155144605456,155977603600,156205171984,156974440000,157426432900,158026920676,158408776036,159135570724,159438892804,160302542884,160687136164,161300230884,161653851844,162579916944,162889731216,163820943504,164287544976,164676886416,165118697104,165978019216,166291052944,167173041424,167539587856,168159045184,168562798096,169518299076,169834652100,170600389444,171030219364,171672663556,172150308100,172977800836,173217445636,174192708496,174680530704,175269497104,175760500644,176532744964,176815204036,177707774916,178163344836,178822419876,179215062244,180215532324,180548508100,181344815716,181835722084,182368286116,182874259044,183890022976,184198905856,185161532416,185492153344,186174990400,186686213184,187717693696,188060995600,188887590544,189346819600,189911180944,190432740996,191376501156,191656581796,192708708196,193235851396,193939828996,194383992100,195231422500,195581524516,196573409956,197105809156,197745638596,198137155876,199056960964,199414047364,200497972900,201041037376,201622552576,202140160000,203235065856,203538127104,204571671616,205006106176,205658622016,206159586304,207270772900,207620567716,208386772036,208945895236,209692558084,210253429156,211381096644,211675446724,212808761344,213251851264,214006161664,214576474176,215377671744,215756534016,216906295824,217482322500,218131966116,218580560676,219659067684,220030417476,221082397636,221665822596,222283960900,222782112004,223893634276,224257179364,225440737636,225915793636,226703585956,227298190564,228317686276,228661850596,229619222596,230217636100,231020577316,231574613284,232786950400,233064941824,234178566400,234788702500,235603452100,236209608196,237065767236,237474934596,238528699236,239146428676,239956941316,240450968164,241629267364,242038416676,243208758244,243706119556,244338421636,244892357956,246156884164,246573819844,247844665600,248354715904,249072861184,249712082944,250994988036,251420010724,252447963364,253093511056,253818470416,254350766224,255651584400,255991473936,257298504516,257883183684,258757377124,259415011584,260295876864,260736869376,262062086400,262656250000,263542596496,264035656336,265373340736,265744374016,267088441636,267758642116,268454551876,269130613284,270487367056,270936906256,271937218576,272479824016,273307292944,273976871184,275234538384,275688003600,276789627664,277370755600,278294231296,278988901636,280382958144,280721948224,282122447104,282824003344,283628674624,284332099984,285442295824,285852761104,287272416484,287976049956,288925600324,289390202500,290693505600,291159526464,292520885904,293187595024,293950477584,294670922896,295909888576,296393136400,297727374736,298303853584,299274643600,299931475600,301299992464,301721701264,302900532496,303640673296,304628932624,305371180816,306765330496,307164242176,308442501376,309136000000,310026240000,310779490576,311984805136,312485472016,313913678400,314559452736,315569803536,316145303824,317676522384,318186246400,319640975424,320319777024,320972103936,321745335076,323296862464,323788312576,325305966736,325926810000,326968963344,327641760000,329214307984,329737795984,330887251984,331660810000,332656711696,333376902544,334736302096,335143735056,336743447616,337544732196,338614592836,339415768836,340703355204,341123747364,342639305316,343449914116,344533780900,345182100484,346678374436,347206134564,348607584900,349363744900,350215404100,351039660196,352534312516,353085524100,354748889664,355320903744,356432880400,357269198400,358848921600,359366678784,360710750464,361489537600,362442529024,363213539584,364912646400,365357384704,366945177600,367798583296,368934760000,369664000000,371036920384,371602406464,373184148544,374049667216,375077854096,375764096016,377207245584,377782329600,379532387844,380400298756,381288960196,382104477316,383869463184,384345441936,386118075456,386714834496,387879840000,388767214144,390555003136,391150176400,392351904400,393249393216,394449314704,395351712900,397162123264,397646270464,399287499664,400061310016,401155023424,402021938704,403402819600,404012784400,405853088356,406770981796,407781862084,408497383044,410352985744,410916896784,412780550400,413713958436,414702512676,415444702500,417225564900,417853645056,419740719876,420487402500,421748934084,422622208836,424027578276,424652935716,426176563684,427132830916,428404284676,429363046564,431126186404,431567535844,433501094464,434428628544,435721448464,436593205504,438127495744,438763161664,440433977104,441414072100,442605461796,443372203044,445345344964,445922115076,447903593536,448739214400,449704360000,450700080964,452697517584,453343662864,455349641616,456148950544,457284307984,458291088784,460313399296,460981249936,462416320144,463287145104,464643995904,465511456656,467557823524,468105009124,470028163396,471057104896,472425278224,473437572624,474825733776,475515059776,477392556096,478321625664,479711382544,480542876944,482638657284,483239083716,485198619844,486252393124,487368741924,488424867876,490439698596,491056168516,492823656196,493632708100,494948832676,496018769796,498164932864,498876641344,500573230144,501490585600,502930598976,504009124096,505970451856,506516890000,508697032900,509787432036,511021960164,512017526916,513770701284,514504944100,516595812516,517700396196,519100076196,519791973156,521887766724,522627784900,524859678784,525973057600,527157315136,528278941584,529954880400,530688938256,532946721024,533823119424,535168328704,536292582400,538568112384,539202364416,541024975936,542167142400,543687971904,544750277184,547052536900,547620720196,549593891716,550632266116,552176803396,553223564100,555081621444,555832873764,558170363664,559174928400,560737382976,561672304704,564028036324,564809365444,566795168164,567979278736,569065044496,570248501904,572479877376,573273093904,575665143076,576612422500,578071296100,579093604324,581503854096,582236145936,584166718864,585267840784,586817281600,588031316224,590112803344,590752108816,593078653456,594299144464,595909890304,597139471504,598871681424,599540490000,602014602816,603157263424,604649318464,605645045824,608137948224,608961729600,611098665984,612350070784,613677957376,614806537216,617327632804,618157612900,620688714244,621520949956,623206040356,624343343716,626893398756,627742459204,629569250116,630839416516,632174468836,633459993604,636038150400,636727394304,639315383184,640611345924,642341337444,643418953956,645345515556,646213407876,648830250000,649990688400,651733290000,652779970704,655031235600,655860261904,658356977664,659584373904,660988512144,662316013584,664981535296,665686282816,668103525376,669150176256,670937915664,672281925184,674842534144,675736609024,677552874496,678906785764,680687701444,682034829316,684574212100,685236284100,687741807204,688896680004,690570972036,691944476224,694142255104,695022342400,697786232896,699170234896,700736410000,701835115536,704350633536,705277476864,708071760900,709364848644,710820982404,711954563076,714768793600,715702464064,718527475600,719653608976,721541518096,722765224336,725195309056,726115311376,728366661136,729794318400,731517562944,732951727876,735666444100,736325312836,739142550756,740539418116,742192588036,743640623716,745960416100,746928062500,749419176100,750874240900,752823463716,753906685284,756659899044,757620531396,760568875236,761720490756,763285290244,764739756036,767708916100,768697576516,771677916304,772802744464,774512644096,775907292736,778657997056,779646616576,781767198976,783274560784,785286634896,786563229456,789595742464,790363672576,793253859904,794765118016,796799028496,798327954064,800430830224,801289941904,804156975504,805696531236,807744372516,808952738724,812049695044,812915017924,816023155600,817577640000,819169806400,820730907364,823559880004,824605654084,826961071876,828212843844,830310953796,831886278084,835048716100,836043237316,838576084644,839895265764,842008112100,843440192100,846484642116,847309204036,850515550756,851976996676,853794480100,855391915876,857968702756,859036092964,862275673744,863747184400,865681376400,866798240400,869839753104,870914499984,874187600400,875826452736,877444358400,879086259216,881901297216,882998502400,886305507844,887510958084,889720562500,891381456900,894556556100,895510186596,898176989284,899849548816,901899699856,903359004304,906555345424,907439139216,909955735056,911643040000,913890112576,915584887044,918266060644,919370310244,922779256996,924232276900,926510202916,927865974564,931012712100,932055084900,935499052944,937217610000,938705201424,940310332416,943777276324,944927861476,948407195044,949794481476,952111480644,953610840900,956777422500,957810627684,960615612100,962372772036,964720768804,966371573764,969393838084,970339263364,973888712164,975531536100,977903432100,979486296100,982195959364,983195199844,986481995524,988262644996,990626071204,992059824484,995668700224,996866458624,999888003136,1001700722500,1003462992900,1005274937956,1008718922500,1009924502500,1013336169316,1014496157284,1016939132356,1018775310336,1022456679556,1023621874564,1026537765124,1028200056004,1030245300100,1032097510084,1035635946244,1036613132164,1040342880784,1042204141456,1044459472144,1046054381824,1049051189824,1050231436864,1053636555024,1055521992996,1058038532100,1059487310596,1062725944996,1063988124004,1067555967076,1069457949316,1071444431236,1073184114916,1077012235264,1078008745984,1081762246084,1083260476804,1085826520900,1087753046116,1091360481124,1092639546436,1095250157764,1097126363844,1099717158276,1101664358404,1104941550244,1105950896164,1109866464004,1111459930564,1113966258916,1115926027876,1119072011044,1120384144324,1124337881104,1126315238400,1128557776896,1129917976576,1133897003716,1135124038084,1139116482436,1141115332900,1143252792900,1144947080484,1148965322404,1150303440484,1154335360000,1155917418496,1158240878656,1160265048336,1163731767696,1165078454544,1167981655824,1169884518544,1172377879696,1174388350864,1178483936400,1179422064144,1183334947344,1185163177104,1187908167744,1189971176164,1193272216900,1194635884036,1198179808996,1200072048484,1202834240644,1204414061764,1208588012164,1209978000100,1213764924100,1215457740484,1217681352196,1219783295844,1223997046336,1225378153024,1229375347984,1231061259024,1233299091600,1235414466064,1239668467216,1240915793296,1244322402064,1246456136704,1249271173264,1251095938576,1255125864976,1256273338896,1260293626384,1262382579364,1265260526244,1267204992804,1269908117604,1271341941444,1275494666884,1277663994244,1280568350884,1282307112100,1286681862400,1287879983104,1292268768400,1294465960516,1296760672516,1298765653956,1302816788100,1304132024196,1307917024164,1309674248100,1312633072804,1314856675584,1319098190400,1320587092224,1324156518400,1326062796304,1328735733264,1330977542400,1335476074384,1336585707664,1341098331364,1343322724324,1345827369604,1348092833476,1351364400324,1352871396900,1357145781156,1359196895716,1362239122500,1363808223684,1368184053636,1369700396964,1373916868164,1376215226884,1378656402244,1380963420736,1384914726976,1386421471296,1390616411536,1392466080784,1395526392976,1397644128400,1402310692864,1403618345536,1407317180416,1409367860224,1412494218256,1414691390464,1419400600996,1420544561956,1424580699364,1426944924304,1430100273424,1432397261584,1436191321744,1437773661184,1442540319364,1444558802404,1447329302500,1449235560964,1453572632164,1455154864804,1459964724100,1462372629796,1464463022500,1466874633316,1471713512164,1473286164100,1478140460944,1480086361744,1483085552400,1484839731600,1489722773764,1491344094436,1495254513636,1497524902756,1500786704356,1503237836356,1507360240516,1508657019076,1513598720656,1516070138944,1519026670144,1521334763776,1524889098496,1526311993600,1531297351936,1533793079296,1537123876864,1539108209664,1543905651600,1545576076944,1549636584336,1551828284176,1554520214416,1557044769856,1562105024964,1563665217156,1568741220036,1570425023556,1573815412324,1576345536676,1581140264356,1582830707236,1586456126116,1589016555844,1591922217796,1594492103824,1599643152900,1600938539524,1605679259716,1608265294276,1611706420900,1613900915236,1618050144676,1619576935876,1624508291844,1627119643396,1630601302500,1632645062500,1637125368004,1638784022500,1644041968804,1646443127044,1649236419076,1651867562500,1656394740100,1657908609604,1662959835364,1665065059876,1668597394564,1671259443984,1676595087556,1678335796036,1681944422404,1684622284900,1687863475684,1690254809604,1695636291556,1697011657636,1702080311044,1704335472004,1707940561924,1710450696964,1714743108324,1716545428900,1721737622500,1724462723344,1727300375824,1729319681296,1734794557456,1736617924864,1742109612100,1744856064900,1747773897156,1750122618084,1755646200064,1757427462400,1762967861824,1764880366144,1768282933824,1771060579344,1775279100816,1777134280464,1781594935696,1784372326416,1788093142416,1790897003536,1796516676964,1797803635684,1802902369284,1805723187984,1809487709584,1812308288400,1816834410000,1818581708304,1823342497344,1825936017984,1829440194624,1831713214464,1837429048324,1839164520964,1844897392900,1847343088900,1850345355076,1853099573796,1858592343204,1860512368036,1865819402500,1868093035524,1871374752324,1874275997764,1879536805444,1881445668964,1885837534564,1888755462400,1892649541696,1895027560000,1900890897984,1902435386944,1908315690724,1910968934884,1914852623524,1917510406564,1921500537124,1923452776996,1929382116484,1932350208100,1936021788100,1938382338564,1944345782404,1945952460676,1951933117456,1954884941584,1957570353424,1960392019600,1966041448336,1968038625424,1973193327616,1975553935936,1979570208784,1982587905936,1988652758416,1990672671744,1995529167424,1997903094784,2001964648464,2004750155664,2010463096464,2012096858256,2018229374736,2021105782336,2024587494400,2027662081600,2032586273344,2034537082384,2040132302224,2043218665744,2047337445904,2049398391184,2055105742096,2057170592656,2063141540496,2066262502500,2069483644900,2072430884836,2077789634116,2079692788996,2085979381264,2088475864336,2092674705664,2095829499204,2101879445796,2103549931044,2108147186916,2111319429444,2115558614016,2118736425744,2124504474624,2126183924736,2131646720256,2134824898816,2138754152704,2141961039936,2147092367616,2149202912256,2155153185936,2157902240400,2162205557136,2164558907536,2170742542336,2172900053776,2179396733284,2182373925796,2185353150436,2188612524816,2195144486404,2197231077636,2203645243024,2205925975696,2209848741136,2212632450064,2219218007616,2221363699776,2226636964864,2229932943616,2234343331984,2237656974400,2243332946176,2245058715904,2251716327184,2254718471184,2258612225424,2261931776784,2267228855824,2269108398736,2275379166096,2278735164304,2283217705024,2285902086400,2292292897024,2294473621504,2299566010624,2302951932304,2306546887824,2309609667600,2316410944576,2318676198400,2325496901764,2327839827076,2332345948804,2335535836516,2342393518144,2344352952384,2349843726400,2353284857764,2357189078596,2360629436356,2366976096004,2368822653604,2375753657104,2379219870784,2383849536784,2386703650816,2391649878016,2393926861824,2400615569664,2404112270400,2408766080400,2411548103056,2416917966736,2419007859856,2425731490576,2429246428816,2432988518416,2436171558976,2443250348100,2445276532644,2452374792036,2455206948100,2459947570084,2463462089764,2470599250596,2472976404900,2477507480100,2481084921316,2485245049156,2488575660484,2495471046436,2497291199524,2504502483844,2507579929156,2512396182916,2516011405636,2521801168324,2524202823076,2531471923600,2534527680400,2538655875856,2541562915984,2548531273744,2550958397584,2558285087296,2561741095936,2565430076416,2568506254336,2575870922304,2578323872656,2584686428416,2587516747776,2591996961024,2595701209924,2601930302500,2604408537124,2610350772964,2614074576100,2619043775716,2622773772004,2630254701636,2631811865796,2639312163216,2642848467856,2647844928400,2651282732176,2657304255376,2659808715664,2666270968384,2669799138304,2674847166016,2677778777664,2684656034064,2687134005504,2694351536704,2697582874624,2701526151424,2705347302436,2712378424900,2714908699204,2722084215876,2725147243204,2729427801604,2732865247044,2740580920900,2743150812516,2749328772100,2753150384644,2757931132804,2761240243204,2769015809296,2770933110544,2778728970304,2782631006884,2787303708484,2791205076100,2796500331076,2798855388484,2806710504976,2810638838016,2815710848064,2818799229184,2826695713284,2828955802500,2836226492100,2839797928900,2844005670724,2847649500004,2855606541316,2858243321956,2865064022500,2868206442084,2873533522500,2877535468900,2885031337444,2887695259684,2893407804004,2896592955844,2901946320100,2905872534244,2913528092836,2915658700900,2923758010000,2927808455056,2932409655184,2936472940996,2942645191396,2945115905956,2953276620100,2957127336900,2962081944900,2964726098244,2972927711524,2975659500100,2983883121664,2987974987776,2992291070976,2996416392256,3002651289856,3005396697664,3013682112016,3016988354704,3022521331600,3026194243216,3034522192144,3036780228496,3043447724304,3047622113536,3052763750656,3056538903616,3064929481636,3067170779556,3074383505664,3078593086464,3084154142976,3088370405376,3094446882816,3097262089216,3105348840000,3108902451264,3113982563904,3117371609664,3125887648324,3128688816100,3136717282084,3140685751204,3144429748516,3148686998116,3157266996900,3159826208100,3168079608100,3171213024100,3176942630404,3180622564900,3189267365904,3192125369104,3198989799184,3203326766656,3209113960000,3213457782544,3220905017344,3223231352896,3230129129536,3234271334464,3240100800784,3244479947536,3251486963344,3253910899600,3262705239616,3266839353600,3272698083600,3276172400400,3285011251600,3287621712400,3295197911824,3299207242384,3303916958224,3308360832100,3317264824896,3320062986816,3328595909136,3331661680656,3337183625616,3341657120400,3349778457600,3352766075136,3359947656256,3364436377600,3369192407296,3373701991696,3382737565284,3385092179044,3393678733636,3398212043776,3404261164096,3407804608576,3414423969856,3417440271424,3426563805604,3431126428900,3437219592676,3440424006244,3448263302500,3451294510756,3460485416644,3465085452676,3469554430276,3474160488100,3483396700996,3485995194724,3494873213764,3498463494724,3504646084900,3508960661284,3517507752004,3520479174436,3526786344676,3530994260836,3537220562500,3541886360100,3550699548900,3553172220196,3562195714884,3566182972356,3572440208100,3576887082756,3584425854564,3587334488676,3595900593796,3600635281156,3605737658884,3609536414884,3618661589284,3621812447236,3631341849664,3636099804736,3641166177856,3645243199504,3654321610384,3657074873104,3665892281104,3669722585104,3675931921984,3680718990400,3688965566224,3692177622016,3699898414144,3704331512896,3710785795600,3715634049604,3724429094884,3726652646116,3736388484676,3740843383876,3747128062500,3752007740100,3759759780100,3763018022500,3770983377604,3775831922500,3782363728900,3785787404100,3795639097600,3798912846400,3808149296704,3812365590784,3817240658176,3822181401600,3831712290576,3834954556416,3844901348964,3848855422500,3854036448900,3858749496900,3868742815744,3872016449536,3880017490176,3884699089296,3891371694336,3895349584896,3905413868944,3907943829904,3918032277604,3922467392484,3928744195236,3933804157924,3940661712100,3943997402500,3954156112036,3959240366656,3966024454144,3970104070144,3979482378496,3982355501056,3991620393216,3996736665856,4001920230400,4007051104644,4016665322244,4020065100100,4028875926436,4032987732900,4039866843364,4045030023076,4054931306596,4057831532836,4066054470916,4070314320004,4077241331524,4082444496036,4092868871056,4095588347536,4105567488400,4110796800100,4116638102500,4121314130404,4128788291364,4132283971204,4141949491684,4147210060900,4154234781636,4157757527364,4168326555904,4171855270144,4182450370816,4187752960000,4193386546176,4198138732096,4207093254400,4210638336256,4220756584704,4224702046464,4231413561600,4236763555600,4246847180944,4249815234064,4258395433744,4263770712100,4270215602500,4275573520516,4286365685316,4289148692676,4298398734564,4303807491844,4310382213316,4315806812304,4324486611600,4328080803216,4338972320400,4342972640400,4350177861264,4354517215504,4365458639424,4368768825600,4379309582400,4384668481600,4389695425600,4394725249600,4405297254400,4408924865536,4418925311376,4423332461584,4430705045776,4435353936784,4446446995600,4450142135296,4458246439936,4463805523984,4471211746576,4476787368964,4485322508164,4488033776004,4498564644324,4504165779204,4511639379844,4517248645924,4525856288836,4529073498244,4540342732864,4545969808384,4553495067664,4557934644624,4568188078224,4571471610000,4581175175424,4586853189636,4592817603396,4598442782404,4609840878916,4613637651844,4625063155216,4628780131600,4636408045824,4641620331364,4653097666816,4656825889024,4665116172544,4670560677904,4677098275600,4682428587664,4693236966544,4696287736464,4707867136644,4713631788100,4720668744100,4725623822500,4734845440900,4738710752164,4750368457156,4755705454564,4762930867396,4767541240900,4777555520644,4781438222500,4793174606224,4798430443024,4804671105936,4810143785616,4821932892100,4825306368964,4837122827716,4841839374724,4848812808004,4854733595716,4866603657444,4870557680356,4877975800996,4883914361764,4891342643044,4896917558404,4908865635216,4912056611856,4923552712464,4928666403600,4936057532176,4941604512784,4951212417424,4954773268624,4966827335044,4972855400100,4979601176004,4984422386724,4996530325264,5000536771344,5012673210000,5018388510976,5024842291456,5030008301824,5039701725184,5043743405584,5055959114116,5060565184900,5068720909924,5074846518564,5085340704900,5089418688676,5099169161956,5104987774084,5113124933284,5118553306084,5130904522500,5133514307076,5145892623936,5152082832400,5160348289600,5166556276036,5176489536100,5180421810916,5190040323556,5196111132004,5203590575044,5208555515076,5221069621156,5225238230884,5236765406404,5242149101476,5248745148196,5255033572996,5267144340676,5271331299844,5283957326596,5288555698596,5295733152516,5301920708100,5314601736964,5318586114436,5327888801284,5333651680900,5342135425636,5347573000324,5359789874884,5363050062276,5374635442276,5381035926436,5389557257764,5395966618084,5404667142436,5408945609796,5421819110400,5428228980736,5436060119296,5441209369600,5453308493824,5456671746304,5469143504400,5475206887056,5481947918736,5488430707600,5501445306256,5505780673600,5516936601856,5522124006400,5530756283536,5536740768784,5548135280704,5552357046336,5562843010624,5568448379536,5577211238544,5583258603664,5596441862400,5599848960000,5613061256100,5619659018724,5626829944836,5632809209316,5642382636900,5646792184804,5660088260836,5666742162064,5675601051904,5680176089344,5693530476544,5697979057936,5711363903716,5718057432516,5724180660676,5730498671716,5741994892516,5746136352100,5759356817956,5764733772196,5773726568164,5779956455716,5792888412964,5796701477956,5807531253924,5813702190244,5822733085156,5829530171364,5843145907600,5846704656016,5857155064336,5863507275024,5872615529104,5879441659536,5890309584016,5894853796624,5907291362064,5913125982864,5921688636304,5927179776400,5940158315536,5944682701584,5958500528016,5964829290000,5971161411216,5978083680144,5991959831104,5996072921344,6009087406336,6014579671296,6023863374736,6029637403024,6043602723876,6048205676100,6059385942724,6066388704016,6074903831824,6081846499600,6092504890000,6096059760400,6110141296900,6116668776100,6126050707396,6133111686144,6144409779264,6148217793600,6162389197056,6169481016336,6178943119504,6183716677264,6197948826624,6202610174016,6214809674304,6221911629376,6229496842816,6236647139584,6250440007744,6255201081600,6268713987600,6273522090000,6281940704400,6289121027344,6301646254864,6306446877696,6317501279296,6324722010000,6332933307024,6340172920900,6354674639104,6358547251456,6372534774544,6379099873344,6388498892304,6394687827984,6406345717776,6410720163600,6425342850276,6432280005636,6441961762404,6447485856100,6459862723876,6464743567396};

int main(){
int t,n;
cin>>t;
while(t--){

    cin>>n;
    cout<<a[n-1]<<endl;
}

return 0;
}
