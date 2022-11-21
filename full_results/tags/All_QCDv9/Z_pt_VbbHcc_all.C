void Z_pt_VbbHcc_all()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_all/Z_pt_VbbHcc_all
//=========  (Mon Nov 21 13:02:19 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_all = new TCanvas("Z_pt_VbbHcc_all", "Z_pt_VbbHcc_all",0,0,600,600);
   Z_pt_VbbHcc_all->SetHighLightColor(2);
   Z_pt_VbbHcc_all->Range(0,0,1,1);
   Z_pt_VbbHcc_all->SetFillColor(0);
   Z_pt_VbbHcc_all->SetFillStyle(4000);
   Z_pt_VbbHcc_all->SetBorderMode(0);
   Z_pt_VbbHcc_all->SetBorderSize(2);
   Z_pt_VbbHcc_all->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-72058.96,1562.903,7.19872e+07);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(6.169645e+07);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0.3);
   st_stack_12->SetMaximum(6.478127e+07);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetLabelSize(0.035);
   st_stack_12->GetXaxis()->SetTitleSize(0.035);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetLabelSize(0.035);
   st_stack_12->GetZaxis()->SetTitleSize(0.035);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_1 = new TH1D("VbbHcc_tags_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(1,1.289862e+07);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(2,2.44709e+07);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(3,9595509);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(4,633498.5);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(5,33725.17);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(6,4565.324);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(7,2797.812);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(8,2177.196);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(15,1023.624);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(16,153.2016);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(1,131502.5);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(2,181385.9);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(3,113717);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(4,29212.63);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(5,6564.916);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(6,2324.286);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(7,1792.823);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(8,1567.756);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(15,1023.624);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(16,153.2016);
   VbbHcc_tags_Z_pt_all_stack_1->SetEntries(36691);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_2 = new TH1D("VbbHcc_tags_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(1,101455.9);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(2,194650.5);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(3,121012.6);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(4,51433.14);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(5,23266.38);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(6,11598.57);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(7,6134.763);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(8,3436.313);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(9,2079.167);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(10,1301.687);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(11,809.6234);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(12,568.7141);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(13,376.3469);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(14,272.466);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(15,172.8046);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(16,125.6528);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(17,88.27579);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(18,65.3184);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(19,55.30129);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(20,37.14655);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(21,23.94867);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(22,18.31272);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(23,13.72942);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(24,14.04149);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(25,10.97857);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(26,6.653188);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(27,3.283534);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(28,5.367561);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(29,2.628278);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(30,1.829021);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(31,0.3783847);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(32,0.8947771);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(33,2.147308);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(34,1.37804);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(35,0.09221279);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(36,0.8944078);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(37,0.08081447);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(39,0.05330684);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(40,0.2403569);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(41,0.5865576);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(1,125.3218);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(2,174.4735);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(3,141.7498);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(4,95.73781);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(5,66.35268);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(6,48.16551);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(7,35.74241);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(8,27.35321);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(9,21.71802);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(10,17.3961);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(11,13.79082);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(12,11.76937);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(13,9.651699);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(14,8.294008);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(15,6.69819);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(16,5.71345);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(17,4.728734);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(18,4.123603);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(19,3.80573);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(20,3.180126);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(21,2.589698);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(22,2.31025);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(23,1.941097);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(24,1.90706);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(25,1.810187);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(26,1.299794);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(27,0.9711261);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(28,1.228817);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(29,0.8376609);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(30,0.710554);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(31,0.3865862);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(32,0.4905327);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(33,0.7635582);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(34,0.6065772);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(35,0.06520429);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(36,0.4901331);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(37,0.05714446);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(39,0.05330684);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(40,0.2403569);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(41,0.3850137);
   VbbHcc_tags_Z_pt_all_stack_2->SetEntries(7498678);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_3 = new TH1D("VbbHcc_tags_Z_pt_all_stack_3","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(1,1590840);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(2,2999588);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(3,1959041);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(4,609559.3);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(5,210924.9);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(6,88430.43);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(7,42459.51);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(8,22344.91);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(9,12812.5);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(10,7860.7);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(11,4996.224);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(12,3256.073);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(13,2217.777);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(14,1496.296);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(15,1045.129);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(16,722.4294);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(17,521.9582);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(18,367.6635);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(19,272.0142);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(20,199.554);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(21,145.0186);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(22,100.3376);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(23,75.59412);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(24,55.90659);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(25,43.86898);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(26,31.12886);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(27,23.61774);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(28,17.01693);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(29,13.28928);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(30,9.101831);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(31,5.776054);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(32,4.355739);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(33,3.853957);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(34,3.608354);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(35,1.775916);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(36,1.378645);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(37,1.370362);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(38,0.8579071);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(39,0.3937469);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(40,0.5027622);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinContent(41,2.076596);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(1,331.312);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(2,454.5866);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(3,366.8553);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(4,203.7246);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(5,119.6828);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(6,77.57184);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(7,53.87391);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(8,39.18081);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(9,29.77475);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(10,23.41081);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(11,18.71075);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(12,15.14444);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(13,12.51773);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(14,10.33044);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(15,8.62555);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(16,7.190958);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(17,6.10014);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(18,5.109043);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(19,4.418424);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(20,3.793218);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(21,3.251165);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(22,2.666841);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(23,2.317094);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(24,1.99848);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(25,1.761296);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(26,1.508729);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(27,1.310311);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(28,1.093078);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(29,0.9768715);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(30,0.7896069);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(31,0.6483931);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(32,0.5564449);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(33,0.563345);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(34,0.5133721);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(35,0.3613062);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(36,0.3024601);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(37,0.3031726);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(38,0.2524379);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(39,0.1662133);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(40,0.1955703);
   VbbHcc_tags_Z_pt_all_stack_3->SetBinError(41,0.3849095);
   VbbHcc_tags_Z_pt_all_stack_3->SetEntries(1.191464e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_4 = new TH1D("VbbHcc_tags_Z_pt_all_stack_4","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(1,15161.12);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(2,34759.14);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(3,37015.34);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(4,25922.56);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(5,10874.39);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(6,2293.43);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(7,170.1911);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(8,12.8226);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(9,1.831808);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(10,0.5721427);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinContent(15,0.4299679);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(1,71.37439);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(2,108.1211);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(3,111.5416);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(4,93.46915);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(5,60.6608);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(6,27.82377);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(7,7.607569);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(8,2.090913);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(9,0.8531166);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(10,0.404566);
   VbbHcc_tags_Z_pt_all_stack_4->SetBinError(15,0.4299679);
   VbbHcc_tags_Z_pt_all_stack_4->SetEntries(393203);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_5 = new TH1D("VbbHcc_tags_Z_pt_all_stack_5","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(1,8371.81);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(2,20657.95);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(3,21202.68);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(4,15299.23);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(5,6879.311);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(6,1648.06);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(7,179.8146);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(8,29.03033);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(9,3.749053);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(10,2.315103);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinContent(13,2.141156);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(1,100.0645);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(2,156.8683);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(3,159.2093);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(4,135.261);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(5,90.81311);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(6,44.50828);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(7,14.56673);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(8,6.023876);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(9,1.876349);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(10,1.637025);
   VbbHcc_tags_Z_pt_all_stack_5->SetBinError(13,1.514026);
   VbbHcc_tags_Z_pt_all_stack_5->SetEntries(64923);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_6 = new TH1D("VbbHcc_tags_Z_pt_all_stack_6","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(1,575.1468);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(2,852.4096);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(3,404.3048);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(4,190.2055);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(5,112.6204);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(6,57.62718);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(7,37.35381);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(8,24.0263);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(9,15.93545);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(10,11.17503);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(11,7.567485);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(12,5.248953);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(13,4.036924);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(14,3.27694);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(15,1.497307);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(16,0.4729901);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(17,1.179625);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(18,0.1803546);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(19,0.5499883);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(20,0.8744319);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(21,0.1883238);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(23,0.3571118);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(24,0.3802229);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(25,0.2562129);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinContent(27,0.139483);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(1,9.64335);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(2,11.61845);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(3,7.969528);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(4,5.279331);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(5,4.071126);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(6,2.941164);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(7,2.299737);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(8,1.901659);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(9,1.570793);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(10,1.347941);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(11,1.040025);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(12,0.8453907);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(13,0.762659);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(14,0.7410433);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(15,0.4318524);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(16,0.2817539);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(17,0.3872477);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(18,0.12753);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(19,0.2623614);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(20,0.2784782);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(21,0.133165);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(23,0.1785579);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(24,0.190549);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(25,0.2562129);
   VbbHcc_tags_Z_pt_all_stack_6->SetBinError(27,0.0986294);
   VbbHcc_tags_Z_pt_all_stack_6->SetEntries(18694);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_7 = new TH1D("VbbHcc_tags_Z_pt_all_stack_7","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(1,1045.93);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(2,1440.642);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(3,872.2678);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(4,437.4873);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(5,239.0443);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(6,136.7908);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(7,80.43525);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(8,46.91481);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(9,24.96243);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(10,10.36917);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(11,7.698735);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(12,5.096148);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(13,1.941505);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(14,2.108805);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(15,0.3271381);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(16,0.6721521);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(17,0.595384);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(18,0.7360927);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(19,0.5790619);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(20,0.4115147);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(21,0.1837929);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(23,0.1336814);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(25,0.2690416);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(28,0.1673518);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinContent(29,0.272318);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(1,11.01485);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(2,12.76901);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(3,9.845291);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(4,6.895207);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(5,5.171345);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(6,3.809556);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(7,2.915284);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(8,2.316046);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(9,1.659661);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(10,1.046781);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(11,0.8815478);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(12,0.7520601);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(13,0.4289106);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(14,0.4638816);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(15,0.2313973);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(16,0.212761);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(17,0.2496413);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(18,0.3223001);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(19,0.2376141);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(20,0.1681667);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(21,0.1837929);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(23,0.09452704);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(25,0.164414);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(28,0.08973849);
   VbbHcc_tags_Z_pt_all_stack_7->SetBinError(29,0.1362035);
   VbbHcc_tags_Z_pt_all_stack_7->SetEntries(48302);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_8 = new TH1D("VbbHcc_tags_Z_pt_all_stack_8","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(1,1204.801);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(2,1444.362);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(3,727.1049);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(4,369.2513);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(5,174.8093);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(6,97.49451);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(7,60.84579);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(8,21.48333);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(9,12.54012);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(10,10.73571);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(11,4.155884);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(12,2.719214);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(13,1.167939);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(14,0.8477266);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(15,0.951257);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(16,0.6054294);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(17,0.271006);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(19,0.3653552);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinContent(20,0.7795803);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(1,15.73686);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(2,17.11366);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(3,12.14619);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(4,8.652142);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(5,5.957226);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(6,4.424448);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(7,3.474131);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(8,2.078361);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(9,1.592499);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(10,1.437361);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(11,0.9356887);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(12,0.758612);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(13,0.5243852);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(14,0.4252813);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(15,0.4265272);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(16,0.3520952);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(17,0.271006);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(19,0.2583451);
   VbbHcc_tags_Z_pt_all_stack_8->SetBinError(20,0.3922125);
   VbbHcc_tags_Z_pt_all_stack_8->SetEntries(21018);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_9 = new TH1D("VbbHcc_tags_Z_pt_all_stack_9","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(1,317.4866);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(2,492.7025);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(3,301.4266);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(4,154.471);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(5,80.62363);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(6,44.12439);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(7,25.37298);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(8,14.46125);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(9,8.252077);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(10,4.45276);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(11,2.472522);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(12,1.498881);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(13,0.8171991);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(14,0.477672);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(15,0.2697952);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(16,0.2066827);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(17,0.1519298);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(18,0.09019557);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(19,0.05541431);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(20,0.06091257);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(21,0.03299499);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(22,0.01827265);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(23,0.01306431);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(24,0.005463356);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(25,0.007884451);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(26,0.00497472);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(27,0.00246972);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(28,0.003291556);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(31,0.00202901);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(32,0.001911414);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(38,0.00197611);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinContent(39,0.001772933);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(1,0.732838);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(2,0.9116043);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(3,0.7115889);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(4,0.5082578);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(5,0.3669344);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(6,0.2716161);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(7,0.2061792);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(8,0.1555014);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(9,0.1170938);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(10,0.0861896);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(11,0.06363275);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(12,0.0493528);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(13,0.03642219);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(14,0.02780536);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(15,0.02144274);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(16,0.01838396);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(17,0.01592623);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(18,0.01211333);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(19,0.009583566);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(20,0.01026945);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(21,0.007322202);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(22,0.005575721);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(23,0.004465498);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(24,0.003180457);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(25,0.003945026);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(26,0.002912318);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(27,0.00246972);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(28,0.002327481);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(31,0.00202901);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(32,0.001911414);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(38,0.00197611);
   VbbHcc_tags_Z_pt_all_stack_9->SetBinError(39,0.001772933);
   VbbHcc_tags_Z_pt_all_stack_9->SetEntries(942593);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_10 = new TH1D("VbbHcc_tags_Z_pt_all_stack_10","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(1,46.26495);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(2,103.7387);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(3,107.7722);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(4,72.80285);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(5,41.20526);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(6,23.02293);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(7,13.66253);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(8,8.140585);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(9,5.026082);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(10,3.169606);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(11,2.065217);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(12,1.31982);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(13,0.8343011);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(14,0.5590862);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(15,0.3948986);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(16,0.3074151);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(17,0.1908875);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(18,0.154049);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(19,0.1134154);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(20,0.1110194);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(21,0.07740004);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(22,0.0509942);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(23,0.0429302);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(24,0.04261253);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(25,0.03418837);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(26,0.0182179);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(27,0.02121399);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(28,0.007503213);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(29,0.01388417);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(30,0.007357154);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(31,0.003116613);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(32,0.006003363);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(33,0.005918559);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(34,0.007917002);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(36,0.002381654);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(37,0.0005699509);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(39,0.002415029);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinContent(41,0.003753113);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(1,0.1370497);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(2,0.2051674);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(3,0.2091018);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(4,0.1717099);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(5,0.1289635);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(6,0.09639259);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(7,0.07422006);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(8,0.05722751);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(9,0.04496933);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(10,0.03575395);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(11,0.02883439);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(12,0.02307859);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(13,0.0183674);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(14,0.01500994);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(15,0.01261865);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(16,0.01117408);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(17,0.008807612);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(18,0.007916297);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(19,0.006773103);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(20,0.006719422);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(21,0.005530038);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(22,0.004544333);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(23,0.004138096);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(24,0.00413656);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(25,0.00372386);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(26,0.002710478);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(27,0.002983422);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(28,0.001774884);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(29,0.002329778);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(30,0.001742354);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(31,0.001073384);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(32,0.001555757);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(33,0.001534087);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(34,0.001753982);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(36,0.0009751793);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(37,0.0003298842);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(39,0.000988521);
   VbbHcc_tags_Z_pt_all_stack_10->SetBinError(41,0.001256772);
   VbbHcc_tags_Z_pt_all_stack_10->SetEntries(1089495);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_11 = new TH1D("VbbHcc_tags_Z_pt_all_stack_11","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(1,4.551401);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(2,7.936183);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(3,4.927622);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(4,2.190091);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(5,1.042012);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(6,0.5580641);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(7,0.3398931);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(8,0.2031714);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(9,0.09342386);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(10,0.04006346);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(11,0.02320173);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(12,0.01289824);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(13,0.00780437);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(14,0.005683643);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(16,0.003028333);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(17,0.003092332);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(18,0.003090375);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinContent(19,0.00305224);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(1,0.08762215);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(2,0.1157559);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(3,0.09063516);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(4,0.06058837);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(5,0.0414239);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(6,0.02998528);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(7,0.02399986);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(8,0.01834568);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(9,0.01234515);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(10,0.008089088);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(11,0.006113067);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(12,0.004514714);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(13,0.003058396);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(14,0.002908445);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(16,0.002141355);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(17,0.002185225);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(18,0.002185225);
   VbbHcc_tags_Z_pt_all_stack_11->SetBinError(19,0.00215826);
   VbbHcc_tags_Z_pt_all_stack_11->SetEntries(15438);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_12 = new TH1D("VbbHcc_tags_Z_pt_all_stack_12","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(1,15386.99);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(2,38505.29);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(3,43667.4);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(4,27674.63);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(5,13357.76);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(6,6854.467);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(7,3764.477);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(8,2124.861);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(9,1043.273);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(10,623.6159);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(11,388.1396);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(12,242.9269);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(13,222.1077);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(14,154.3209);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(15,105.3013);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(16,27.81839);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(17,72.97704);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(18,59.60066);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(19,45.70419);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(20,7.272838);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(21,8.05011);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(22,8.569034);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(23,32.7127);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(24,0.8582844);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(25,28.69886);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(26,3.053838);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(27,5.431438);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(33,8.223389);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinContent(35,8.058298);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(1,262.5482);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(2,415.4615);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(3,443.0547);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(4,351.0875);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(5,242.298);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(6,173.3728);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(7,127.6917);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(8,95.08857);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(9,66.47668);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(10,51.316);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(11,40.77946);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(12,30.98379);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(13,29.77235);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(14,24.86213);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(15,21.16002);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(16,10.57459);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(17,17.2668);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(18,15.94456);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(19,13.41116);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(20,5.142673);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(21,5.692288);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(22,6.059222);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(23,11.59189);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(24,0.6068987);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(25,10.44067);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(26,2.15939);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(27,3.840606);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(33,5.814814);
   VbbHcc_tags_Z_pt_all_stack_12->SetBinError(35,5.698077);
   VbbHcc_tags_Z_pt_all_stack_12->SetEntries(38867);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_pt_all__23 = new TH1D("VbbHcc_tags_Z_pt_all__23","",40,0,2000);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(1,1874400);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(2,4497076);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(3,4528663);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(4,2996421);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(5,1770255);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(6,1131488);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(7,774979);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(8,521719);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(9,332028);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(10,205513);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(11,126296);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(12,79641);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(13,51522);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(14,33651);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(15,22562);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(16,15154);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(17,10507);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(18,7281);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(19,5233);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(20,3749);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(21,2536);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(22,1892);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(23,1471);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(24,1051);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(25,733);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(26,581);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(27,424);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(28,310);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(29,223);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(30,158);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(31,110);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(32,78);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(33,72);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(34,57);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(35,55);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(36,34);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(37,23);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(38,15);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(39,9);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(40,8);
   VbbHcc_tags_Z_pt_all__23->SetBinContent(41,36);
   VbbHcc_tags_Z_pt_all__23->SetEntries(1.899801e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all__23->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all__23->SetLineWidth(2);
   VbbHcc_tags_Z_pt_all__23->SetMarkerStyle(20);
   VbbHcc_tags_Z_pt_all__23->SetMarkerSize(1.2);
   VbbHcc_tags_Z_pt_all__23->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all__23->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all__23->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all__23->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all__23->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_all__23->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all__23->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all__23->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_all__23->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all__23->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_pt_all_fx1023[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_Z_pt_all_fy1023[40] = {
   1.463303e+07,
   2.77634e+07,
   1.177987e+07,
   1364614,
   299677.2,
   115749.9,
   55724.58,
   30240.37,
   16007.33,
   9828.833,
   6217.97,
   4083.61,
   2827.179,
   1930.359,
   2350.729,
   1031.37,
   685.6029,
   493.7464,
   374.6859,
   246.2108,
   177.4999,
   127.4122,
   122.583,
   71.23466,
   84.11374,
   40.85908,
   32.49588,
   22.56264,
   16.20376,
   10.93821,
   6.159584,
   5.258431,
   14.23057,
   4.994311,
   9.926426,
   2.275435,
   1.451747,
   0.8598832,
   0.4512417,
   0.7431191};
   Double_t Graph_from_VbbHcc_tags_Z_pt_all_fex1023[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_Z_pt_all_fey1023[40] = {
   131503.3,
   181387.1,
   113718.7,
   29216.07,
   6571.724,
   2333.131,
   1798.609,
   1571.381,
   76.08797,
   59.09191,
   46.96789,
   36.46541,
   33.75761,
   28.1883,
   1023.901,
   153.8413,
   18.92091,
   17.24691,
   14.6307,
   7.156019,
   7.051975,
   7.01276,
   11.98121,
   2.834689,
   10.74613,
   2.937467,
   4.173728,
   1.64708,
   1.294029,
   1.062247,
   0.7548959,
   0.7417947,
   5.891727,
   0.7946634,
   5.709893,
   0.5759458,
   0.3085113,
   0.2524456,
   0.174564,
   0.3098696};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_pt_all_fx1023,Graph_from_VbbHcc_tags_Z_pt_all_fy1023,Graph_from_VbbHcc_tags_Z_pt_all_fex1023,Graph_from_VbbHcc_tags_Z_pt_all_fey1023);
   gre->SetName("Graph_from_VbbHcc_tags_Z_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_pt_all1023 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_pt_all1023","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->SetMinimum(0.2490099);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->SetMaximum(3.073927e+07);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt_all1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_pt_all1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_pt_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",40,0,2000);
   data_mc_ratio__24->SetBinContent(1,0.1280938);
   data_mc_ratio__24->SetBinContent(2,0.1619786);
   data_mc_ratio__24->SetBinContent(3,0.384441);
   data_mc_ratio__24->SetBinContent(4,2.195802);
   data_mc_ratio__24->SetBinContent(5,5.907206);
   data_mc_ratio__24->SetBinContent(6,9.775283);
   data_mc_ratio__24->SetBinContent(7,13.90731);
   data_mc_ratio__24->SetBinContent(8,17.2524);
   data_mc_ratio__24->SetBinContent(9,20.74224);
   data_mc_ratio__24->SetBinContent(10,20.9092);
   data_mc_ratio__24->SetBinContent(11,20.31145);
   data_mc_ratio__24->SetBinContent(12,19.5026);
   data_mc_ratio__24->SetBinContent(13,18.22382);
   data_mc_ratio__24->SetBinContent(14,17.43251);
   data_mc_ratio__24->SetBinContent(15,9.597873);
   data_mc_ratio__24->SetBinContent(16,14.69308);
   data_mc_ratio__24->SetBinContent(17,15.3252);
   data_mc_ratio__24->SetBinContent(18,14.74644);
   data_mc_ratio__24->SetBinContent(19,13.96636);
   data_mc_ratio__24->SetBinContent(20,15.22679);
   data_mc_ratio__24->SetBinContent(21,14.28734);
   data_mc_ratio__24->SetBinContent(22,14.84944);
   data_mc_ratio__24->SetBinContent(23,12.00003);
   data_mc_ratio__24->SetBinContent(24,14.75405);
   data_mc_ratio__24->SetBinContent(25,8.714391);
   data_mc_ratio__24->SetBinContent(26,14.21961);
   data_mc_ratio__24->SetBinContent(27,13.04781);
   data_mc_ratio__24->SetBinContent(28,13.73953);
   data_mc_ratio__24->SetBinContent(29,13.76224);
   data_mc_ratio__24->SetBinContent(30,14.44478);
   data_mc_ratio__24->SetBinContent(31,17.85835);
   data_mc_ratio__24->SetBinContent(32,14.83332);
   data_mc_ratio__24->SetBinContent(33,5.059529);
   data_mc_ratio__24->SetBinContent(34,11.41299);
   data_mc_ratio__24->SetBinContent(35,5.540766);
   data_mc_ratio__24->SetBinContent(36,14.9422);
   data_mc_ratio__24->SetBinContent(37,15.84298);
   data_mc_ratio__24->SetBinContent(38,17.44423);
   data_mc_ratio__24->SetBinContent(39,19.94497);
   data_mc_ratio__24->SetBinContent(40,10.76543);
   data_mc_ratio__24->SetBinContent(41,13.49878);
   data_mc_ratio__24->SetBinError(1,9.356147e-05);
   data_mc_ratio__24->SetBinError(2,7.638225e-05);
   data_mc_ratio__24->SetBinError(3,0.0001806528);
   data_mc_ratio__24->SetBinError(4,0.001268503);
   data_mc_ratio__24->SetBinError(5,0.004439808);
   data_mc_ratio__24->SetBinError(6,0.009189764);
   data_mc_ratio__24->SetBinError(7,0.01579786);
   data_mc_ratio__24->SetBinError(8,0.02388533);
   data_mc_ratio__24->SetBinError(9,0.03599717);
   data_mc_ratio__24->SetBinError(10,0.04612302);
   data_mc_ratio__24->SetBinError(11,0.05715394);
   data_mc_ratio__24->SetBinError(12,0.06910732);
   data_mc_ratio__24->SetBinError(13,0.08028661);
   data_mc_ratio__24->SetBinError(14,0.09503005);
   data_mc_ratio__24->SetBinError(15,0.06389784);
   data_mc_ratio__24->SetBinError(16,0.1193574);
   data_mc_ratio__24->SetBinError(17,0.1495088);
   data_mc_ratio__24->SetBinError(18,0.172819);
   data_mc_ratio__24->SetBinError(19,0.193067);
   data_mc_ratio__24->SetBinError(20,0.2486856);
   data_mc_ratio__24->SetBinError(21,0.2837113);
   data_mc_ratio__24->SetBinError(22,0.3413889);
   data_mc_ratio__24->SetBinError(23,0.3128787);
   data_mc_ratio__24->SetBinError(24,0.4551033);
   data_mc_ratio__24->SetBinError(25,0.3218734);
   data_mc_ratio__24->SetBinError(26,0.5899287);
   data_mc_ratio__24->SetBinError(27,0.6336576);
   data_mc_ratio__24->SetBinError(28,0.7803526);
   data_mc_ratio__24->SetBinError(29,0.9215877);
   data_mc_ratio__24->SetBinError(30,1.149165);
   data_mc_ratio__24->SetBinError(31,1.702727);
   data_mc_ratio__24->SetBinError(32,1.679543);
   data_mc_ratio__24->SetBinError(33,0.5962712);
   data_mc_ratio__24->SetBinError(34,1.511687);
   data_mc_ratio__24->SetBinError(35,0.7471167);
   data_mc_ratio__24->SetBinError(36,2.562566);
   data_mc_ratio__24->SetBinError(37,3.30349);
   data_mc_ratio__24->SetBinError(38,4.504081);
   data_mc_ratio__24->SetBinError(39,6.648322);
   data_mc_ratio__24->SetBinError(40,3.806156);
   data_mc_ratio__24->SetBinError(41,3.557396);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(880.0469);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(7,30);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1024[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1024[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1024[40] = {
   0.008986746,
   0.006533317,
   0.009653652,
   0.02140977,
   0.02192934,
   0.02015665,
   0.03227676,
   0.05196302,
   0.00475332,
   0.006012098,
   0.007553573,
   0.0089297,
   0.01194039,
   0.01460262,
   0.4355673,
   0.1491621,
   0.02759748,
   0.03493071,
   0.0390479,
   0.0290646,
   0.03972947,
   0.05503992,
   0.09773958,
   0.03979368,
   0.1277572,
   0.07189263,
   0.1284387,
   0.07300031,
   0.07985979,
   0.09711345,
   0.1225563,
   0.1410677,
   0.4140189,
   0.1591137,
   0.5752214,
   0.2531146,
   0.2125104,
   0.2935813,
   0.3868526,
   0.4169851};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.3097343);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.690266);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_all->cd();
   Z_pt_VbbHcc_all->Modified();
   Z_pt_VbbHcc_all->cd();
   Z_pt_VbbHcc_all->SetSelected(Z_pt_VbbHcc_all);
}
