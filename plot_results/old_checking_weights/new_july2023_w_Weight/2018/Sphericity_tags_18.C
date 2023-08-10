void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(0,0,1,1);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.897066,1.052419,13.38848);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1.580694e+11);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0.001315889);
   st_stack_59->SetMaximum(5.753363e+11);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetLabelSize(0.035);
   st_stack_59->GetXaxis()->SetTitleSize(0.035);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetLabelSize(0.035);
   st_stack_59->GetZaxis()->SetTitleSize(0.035);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,76490);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,67923.48);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,39317.93);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,23690.03);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,13271.29);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,8066.042);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,5087.188);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,2118.698);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1059.542);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,830.616);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,954.622);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,377.6876);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,361.6666);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,54.98921);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,215.4612);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,245.2716);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,131.3751);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,37.44396);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,64.0697);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4415.244);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4747.021);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3088.011);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2272.651);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,1870.097);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1349.986);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1133.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,573.1309);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,443.5613);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,166.7725);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,428.5266);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,94.68741);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,93.25485);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,22.76984);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,74.71704);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,73.17114);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,60.54411);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,17.61877);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,37.30926);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,460.1435);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,344.1312);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,202.7696);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,125.9472);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,75.21809);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,40.49356);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,24.08277);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,13.70853);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,11.97893);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,8.719571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,6.175536);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.974757);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.509796);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.249846);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,2.288526);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.201592);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.318742);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.7047821);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1465657);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,-0.05654178);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,9.891311);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,8.446895);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,6.739884);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,5.192972);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,4.088253);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,3.103618);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.280001);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.709116);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.696639);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.526786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,1.147744);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,1.099839);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.8635141);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.6287038);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.7846079);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4351424);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.517419);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.4261212);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.08514249);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.05654178);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,9471.41);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,7776.922);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,4416.191);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2557.893);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1480.662);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,870.8756);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,531.741);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,329.6847);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,227.7238);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,146.2624);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,104.3643);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,75.90202);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,55.77814);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,44.35566);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,34.28327);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,26.45025);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,16.37109);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,10.6394);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.713822);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.740809);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.179435);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.4581474);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,31.00842);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,27.47315);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,20.48917);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,16.36441);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,11.57156);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,9.164846);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,7.958718);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,5.677479);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,5.864907);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,3.7283);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,3.385545);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.542484);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,2.215283);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.964407);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.721038);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.748395);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.169164);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.9418139);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.7578307);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.4842477);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.3196209);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.2081159);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1348.442);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,995.4118);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,575.0677);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,348.3745);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,205.2229);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,110.4522);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,67.29337);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,31.32622);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,24.00634);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,15.69709);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,12.20941);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,10.51594);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,7.265419);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,7.290414);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.73572);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.820722);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.496727);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6182144);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.9128336);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.4945507);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.09592532);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,33.30293);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,26.3784);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,19.0068);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.92057);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,11.13862);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,7.313319);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,6.411216);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.853915);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.837819);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.925123);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.993189);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.721201);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.227304);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.507994);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,1.082531);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.7316324);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.8109803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.278067);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.6287572);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.246037);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.09592532);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,137.4165);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,79.37191);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,62.63573);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,23.16299);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,19.3434);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,13.08175);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.391729);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,6.108771);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.785424);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.38325);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,1.219365);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.755351);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.196614);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.419123);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3501833);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.5860539);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.4105638);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.116362);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,13.5945);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,7.109292);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,9.457155);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,3.161781);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,3.030878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,4.172588);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.459776);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.198905);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4807242);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4984052);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.4788455);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.648548);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.4176073);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6082778);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1911128);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.322977);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.3034534);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.116362);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.8664756);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,0.6599753);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.6183305);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.6599753);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.5029805);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,7.135149);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,2.276642);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.539237);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,1.251714);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.8768691);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.8933559);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.4604326);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.879296);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,1.21217);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7698814);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.7266661);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.6254258);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.6389277);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.4604326);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,27.72952);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,20.05735);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,9.400149);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,5.687704);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,5.712564);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.198639);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.8383877);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.3068351);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.5687383);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2989046);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(13,0.3776254);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(20,0.3487978);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,3.036445);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.552267);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.753022);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.368409);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.436969);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.6106424);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.4876362);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.3068351);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.4034118);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2989046);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(13,0.3776254);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(20,0.3487978);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,22.74228);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,18.81668);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,10.16658);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,7.26962);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,5.046225);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.736785);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,1.043103);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.528608);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2798947);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.2216435);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1576188);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1351753);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.0751156);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.07789264);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.04864576);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03634013);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02097543);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01342985);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.02063946);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.003348055);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002241159);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2659831);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.2637482);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1751174);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1522361);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1277156);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.08797209);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.05529747);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.05414427);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02712847);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02543154);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.02054564);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01974386);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.0140535);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01558359);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01115147);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.009843141);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.007576152);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.006046555);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.007395703);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003348055);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002241159);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,10.15124);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,8.515171);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,4.711276);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,3.081551);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.846509);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,1.049935);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.547593);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.3115779);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.231468);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1735649);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1172848);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.09439457);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.07601784);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.05944808);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.05851227);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.03574818);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02704005);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02425567);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.0106634);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.00256409);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001944759);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.001390994);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0006488114);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.08089709);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.07413405);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.05518107);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04457803);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03452525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02601639);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01874041);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01413152);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01210596);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.0105442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.008692934);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.007742443);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.006945239);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.006123328);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.006091853);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004747363);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.004158016);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003909567);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002618963);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001287839);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001124813);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.000983581);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0006488114);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.05836001);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.06477538);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01273248);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.03108575);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.01276103);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.002811088);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01282326);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01405511);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.006410966);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.009536665);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.006444123);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.002811088);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03756898);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02250409);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01295207);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.01134087);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.005306239);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.003247106);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001898438);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0006541666);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001901786);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.00160238);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0004199154);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0004352311);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003681398);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.00277046);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.00209662);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.002005297);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001319171);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.001094005);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0008535172);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004649533);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007845999);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0007235636);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0004199154);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0004352311);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__161 = new TH1D("VbbHcc_tags_Sphericity__161","",25,0,1);
   VbbHcc_tags_Sphericity__161->SetBinContent(1,109517);
   VbbHcc_tags_Sphericity__161->SetBinContent(2,85953);
   VbbHcc_tags_Sphericity__161->SetBinContent(3,49272);
   VbbHcc_tags_Sphericity__161->SetBinContent(4,28653);
   VbbHcc_tags_Sphericity__161->SetBinContent(5,16529);
   VbbHcc_tags_Sphericity__161->SetBinContent(6,9075);
   VbbHcc_tags_Sphericity__161->SetBinContent(7,4791);
   VbbHcc_tags_Sphericity__161->SetBinContent(8,2882);
   VbbHcc_tags_Sphericity__161->SetBinContent(9,1916);
   VbbHcc_tags_Sphericity__161->SetBinContent(10,1403);
   VbbHcc_tags_Sphericity__161->SetBinContent(11,972);
   VbbHcc_tags_Sphericity__161->SetBinContent(12,692);
   VbbHcc_tags_Sphericity__161->SetBinContent(13,571);
   VbbHcc_tags_Sphericity__161->SetBinContent(14,426);
   VbbHcc_tags_Sphericity__161->SetBinContent(15,328);
   VbbHcc_tags_Sphericity__161->SetBinContent(16,239);
   VbbHcc_tags_Sphericity__161->SetBinContent(17,186);
   VbbHcc_tags_Sphericity__161->SetBinContent(18,131);
   VbbHcc_tags_Sphericity__161->SetBinContent(19,68);
   VbbHcc_tags_Sphericity__161->SetBinContent(20,24);
   VbbHcc_tags_Sphericity__161->SetBinContent(21,11);
   VbbHcc_tags_Sphericity__161->SetBinContent(22,5);
   VbbHcc_tags_Sphericity__161->SetBinContent(23,1);
   VbbHcc_tags_Sphericity__161->SetEntries(313669);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__161->SetLineColor(ci);
   VbbHcc_tags_Sphericity__161->SetLineWidth(2);
   VbbHcc_tags_Sphericity__161->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__161->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1117[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1117[25] = {
   87976.13,
   77169.07,
   44601.1,
   26763.25,
   15065.23,
   9106.827,
   5721.13,
   2500.367,
   1326.01,
   1003.38,
   1079.436,
   471.3641,
   429.9453,
   110.442,
   257.2265,
   276.4023,
   152.0203,
   49.44404,
   71.99059,
   3.533528,
   1.279546,
   0.4595384,
   0.0006488114,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1117[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1117[25] = {
   4415.512,
   4747.187,
   3088.16,
   2272.761,
   1870.174,
   1350.047,
   1133.651,
   573.1699,
   443.6128,
   166.8333,
   428.5466,
   94.74625,
   93.29493,
   22.92083,
   74.74906,
   73.19769,
   60.5638,
   17.65127,
   37.32253,
   0.6479968,
   0.3337147,
   0.2081182,
   0.0006488114,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1117,Graph_from_VbbHcc_tags_Sphericity_fy1117,Graph_from_VbbHcc_tags_Sphericity_fex1117,Graph_from_VbbHcc_tags_Sphericity_fey1117);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1117 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1117","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMinimum(101.6308);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMaximum(101630.8);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1117);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__162 = new TH1D("data_mc_ratio__162","",25,0,1);
   data_mc_ratio__162->SetBinContent(1,1.244849);
   data_mc_ratio__162->SetBinContent(2,1.113827);
   data_mc_ratio__162->SetBinContent(3,1.104726);
   data_mc_ratio__162->SetBinContent(4,1.07061);
   data_mc_ratio__162->SetBinContent(5,1.097162);
   data_mc_ratio__162->SetBinContent(6,0.9965051);
   data_mc_ratio__162->SetBinContent(7,0.8374219);
   data_mc_ratio__162->SetBinContent(8,1.152631);
   data_mc_ratio__162->SetBinContent(9,1.444936);
   data_mc_ratio__162->SetBinContent(10,1.398273);
   data_mc_ratio__162->SetBinContent(11,0.9004703);
   data_mc_ratio__162->SetBinContent(12,1.468079);
   data_mc_ratio__162->SetBinContent(13,1.328076);
   data_mc_ratio__162->SetBinContent(14,3.857228);
   data_mc_ratio__162->SetBinContent(15,1.275141);
   data_mc_ratio__162->SetBinContent(16,0.8646817);
   data_mc_ratio__162->SetBinContent(17,1.223521);
   data_mc_ratio__162->SetBinContent(18,2.64946);
   data_mc_ratio__162->SetBinContent(19,0.944568);
   data_mc_ratio__162->SetBinContent(20,6.792078);
   data_mc_ratio__162->SetBinContent(21,8.596796);
   data_mc_ratio__162->SetBinContent(22,10.88048);
   data_mc_ratio__162->SetBinContent(23,1541.28);
   data_mc_ratio__162->SetBinError(1,0.003761629);
   data_mc_ratio__162->SetBinError(2,0.003799157);
   data_mc_ratio__162->SetBinError(3,0.00497685);
   data_mc_ratio__162->SetBinError(4,0.006324792);
   data_mc_ratio__162->SetBinError(5,0.008533897);
   data_mc_ratio__162->SetBinError(6,0.01046059);
   data_mc_ratio__162->SetBinError(7,0.01209849);
   data_mc_ratio__162->SetBinError(8,0.02147055);
   data_mc_ratio__162->SetBinError(9,0.03301041);
   data_mc_ratio__162->SetBinError(10,0.03733045);
   data_mc_ratio__162->SetBinError(11,0.0288826);
   data_mc_ratio__162->SetBinError(12,0.05580801);
   data_mc_ratio__162->SetBinError(13,0.05557825);
   data_mc_ratio__162->SetBinError(14,0.1868833);
   data_mc_ratio__162->SetBinError(15,0.07040787);
   data_mc_ratio__162->SetBinError(16,0.05593161);
   data_mc_ratio__162->SetBinError(17,0.08971292);
   data_mc_ratio__162->SetBinError(18,0.2314844);
   data_mc_ratio__162->SetBinError(19,0.1145457);
   data_mc_ratio__162->SetBinError(20,1.386427);
   data_mc_ratio__162->SetBinError(21,2.592032);
   data_mc_ratio__162->SetBinError(22,4.8659);
   data_mc_ratio__162->SetBinError(23,1541.28);
   data_mc_ratio__162->SetMinimum(0.4);
   data_mc_ratio__162->SetMaximum(1.6);
   data_mc_ratio__162->SetEntries(0.5344619);
   data_mc_ratio__162->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__162->SetLineColor(ci);
   data_mc_ratio__162->SetLineWidth(2);
   data_mc_ratio__162->SetMarkerStyle(20);
   data_mc_ratio__162->SetMarkerSize(1.2);
   data_mc_ratio__162->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__162->GetXaxis()->SetRange(1,25);
   data_mc_ratio__162->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__162->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__162->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__162->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__162->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__162->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__162->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__162->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__162->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__162->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__162->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__162->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__162->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__162->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1118[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1118[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1118[25] = {
   0.05018988,
   0.06151671,
   0.06923955,
   0.08492098,
   0.1241384,
   0.1482456,
   0.1981516,
   0.2292343,
   0.3345471,
   0.1662712,
   0.3970098,
   0.2010044,
   0.2169926,
   0.2075372,
   0.2905963,
   0.264823,
   0.3983929,
   0.3569948,
   0.5184363,
   0.1833852,
   0.260807,
   0.4528854,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
