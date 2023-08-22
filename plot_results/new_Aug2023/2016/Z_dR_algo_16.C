void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Tue Aug 22 09:21:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(0,0,1,1);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-433.7774,6.314516,433353.6);
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
   st->SetMinimum(0.01);
   st->SetMaximum(371404.7);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0.01);
   st_stack_113->SetMaximum(389974.9);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,26.30198);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,119780);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,141597.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,114500.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,126697.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,118773.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,124974);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,132009.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,136942.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,146454.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,141284.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,119544.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,119485.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,110259.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,97042.96);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,100232.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,94982.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,72303.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,59729.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,56201.25);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,50688.66);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,49695.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,35894.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,38020.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,34161.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,34853.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,28723.48);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,22807.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,17175.97);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,13048.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,9.698102);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,5205.518);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,4877.548);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4799.276);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,5468.712);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,4807.953);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,5463.313);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,5617.198);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,13041.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,6965.348);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,16943.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,5435.35);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,5790.455);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,5530.445);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,4651.928);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,15244.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,13014.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,5172.624);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,3781.882);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,3530.382);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,3574.054);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,3865.941);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,2645.839);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,3151.658);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,2946.737);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,3375.698);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,2433.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,2189.928);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1893.722);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1331.933);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(121336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.3704842);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,599.8329);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,1003.756);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,1121.623);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,1173.484);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,1169.126);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,1103.417);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,1030.774);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,941.7746);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,865.1151);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,775.2437);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,692.4761);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,629.2123);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,582.3842);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,535.2628);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,465.5189);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,413.7687);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,380.2216);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,350.454);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,340.7436);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,319.4324);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,312.0557);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,308.0957);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,290.4171);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,273.5904);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,222.8209);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,200.696);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,170.4596);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,116.8719);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,87.88664);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.2162644);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,8.989523);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,11.38082);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,11.76312);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,12.01232);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,11.94538);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,11.62966);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,11.33041);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,10.82182);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,10.51106);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,9.777032);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,9.244214);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,8.751534);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,8.408052);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,7.992594);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,7.473564);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.020358);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,6.833011);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.530974);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,6.557825);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,6.272709);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,6.271198);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,6.270254);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,6.015079);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,5.785351);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,5.202164);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,4.975885);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,4.611636);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,3.864839);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.249894);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(335691);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,8.459986);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,12023.81);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,23123.1);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,27458.46);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,28365.26);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,25999.13);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,22154.68);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,18343.31);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,15088.01);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,12578.76);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,10789.79);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,9510.857);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,8577.421);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,7907.295);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,7362.904);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,6578.185);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,6066.1);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,5631.966);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,5310.464);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,5043.332);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,4911.019);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,4914.499);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,4951.011);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,4987.129);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,4850.359);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,4501.413);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,3933.401);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,3097.5);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1931.84);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1367.562);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.6956535);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,25.91945);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,35.39999);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,38.15021);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,38.37115);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,36.40182);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,33.36023);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,30.19201);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,27.30218);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,24.90243);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,23.0686);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,21.68502);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,20.61451);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,19.81453);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,19.12863);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,18.10371);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,17.39729);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,16.77739);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,16.25824);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,15.82806);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,15.61108);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,15.61305);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,15.70219);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,15.80294);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,15.66011);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,15.17545);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,14.285);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,12.74119);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,10.05537);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,8.381496);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(6260583);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.9269252);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,584.5541);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,883.0862);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,807.0921);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,776.5954);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,720.8403);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,665.3443);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,620.7805);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,592.3809);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,561.71);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,528.8051);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,469.6625);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,447.7069);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,399.9183);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,378.4475);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,355.0398);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,290.2032);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,278.5062);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,280.8946);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,267.2841);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,224.2245);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,199.5096);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,188.1344);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,185.664);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,178.4961);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,137.8071);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,143.5803);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,104.9124);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,94.04637);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,66.78761);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.3712068);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,11.05309);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,17.47798);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,18.42953);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,20.76183);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,21.10207);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,19.18202);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,17.89675);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,17.86902);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,16.9798);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,16.21111);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,15.14164);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,15.13346);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,14.03691);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,13.50456);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,13.24862);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,10.93801);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,11.52329);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,12.65076);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,12.53888);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,10.81739);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,10.16654);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,9.569976);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,9.88618);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,10.69219);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,8.048984);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,8.341886);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,6.18564);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,6.99623);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,5.235376);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(90522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.03135516);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,376.9563);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,479.7164);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,413.4014);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,376.3297);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,341.9833);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,351.0062);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,332.7099);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,314.4642);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,266.4759);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,300.609);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,224.3728);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,218.0132);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,231.9928);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,216.6882);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,169.2288);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,166.664);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,146.0482);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,130.7093);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,128.6653);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,99.69831);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,94.337);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,83.52776);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,85.25226);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,67.82643);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,109.4898);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,70.6763);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,73.96592);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,56.92741);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,30.36043);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.03058986);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,14.63505);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,24.45377);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,23.09621);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,23.41528);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,20.96033);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,23.57611);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,21.59259);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,21.60821);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,17.01569);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,23.41237);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,16.75424);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,15.49146);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,18.56213);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,18.96);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,13.12763);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,16.31675);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,13.4752);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,12.08529);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,15.46752);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,10.84108);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,11.12227);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,9.467895);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,8.835389);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,6.563347);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,15.72574);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,8.897615);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,10.66085);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,9.648292);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,3.200659);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(66273);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,4.581695);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,5.685696);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.546061);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,3.201192);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,3.181526);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,3.185194);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,2.379406);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,2.444188);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.198593);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,3.13087);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,4.037754);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,2.476433);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,2.315978);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,2.889167);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,1.936953);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.076502);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,1.754405);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.043825);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.8404006);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,1.852859);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.8069407);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.8224862);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,1.023151);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,0.7379977);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(27,0.6696198);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,0.5920495);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.6185615);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.5689224);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.2396065);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.7565909);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.8199836);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.6470268);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.6026027);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.6190164);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.6099255);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.5354231);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.5313992);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.3853497);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.6086167);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.6997598);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.5528518);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.5170091);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.5882292);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.4750245);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.3599832);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.4570013);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.348932);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.3214041);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.4673716);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.3055944);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.3122717);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.3473019);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.3021872);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(27,0.2746321);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.266401);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.2770304);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.2554454);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.1699068);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(510);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(2,0.103133);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,8.032959);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,11.15193);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,8.645215);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,6.556939);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,5.080009);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,3.603582);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,3.160844);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,3.266786);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,2.979491);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,3.456735);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,3.547546);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,3.485278);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,2.950237);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,3.145811);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,3.138502);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,2.632689);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,2.121559);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,2.870486);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,2.231906);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,1.317564);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.232512);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.205377);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,1.713189);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,1.171626);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,1.884948);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,2.197468);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,1.320183);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.6817682);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.3360898);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(2,0.103133);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,0.8527793);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,0.9948227);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,0.8533557);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.7498614);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.6529257);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.5583859);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.5224838);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.5326931);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.5026407);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.5427099);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.5540355);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.5487401);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.510721);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.5292067);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.5219303);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.4740283);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.426893);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.5017169);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.4395262);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.3314202);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.3249447);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.3241868);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.3860339);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.3206273);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.4035323);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.4412696);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.3425754);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.2418206);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.1684924);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(1121);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,10.00573);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,15.30793);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,13.10855);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,10.25624);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,8.030272);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,5.819866);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,2.901233);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,5.149367);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,4.901299);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,4.494765);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,5.220967);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,5.058622);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.675539);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,3.649956);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,2.422954);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,2.187821);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.728343);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,2.668898);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,1.990835);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.655938);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,1.614091);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.033566);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,0.915664);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.5468516);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,1.580141);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,0.7695802);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.076902);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.6027644);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.3906909);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.458399);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,1.799516);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,1.628366);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.440245);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.251035);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.094919);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.762829);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.037813);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.022382);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.9456519);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.020041);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.020865);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.9798829);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,0.8653707);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.70293);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.6708139);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.7592942);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.7424225);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.6160767);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.5550769);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.5740375);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.4642254);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.4141291);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.3167456);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.550437);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.3874623);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.6585746);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.3510011);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.2803103);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(609);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.003543575);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,5.984776);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,9.714543);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,8.923952);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,7.382216);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,5.119278);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,3.799439);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.895627);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,2.512485);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,2.310135);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.252037);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.117909);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.006009);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,1.802895);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.573988);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,1.491737);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.337969);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.269056);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.199097);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.080595);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.8887336);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.908165);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.8552019);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.867745);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.9345403);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,0.9630011);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.028743);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,0.9121546);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.6003834);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.3507017);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.002048645);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.08352694);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1049821);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.09883614);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.0883828);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.07274294);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.06257188);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.054879);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.05122053);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.04921463);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.04859522);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.04776262);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.04644739);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.04410505);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.04119168);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.04007718);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.0381145);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.03683399);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.03563458);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.03388065);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.03065644);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.03065756);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.02975335);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.02993028);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.03105901);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.03185308);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.03345396);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.03174501);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.02580379);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.01980981);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.0007046075);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,1.396462);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,3.021147);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,3.499281);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,3.211402);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,2.247498);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,1.611886);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.268916);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.154032);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.129876);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.1134);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.089111);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.9974072);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.9088797);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.8316438);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.7306399);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.6716327);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.6437592);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.5972948);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.569266);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.4988428);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.4317161);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.3876063);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.3911111);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.4149254);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.452471);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.4603421);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.3313549);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.2118245);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.1327335);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0005048253);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02204908);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.03197556);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.03394506);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.03220536);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.02684921);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.02283099);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02036142);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.0194696);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.01926086);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.01918126);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.01896024);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.0181346);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.01736007);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.01663444);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.01556776);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.0149343);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.01460641);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.01404978);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.01367985);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01278167);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01188983);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01124518);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01126856);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01159716);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01214616);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01231613);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01050801);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.008398044);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.006656565);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.06427473);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.07392806);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.06858517);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.06440664);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.0561173);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.03038687);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.03084539);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.02694836);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.02904029);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.02366875);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.02989166);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02357229);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.02742292);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.02877329);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01608212);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.01739567);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01115364);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.01655239);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.01310134);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.02489137);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.01090741);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.01122316);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.004831904);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.009293452);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.004235954);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01010634);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.006806);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.002460869);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.001233544);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01210488);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01345661);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01232103);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01168637);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.01075965);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.007769548);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.007994563);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.007559417);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.007551383);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.007102638);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.008013004);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.007143353);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.007617002);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.007724853);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.005721526);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.006217683);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.00500643);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.005909229);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.005132148);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.00708775);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.004512934);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.005041869);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.003082853);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.004166723);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.002995287);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.004537936);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.003939272);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002460869);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.001233544);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01585368);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.03163601);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.0324994);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.02988584);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.01858677);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01230897);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01030038);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.009875312);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01111321);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01626392);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.009295232);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01143845);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01065176);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.009650866);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.009729157);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.01029678);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.007800301);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.007752445);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.004544103);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.007348237);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.005619014);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.002971774);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.004173577);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.004842705);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.00339007);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.003375675);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.001706295);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.001591396);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001611404);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002151252);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.002990025);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.002995036);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002830839);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002249848);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001826682);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.00167277);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.00163833);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.001750209);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.002113445);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.001603476);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.001782306);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001733239);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001668649);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.001679484);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.001704914);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001442155);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001475903);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001106609);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001415499);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.001234835);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0009012272);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001047826);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001127249);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.0009915361);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.0009404964);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0006980579);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0006625162);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0006647655);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__309 = new TH1D("VbbHcc_algo_Z_dR__309","",30,0,6);
   VbbHcc_algo_Z_dR__309->SetBinContent(2,42);
   VbbHcc_algo_Z_dR__309->SetBinContent(3,49159);
   VbbHcc_algo_Z_dR__309->SetBinContent(4,59784);
   VbbHcc_algo_Z_dR__309->SetBinContent(5,50420);
   VbbHcc_algo_Z_dR__309->SetBinContent(6,48363);
   VbbHcc_algo_Z_dR__309->SetBinContent(7,47618);
   VbbHcc_algo_Z_dR__309->SetBinContent(8,46361);
   VbbHcc_algo_Z_dR__309->SetBinContent(9,45485);
   VbbHcc_algo_Z_dR__309->SetBinContent(10,43627);
   VbbHcc_algo_Z_dR__309->SetBinContent(11,41928);
   VbbHcc_algo_Z_dR__309->SetBinContent(12,39793);
   VbbHcc_algo_Z_dR__309->SetBinContent(13,37794);
   VbbHcc_algo_Z_dR__309->SetBinContent(14,35176);
   VbbHcc_algo_Z_dR__309->SetBinContent(15,33366);
   VbbHcc_algo_Z_dR__309->SetBinContent(16,31698);
   VbbHcc_algo_Z_dR__309->SetBinContent(17,26784);
   VbbHcc_algo_Z_dR__309->SetBinContent(18,23658);
   VbbHcc_algo_Z_dR__309->SetBinContent(19,21589);
   VbbHcc_algo_Z_dR__309->SetBinContent(20,19656);
   VbbHcc_algo_Z_dR__309->SetBinContent(21,17667);
   VbbHcc_algo_Z_dR__309->SetBinContent(22,15997);
   VbbHcc_algo_Z_dR__309->SetBinContent(23,14992);
   VbbHcc_algo_Z_dR__309->SetBinContent(24,13858);
   VbbHcc_algo_Z_dR__309->SetBinContent(25,12648);
   VbbHcc_algo_Z_dR__309->SetBinContent(26,11581);
   VbbHcc_algo_Z_dR__309->SetBinContent(27,10486);
   VbbHcc_algo_Z_dR__309->SetBinContent(28,9650);
   VbbHcc_algo_Z_dR__309->SetBinContent(29,8502);
   VbbHcc_algo_Z_dR__309->SetBinContent(30,6202);
   VbbHcc_algo_Z_dR__309->SetBinContent(31,5483);
   VbbHcc_algo_Z_dR__309->SetEntries(829396);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__309->SetLineColor(ci);
   VbbHcc_algo_Z_dR__309->SetLineWidth(2);
   VbbHcc_algo_Z_dR__309->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__309->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1225[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1225[30] = {
   0,
   36.19811,
   133395.2,
   167132.1,
   144338.7,
   157419.5,
   147028.2,
   149266.5,
   152349.4,
   153893.4,
   160738.9,
   153693.2,
   130457.6,
   129371.8,
   119393.4,
   105548.4,
   107810.3,
   101927,
   78748.61,
   65810.65,
   61988,
   56249.28,
   55220.86,
   41429.76,
   43574.09,
   39535.92,
   39830.91,
   33076.9,
   26259.94,
   19378.32};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1225[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1225[30] = {
   0,
   9.733101,
   5205.623,
   4877.783,
   4799.533,
   5468.949,
   4808.197,
   5463.512,
   5617.361,
   13041.91,
   6965.442,
   16943.87,
   5435.448,
   5790.539,
   5530.536,
   4652.033,
   15244.85,
   13014.43,
   5172.687,
   3781.963,
   3530.48,
   3574.127,
   3866.007,
   2645.928,
   3151.731,
   2946.811,
   3375.783,
   2433.208,
   2190.004,
   1893.791};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1225,Graph_from_VbbHcc_algo_Z_dR_fy1225,Graph_from_VbbHcc_algo_Z_dR_fex1225,Graph_from_VbbHcc_algo_Z_dR_fey1225);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1225 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1225","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMaximum(189210.9);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1225);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__310 = new TH1D("data_mc_ratio__310","",30,0,6);
   data_mc_ratio__310->SetBinContent(2,1.160282);
   data_mc_ratio__310->SetBinContent(3,0.3685214);
   data_mc_ratio__310->SetBinContent(4,0.3577051);
   data_mc_ratio__310->SetBinContent(5,0.3493172);
   data_mc_ratio__310->SetBinContent(6,0.3072238);
   data_mc_ratio__310->SetBinContent(7,0.3238698);
   data_mc_ratio__310->SetBinContent(8,0.3105921);
   data_mc_ratio__310->SetBinContent(9,0.2985571);
   data_mc_ratio__310->SetBinContent(10,0.2834885);
   data_mc_ratio__310->SetBinContent(11,0.2608454);
   data_mc_ratio__310->SetBinContent(12,0.2589119);
   data_mc_ratio__310->SetBinContent(13,0.2897033);
   data_mc_ratio__310->SetBinContent(14,0.2718984);
   data_mc_ratio__310->SetBinContent(15,0.2794628);
   data_mc_ratio__310->SetBinContent(16,0.3003172);
   data_mc_ratio__310->SetBinContent(17,0.2484364);
   data_mc_ratio__310->SetBinContent(18,0.2321074);
   data_mc_ratio__310->SetBinContent(19,0.2741509);
   data_mc_ratio__310->SetBinContent(20,0.2986751);
   data_mc_ratio__310->SetBinContent(21,0.2850068);
   data_mc_ratio__310->SetBinContent(22,0.2843948);
   data_mc_ratio__310->SetBinContent(23,0.2714916);
   data_mc_ratio__310->SetBinContent(24,0.3344938);
   data_mc_ratio__310->SetBinContent(25,0.2902642);
   data_mc_ratio__310->SetBinContent(26,0.2929235);
   data_mc_ratio__310->SetBinContent(27,0.2632629);
   data_mc_ratio__310->SetBinContent(28,0.2917444);
   data_mc_ratio__310->SetBinContent(29,0.3237631);
   data_mc_ratio__310->SetBinContent(30,0.3200483);
   data_mc_ratio__310->SetBinContent(31,0.3754844);
   data_mc_ratio__310->SetBinError(2,0.1790353);
   data_mc_ratio__310->SetBinError(3,0.001662116);
   data_mc_ratio__310->SetBinError(4,0.001462961);
   data_mc_ratio__310->SetBinError(5,0.001555674);
   data_mc_ratio__310->SetBinError(6,0.001397006);
   data_mc_ratio__310->SetBinError(7,0.001484174);
   data_mc_ratio__310->SetBinError(8,0.001442494);
   data_mc_ratio__310->SetBinError(9,0.001399888);
   data_mc_ratio__310->SetBinError(10,0.001357243);
   data_mc_ratio__310->SetBinError(11,0.001273888);
   data_mc_ratio__310->SetBinError(12,0.001297922);
   data_mc_ratio__310->SetBinError(13,0.001490191);
   data_mc_ratio__310->SetBinError(14,0.001449718);
   data_mc_ratio__310->SetBinError(15,0.001529931);
   data_mc_ratio__310->SetBinError(16,0.001686803);
   data_mc_ratio__310->SetBinError(17,0.00151802);
   data_mc_ratio__310->SetBinError(18,0.001509037);
   data_mc_ratio__310->SetBinError(19,0.001865836);
   data_mc_ratio__310->SetBinError(20,0.002130352);
   data_mc_ratio__310->SetBinError(21,0.002144242);
   data_mc_ratio__310->SetBinError(22,0.002248549);
   data_mc_ratio__310->SetBinError(23,0.002217311);
   data_mc_ratio__310->SetBinError(24,0.002841436);
   data_mc_ratio__310->SetBinError(25,0.002580968);
   data_mc_ratio__310->SetBinError(26,0.002721957);
   data_mc_ratio__310->SetBinError(27,0.002570897);
   data_mc_ratio__310->SetBinError(28,0.00296988);
   data_mc_ratio__310->SetBinError(29,0.003511291);
   data_mc_ratio__310->SetBinError(30,0.004063962);
   data_mc_ratio__310->SetBinError(31,0.03462349);
   data_mc_ratio__310->SetMinimum(0.4);
   data_mc_ratio__310->SetMaximum(1.6);
   data_mc_ratio__310->SetEntries(633.9455);
   data_mc_ratio__310->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__310->SetLineColor(ci);
   data_mc_ratio__310->SetLineWidth(2);
   data_mc_ratio__310->SetMarkerStyle(20);
   data_mc_ratio__310->SetMarkerSize(1.2);
   data_mc_ratio__310->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__310->GetXaxis()->SetRange(1,30);
   data_mc_ratio__310->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__310->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__310->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__310->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__310->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__310->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1226[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1226[30] = {
   0,
   0.2688842,
   0.03902406,
   0.02918519,
   0.03325188,
   0.03474125,
   0.03270255,
   0.03660239,
   0.03687157,
   0.08474637,
   0.0433339,
   0.1102447,
   0.04166448,
   0.04475888,
   0.04632198,
   0.04407488,
   0.1414044,
   0.1276838,
   0.06568607,
   0.05746735,
   0.05695425,
   0.06354085,
   0.07000991,
   0.06386538,
   0.07233039,
   0.07453504,
   0.08475283,
   0.07356217,
   0.08339716,
   0.09772727};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.6773389);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.322661);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
