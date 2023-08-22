void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Tue Aug 22 09:23:12 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(0,0,1,1);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-126.9555,6.314516,126838.6);
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
   st->SetMaximum(108706.7);
   
   TH1F *st_stack_247 = new TH1F("st_stack_247","",30,0,6);
   st_stack_247->SetMinimum(0.01);
   st_stack_247->SetMaximum(114142);
   st_stack_247->SetDirectory(0);
   st_stack_247->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_247->SetLineColor(ci);
   st_stack_247->GetXaxis()->SetRange(1,30);
   st_stack_247->GetXaxis()->SetLabelFont(42);
   st_stack_247->GetXaxis()->SetLabelSize(0.035);
   st_stack_247->GetXaxis()->SetTitleSize(0.035);
   st_stack_247->GetXaxis()->SetTitleFont(42);
   st_stack_247->GetYaxis()->SetTitle("Events/0.2");
   st_stack_247->GetYaxis()->SetLabelFont(42);
   st_stack_247->GetYaxis()->SetLabelSize(0.05);
   st_stack_247->GetYaxis()->SetTitleSize(0.057);
   st_stack_247->GetYaxis()->SetTitleOffset(1.2);
   st_stack_247->GetYaxis()->SetTitleFont(42);
   st_stack_247->GetZaxis()->SetLabelFont(42);
   st_stack_247->GetZaxis()->SetLabelSize(0.035);
   st_stack_247->GetZaxis()->SetTitleSize(0.035);
   st_stack_247->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_247);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,8367.307);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,35399.7);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,32884.27);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,25845.24);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,12864.27);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,13899.96);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,10045.06);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,10498.76);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,10103.43);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,7689.663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,7705.77);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,5981.67);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,5495.662);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,6983.003);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,5178.006);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,4095.586);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2745.252);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,3061.324);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1821.445);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1347.114);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,869.0484);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1654.096);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,1901.292);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,565.9683);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,611.6367);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,358.7809);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,271.1858);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,104.1353);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,68.48879);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,91.72703);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,8.326352);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,970.6458);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,2887.255);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,2439.372);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2322.929);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1314.474);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2802.046);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1290.053);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1520.268);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,1430.904);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1266.222);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1214.928);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1084.615);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1017.08);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,1259.627);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,1072.948);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,934.1806);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,673.4846);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,847.7255);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,417.0303);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,402.0562);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,384.2077);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,651.2665);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,657.3394);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,121.9126);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,377.7471);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,94.46996);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,85.04112);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,50.08042);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,36.83469);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,48.96978);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,6.048283);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,44.05289);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,162.0622);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,185.3301);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,156.2107);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,133.2413);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,106.1491);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,83.77196);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,68.90783);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,65.22086);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,55.81951);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,43.17578);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,43.85853);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,33.03443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,33.59859);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,25.95324);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,24.2879);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,19.90689);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,18.62709);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,17.55691);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,14.37247);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,11.22968);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,9.013745);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,9.461437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,7.076899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,4.797695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,3.464637);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.83713);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,2.330828);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.7329845);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4961885);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3923042);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.837931);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,5.208923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,5.524913);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,5.078411);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.593986);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,4.215387);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.737492);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,3.397666);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,3.242906);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,3.10069);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.632952);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,2.715936);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.306329);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,2.392268);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,2.041173);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,2.019776);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.780653);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.745627);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.712195);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.639574);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.388975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.252191);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,1.283733);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,1.152724);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.9225271);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.8128671);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.5782152);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.6930957);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.2041366);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.2922328);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.1488905);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,649.3312);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,3059.324);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,3821.649);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,3361.297);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2750.897);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,2177.635);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1719.357);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1409.674);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,1175.665);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,994.661);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,881.6775);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,801.1469);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,707.4732);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,629.2047);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,559.5508);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,501.736);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,415.3838);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,350.8972);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,299.8378);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,258.332);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,208.7716);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,170.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,129.1764);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,101.6893);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,75.95801);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,52.81469);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,35.35209);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,19.89104);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,13.59705);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,8.134386);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,12.27773);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,6.660562);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,14.43067);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,16.16566);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,15.15361);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,13.69027);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,12.17345);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,10.80751);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,9.787972);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,8.933703);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,8.220626);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,7.738433);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,7.381364);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,6.940155);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,6.536816);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,6.172643);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,5.840137);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,5.312547);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,4.874449);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,4.512284);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,4.19263);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.75875);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,3.400214);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.951114);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.628299);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,2.263237);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.885783);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.550358);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,1.147739);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.9506846);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.7359038);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.9147975);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,149.3491);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,506.8416);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,535.3166);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,387.6602);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,282.8063);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,230.9577);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,155.7509);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,135.8178);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,125.8913);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,112.9698);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,106.7382);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,85.73794);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,85.33798);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,82.99694);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,55.77158);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,60.30186);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,53.48996);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,40.21304);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,40.47743);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,39.6287);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,26.91416);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,20.67458);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,13.15042);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,10.82834);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,11.36118);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,5.515514);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,5.533786);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.104739);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,2.887842);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.2789599);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,1.781914);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,4.906139);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,14.35089);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,14.70733);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,13.91529);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,12.72141);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,13.19335);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,6.821077);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,7.393064);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,8.144986);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,8.027332);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,8.851011);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,7.400719);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,5.031029);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,7.4246);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,3.982891);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,7.905745);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,5.614557);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,5.040571);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,5.197239);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,6.464538);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,2.967034);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.537696);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.976388);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.754652);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,1.736186);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.250354);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,1.101502);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.4664244);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,1.022195);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1610576);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.758755);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,26.05615);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,52.10773);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,45.78578);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,43.63361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,45.08067);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,20.57075);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,11.03389);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,13.44435);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,14.02902);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,9.569757);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,8.673073);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,9.999956);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,4.467472);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,9.444343);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,3.365596);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,6.582738);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,3.468633);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.322827);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,4.798536);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,2.412539);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,1.879648);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.087275);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.8495644);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.6414903);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4247314);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.4254225);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.858866);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.1715987);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,1.390526);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,3.621294);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,5.145799);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,5.544967);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,12.12041);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,7.454309);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,3.58548);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.511696);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,3.363177);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,3.375193);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,2.50973);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.432383);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,2.982779);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.038846);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,3.249347);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.8147927);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,2.34803);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,1.008094);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.6149988);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,2.256468);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.7804891);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.561623);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.478968);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3917428);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.4229025);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.2214288);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.2223547);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.5241765);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.1303557);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.6615585);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.5709342);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.5709342);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.5709342);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.5709342);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,3.073558);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,10.05892);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,8.941259);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,5.308873);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.9267126);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.676486);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.580606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.217939);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,2.552344);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,11.35226);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,11.19912);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,7.467023);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,5.32589);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,3.604476);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.983406);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,2.322633);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,2.126953);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,2.234719);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.902914);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.834851);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.503047);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.503047);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,1.216617);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.950039);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.7486874);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.5303203);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.4253906);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.3289687);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2665781);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.2325469);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1985156);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.1985156);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.1276172);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.09074999);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.04821093);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.03119531);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.01701562);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002835937);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.08507812);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1794277);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1782133);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1455198);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.1228979);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.1011042);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.09198235);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.08115935);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.07766534);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.07960855);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.07346118);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.07213545);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.06528818);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.06528818);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.05873883);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.05190617);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.04607853);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.03878086);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.034733);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.03054398);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.02749543);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.0256805);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.02372715);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.02372715);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01902405);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01604248);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.01169287);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.00940574);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.006946599);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002835937);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.002835937);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.9905107);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,4.495123);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,5.425538);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,4.252621);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,2.8471);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.9082);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,1.389967);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,1.124134);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.9714217);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.8469892);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.8180021);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.7183147);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.6341814);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.5839842);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.4871248);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.3810744);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.3471383);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.258056);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.253107);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.2099798);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1668526);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.1315025);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.1237255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.1011014);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.05868122);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.0530252);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.02333109);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.009898037);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.004949019);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0007070027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0007070027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.02646306);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.05637432);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.0619344);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.0548326);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.04486543);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.03673013);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.03134821);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.02819159);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.02620683);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.02447087);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.02404849);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.02253554);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.0211747);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.02031941);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01855798);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01641404);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01566613);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.01350727);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01337712);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01218426);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.01086118);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.009642231);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.009352766);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.008454522);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.006441101);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.006122823);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.004061421);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.002645362);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001870553);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0007070027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0007070027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.02048186);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.05461829);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03868795);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.01365457);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.01114891);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.009383207);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.007547848);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.005574455);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.02067632);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.02487151);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.01378421);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.008090734);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.002397254);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.004195195);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.002489136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.002730003);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.002032371);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001557062);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008475574);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.001121213);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__678 = new TH1D("VbbHcc_both_Z_dR_Bj1__678","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(1,12281);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(2,48918);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(3,45882);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(4,35002);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(5,27907);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(6,21912);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(7,17956);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(8,14901);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(9,12666);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(10,10920);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(11,9748);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(12,8789);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(13,7994);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(14,7140);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(15,6255);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(16,5564);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(17,4767);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(18,4039);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(19,3435);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(20,2884);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(21,2449);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(22,2042);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(23,1681);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(24,1370);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(25,974);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(26,720);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(27,504);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(28,311);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(29,163);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(30,85);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(31,163);
   VbbHcc_both_Z_dR_Bj1__678->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__678->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__678->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493[30] = {
   9244.154,
   39209.21,
   37502.55,
   29815.45,
   16091.21,
   16445.02,
   12021.87,
   12133.22,
   11490.84,
   8868.004,
   8751,
   6926.365,
   6329.231,
   7741.731,
   5825.47,
   4691.224,
   3239.996,
   3475.012,
   2185.634,
   1663.315,
   1118.911,
   1855.83,
   2054.534,
   686.5043,
   704.644,
   421.1449,
   314.8415,
   128.6746,
   87.11915,
   100.6401};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493[30] = {
   970.6927,
   2887.337,
   2439.483,
   2323.057,
   1314.636,
   2802.109,
   1290.124,
   1520.325,
   1430.963,
   1266.281,
   1214.988,
   1084.673,
   1017.12,
   1259.673,
   1072.975,
   934.2376,
   673.5324,
   847.7567,
   417.0969,
   402.1345,
   384.2407,
   651.2818,
   657.3505,
   121.9598,
   377.7592,
   94.50081,
   85.06597,
   50.10071,
   36.86764,
   48.97644};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMinimum(45.22636);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMaximum(46301.17);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__679 = new TH1D("data_mc_ratio__679","",30,0,6);
   data_mc_ratio__679->SetBinContent(1,1.328515);
   data_mc_ratio__679->SetBinContent(2,1.247615);
   data_mc_ratio__679->SetBinContent(3,1.223437);
   data_mc_ratio__679->SetBinContent(4,1.173955);
   data_mc_ratio__679->SetBinContent(5,1.734301);
   data_mc_ratio__679->SetBinContent(6,1.33244);
   data_mc_ratio__679->SetBinContent(7,1.493611);
   data_mc_ratio__679->SetBinContent(8,1.228116);
   data_mc_ratio__679->SetBinContent(9,1.102269);
   data_mc_ratio__679->SetBinContent(10,1.231393);
   data_mc_ratio__679->SetBinContent(11,1.11393);
   data_mc_ratio__679->SetBinContent(12,1.26892);
   data_mc_ratio__679->SetBinContent(13,1.263029);
   data_mc_ratio__679->SetBinContent(14,0.9222743);
   data_mc_ratio__679->SetBinContent(15,1.073733);
   data_mc_ratio__679->SetBinContent(16,1.186045);
   data_mc_ratio__679->SetBinContent(17,1.471298);
   data_mc_ratio__679->SetBinContent(18,1.162298);
   data_mc_ratio__679->SetBinContent(19,1.571626);
   data_mc_ratio__679->SetBinContent(20,1.733886);
   data_mc_ratio__679->SetBinContent(21,2.188736);
   data_mc_ratio__679->SetBinContent(22,1.100316);
   data_mc_ratio__679->SetBinContent(23,0.8181904);
   data_mc_ratio__679->SetBinContent(24,1.995618);
   data_mc_ratio__679->SetBinContent(25,1.382258);
   data_mc_ratio__679->SetBinContent(26,1.709625);
   data_mc_ratio__679->SetBinContent(27,1.600806);
   data_mc_ratio__679->SetBinContent(28,2.416949);
   data_mc_ratio__679->SetBinContent(29,1.871001);
   data_mc_ratio__679->SetBinContent(30,0.8445937);
   data_mc_ratio__679->SetBinContent(31,7.154821);
   data_mc_ratio__679->SetBinError(1,0.01198808);
   data_mc_ratio__679->SetBinError(2,0.005640873);
   data_mc_ratio__679->SetBinError(3,0.005711634);
   data_mc_ratio__679->SetBinError(4,0.006274875);
   data_mc_ratio__679->SetBinError(5,0.01038169);
   data_mc_ratio__679->SetBinError(6,0.00900133);
   data_mc_ratio__679->SetBinError(7,0.01114635);
   data_mc_ratio__679->SetBinError(8,0.01006078);
   data_mc_ratio__679->SetBinError(9,0.009794176);
   data_mc_ratio__679->SetBinError(10,0.0117838);
   data_mc_ratio__679->SetBinError(11,0.01128236);
   data_mc_ratio__679->SetBinError(12,0.01353519);
   data_mc_ratio__679->SetBinError(13,0.01412639);
   data_mc_ratio__679->SetBinError(14,0.01091468);
   data_mc_ratio__679->SetBinError(15,0.01357634);
   data_mc_ratio__679->SetBinError(16,0.01590038);
   data_mc_ratio__679->SetBinError(17,0.02130974);
   data_mc_ratio__679->SetBinError(18,0.01828861);
   data_mc_ratio__679->SetBinError(19,0.0268155);
   data_mc_ratio__679->SetBinError(20,0.03228665);
   data_mc_ratio__679->SetBinError(21,0.04422817);
   data_mc_ratio__679->SetBinError(22,0.02434948);
   data_mc_ratio__679->SetBinError(23,0.01995586);
   data_mc_ratio__679->SetBinError(24,0.05391592);
   data_mc_ratio__679->SetBinError(25,0.04429041);
   data_mc_ratio__679->SetBinError(26,0.06371397);
   data_mc_ratio__679->SetBinError(27,0.07130555);
   data_mc_ratio__679->SetBinError(28,0.1370526);
   data_mc_ratio__679->SetBinError(29,0.1465481);
   data_mc_ratio__679->SetBinError(30,0.09160905);
   data_mc_ratio__679->SetBinError(31,2.015866);
   data_mc_ratio__679->SetMinimum(0.4);
   data_mc_ratio__679->SetMaximum(1.6);
   data_mc_ratio__679->SetEntries(395.2887);
   data_mc_ratio__679->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__679->SetLineColor(ci);
   data_mc_ratio__679->SetLineWidth(2);
   data_mc_ratio__679->SetMarkerStyle(20);
   data_mc_ratio__679->SetMarkerSize(1.2);
   data_mc_ratio__679->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__679->GetXaxis()->SetRange(1,30);
   data_mc_ratio__679->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__679->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__679->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__679->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__679->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__679->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1494[30] = {
   0.1050061,
   0.07363926,
   0.06504846,
   0.07791455,
   0.08169904,
   0.1703926,
   0.1073148,
   0.1253027,
   0.1245308,
   0.1427921,
   0.1388399,
   0.1566006,
   0.1607019,
   0.162712,
   0.1841869,
   0.1991458,
   0.2078806,
   0.2439579,
   0.1908357,
   0.2417668,
   0.343406,
   0.3509383,
   0.3199511,
   0.1776533,
   0.5360994,
   0.2243902,
   0.2701867,
   0.3893597,
   0.4231864,
   0.4866494};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1494,Graph_from_mc_statistical_error_fy1494,Graph_from_mc_statistical_error_fex1494,Graph_from_mc_statistical_error_fey1494);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1494 = new TH1F("Graph_Graph_from_mc_statistical_error1494","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1494->SetMinimum(0.3566807);
   Graph_Graph_from_mc_statistical_error1494->SetMaximum(1.643319);
   Graph_Graph_from_mc_statistical_error1494->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1494->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1494->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1494);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
