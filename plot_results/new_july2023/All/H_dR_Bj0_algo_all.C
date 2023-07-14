void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Fri Jul 14 13:38:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(0,0,1,1);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-543.5347,6.314516,543291.1);
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
   st->SetMaximum(465626.3);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0.3);
   st_stack_140->SetMaximum(488907.6);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetLabelSize(0.035);
   st_stack_140->GetXaxis()->SetTitleSize(0.035);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetLabelSize(0.05);
   st_stack_140->GetYaxis()->SetTitleSize(0.057);
   st_stack_140->GetYaxis()->SetTitleOffset(1.2);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetLabelSize(0.035);
   st_stack_140->GetZaxis()->SetTitleSize(0.035);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,92689.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,192075.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,133935.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,89244.35);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,78548.47);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,39317.05);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,27566.15);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,22759.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,16060.96);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,12263.24);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,10499.03);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,12000.02);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,4966.163);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,6477.888);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,4214.046);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,5576.622);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,3099.48);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,1511.745);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,879.8669);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,1844.237);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,333.2582);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,96.61203);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,73.15481);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(25,21.92786);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,268.7956);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,33.09902);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(28,21.92786);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,3308.041);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,6378.433);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,6338.121);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,5819.492);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,20915.41);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,3404.566);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,2818.336);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,3023.247);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,1657.51);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,1421.662);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,1374.049);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,2602.147);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,817.3289);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,1514.494);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,859.4319);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,1113.507);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,802.5899);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,527.3125);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,376.0527);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,1444.445);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,251.1157);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,47.97636);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,42.66261);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(25,21.92786);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,268.7956);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,22.23787);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(28,21.92786);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,488.2195);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,1383.427);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,1060.354);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,695.2382);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,463.9616);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,341.5332);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,263.927);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,228.4884);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,188.3022);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,164.2791);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,122.9296);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,100.6775);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,89.39595);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,69.68825);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,51.82492);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,36.21216);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,28.56681);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,24.98506);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,16.56253);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,9.57528);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,5.767833);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,3.628681);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,3.139161);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,0.9837016);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,0.8768847);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,0.378682);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,0.3865213);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,0.2047025);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,0.4544378);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,0.3121269);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,0.290695);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,9.205709);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,14.07979);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,11.93175);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,9.542503);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,7.77573);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,6.674645);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,5.756372);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,5.421364);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,4.857408);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,4.583151);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,3.792972);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,3.413047);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,3.328785);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,2.971354);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,2.469946);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,2.068395);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,1.727118);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,1.82492);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,1.444608);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,1.080844);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.7570674);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,0.6863312);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,0.6680373);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,0.2208725);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.314839);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.1342081);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.1374486);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.1023551);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.2814185);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.2719072);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.1189528);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(1,3989.236);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(2,13700.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(3,11660.99);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(4,7883.66);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(5,5144.287);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(6,3600.373);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(7,2747.727);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(8,2218.116);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(9,1806.927);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(10,1449.019);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(11,1150.965);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(12,964.9761);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(13,821.7524);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(14,708.9619);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(15,587.0386);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(16,474.595);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(17,370.934);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(18,277.5988);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(19,185.3354);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(20,124.9107);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(21,71.93771);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(22,42.25454);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(23,24.511);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(24,15.12335);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(25,9.642362);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(26,6.231103);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(27,3.532316);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(28,3.464775);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(29,2.182879);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(30,1.173604);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(31,3.121707);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(1,15.40368);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(2,28.71689);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(3,26.69491);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(4,21.98419);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(5,17.76754);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(6,14.85587);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(7,12.97701);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(8,11.68331);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(9,10.54778);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(10,9.445638);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(11,8.420885);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(12,7.70876);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(13,7.129917);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(14,6.636342);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(15,6.038591);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(16,5.427788);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(17,4.797974);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(18,4.142523);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(19,3.371366);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(20,2.773879);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(21,2.101991);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(22,1.613905);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(23,1.225714);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(24,0.9512291);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(25,0.7595721);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(26,0.6047401);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(27,0.4712166);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(28,0.4630022);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(29,0.3661098);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(30,0.2741415);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(31,0.4312389);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(1,717.9177);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(2,1472.435);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(3,985.1573);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(4,567.8501);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(5,369.4418);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(6,267.8227);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(7,205.8221);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(8,166.5131);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(9,112.6113);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(10,110.2562);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(11,60.62349);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(12,75.35747);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(13,57.33463);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(14,41.40283);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(15,36.03555);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(16,26.48859);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(17,15.44648);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(18,15.20433);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(19,11.06677);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(20,2.763996);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(21,1.211898);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(22,1.483486);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(23,5.349542);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(24,0.7474969);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(25,0.279517);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(27,0.4052954);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(1,11.99516);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(2,28.6518);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(3,28.17024);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(4,20.91974);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(5,17.67995);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(6,15.7478);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(7,13.21224);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(8,11.3044);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(9,7.34072);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(10,9.323152);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(11,5.843085);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(12,9.014678);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(13,7.888699);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(14,6.196198);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(15,5.660178);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(16,5.728947);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(17,3.305967);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(18,3.337401);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(19,3.983603);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(20,0.6711218);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(21,0.4956093);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(22,0.6908819);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(23,4.090976);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(24,0.417162);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(25,0.279517);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(27,0.3065126);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(1,407.9062);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(2,839.8048);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(3,468.5074);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(4,312.3042);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(5,190.581);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(6,150.8575);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(7,112.7517);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(8,54.18357);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(9,47.50584);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(10,43.79146);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(11,34.90616);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(12,37.22153);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(13,26.46667);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(14,26.70398);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(15,14.87409);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(16,22.19925);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(17,8.032732);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(18,9.482995);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(19,2.452701);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(20,4.002458);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(21,0.2296559);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(22,0.8547762);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(24,0.1485579);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(26,0.07097071);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(1,15.05325);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(2,35.18488);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(3,28.67004);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(4,25.21326);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(5,19.69377);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(6,17.74077);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(7,15.29215);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(8,6.299333);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(9,5.645255);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(10,11.4225);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(11,7.818002);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(12,8.209692);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(13,7.415719);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(14,7.516464);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(15,3.670654);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(16,9.559769);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(17,2.839648);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(18,6.732353);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(19,0.8578114);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(20,1.911301);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(21,0.1692523);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(22,0.5605519);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(24,0.1485579);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(26,0.07097071);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(1,1.668682);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(2,3.15947);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(3,2.561062);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(4,0.834341);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(5,1.381147);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(6,0.7484216);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(7,0.3734539);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(8,0.575069);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(9,0.1718388);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(11,0.08591938);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(14,0.08591938);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(1,0.5544838);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(2,0.6768071);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(3,0.6909625);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(4,0.3920793);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(5,0.5093344);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(6,0.3825494);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(7,0.2353995);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(8,0.3099381);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(9,0.1215083);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(11,0.08591938);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(14,0.08591938);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(1,8.053592);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(2,11.99832);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(3,6.821201);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(4,2.14723);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(5,2.30885);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(6,1.255233);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(7,0.7113279);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(8,0.6580867);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(9,0.3185705);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(10,0.3185705);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(11,0.1274282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(12,0.2548564);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(14,0.2548564);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(15,0.1274282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(16,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(17,0.1274282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(18,0.1911423);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(19,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(21,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(25,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(1,0.8360611);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(2,0.9934211);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(3,0.8553884);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(4,0.4793164);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(5,0.5524258);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(6,0.4158262);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(7,0.2704155);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(8,0.3123064);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(9,0.142469);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(10,0.142469);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(11,0.09010534);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(12,0.1274282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(14,0.1274282);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(15,0.09010534);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(16,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(17,0.09010534);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(18,0.1103561);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(19,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(21,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(25,0.0637141);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(1,13.40336);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(2,23.94112);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(3,9.790503);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(4,4.609045);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(5,2.288984);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(6,2.987203);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(7,1.137103);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(8,1.282391);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(9,1.171198);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(10,0.7516297);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(11,1.217219);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(12,0.7442403);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(13,0.2060893);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(14,0.3661568);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(16,0.5529298);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(1,1.593506);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(2,2.136784);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(3,1.360099);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(4,0.9228107);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(5,0.6619229);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(6,0.7478418);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(7,0.4651508);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(8,0.4853286);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(9,0.4789209);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(10,0.3764492);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(11,0.4972405);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(12,0.3728382);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(13,0.2060893);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(14,0.2589647);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(16,0.3192912);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(1,7.781355);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(2,12.16604);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(3,5.430502);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(4,2.808606);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(5,1.673783);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(6,1.163976);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(7,0.8952353);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(8,0.7498632);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(9,0.5988108);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(10,0.4409514);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(11,0.3748393);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(12,0.3001916);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(13,0.297159);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(14,0.2390013);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(15,0.1726815);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(16,0.1668052);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(17,0.1204217);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(18,0.07518796);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(19,0.07447462);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(20,0.03774991);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(21,0.01974328);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(22,0.006423941);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(23,0.003665166);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(24,0.003900896);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(25,0.001615117);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(26,0.001615117);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(31,0.001379387);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(1,0.1172507);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(2,0.1462622);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(3,0.09632704);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(4,0.06928142);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(5,0.0535914);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(6,0.04501695);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(7,0.03934784);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(8,0.03604245);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(9,0.03225755);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(10,0.02721007);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(11,0.02587684);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(12,0.02296717);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(13,0.02294143);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(14,0.02056794);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(15,0.01727327);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(16,0.01679838);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(17,0.01429164);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(18,0.01077908);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(19,0.01119801);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(20,0.007424122);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(21,0.005848976);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(22,0.003306496);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(23,0.002669737);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(24,0.002798819);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(25,0.001615117);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(26,0.001615117);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(31,0.001379387);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(1,3.127745);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(2,7.539441);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(3,4.048959);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(4,2.153148);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(5,1.226459);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(6,0.8582479);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(7,0.6816706);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(8,0.5078309);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(9,0.4202266);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(10,0.3093525);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(11,0.2244859);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(12,0.2053225);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(13,0.1560451);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(14,0.1628891);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(15,0.1628891);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(16,0.1108741);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(17,0.08486662);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(18,0.04927739);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(19,0.03832686);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(20,0.02326988);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(21,0.0164258);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(22,0.006844082);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(23,0.005475266);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(24,0.002737633);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(25,0.001368816);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(26,0.002737633);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(27,0.001368816);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(28,0.001368816);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(1,0.03870164);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(2,0.06008738);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(3,0.04403372);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(4,0.03211077);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(5,0.02423485);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(6,0.0202731);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(7,0.01806762);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(8,0.01559456);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(9,0.01418585);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(10,0.0121714);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(11,0.01036832);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(12,0.009915895);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(13,0.008644477);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(14,0.008832015);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(15,0.008832015);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(16,0.007286665);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(17,0.006375029);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(18,0.004857777);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(19,0.004284156);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(20,0.003338188);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(21,0.002804639);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(22,0.001810386);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(23,0.001619259);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(24,0.001144989);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(25,0.0008096295);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(26,0.001144989);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(27,0.0008096295);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(28,0.0008096295);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(1,0.2066577);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(2,0.6358985);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(3,0.3246896);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(4,0.1691655);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(5,0.08143551);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(6,0.03930986);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(7,0.02566857);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(8,0.02843733);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(9,0.01318204);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(10,0.01457306);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(11,0.01044703);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(12,0.007745777);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(13,0.00589551);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(14,0.009326028);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(15,0.01114254);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(16,0.005436264);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(18,0.01160179);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(20,0.004551524);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(1,0.02183437);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(2,0.03777426);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(3,0.02671689);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(4,0.01931847);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(5,0.01402255);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(6,0.009516227);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(7,0.007612116);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(8,0.008379238);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(9,0.005505734);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(10,0.005973014);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(11,0.004778372);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(12,0.004487719);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(13,0.003531947);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(14,0.004757816);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(15,0.005051211);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(16,0.003189589);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(18,0.005274079);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(20,0.003218413);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(1,0.04522237);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(2,0.2237367);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(3,0.1436216);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(4,0.06587961);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(5,0.03588499);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01787827);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(7,0.01115843);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(8,0.008634344);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(9,0.004022985);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(10,0.006708621);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(11,0.001936662);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(12,0.001637342);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(13,0.00423059);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(14,0.00247803);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(15,0.003758106);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(16,0.003066069);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(17,0.002501534);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001337349);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(19,0.002593585);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(1,0.003637617);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(2,0.008106156);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(3,0.006491926);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(4,0.004416746);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(5,0.003284366);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(6,0.002343007);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(7,0.001800224);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(8,0.00159568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(9,0.001101305);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(10,0.001428694);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(11,0.0007511102);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(12,0.000628561);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(13,0.001120702);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(14,0.0008861115);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(15,0.001025984);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(16,0.0009924353);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(17,0.0008572663);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(18,0.0006201436);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(19,0.0008840812);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all__279 = new TH1D("VbbHcc_algo_H_dR_Bj0_all__279","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(1,53864);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(2,117668);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(3,77475);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(4,49336);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(5,32357);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(6,23499);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(7,17595);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(8,14392);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(9,11660);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(10,9352);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(11,7531);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(12,6122);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(13,4845);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(14,3854);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(15,3038);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(16,2287);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(17,1629);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(18,1205);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(19,794);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(20,497);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(21,315);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(22,200);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(23,116);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(24,74);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(25,41);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(26,31);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(27,16);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(28,17);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(29,13);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(30,5);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(31,19);
   VbbHcc_algo_H_dR_Bj0_all__279->SetEntries(439847);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all__279->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all__279->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0_all__279->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0_all__279->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279[30] = {
   98326.63,
   209531.8,
   148139.6,
   98716.19,
   84725.74,
   43684.7,
   30900.21,
   25430.48,
   18219,
   14032.43,
   11870.49,
   13179.76,
   5961.782,
   7325.766,
   4904.297,
   6137.02,
   3522.796,
   1839.345,
   1095.463,
   1985.556,
   412.5079,
   144.8468,
   106.1636,
   17.00974,
   32.79332,
   275.4807,
   37.42452,
   25.59871,
   2.637316,
   1.485731};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279[30] = {
   3308.147,
   6378.675,
   6338.316,
   5819.634,
   20915.44,
   3404.688,
   2818.444,
   3023.302,
   1657.577,
   1421.778,
   1374.115,
   2602.189,
   817.4385,
   1514.542,
   859.4832,
   1113.578,
   802.6179,
   527.3855,
   376.0927,
   1444.449,
   251.1262,
   48.01665,
   42.88104,
   1.072252,
   21.94514,
   268.7963,
   22.2454,
   21.93299,
   0.4617714,
   0.386118};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMinimum(0.9896519);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMaximum(237501.5);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__280 = new TH1D("data_mc_ratio__280","",30,0,6);
   data_mc_ratio__280->SetBinContent(1,0.5478068);
   data_mc_ratio__280->SetBinContent(2,0.5615757);
   data_mc_ratio__280->SetBinContent(3,0.5229864);
   data_mc_ratio__280->SetBinContent(4,0.4997762);
   data_mc_ratio__280->SetBinContent(5,0.3819028);
   data_mc_ratio__280->SetBinContent(6,0.5379229);
   data_mc_ratio__280->SetBinContent(7,0.5694135);
   data_mc_ratio__280->SetBinContent(8,0.5659352);
   data_mc_ratio__280->SetBinContent(9,0.6399913);
   data_mc_ratio__280->SetBinContent(10,0.6664562);
   data_mc_ratio__280->SetBinContent(11,0.6344302);
   data_mc_ratio__280->SetBinContent(12,0.4645);
   data_mc_ratio__280->SetBinContent(13,0.8126764);
   data_mc_ratio__280->SetBinContent(14,0.5260883);
   data_mc_ratio__280->SetBinContent(15,0.6194568);
   data_mc_ratio__280->SetBinContent(16,0.3726564);
   data_mc_ratio__280->SetBinContent(17,0.4624168);
   data_mc_ratio__280->SetBinContent(18,0.6551245);
   data_mc_ratio__280->SetBinContent(19,0.7248074);
   data_mc_ratio__280->SetBinContent(20,0.2503078);
   data_mc_ratio__280->SetBinContent(21,0.7636217);
   data_mc_ratio__280->SetBinContent(22,1.380769);
   data_mc_ratio__280->SetBinContent(23,1.092653);
   data_mc_ratio__280->SetBinContent(24,4.350447);
   data_mc_ratio__280->SetBinContent(25,1.250255);
   data_mc_ratio__280->SetBinContent(26,0.1125306);
   data_mc_ratio__280->SetBinContent(27,0.4275272);
   data_mc_ratio__280->SetBinContent(28,0.664096);
   data_mc_ratio__280->SetBinContent(29,4.929253);
   data_mc_ratio__280->SetBinContent(30,3.365346);
   data_mc_ratio__280->SetBinContent(31,5.565676);
   data_mc_ratio__280->SetBinError(1,0.002360359);
   data_mc_ratio__280->SetBinError(2,0.001637115);
   data_mc_ratio__280->SetBinError(3,0.001878926);
   data_mc_ratio__280->SetBinError(4,0.002250057);
   data_mc_ratio__280->SetBinError(5,0.002123092);
   data_mc_ratio__280->SetBinError(6,0.003509096);
   data_mc_ratio__280->SetBinError(7,0.004292726);
   data_mc_ratio__280->SetBinError(8,0.004717437);
   data_mc_ratio__280->SetBinError(9,0.005926861);
   data_mc_ratio__280->SetBinError(10,0.006891589);
   data_mc_ratio__280->SetBinError(11,0.007310676);
   data_mc_ratio__280->SetBinError(12,0.005936617);
   data_mc_ratio__280->SetBinError(13,0.01167537);
   data_mc_ratio__280->SetBinError(14,0.00847428);
   data_mc_ratio__280->SetBinError(15,0.01123873);
   data_mc_ratio__280->SetBinError(16,0.007792477);
   data_mc_ratio__280->SetBinError(17,0.01145706);
   data_mc_ratio__280->SetBinError(18,0.01887254);
   data_mc_ratio__280->SetBinError(19,0.02572245);
   data_mc_ratio__280->SetBinError(20,0.01122784);
   data_mc_ratio__280->SetBinError(21,0.04302521);
   data_mc_ratio__280->SetBinError(22,0.09763513);
   data_mc_ratio__280->SetBinError(23,0.1014503);
   data_mc_ratio__280->SetBinError(24,0.5057292);
   data_mc_ratio__280->SetBinError(25,0.195257);
   data_mc_ratio__280->SetBinError(26,0.02021108);
   data_mc_ratio__280->SetBinError(27,0.1068818);
   data_mc_ratio__280->SetBinError(28,0.1610669);
   data_mc_ratio__280->SetBinError(29,1.367129);
   data_mc_ratio__280->SetBinError(30,1.505029);
   data_mc_ratio__280->SetBinError(31,1.47047);
   data_mc_ratio__280->SetMinimum(0.4);
   data_mc_ratio__280->SetMaximum(1.6);
   data_mc_ratio__280->SetEntries(107.4437);
   data_mc_ratio__280->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__280->SetLineColor(ci);
   data_mc_ratio__280->SetLineWidth(2);
   data_mc_ratio__280->SetMarkerStyle(20);
   data_mc_ratio__280->SetMarkerSize(1.2);
   data_mc_ratio__280->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__280->GetXaxis()->SetRange(1,30);
   data_mc_ratio__280->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__280->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__280->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__280->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__280->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__280->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__280->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__280->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1280[30] = {
   0.03364446,
   0.03044251,
   0.0427861,
   0.05895318,
   0.2468605,
   0.07793777,
   0.09121116,
   0.118885,
   0.09098066,
   0.1013208,
   0.1157589,
   0.1974382,
   0.1371131,
   0.2067418,
   0.1752511,
   0.1814525,
   0.2278355,
   0.2867246,
   0.3433183,
   0.7274786,
   0.6087792,
   0.3314996,
   0.4039145,
   0.06303751,
   0.6691955,
   0.9757356,
   0.5944071,
   0.8568006,
   0.1750914,
   0.2598842};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1280,Graph_from_mc_statistical_error_fy1280,Graph_from_mc_statistical_error_fex1280,Graph_from_mc_statistical_error_fey1280);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1280 = new TH1F("Graph_Graph_from_mc_statistical_error1280","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1280->SetMinimum(0.02183799);
   Graph_Graph_from_mc_statistical_error1280->SetMaximum(2.170883);
   Graph_Graph_from_mc_statistical_error1280->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1280->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1280);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
