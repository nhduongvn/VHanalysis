void Z_mass_both_18()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Thu Aug 10 12:24:38 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(0,0,1,1);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetFillStyle(4000);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetFrameFillStyle(1000);
   Z_mass_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-32.72542,315.7258,32702.7);
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
   st->SetMaximum(28027.77);
   
   TH1F *st_stack_195 = new TH1F("st_stack_195","",40,0,400);
   st_stack_195->SetMinimum(0.01);
   st_stack_195->SetMaximum(29429.16);
   st_stack_195->SetDirectory(0);
   st_stack_195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_195->SetLineColor(ci);
   st_stack_195->GetXaxis()->SetRange(1,30);
   st_stack_195->GetXaxis()->SetLabelFont(42);
   st_stack_195->GetXaxis()->SetLabelSize(0.035);
   st_stack_195->GetXaxis()->SetTitleSize(0.035);
   st_stack_195->GetXaxis()->SetTitleFont(42);
   st_stack_195->GetYaxis()->SetTitle("Events/10.0");
   st_stack_195->GetYaxis()->SetLabelFont(42);
   st_stack_195->GetYaxis()->SetLabelSize(0.05);
   st_stack_195->GetYaxis()->SetTitleSize(0.057);
   st_stack_195->GetYaxis()->SetTitleOffset(1.2);
   st_stack_195->GetYaxis()->SetTitleFont(42);
   st_stack_195->GetZaxis()->SetLabelFont(42);
   st_stack_195->GetZaxis()->SetLabelSize(0.035);
   st_stack_195->GetZaxis()->SetTitleSize(0.035);
   st_stack_195->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_195);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,10.90674);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,916.051);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,5040.628);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,9599.721);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,11846.33);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,10139.49);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,10435.66);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,5236.796);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,7551.815);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,6884.578);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,5777.9);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,7010.819);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,4950.159);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,4822.211);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,4909.732);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,5194.559);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,5813.463);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3894.165);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,3423.948);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,6854.271);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3820.455);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2691.386);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,4815.445);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1674.661);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,2122.83);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1976.811);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,3357.442);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,2220.896);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,3498.642);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1956.332);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1351.921);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1428.652);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1795.613);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,1944.781);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,2662.861);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1248.974);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,2202.314);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,2524.577);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,81731.31);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,10.90674);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,414.8316);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1107.061);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1651.164);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,2677.558);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1463.335);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1845.781);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,933.3413);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,1348.296);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,2018.712);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,1002.255);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1303.572);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,993.8063);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,958.0088);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,970.026);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1154.004);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,1550.553);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,850.6126);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,963.3283);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,1586.153);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,835.5597);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,698.6282);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,1231.24);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,359.6215);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,585.3476);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,448.8182);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,928.0269);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,590.1862);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,1009.049);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,471.5809);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,197.5708);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,436.5875);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,584.6297);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,453.8626);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,769.292);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,201.2597);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,734.2265);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,754.6359);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,4452.736);
   VbbHcc_both_Z_mass_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,3.690095);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,13.17437);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,21.15792);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,30.54551);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,38.02929);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,40.63203);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,45.13353);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,44.86992);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,41.35124);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,45.49896);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,45.11232);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,42.48478);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,36.16592);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,32.45353);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,36.01789);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,30.71661);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,26.60993);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,29.49752);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,25.19908);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,25.91754);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,19.617);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,22.6188);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,23.58997);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,15.5798);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,16.26697);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,18.65938);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,16.77355);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,19.593);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,15.526);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,17.43469);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,16.27583);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,13.97758);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,11.09639);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,13.74023);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,11.17058);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,12.44736);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,14.27852);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,510.258);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.9009829);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.623941);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,2.086539);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,2.545625);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.926292);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,2.931202);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,3.000473);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,3.11032);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,3.019733);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,3.133431);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,3.161194);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,3.092377);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,2.812748);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,2.658533);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,2.802167);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,2.585026);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,2.439109);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,2.642705);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,2.371902);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,2.306456);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.892715);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,2.405517);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,2.248535);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.807301);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.906071);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.965337);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.893431);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,2.090297);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.832165);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.886206);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.814828);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.680182);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.543677);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.703183);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.454082);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.533821);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.831067);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,10.82897);
   VbbHcc_both_Z_mass_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.09363874);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,3.831894);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,74.21053);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,260.7515);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,462.5856);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,624.5759);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,793.6291);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,920.4454);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,1016.885);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,1043.866);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,1083.947);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,1074.523);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,1021.844);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,941.6939);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,863.4711);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,790.1224);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,740.2084);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,686.0211);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,600.3534);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,569.0557);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,524.8138);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,518.0109);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,464.2078);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,460.0172);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,440.3199);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,404.0904);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,391.6692);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,375.2221);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,367.7483);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,364.3078);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,336.5316);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,326.898);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,307.5507);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,305.8655);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,290.7863);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,279.0778);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,282.8568);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,271.0568);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,267.3011);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,10138.06);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.06646339);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.7401997);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,2.683895);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,5.319555);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,6.67942);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,7.541729);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,8.628745);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,9.754082);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,10.20086);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,10.13577);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,10.16691);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,10.02872);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,9.821744);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,9.394091);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,9.457699);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,8.591187);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,8.280099);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,9.17432);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,7.541506);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,7.290969);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,6.914202);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,7.794285);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,6.602101);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,6.829041);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,7.207113);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,6.805406);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,6.110455);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,5.959336);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,5.779607);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,5.975454);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,5.553878);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,5.668311);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,5.369972);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,5.440274);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,5.282485);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,5.024585);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,6.088834);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,4.911924);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,6.241238);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,31.62533);
   VbbHcc_both_Z_mass_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.1381218);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,8.908391);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,31.52805);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,44.28369);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,89.18009);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,140.5093);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,223.8819);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,298.1344);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,200.0912);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,129.6384);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,83.98476);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,95.50693);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,70.14304);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,63.65703);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,66.70353);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,66.29126);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,57.73478);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,64.37263);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,50.20907);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,49.13268);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,48.67858);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,47.53245);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,44.03345);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,52.82637);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,52.20189);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,44.41212);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,36.19247);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,34.43697);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,33.22182);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,46.54377);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,34.67226);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,37.45884);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,37.16034);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,29.55375);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,38.14816);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,40.24194);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,28.31308);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,31.97426);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,1325.498);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.1381218);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,2.208261);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,5.477405);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,4.166813);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,8.243308);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,9.374609);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,15.37644);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,12.11818);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,11.15361);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,9.244086);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,5.361138);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,8.212661);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.976533);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,6.196727);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,6.115675);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,6.31949);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,4.57188);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,12.06339);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,4.429396);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,7.073752);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,4.657499);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,5.593996);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,4.328375);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,7.875569);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,7.305346);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,5.334854);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,3.517181);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,5.504398);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,3.56378);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,6.448258);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,3.606394);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,5.579094);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,5.446381);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,3.088804);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,4.470315);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,8.594741);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,3.219873);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,3.609226);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,29.18293);
   VbbHcc_both_Z_mass_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,2.203625);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,9.65476);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,16.15157);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,18.62659);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,11.95323);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,16.17555);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,10.38535);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,10.04166);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,14.93222);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,7.35457);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,9.580296);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,5.123364);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,6.00566);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,8.14905);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,8.463198);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,10.60134);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,7.722312);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,6.831015);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,7.840156);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,4.627186);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,5.78705);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,5.490619);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,10.71073);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,3.131011);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,7.426073);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,6.068118);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,3.247612);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,1.626824);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,3.821473);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,4.580895);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,2.053765);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,4.369812);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,1.509641);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,3.720516);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.907636);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,3.127077);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,4.648892);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,119.3977);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.9106574);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,3.358371);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,4.365458);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,9.440491);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,3.423292);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,3.15791);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,1.552323);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,2.47913);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,4.848993);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.257771);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,2.541724);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.072351);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,1.089443);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,2.619094);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,2.605314);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,4.010872);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,3.031437);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,3.169334);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,2.635015);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,1.024139);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,2.01194);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.432162);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,3.700988);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.8882008);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,3.64655);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,2.446239);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.8443326);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.4838714);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.9741201);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,2.369861);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.698136);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,2.353514);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.414279);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,2.318919);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.5952448);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,0.9366455);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,2.884676);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,8.435662);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.5029805);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(8,0.2493026);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.3743199);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(23,0.6599753);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(28,0.4921557);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.5029805);
   VbbHcc_both_Z_mass_stack_6->SetBinError(8,0.2493026);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.3743199);
   VbbHcc_both_Z_mass_stack_6->SetBinError(23,0.6599753);
   VbbHcc_both_Z_mass_stack_6->SetBinError(28,0.4921557);
   VbbHcc_both_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.4786962);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.6010888);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,1.00346);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,2.188903);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,2.720613);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(11,0.840955);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.8576021);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(22,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(34,0.4019721);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(35,0.3767055);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.6750199);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.402651);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.4786962);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.6010888);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.6483452);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,1.00363);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,1.119783);
   VbbHcc_both_Z_mass_stack_7->SetBinError(11,0.5973236);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.5144501);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.6105078);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_both_Z_mass_stack_7->SetBinError(22,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinError(34,0.4019721);
   VbbHcc_both_Z_mass_stack_7->SetBinError(35,0.3767055);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.6750199);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.995295);
   VbbHcc_both_Z_mass_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(5,0.3915493);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,0.6931937);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.815733);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,3.068072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,6.723887);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,8.491878);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,6.658586);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,1.206099);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,0.4018369);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.797801);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.8767982);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,2.031553);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,1.045906);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.3487978);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.3253838);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.8467225);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.2830566);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.9274124);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.3253838);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.8920879);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.7312141);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.7272378);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.6551353);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,1.068258);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,1.727773);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,1.10596);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.6251211);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.4018369);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.4879252);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.704033);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.8891262);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.07423717);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,25.88427);
   VbbHcc_both_Z_mass_stack_8->SetBinError(5,0.3915493);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.4983307);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.4302231);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,1.033296);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,1.489583);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.694735);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,1.491364);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.6030817);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.4018369);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.8109132);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.5064517);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.7875106);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.6095958);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.3487978);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.3253838);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.5522121);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2830566);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.5449387);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.3253838);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.5153556);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.5201662);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.5184258);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.4113652);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.6235703);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.7501389);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.6430991);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.4477952);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.4018369);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.352288);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.5027876);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.5264428);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.07423717);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,2.905638);
   VbbHcc_both_Z_mass_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(3,0.002748817);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.04955622);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.189115);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.445706);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.8523014);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,2.04636);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,4.737192);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,6.165706);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,4.53079);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,3.790059);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,3.919841);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,3.072457);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.691923);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,1.078454);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.7382717);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.6449076);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.5804671);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.5966084);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.5359165);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.5330193);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.5289736);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.567358);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.5374853);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.5272888);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.5770018);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.5663764);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.5355139);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.5724107);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.5731863);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.633572);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.4610493);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.6098062);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.6384632);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.5851556);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.5349609);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.5994313);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.6042176);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.5594464);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,24.24903);
   VbbHcc_both_Z_mass_stack_9->SetBinError(3,0.002748817);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.01124557);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.02268735);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.03673653);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.04955018);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.07691352);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.1428994);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.1356612);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.1146573);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.1048303);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.1063826);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.09281969);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.06817407);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.06467903);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.04453974);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.0417961);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.04014797);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.0411798);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.03796473);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.03830866);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.03812887);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.04065245);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.03948867);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.04073925);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.04540927);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.04092041);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.03812588);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.04131743);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.0444376);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.04427181);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.03599429);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.04119889);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.04158316);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.04450392);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.0413639);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.05709616);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.04166669);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.04759475);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.2936832);
   VbbHcc_both_Z_mass_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0006969272);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.0204677);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.08506851);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.2067528);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.4572577);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,1.117978);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,2.215362);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,2.65669);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,2.009646);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.782465);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,1.631998);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,1.276423);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.8848766);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.5891948);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.5246414);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.4183712);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.4593416);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.3908631);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.3597683);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.379152);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.3716295);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.3264519);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.3531869);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.3545072);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.3205631);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.3148783);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.3163462);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.3127322);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.3025315);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.2895654);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.2937704);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.2681262);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.2761436);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.2669205);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.2674691);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.2512885);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.2388368);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.252047);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,8.982162);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0006969272);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.003687519);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.007389391);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.01158349);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.0171458);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.0268313);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.03784417);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.04140113);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.03594461);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.03387063);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.03243752);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.02867513);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.02387019);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01947488);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01834563);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.01642139);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01721383);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.01584232);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.01522646);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.01564532);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.01552897);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.01449038);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.01506808);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.01513489);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.0143997);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.01421775);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.01427554);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.01421334);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.01399076);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.01367428);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.01373333);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.01310551);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.01333269);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.01316099);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.01313935);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.01274414);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.01244009);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.0127935);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.07612312);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002982215);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.005871203);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03450741);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04050544);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02697935);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.007168195);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002794763);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.005636807);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002576493);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.003415932);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.00272295);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.002662043);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.005984014);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02802953);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002982215);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.0041553);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.01007269);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.01106557);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.009136454);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004241125);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002794763);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003985965);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002576493);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.003415932);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.00272295);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.002662043);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.004232433);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.009119264);
   VbbHcc_both_Z_mass_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003105083);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.003911776);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.006568353);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.01321978);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.0174893);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.01209264);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.003951251);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.003835617);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.002435243);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.002234881);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.001608203);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0006049661);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.001485395);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.001578895);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.002265426);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0006828328);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0003489566);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.001031429);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0003290641);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.001367573);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0009750442);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0004389172);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0009281449);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.001120348);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0006654922);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0003035629);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0002658739);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.001266302);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0003186975);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.0003156401);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0003105083);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.02658157);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003105083);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.001250637);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.001561391);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.002153009);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.002499739);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.002086765);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.001147684);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.00112226);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0009786776);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0009177398);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0007202851);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0004288655);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0007480434);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0007137466);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0009410783);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.000500533);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0003489566);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0006003459);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0003290641);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0006950879);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0005737759);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0004389172);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0005362084);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0006494903);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0004933399);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0003035629);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002658739);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0006471318);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003186975);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.0003156401);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0003105083);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.002986477);
   VbbHcc_both_Z_mass_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__535 = new TH1D("VbbHcc_both_Z_mass__535","",40,0,400);
   VbbHcc_both_Z_mass__535->SetBinContent(3,43);
   VbbHcc_both_Z_mass__535->SetBinContent(4,1302);
   VbbHcc_both_Z_mass__535->SetBinContent(5,5276);
   VbbHcc_both_Z_mass__535->SetBinContent(6,9490);
   VbbHcc_both_Z_mass__535->SetBinContent(7,11853);
   VbbHcc_both_Z_mass__535->SetBinContent(15,8099);
   VbbHcc_both_Z_mass__535->SetBinContent(16,7531);
   VbbHcc_both_Z_mass__535->SetBinContent(17,7110);
   VbbHcc_both_Z_mass__535->SetBinContent(18,6627);
   VbbHcc_both_Z_mass__535->SetBinContent(19,6218);
   VbbHcc_both_Z_mass__535->SetBinContent(20,5630);
   VbbHcc_both_Z_mass__535->SetBinContent(21,5456);
   VbbHcc_both_Z_mass__535->SetBinContent(22,5069);
   VbbHcc_both_Z_mass__535->SetBinContent(23,4843);
   VbbHcc_both_Z_mass__535->SetBinContent(24,4644);
   VbbHcc_both_Z_mass__535->SetBinContent(25,4387);
   VbbHcc_both_Z_mass__535->SetBinContent(26,4214);
   VbbHcc_both_Z_mass__535->SetBinContent(27,3905);
   VbbHcc_both_Z_mass__535->SetBinContent(28,3871);
   VbbHcc_both_Z_mass__535->SetBinContent(29,3847);
   VbbHcc_both_Z_mass__535->SetBinContent(30,3605);
   VbbHcc_both_Z_mass__535->SetBinContent(31,3582);
   VbbHcc_both_Z_mass__535->SetBinContent(32,3355);
   VbbHcc_both_Z_mass__535->SetBinContent(33,3196);
   VbbHcc_both_Z_mass__535->SetBinContent(34,3151);
   VbbHcc_both_Z_mass__535->SetBinContent(35,3102);
   VbbHcc_both_Z_mass__535->SetBinContent(36,3074);
   VbbHcc_both_Z_mass__535->SetBinContent(37,3000);
   VbbHcc_both_Z_mass__535->SetBinContent(38,2899);
   VbbHcc_both_Z_mass__535->SetBinContent(39,2726);
   VbbHcc_both_Z_mass__535->SetBinContent(40,2768);
   VbbHcc_both_Z_mass__535->SetBinContent(41,107280);
   VbbHcc_both_Z_mass__535->SetEntries(325806);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__535->SetLineColor(ci);
   VbbHcc_both_Z_mass__535->SetLineWidth(2);
   VbbHcc_both_Z_mass__535->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__535->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1389[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1389[40] = {
   0,
   0.09363874,
   14.8802,
   1005.137,
   5356.406,
   10145.73,
   12612.5,
   11131.1,
   11652.71,
   6627.428,
   8864.763,
   8161.752,
   6995.602,
   8189.389,
   6013.923,
   5796.198,
   5809.47,
   6046.956,
   6599.903,
   4595.06,
   4080.44,
   7462.836,
   4420.181,
   3229.75,
   5349.39,
   2203.722,
   2599.461,
   2438.615,
   3795.505,
   2645.719,
   3919.376,
   2360.307,
   1736.664,
   1793.759,
   2158.284,
   2278.579,
   2999.057,
   1587.566,
   2518.176,
   2843.591};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1389[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1389[40] = {
   0,
   0.06646339,
   10.9327,
   414.8481,
   1107.094,
   1651.19,
   2677.6,
   1463.398,
   1845.876,
   933.4841,
   1348.387,
   2018.767,
   1002.325,
   1303.641,
   993.8689,
   958.0811,
   970.0907,
   1154.057,
   1550.594,
   850.7406,
   963.3749,
   1586.188,
   835.6133,
   698.6873,
   1231.271,
   359.8064,
   585.4364,
   448.9108,
   928.0582,
   590.2442,
   1009.076,
   471.6624,
   197.7087,
   436.6608,
   584.6877,
   453.9067,
   769.3269,
   201.5431,
   734.2522,
   754.678};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1389,Graph_from_VbbHcc_both_Z_mass_fy1389,Graph_from_VbbHcc_both_Z_mass_fex1389,Graph_from_VbbHcc_both_Z_mass_fey1389);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1389 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1389","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMaximum(16819.1);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1389);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__536 = new TH1D("data_mc_ratio__536","",40,0,400);
   data_mc_ratio__536->SetBinContent(3,2.889745);
   data_mc_ratio__536->SetBinContent(4,1.295346);
   data_mc_ratio__536->SetBinContent(5,0.9849889);
   data_mc_ratio__536->SetBinContent(6,0.9353689);
   data_mc_ratio__536->SetBinContent(7,0.9397823);
   data_mc_ratio__536->SetBinContent(8,1.114625);
   data_mc_ratio__536->SetBinContent(9,1.047825);
   data_mc_ratio__536->SetBinContent(10,1.719973);
   data_mc_ratio__536->SetBinContent(11,1.190331);
   data_mc_ratio__536->SetBinContent(12,1.226085);
   data_mc_ratio__536->SetBinContent(13,1.317828);
   data_mc_ratio__536->SetBinContent(14,1.077003);
   data_mc_ratio__536->SetBinContent(15,1.346708);
   data_mc_ratio__536->SetBinContent(16,1.2993);
   data_mc_ratio__536->SetBinContent(17,1.223864);
   data_mc_ratio__536->SetBinContent(18,1.095923);
   data_mc_ratio__536->SetBinContent(19,0.942135);
   data_mc_ratio__536->SetBinContent(20,1.225229);
   data_mc_ratio__536->SetBinContent(21,1.337111);
   data_mc_ratio__536->SetBinContent(22,0.6792324);
   data_mc_ratio__536->SetBinContent(23,1.095656);
   data_mc_ratio__536->SetBinContent(24,1.437882);
   data_mc_ratio__536->SetBinContent(25,0.8200936);
   data_mc_ratio__536->SetBinContent(26,1.912219);
   data_mc_ratio__536->SetBinContent(27,1.502234);
   data_mc_ratio__536->SetBinContent(28,1.587376);
   data_mc_ratio__536->SetBinContent(29,1.013567);
   data_mc_ratio__536->SetBinContent(30,1.362578);
   data_mc_ratio__536->SetBinContent(31,0.9139211);
   data_mc_ratio__536->SetBinContent(32,1.421425);
   data_mc_ratio__536->SetBinContent(33,1.84031);
   data_mc_ratio__536->SetBinContent(34,1.756646);
   data_mc_ratio__536->SetBinContent(35,1.437253);
   data_mc_ratio__536->SetBinContent(36,1.349086);
   data_mc_ratio__536->SetBinContent(37,1.000314);
   data_mc_ratio__536->SetBinContent(38,1.826066);
   data_mc_ratio__536->SetBinContent(39,1.08253);
   data_mc_ratio__536->SetBinContent(40,0.973417);
   data_mc_ratio__536->SetBinContent(41,1.142661);
   data_mc_ratio__536->SetBinError(3,0.440682);
   data_mc_ratio__536->SetBinError(4,0.03589884);
   data_mc_ratio__536->SetBinError(5,0.0135606);
   data_mc_ratio__536->SetBinError(6,0.009601737);
   data_mc_ratio__536->SetBinError(7,0.008632034);
   data_mc_ratio__536->SetBinError(8,0.0100068);
   data_mc_ratio__536->SetBinError(9,0.00948268);
   data_mc_ratio__536->SetBinError(10,0.01610973);
   data_mc_ratio__536->SetBinError(11,0.01158778);
   data_mc_ratio__536->SetBinError(12,0.01225656);
   data_mc_ratio__536->SetBinError(13,0.01372514);
   data_mc_ratio__536->SetBinError(14,0.01146787);
   data_mc_ratio__536->SetBinError(15,0.01496435);
   data_mc_ratio__536->SetBinError(16,0.01497211);
   data_mc_ratio__536->SetBinError(17,0.01451437);
   data_mc_ratio__536->SetBinError(18,0.01346238);
   data_mc_ratio__536->SetBinError(19,0.0119478);
   data_mc_ratio__536->SetBinError(20,0.01632913);
   data_mc_ratio__536->SetBinError(21,0.01810215);
   data_mc_ratio__536->SetBinError(22,0.009540195);
   data_mc_ratio__536->SetBinError(23,0.01574408);
   data_mc_ratio__536->SetBinError(24,0.02109975);
   data_mc_ratio__536->SetBinError(25,0.01238168);
   data_mc_ratio__536->SetBinError(26,0.02945713);
   data_mc_ratio__536->SetBinError(27,0.02403959);
   data_mc_ratio__536->SetBinError(28,0.0255134);
   data_mc_ratio__536->SetBinError(29,0.01634149);
   data_mc_ratio__536->SetBinError(30,0.02269389);
   data_mc_ratio__536->SetBinError(31,0.01527024);
   data_mc_ratio__536->SetBinError(32,0.02454018);
   data_mc_ratio__536->SetBinError(33,0.03255274);
   data_mc_ratio__536->SetBinError(34,0.03129393);
   data_mc_ratio__536->SetBinError(35,0.0258055);
   data_mc_ratio__536->SetBinError(36,0.02433256);
   data_mc_ratio__536->SetBinError(37,0.01826316);
   data_mc_ratio__536->SetBinError(38,0.03391504);
   data_mc_ratio__536->SetBinError(39,0.0207337);
   data_mc_ratio__536->SetBinError(40,0.01850188);
   data_mc_ratio__536->SetBinError(41,0.05430797);
   data_mc_ratio__536->SetMinimum(0.4);
   data_mc_ratio__536->SetMaximum(1.6);
   data_mc_ratio__536->SetEntries(331.6365);
   data_mc_ratio__536->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__536->SetLineColor(ci);
   data_mc_ratio__536->SetLineWidth(2);
   data_mc_ratio__536->SetMarkerStyle(20);
   data_mc_ratio__536->SetMarkerSize(1.2);
   data_mc_ratio__536->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__536->GetXaxis()->SetRange(1,30);
   data_mc_ratio__536->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__536->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__536->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__536->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__536->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__536->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1390[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1390[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1390[40] = {
   0,
   0.7097852,
   0.7347146,
   0.4127281,
   0.206686,
   0.1627473,
   0.2122974,
   0.1314693,
   0.1584075,
   0.1408516,
   0.1521064,
   0.2473448,
   0.1432793,
   0.1591866,
   0.1652613,
   0.1652948,
   0.1669844,
   0.1908493,
   0.2349419,
   0.1851424,
   0.2360958,
   0.2125449,
   0.189045,
   0.2163286,
   0.2301704,
   0.1632721,
   0.2252145,
   0.1840843,
   0.2445151,
   0.2230941,
   0.2574583,
   0.199831,
   0.1138439,
   0.2434334,
   0.2709039,
   0.199206,
   0.2565229,
   0.126951,
   0.2915809,
   0.2653961};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1390,Graph_from_mc_statistical_error_fy1390,Graph_from_mc_statistical_error_fex1390,Graph_from_mc_statistical_error_fey1390);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1390 = new TH1F("Graph_Graph_from_mc_statistical_error1390","",100,0,440);
   Graph_Graph_from_mc_statistical_error1390->SetMinimum(0.1183424);
   Graph_Graph_from_mc_statistical_error1390->SetMaximum(1.881658);
   Graph_Graph_from_mc_statistical_error1390->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1390->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1390);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
