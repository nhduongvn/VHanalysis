void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Tue Aug 22 09:21:50 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(0,0,1,1);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1158.298,6.314516,1157149);
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
   st->SetMaximum(991732);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0.01);
   st_stack_149->SetMaximum(1041319);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetRange(1,30);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetLabelSize(0.035);
   st_stack_149->GetXaxis()->SetTitleSize(0.035);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetLabelSize(0.05);
   st_stack_149->GetYaxis()->SetTitleSize(0.057);
   st_stack_149->GetYaxis()->SetTitleOffset(1.2);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetLabelSize(0.035);
   st_stack_149->GetZaxis()->SetTitleSize(0.035);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,1436.72);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,225125.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,323706.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,373404.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,346312.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,319176.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,276074.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,241889);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,169074.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,137333);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,158313.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,109821.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,92041.41);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,84302.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,79283.13);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,73289);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,62204.73);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,46488.24);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,52134.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,42413.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,34143.85);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,29054.76);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,29326.84);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,23215.77);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,19112.16);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,12214.27);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,9065.286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,5710.461);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,3956.974);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,1642.408);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,2879.794);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,621.4822);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,8917.572);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,10494.45);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,24404.65);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,11782.03);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,11225.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,23641.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,23426.99);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,8005.355);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,6979.388);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,22861.37);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,6906.049);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,5690.87);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,5550.396);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,5771.531);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,5030.286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,4932.753);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,3863.678);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,4745.469);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,3543.88);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,3256.674);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,2344.75);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,3370.624);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,2840.326);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,2678.681);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1452.028);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,1264.672);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,954.5493);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,887.666);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,350.0574);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,643.8067);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(121336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,3.829483);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,1426.656);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,3077.621);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,3411.705);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,2970.353);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,2349.728);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,1831.351);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,1426.614);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,1118.936);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,914.758);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,761.878);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,641.1919);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,589.8543);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,527.7312);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,471.103);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,437.954);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,406.3216);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,389.5511);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,346.5622);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,327.0124);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,301.0458);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,253.092);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,199.9003);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,156.9336);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,115.393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,83.50256);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,52.25005);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,35.92388);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,19.60521);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,11.64976);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,19.69036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.7760301);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,14.26393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,20.5482);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,21.50162);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,20.05106);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,18.01699);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,15.98791);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,14.0653);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,12.44001);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,11.24451);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,10.16652);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,9.267034);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,8.933237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,8.49283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,7.978012);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,7.698497);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,7.504235);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,7.406059);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,6.83865);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,6.639773);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,6.474365);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,5.871019);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,5.166209);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,4.566122);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,4.014057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,3.464981);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.614931);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,2.21823);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.562213);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.215801);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.373395);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(335691);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,64.92485);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,27507.46);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,66304.83);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,66593);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,50439.32);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,35387.93);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,25043.04);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,18413.54);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,13970.04);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,11250.95);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,9420.214);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,8217.048);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,7322.604);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,6693.221);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,6215.326);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,5857.565);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,5479.362);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,5288.796);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,5102.694);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,4880.804);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,4498.117);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,3863.298);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,3018.008);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,2173.581);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,1450.713);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,865.2391);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,481.9723);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,248.8846);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,130.6964);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,79.78095);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,125.0521);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,2.007329);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,42.67077);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,66.34862);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,66.26069);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,57.3674);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,47.85086);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,40.14104);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,34.34788);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,29.87947);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,26.79798);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,24.50704);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,22.88787);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,21.60719);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,20.68109);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,19.94558);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,19.37738);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,18.77417);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,18.46591);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,18.18124);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,17.79856);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,17.1055);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,15.87372);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,14.02509);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,11.89633);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,9.71203);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,7.475805);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,5.550273);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.955851);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.850727);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,2.224154);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.766926);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(6260583);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,4.782663);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1112.073);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,2002.587);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1926.363);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1669.421);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,1350.159);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,1051.52);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,860.7434);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,690.0591);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,599.763);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,468.4826);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,416.8056);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,359.6247);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,342.391);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,297.5066);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,280.1936);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,270.0092);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,234.3668);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,221.6513);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,197.0622);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,178.8372);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,139.5645);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,135.569);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,99.53727);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,80.82118);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,53.97446);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,38.28313);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,29.1894);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,14.3203);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,10.89051);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,10.55161);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,2.341563);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,23.02259);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,37.03941);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,40.4287);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,37.96124);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,33.1967);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,27.22135);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,25.0576);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,21.65231);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,21.06069);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,16.91202);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,17.62023);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,14.85108);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,15.25101);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,13.45229);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,13.48278);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,14.11369);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,13.15082);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,13.86611);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,12.12877);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,11.16443);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,9.161657);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,9.837911);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,7.231027);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,6.542719);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,4.83697);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,2.56621);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,3.774002);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.487897);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,2.552066);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.398203);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(90522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,1.152212);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,623.5224);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,976.6175);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,874.7058);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,880.1881);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,629.8617);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,525.4107);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,441.7874);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,387.6782);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,309.6575);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,257.1566);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,231.7178);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,207.7597);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,176.2005);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,198.3026);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,152.1418);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,138.6388);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,122.8087);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,106.7833);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,91.58179);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,71.47106);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,83.55091);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,80.96382);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,61.25365);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,40.53525);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,38.44034);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,26.76318);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,11.75674);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,9.7023);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,5.421451);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,11.8146);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.343429);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,28.76518);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,44.39868);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,44.54078);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,48.61324);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,34.37695);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,30.61086);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,29.84642);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,29.45067);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,25.87856);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,22.4805);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,21.14798);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,17.09731);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,16.69341);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,19.67947);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,13.09491);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,17.41906);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,12.7525);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,14.16869);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,9.635426);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,5.751052);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,11.66787);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,11.53139);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,11.04355);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,4.149305);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,7.80939);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,3.392333);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.480419);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.735101);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,1.213045);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,2.512041);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(66273);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,8.915596);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,10.57783);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,7.404478);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,5.591137);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,4.986689);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,4.533354);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,5.288913);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,3.022236);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,4.533354);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,3.928907);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,3.022236);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,2.720012);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.208894);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,1.66223);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,1.360006);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.755559);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(18,0.755559);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.9066708);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(20,1.66223);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,1.057783);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,1.057783);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,0.755559);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.4533354);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(25,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(26,0.3022236);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(27,0.3022236);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.160712);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.264292);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,1.057783);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.9191772);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.8680712);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.8276734);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.8939895);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.6757925);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.8276734);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.770522);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.6757925);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.6411131);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.4274087);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.5011811);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4533354);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.3378963);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(18,0.3378963);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.3701468);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(20,0.5011811);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.3998042);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.3998042);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.3378963);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.2617333);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(25,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(26,0.2137044);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(27,0.2137044);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(510);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(1,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,14.36481);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,23.00615);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,14.14036);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,11.78364);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,8.529109);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,5.835706);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,5.499031);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,5.835706);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.264554);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,3.366753);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.805628);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,2.805628);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,3.478979);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.917853);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,2.356727);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,1.683377);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,2.356727);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,1.122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,1.795602);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.468953);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,1.346701);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.8978009);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.8978009);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.5611256);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.2244502);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(1,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,1.269682);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.606819);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.259724);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.149965);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,0.9783559);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.8092668);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.7855758);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.8092668);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.6918021);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.6146823);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.5611256);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.5611256);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.624843);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.572238);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.5142801);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.354887);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.434646);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5142801);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.354887);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.4489005);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.5263824);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.3887592);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.3174206);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3174206);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.250943);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.1587103);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(1121);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(1,0.2660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,20.48681);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,29.26687);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,24.47775);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,17.29406);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,10.37644);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,8.780062);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.651562);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,6.651562);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.587312);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,3.990937);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,4.523062);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,2.660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,3.990937);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,1.596375);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,2.660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.926687);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.06425);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,1.330312);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.862437);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.596375);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.532125);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.532125);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,1.330312);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.7981875);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.532125);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(29,0.2660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(1,0.2660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.334689);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,2.790487);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.551982);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,2.145064);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.66156);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.528413);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.330313);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.330313);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.219252);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,1.030456);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,1.097004);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.8413635);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,1.030456);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.6517174);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.8413635);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.8824295);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.532125);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.5949338);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.7039352);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.6517174);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.3762692);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.3762692);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.5949338);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4608338);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.3762692);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(29,0.2660625);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(609);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.02747902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.85331);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,22.41738);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,16.19888);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,10.05457);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,6.402611);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.817071);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.569524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.915524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.387926);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.095275);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.871321);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.667976);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.589661);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.397308);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.338228);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.236556);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.090917);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.071682);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9370344);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.920547);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8284923);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.7336897);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.5811812);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.3668449);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.2857818);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1318993);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.1030463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02747902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01786136);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.03847062);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.006144495);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.1328902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1755004);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.149186);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.117535);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.09379164);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.08135367);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.07003107);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.06329128);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05727908);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05365449);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.05070604);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04787188);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04673453);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04381589);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04287959);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.04121852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03871519);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.03837236);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.0358809);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.03556383);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03373882);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.03174986);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.028258);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02245054);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.0198154);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01346191);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01189876);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006144495);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.00495385);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.007270264);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.007218674);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.330356);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,7.753705);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,6.505723);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,4.492563);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.015282);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.185984);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.715497);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.416559);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.195752);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.029723);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.8840752);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.7999989);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.7104024);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.6946912);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.6225044);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.5558379);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.4951161);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.4819526);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.4229293);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.3830143);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.371974);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3040335);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2199572);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.149469);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1065816);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.06496806);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.02802544);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.0152866);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.009766441);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.01273884);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001750786);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.03760535);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.05737978);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.0525596);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.04367685);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.0357823);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.03046686);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.02698977);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.02452571);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.0225333);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.0209105);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.01937532);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.018431);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.01736827);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01717513);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.01625831);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.01536308);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.01449966);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01430561);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.01340103);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01275298);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01256784);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01136227);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.009664366);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.007966725);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.00672737);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.005252357);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.003449693);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002547767);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.002036444);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002325783);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1230753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1996555);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1449554);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.1094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.07111019);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.02461507);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01834699);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02336791);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01991115);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01729771);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01394586);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.008205022);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.03572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07681216);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.06573692);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03787018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02357955);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02215048);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.02000689);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01714876);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01607696);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.01036071);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.008217114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.007859849);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002143595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.005238546);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00484619);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003678277);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002902441);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002813114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.002673533);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.00247521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002396612);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001923935);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001713387);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001675725);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001597741);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.001129774);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.000875119);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__408 = new TH1D("VbbHcc_algo_Z_dR_Bj1__408","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(1,219);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(2,63926);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(3,95798);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(4,88997);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(5,84064);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(6,73111);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(7,60608);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(8,50031);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(9,41450);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(10,34890);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(11,29922);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(12,26116);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(13,23222);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(14,20850);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(15,19274);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(16,17509);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(17,14988);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(18,13123);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(19,11960);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(20,10817);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(21,9746);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(22,8894);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(23,7482);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(24,6067);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(25,4911);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(26,3633);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(27,2734);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(28,1921);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(29,1161);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(30,769);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(31,1174);
   VbbHcc_algo_Z_dR_Bj1__408->SetEntries(829396);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__408->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__408->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297[30] = {
   1511.825,
   255855,
   396161.9,
   446279.4,
   402321.4,
   358927.9,
   304552.3,
   263054.5,
   185261.1,
   150426.1,
   169235.5,
   119341.2,
   100531.9,
   92053.37,
   86473.66,
   80025.21,
   68505.68,
   52528.87,
   57918.17,
   47915.98,
   39199.09,
   33399.54,
   32764.96,
   25710.57,
   20801.99,
   13257.22,
   9665.285,
   6036.46,
   4131.719,
   1750.178};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297[30] = {
   621.4905,
   8917.762,
   10494.84,
   24404.83,
   11782.34,
   11225.52,
   23641.71,
   23427.05,
   8005.504,
   6979.528,
   22861.4,
   6906.149,
   5690.964,
   5550.488,
   5771.621,
   5030.364,
   4932.845,
   3863.772,
   4745.55,
   3543.965,
   3256.749,
   2344.858,
   3370.692,
   2840.386,
   2678.713,
   1452.081,
   1264.694,
   954.5686,
   887.6749,
   350.078};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMinimum(801.3012);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMaximum(517663.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__409 = new TH1D("data_mc_ratio__409","",30,0,6);
   data_mc_ratio__409->SetBinContent(1,0.144858);
   data_mc_ratio__409->SetBinContent(2,0.2498524);
   data_mc_ratio__409->SetBinContent(3,0.2418153);
   data_mc_ratio__409->SetBinContent(4,0.1994199);
   data_mc_ratio__409->SetBinContent(5,0.2089474);
   data_mc_ratio__409->SetBinContent(6,0.2036927);
   data_mc_ratio__409->SetBinContent(7,0.1990068);
   data_mc_ratio__409->SetBinContent(8,0.1901925);
   data_mc_ratio__409->SetBinContent(9,0.2237383);
   data_mc_ratio__409->SetBinContent(10,0.2319411);
   data_mc_ratio__409->SetBinContent(11,0.1768068);
   data_mc_ratio__409->SetBinContent(12,0.2188348);
   data_mc_ratio__409->SetBinContent(13,0.2309913);
   data_mc_ratio__409->SetBinContent(14,0.226499);
   data_mc_ratio__409->SetBinContent(15,0.2228887);
   data_mc_ratio__409->SetBinContent(16,0.2187936);
   data_mc_ratio__409->SetBinContent(17,0.2187848);
   data_mc_ratio__409->SetBinContent(18,0.2498245);
   data_mc_ratio__409->SetBinContent(19,0.2064983);
   data_mc_ratio__409->SetBinContent(20,0.2257493);
   data_mc_ratio__409->SetBinContent(21,0.2486283);
   data_mc_ratio__409->SetBinContent(22,0.2662911);
   data_mc_ratio__409->SetBinContent(23,0.2283537);
   data_mc_ratio__409->SetBinContent(24,0.235973);
   data_mc_ratio__409->SetBinContent(25,0.2360832);
   data_mc_ratio__409->SetBinContent(26,0.2740394);
   data_mc_ratio__409->SetBinContent(27,0.282868);
   data_mc_ratio__409->SetBinContent(28,0.3182329);
   data_mc_ratio__409->SetBinContent(29,0.2809968);
   data_mc_ratio__409->SetBinContent(30,0.4393838);
   data_mc_ratio__409->SetBinContent(31,0.3852838);
   data_mc_ratio__409->SetBinError(1,0.009788598);
   data_mc_ratio__409->SetBinError(2,0.0009881999);
   data_mc_ratio__409->SetBinError(3,0.0007812779);
   data_mc_ratio__409->SetBinError(4,0.0006684684);
   data_mc_ratio__409->SetBinError(5,0.0007206624);
   data_mc_ratio__409->SetBinError(6,0.0007533281);
   data_mc_ratio__409->SetBinError(7,0.0008083567);
   data_mc_ratio__409->SetBinError(8,0.0008503034);
   data_mc_ratio__409->SetBinError(9,0.00109895);
   data_mc_ratio__409->SetBinError(10,0.00124173);
   data_mc_ratio__409->SetBinError(11,0.001022124);
   data_mc_ratio__409->SetBinError(12,0.001354139);
   data_mc_ratio__409->SetBinError(13,0.001515814);
   data_mc_ratio__409->SetBinError(14,0.001568604);
   data_mc_ratio__409->SetBinError(15,0.00160547);
   data_mc_ratio__409->SetBinError(16,0.001653499);
   data_mc_ratio__409->SetBinError(17,0.001787085);
   data_mc_ratio__409->SetBinError(18,0.002180814);
   data_mc_ratio__409->SetBinError(19,0.001888212);
   data_mc_ratio__409->SetBinError(20,0.002170566);
   data_mc_ratio__409->SetBinError(21,0.002518473);
   data_mc_ratio__409->SetBinError(22,0.002823632);
   data_mc_ratio__409->SetBinError(23,0.002639971);
   data_mc_ratio__409->SetBinError(24,0.00302953);
   data_mc_ratio__409->SetBinError(25,0.003368838);
   data_mc_ratio__409->SetBinError(26,0.004546532);
   data_mc_ratio__409->SetBinError(27,0.005409842);
   data_mc_ratio__409->SetBinError(28,0.007260748);
   data_mc_ratio__409->SetBinError(29,0.008246797);
   data_mc_ratio__409->SetBinError(30,0.01584458);
   data_mc_ratio__409->SetBinError(31,0.08217927);
   data_mc_ratio__409->SetMinimum(0.4);
   data_mc_ratio__409->SetMaximum(1.6);
   data_mc_ratio__409->SetEntries(1870.89);
   data_mc_ratio__409->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__409->SetLineColor(ci);
   data_mc_ratio__409->SetLineWidth(2);
   data_mc_ratio__409->SetMarkerStyle(20);
   data_mc_ratio__409->SetMarkerSize(1.2);
   data_mc_ratio__409->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__409->GetXaxis()->SetRange(1,30);
   data_mc_ratio__409->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__409->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__409->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__409->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__409->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__409->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1298[30] = {
   0.4110862,
   0.03485474,
   0.02649128,
   0.05468509,
   0.0292859,
   0.03127514,
   0.07762775,
   0.08905779,
   0.043212,
   0.04639838,
   0.1350863,
   0.05786896,
   0.05660851,
   0.06029641,
   0.06674426,
   0.06285975,
   0.07200637,
   0.07355522,
   0.08193544,
   0.07396208,
   0.08308228,
   0.07020631,
   0.1028749,
   0.1104754,
   0.128772,
   0.1095313,
   0.1308492,
   0.1581339,
   0.214844,
   0.2000242};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1298,Graph_from_mc_statistical_error_fy1298,Graph_from_mc_statistical_error_fex1298,Graph_from_mc_statistical_error_fey1298);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1298 = new TH1F("Graph_Graph_from_mc_statistical_error1298","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1298->SetMinimum(0.5066965);
   Graph_Graph_from_mc_statistical_error1298->SetMaximum(1.493303);
   Graph_Graph_from_mc_statistical_error1298->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1298->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1298);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
