void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(0,0,1,1);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-385.0338,6.314516,384948.8);
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
   st->SetMaximum(329919.4);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0.3);
   st_stack_152->SetMaximum(346415.4);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetRange(1,30);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetLabelSize(0.035);
   st_stack_152->GetXaxis()->SetTitleSize(0.035);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetLabelSize(0.05);
   st_stack_152->GetYaxis()->SetTitleSize(0.057);
   st_stack_152->GetYaxis()->SetTitleOffset(1.2);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetLabelSize(0.035);
   st_stack_152->GetZaxis()->SetTitleSize(0.035);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,755.7652);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,139329);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,138924.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,88497.14);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,66440.24);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,56615.77);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,41971.78);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,34454.68);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,22994.36);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,22113.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,16703.38);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,12919.41);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,10119.75);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,10262.08);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,11833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,8564.508);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,9508.35);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,8128.664);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,9944.879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,9124.994);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,7038.912);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,8993.731);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(23,5081.03);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,4393.751);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(25,3094.716);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(26,3002.474);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(27,1544.919);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(28,1722.106);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(29,627.2815);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(30,248.9963);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(31,1423.593);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,371.2047);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,21036.73);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,6275.16);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,4464.096);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,4266.266);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,4111.308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,3783.887);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,3529.274);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,2340.009);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,2634.561);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,2463.057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,1438.304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,1157.898);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,1772.876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,1904.354);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,1522.508);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,1261.718);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,1734.559);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,1862.475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,1813.221);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,1057.104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,1827.261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(23,799.3651);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,764.783);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(25,596.5553);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(26,657.2923);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(27,301.4673);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(28,523.2687);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(29,277.4658);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(30,51.01209);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(31,581.5461);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.9497408);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,273.4517);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,599.2984);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,739.6972);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,694.608);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,580.6775);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,478.4056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,386.258);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,305.3452);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,246.7647);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,201.4623);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,164.2336);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,148.8577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,127.9483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,119.4553);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,116.6996);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,97.66074);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,93.26877);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,89.81101);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,78.16106);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,69.38783);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(22,59.40282);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,48.28641);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,39.12574);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,24.91577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(26,21.36506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,13.168);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(28,8.27996);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(29,7.116298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(30,3.941328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(31,6.567774);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,0.4019549);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,6.571893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,9.353105);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,10.15214);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,9.660984);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,8.829475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,8.074952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,7.161213);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,6.310216);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,5.655553);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,5.062957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,4.565251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,4.414085);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,4.071061);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,3.93439);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,3.971339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,3.442535);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,3.454531);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,3.463674);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,3.214952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,3.072044);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(22,2.873428);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,2.573721);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,2.444317);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,1.829962);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(26,1.788062);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,1.396355);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(28,1.144301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(29,1.082351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(30,0.7779297);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(31,1.018098);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(1,10.72502);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(2,2955.539);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(3,7018.66);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(4,8435.399);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(5,7670.08);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(6,6071.52);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(7,4715.433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(8,3636.172);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(9,2857.467);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(10,2299.379);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(11,1898.725);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(12,1619.232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(13,1418.622);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(14,1253.739);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(15,1154.167);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(16,1080.755);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(17,1001.701);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(18,920.3601);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(19,856.2879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(20,760.9611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(21,673.629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(22,540.533);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(23,400.4965);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(24,291.3785);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(25,193.1563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(26,128.1351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(27,74.82922);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(28,46.49012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(29,26.37559);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(30,16.75405);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(31,24.67374);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(1,0.7799499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(2,13.56487);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(3,20.91941);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(4,22.83513);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(5,21.66207);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(6,19.19874);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(7,16.89463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(8,14.80062);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(9,13.10445);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(10,11.74551);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(11,10.66207);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(12,9.851942);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(13,9.233491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(14,8.663681);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(15,8.31633);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(16,8.066481);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(17,7.770173);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(18,7.45531);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(19,7.198296);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(20,6.793623);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(21,6.385684);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(22,5.739097);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(23,4.922953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(24,4.206812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(25,3.418993);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(26,2.782447);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(27,2.114193);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(28,1.658207);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(29,1.252581);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(30,0.9956983);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(31,1.201764);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(1,2.259491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(2,805.5388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(3,1311.537);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(4,837.3847);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(5,480.894);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(6,307.1749);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(7,218.3111);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(8,188.826);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(9,152.9583);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(10,113.975);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(11,110.9051);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(12,76.93389);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(13,64.89506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(14,65.16798);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(15,71.24874);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(16,60.26835);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(17,49.97687);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(18,57.23952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(19,43.79735);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(20,55.0899);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(21,49.47164);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(22,46.33867);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(23,43.43353);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(24,32.43307);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(25,25.77502);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(26,18.81723);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(27,15.81676);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(28,8.553324);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(29,4.02592);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(30,5.171862);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(31,2.809442);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(1,0.4907293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(2,16.01371);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(3,29.16663);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(4,27.98831);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(5,22.74989);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(6,14.47643);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(7,11.34128);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(8,10.70549);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(9,11.55909);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(10,7.100581);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(11,8.609357);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(12,5.900802);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(13,5.120176);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(14,5.822832);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(15,7.979851);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(16,5.767618);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(17,4.23818);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(18,6.293646);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(19,4.988171);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(20,5.831334);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(21,4.337816);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(22,4.846833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(23,5.599434);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(24,3.768094);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(25,2.269669);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(26,1.898163);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(27,1.686814);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(28,1.040276);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(29,0.7001057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(30,2.739469);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8466957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(1,1.745555);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(2,496.025);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(3,560.6363);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(4,358.2016);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(5,240.6315);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(6,204.4179);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(7,143.9556);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(8,122.4523);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(9,83.69592);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(10,63.62031);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(11,68.57966);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(12,46.40763);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(13,43.57759);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(14,37.56132);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(15,41.76135);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(16,28.9645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(17,28.25304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(18,30.10525);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(19,30.59526);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(20,35.62281);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(21,26.27823);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(22,39.19098);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(23,23.90334);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(24,17.02784);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(25,11.90077);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(26,7.834272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(27,8.983172);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(28,7.309016);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(29,2.604869);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(30,1.136328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(31,2.860993);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(1,0.5477377);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(2,27.91819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(3,30.05392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(4,25.26754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(5,18.43436);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(6,18.98419);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(7,16.51923);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(8,14.16519);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(9,11.42916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(10,8.140916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(11,13.61504);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(12,5.431076);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(13,5.494948);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(14,7.679776);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(15,7.96673);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(16,4.45777);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(17,6.972671);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(18,7.358316);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(19,5.001253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(20,7.861595);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(21,4.540064);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(22,10.05438);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(23,6.741854);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(24,3.091734);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(25,1.910532);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(26,1.09101);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(27,2.503397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(28,2.250616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(29,0.634928);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(30,0.3420276);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(31,1.134918);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(2,1.263938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(3,1.867269);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(4,1.00618);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.9764033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(6,1.265834);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.5765829);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(8,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.8938938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(11,0.4593733);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(12,0.4891497);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(13,0.2577581);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(15,0.5765829);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(16,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(17,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(18,0.3749677);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(19,0.3734539);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(22,0.4608871);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(24,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(2,0.4366198);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(3,0.5263694);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(4,0.4104759);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(5,0.3776322);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(6,0.4747523);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(7,0.3627392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(8,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(10,0.4533155);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(11,0.2505895);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(12,0.297791);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(13,0.1488167);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(15,0.3627392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(16,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(17,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(18,0.3015478);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(19,0.2353995);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(21,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(22,0.3135494);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(24,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(2,6.35236);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(3,11.5209);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(4,6.03379);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(5,1.881901);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(6,1.708931);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.809234);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.5097128);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(10,1.14875);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.3290433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.5943726);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(13,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.3927574);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.6818058);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(16,0.1911423);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(17,0.4459987);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(18,0.3527624);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(19,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(21,0.2548564);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(22,0.7987611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(23,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(30,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(2,0.7054575);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(3,0.934376);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(4,0.6909218);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(5,0.4301582);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(6,0.4978932);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(7,0.380125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(8,0.2014817);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1802107);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(10,0.4708852);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(11,0.220834);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(12,0.3057381);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(13,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(14,0.2298415);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(15,0.3692913);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(16,0.1103561);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(17,0.1685717);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(18,0.2959872);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(19,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(21,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(22,0.3406242);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(23,0.142469);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(24,0.142469);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(25,0.09010534);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(26,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(29,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(30,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(2,14.84884);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(3,20.11025);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(4,10.72891);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(5,4.048726);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(6,1.518038);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(7,2.133454);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(8,1.117786);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(9,0.7516297);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(10,0.7783353);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(11,1.675254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(12,0.3661568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(13,0.9384028);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(14,0.7249242);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(15,0.7709459);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(17,0.385473);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(18,0.3735461);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(20,0.9043079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.5648566);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.385473);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(27,0.572246);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(2,1.684369);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(3,1.956808);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(4,1.423541);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(5,0.8642494);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(6,0.5374377);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(7,0.6447707);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(8,0.4569209);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(9,0.3764492);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(10,0.3898824);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(11,0.5593754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(12,0.2589647);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(13,0.4202358);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(14,0.3625186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(15,0.3863969);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(17,0.2732239);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(18,0.264137);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(20,0.4044728);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(21,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(22,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(23,0.3268483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(24,0.2732239);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(26,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(27,0.3309614);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(1,0.01008911);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(2,4.563946);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(3,9.490537);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(4,7.436181);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(5,3.97305);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(6,2.021662);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(7,1.186366);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(8,0.7842567);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(9,0.6849577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(10,0.4812025);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(11,0.4492305);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(12,0.3894927);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(13,0.3443259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(14,0.3550826);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(15,0.3162028);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(16,0.3005823);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(17,0.3192308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(18,0.3050474);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.3214785);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.297594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.3341287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.3533563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.2810079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.2555113);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.1642029);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1001292);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.04228186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.02667675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.009182716);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.007368396);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(1,0.004249754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(2,0.08984298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(3,0.1289163);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1135611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(5,0.08288899);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(6,0.05844952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(7,0.04513159);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(8,0.03669819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(9,0.03433102);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(10,0.02899088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(11,0.02794605);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(12,0.02602762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(13,0.02448881);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(14,0.02502081);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(15,0.02332908);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(16,0.02332499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(17,0.02353553);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(18,0.02345928);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(19,0.02371657);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(20,0.02298302);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(21,0.02408954);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(22,0.02505512);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(23,0.02236567);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02139383);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(25,0.01707067);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01334613);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(27,0.008469236);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(28,0.006574616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(29,0.003839054);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(30,0.003305349);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(31,0.001615117);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(1,0.01095053);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(2,2.291399);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(3,5.044088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(4,4.545839);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(5,2.74037);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(6,1.59604);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(7,0.9595403);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(8,0.6529254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(9,0.5078309);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(10,0.3422041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(11,0.3682116);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(12,0.2518622);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(13,0.2628127);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(14,0.2285923);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(15,0.1943719);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.2381741);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.2107977);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.2368052);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.2231171);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.2190106);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.2285923);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.2258547);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.1984784);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.1286687);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.1026612);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.04380212);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.04790857);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01368816);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.005475266);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.005475266);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.004106449);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(1,0.002289978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(2,0.03312562);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(3,0.04914791);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(4,0.04665742);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(5,0.03622583);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(6,0.02764621);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(7,0.02143608);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(8,0.01768257);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(9,0.01559456);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(10,0.01280137);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(11,0.01327891);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(12,0.01098235);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(13,0.01121855);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(14,0.01046272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(15,0.009647848);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(16,0.01067975);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(17,0.01004724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01064901);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01033666);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01024109);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01046272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01039988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(23,0.00974923);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(24,0.007849649);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(25,0.007011597);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(26,0.004579956);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(27,0.004789832);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(28,0.002560273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(29,0.001619259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(30,0.001619259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(31,0.001402319);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.4232163);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.5688335);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.2768638);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.08955975);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.02882907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.02682333);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.02362907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.02158958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.008866782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.007712026);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.007050266);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.008407537);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.008866782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.00659102);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.003856013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.01160179);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.01202728);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(21,0.01861831);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(22,0.01133177);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.01318204);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.01206104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.004315259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(1,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(2,0.03069616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(3,0.03564192);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(4,0.02547997);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(5,0.01452716);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(6,0.007933391);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(7,0.007932678);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(8,0.007290126);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(9,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(10,0.006953242);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(11,0.004509506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(12,0.003918236);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(13,0.004178244);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(15,0.004246701);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(16,0.004509506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(17,0.003893142);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(18,0.002770611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(19,0.005274079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(20,0.005032895);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(21,0.006362907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(22,0.004759005);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(23,0.005505734);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(24,0.005487903);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(25,0.003158712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.110213);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.2156812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.116798);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.03282885);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.01534263);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.0101098);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.009325709);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.007515876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.005809987);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.007307934);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.002617088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.004622298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.002270425);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003331956);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.003227341);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.004529911);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.003008796);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.003665719);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.004438196);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.004322305);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.006143749);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.00345845);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.004887849);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.003250844);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(26,0.001671448);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(2,0.005704353);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(3,0.00793144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(4,0.005873268);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(5,0.003177911);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(6,0.002160241);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001699084);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(8,0.001665076);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001478029);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001300961);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(11,0.001490219);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(12,0.0008551675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(13,0.001180025);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0008614485);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009525261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0009849047);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(17,0.001193754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0009315577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(19,0.001041745);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(20,0.001139768);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(21,0.001175563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(22,0.001367635);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(23,0.0009812489);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(24,0.001180729);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(25,0.0009590356);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(26,0.0006951415);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all__303 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all__303","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(1,207);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(2,57614);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(3,70065);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(4,52543);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(5,43260);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(6,34564);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(7,27292);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(8,21954);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(9,17268);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(10,14226);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(11,11765);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(12,10239);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(13,8829);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(14,8152);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(15,7482);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(16,6978);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(17,6327);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(18,5573);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(19,5435);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(20,5304);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(21,4852);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(22,4522);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(23,4046);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(24,3327);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(25,2621);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(26,1959);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(27,1321);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(28,825);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(29,561);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(30,255);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetBinContent(31,481);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetEntries(439847);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all__303->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1_all__303->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__303->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__303->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303[30] = {
   771.4684,
   143889.4,
   148463.7,
   98897.97,
   75540.2,
   63787.71,
   47533.58,
   38791.7,
   26396.29,
   24841.11,
   18986.35,
   14828.32,
   11797.58,
   11748.41,
   13222.18,
   9852.11,
   10687.49,
   9231.287,
   10966.51,
   10056.33,
   7858.963,
   9681.259,
   5598.529,
   4774.907,
   3350.866,
   3179.027,
   1658.379,
   1792.779,
   667.4825,
   276.0764};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303[30] = {
   371.2064,
   21036.76,
   6275.342,
   4464.325,
   4266.433,
   4111.432,
   3783.986,
   3529.357,
   2340.111,
   2634.615,
   2463.138,
   1438.367,
   1157.968,
   1772.928,
   1904.41,
   1522.552,
   1261.773,
   1734.606,
   1862.505,
   1813.263,
   1057.146,
   1827.307,
   799.4325,
   764.8141,
   596.5753,
   657.3043,
   301.4932,
   523.2785,
   277.4723,
   51.1024};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMinimum(202.4766);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMaximum(181396.2);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__304 = new TH1D("data_mc_ratio__304","",30,0,6);
   data_mc_ratio__304->SetBinContent(1,0.2683195);
   data_mc_ratio__304->SetBinContent(2,0.4004048);
   data_mc_ratio__304->SetBinContent(3,0.4719334);
   data_mc_ratio__304->SetBinContent(4,0.5312849);
   data_mc_ratio__304->SetBinContent(5,0.5726752);
   data_mc_ratio__304->SetBinContent(6,0.5418599);
   data_mc_ratio__304->SetBinContent(7,0.5741625);
   data_mc_ratio__304->SetBinContent(8,0.5659458);
   data_mc_ratio__304->SetBinContent(9,0.6541828);
   data_mc_ratio__304->SetBinContent(10,0.5726798);
   data_mc_ratio__304->SetBinContent(11,0.6196556);
   data_mc_ratio__304->SetBinContent(12,0.690503);
   data_mc_ratio__304->SetBinContent(13,0.748374);
   data_mc_ratio__304->SetBinContent(14,0.6938814);
   data_mc_ratio__304->SetBinContent(15,0.5658672);
   data_mc_ratio__304->SetBinContent(16,0.7082747);
   data_mc_ratio__304->SetBinContent(17,0.5920008);
   data_mc_ratio__304->SetBinContent(18,0.6037078);
   data_mc_ratio__304->SetBinContent(19,0.4956);
   data_mc_ratio__304->SetBinContent(20,0.527429);
   data_mc_ratio__304->SetBinContent(21,0.6173842);
   data_mc_ratio__304->SetBinContent(22,0.467088);
   data_mc_ratio__304->SetBinContent(23,0.7226898);
   data_mc_ratio__304->SetBinContent(24,0.6967675);
   data_mc_ratio__304->SetBinContent(25,0.7821859);
   data_mc_ratio__304->SetBinContent(26,0.6162263);
   data_mc_ratio__304->SetBinContent(27,0.7965612);
   data_mc_ratio__304->SetBinContent(28,0.4601795);
   data_mc_ratio__304->SetBinContent(29,0.8404714);
   data_mc_ratio__304->SetBinContent(30,0.9236574);
   data_mc_ratio__304->SetBinContent(31,0.3293369);
   data_mc_ratio__304->SetBinError(1,0.01864949);
   data_mc_ratio__304->SetBinError(2,0.001668151);
   data_mc_ratio__304->SetBinError(3,0.001782913);
   data_mc_ratio__304->SetBinError(4,0.002317768);
   data_mc_ratio__304->SetBinError(5,0.002753373);
   data_mc_ratio__304->SetBinError(6,0.002914573);
   data_mc_ratio__304->SetBinError(7,0.003475499);
   data_mc_ratio__304->SetBinError(8,0.003819601);
   data_mc_ratio__304->SetBinError(9,0.004978266);
   data_mc_ratio__304->SetBinError(10,0.004801428);
   data_mc_ratio__304->SetBinError(11,0.005712871);
   data_mc_ratio__304->SetBinError(12,0.006823965);
   data_mc_ratio__304->SetBinError(13,0.007964581);
   data_mc_ratio__304->SetBinError(14,0.007685164);
   data_mc_ratio__304->SetBinError(15,0.006541927);
   data_mc_ratio__304->SetBinError(16,0.008478836);
   data_mc_ratio__304->SetBinError(17,0.007442577);
   data_mc_ratio__304->SetBinError(18,0.008086903);
   data_mc_ratio__304->SetBinError(19,0.006722511);
   data_mc_ratio__304->SetBinError(20,0.007242062);
   data_mc_ratio__304->SetBinError(21,0.008863293);
   data_mc_ratio__304->SetBinError(22,0.006945978);
   data_mc_ratio__304->SetBinError(23,0.01136159);
   data_mc_ratio__304->SetBinError(24,0.01207985);
   data_mc_ratio__304->SetBinError(25,0.01527835);
   data_mc_ratio__304->SetBinError(26,0.01392269);
   data_mc_ratio__304->SetBinError(27,0.02191633);
   data_mc_ratio__304->SetBinError(28,0.01602139);
   data_mc_ratio__304->SetBinError(29,0.03548473);
   data_mc_ratio__304->SetBinError(30,0.05784167);
   data_mc_ratio__304->SetBinError(31,0.1319932);
   data_mc_ratio__304->SetMinimum(0.4);
   data_mc_ratio__304->SetMaximum(1.6);
   data_mc_ratio__304->SetEntries(870.099);
   data_mc_ratio__304->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__304->SetLineColor(ci);
   data_mc_ratio__304->SetLineWidth(2);
   data_mc_ratio__304->SetMarkerStyle(20);
   data_mc_ratio__304->SetMarkerSize(1.2);
   data_mc_ratio__304->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__304->GetXaxis()->SetRange(1,30);
   data_mc_ratio__304->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__304->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__304->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__304->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__304->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__304->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__304->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__304->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__304->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__304->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__304->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__304->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__304->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__304->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__304->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__304->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__304->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1304[30] = {
   0.4811687,
   0.146201,
   0.04226852,
   0.04514072,
   0.05647897,
   0.06445492,
   0.07960659,
   0.09098226,
   0.08865303,
   0.1060587,
   0.129732,
   0.09700134,
   0.09815299,
   0.150908,
   0.1440314,
   0.1545407,
   0.1180608,
   0.1879051,
   0.1698358,
   0.1803106,
   0.1345147,
   0.1887468,
   0.1427933,
   0.1601736,
   0.1780362,
   0.2067627,
   0.1818,
   0.2918812,
   0.4156998,
   0.1851024};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1304,Graph_from_mc_statistical_error_fy1304,Graph_from_mc_statistical_error_fex1304,Graph_from_mc_statistical_error_fey1304);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1304 = new TH1F("Graph_Graph_from_mc_statistical_error1304","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1304->SetMinimum(0.4225976);
   Graph_Graph_from_mc_statistical_error1304->SetMaximum(1.577402);
   Graph_Graph_from_mc_statistical_error1304->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1304->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1304->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1304);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
