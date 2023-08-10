void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:28:36 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(0,0,1,1);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1020.322,6.314516,1019312);
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
   st->SetMaximum(873598.6);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0.01);
   st_stack_138->SetMaximum(917278.5);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetLabelSize(0.035);
   st_stack_138->GetXaxis()->SetTitleSize(0.035);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetLabelSize(0.05);
   st_stack_138->GetYaxis()->SetTitleSize(0.057);
   st_stack_138->GetYaxis()->SetTitleOffset(1.2);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetLabelSize(0.035);
   st_stack_138->GetZaxis()->SetTitleSize(0.035);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,149611.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,339661.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,270670.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,181339.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,156061.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,84698.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,66560.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,60281.69);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,62951.85);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,43347.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,31015.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,31465.63);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,25932.94);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,20800.32);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,11402.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,11724.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,6393.016);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,5126.328);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,4092.262);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1861.946);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1297.428);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,408.0796);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,158.5802);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,706.3364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,50.95351);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,272.4028);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,86.64339);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,50.95351);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,6.808747);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,28.88113);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,6.808747);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,15173.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,16235.34);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,7250.826);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,5679.989);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,21559.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,3775.098);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,3177.565);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3755.978);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,15063.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2842.341);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2178.745);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2962.531);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2131.032);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2182.268);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,1317.139);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1466.901);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,992.0966);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,981.286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,901.0963);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,549.5604);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,473.2328);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,271.8833);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,52.01277);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,384.0224);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,31.94901);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,268.3435);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,40.00809);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,31.94901);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,6.808747);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,23.09868);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,6.808747);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,727.6053);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,2537.263);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2194.998);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1467.605);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,987.4391);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,698.051);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,539.99);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,439.8798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,369.5836);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,304.6639);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,235.0824);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,197.3053);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,161.2332);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,131.6434);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,106.7177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,84.00618);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,58.71824);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,43.08184);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,30.75732);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,17.82176);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.62378);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.402292);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,3.411545);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.272575);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,2.944964);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.541121);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.032419);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.4288724);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.2356193);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.4383874);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.7067121);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,10.76587);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,19.21209);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,17.83736);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,14.64646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,12.00609);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,10.02373);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,8.751808);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,7.984997);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,7.213642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,6.549923);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.642942);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.276158);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.758407);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.253848);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.787055);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.478946);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.846676);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.365973);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.105574);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.491293);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.236018);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.9366725);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.4734637);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5730992);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.6941633);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3638489);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2255505);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.1430278);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1053722);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.146284);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3022212);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,12842.94);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,48016.59);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,40471.43);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,24420.25);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,15139.15);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,10396.17);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,7799.74);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,6261.071);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,5065.091);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4099.148);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3318.621);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,2785.947);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2372.69);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2084.337);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,1736.955);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1430.94);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1088.096);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,791.9093);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,541.561);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,336.9605);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,177.0392);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,92.5379);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,48.92842);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,30.76278);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,19.63467);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,12.81908);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,9.814882);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,5.323846);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,5.011805);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,3.234124);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,6.346235);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,28.5117);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,54.85468);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,50.22846);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,38.93159);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,30.59952);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,25.31276);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,21.89257);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,19.61068);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,17.63866);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,15.86589);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,14.27696);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,13.07511);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,12.09765);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,11.3604);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,10.3775);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,9.433243);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,8.233542);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,7.015071);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,5.811953);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,4.568606);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.290838);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.368);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.721151);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.354241);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.086289);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.8772425);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.7693907);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.5587022);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.5438425);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.4403921);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.6119904);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,726.2679);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2063.913);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1594.925);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1051.686);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,705.9508);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,477.6486);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,380.4505);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,334.2802);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,276.0328);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,230.3767);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,191.2274);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,152.0412);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,132.1471);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,88.59942);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,83.89055);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,63.4156);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,42.02308);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,31.9123);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,14.88157);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,12.60479);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,6.644566);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,3.730763);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,3.538478);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,2.158323);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,0.7068436);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,0.4617232);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.1746112);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.7068436);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(29,0.3534218);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.06630981);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.4197316);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,12.10241);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,31.05023);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,31.12195);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,25.52514);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,21.13619);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,17.45437);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,15.29073);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,14.03858);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,11.91979);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,13.05546);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,10.42377);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,9.936246);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,10.36149);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,5.929021);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,7.476341);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,7.557348);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,5.602538);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,5.942044);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,3.241629);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,3.219891);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,2.922804);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,2.763099);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,2.758319);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.8149352);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.4998139);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.3696433);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.1269889);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.4998139);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(29,0.3534218);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.06630981);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.3595886);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,329.864);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,742.5163);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,535.911);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,333.4684);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,196.4638);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,197.5061);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,133.5067);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,79.03964);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,77.01966);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,69.66877);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,61.24311);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,56.04307);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,34.97122);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,22.08895);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,27.25119);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,13.22545);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,9.869931);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,7.284842);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,3.53919);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,4.810528);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,1.688618);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,1.663622);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,0.3714352);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(25,0.1624047);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.1763629);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,12.24263);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,31.43225);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,29.87622);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,21.03678);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,10.9893);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,20.14123);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,14.15973);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,6.581761);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,9.138237);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,9.156612);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,8.999313);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,10.6169);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,7.631976);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,3.275895);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,7.614096);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,6.722556);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,2.274529);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,2.419182);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,1.695535);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,2.099496);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,1.197031);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.6950251);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,0.3714352);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(25,0.1148375);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.1763629);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.08120236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,4.729588);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,4.414282);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,1.576529);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.261224);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.221174);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.179767);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.7050454);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,8.677976);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,22.81068);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,9.669745);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,7.686208);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,3.471191);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,2.23148);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.215017);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,2.727364);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.239711);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,0.9917687);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.466846);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,2.378178);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.548398);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.380484);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9277147);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.7438266);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,1.022292);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.8223312);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5544156);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,18.99192);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,32.91933);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,16.71289);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,6.077415);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,5.064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,1.012902);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.192998);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,2.887216);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.057215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.240547);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.132459);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8007697);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,10.31575);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,24.57562);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,14.81547);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,8.183797);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,4.504561);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,3.096179);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,2.548654);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.256318);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,1.846079);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,1.487523);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.248485);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.053056);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.8866992);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.7510293);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.5685211);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.4942258);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.2697245);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.2325768);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.1421303);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.0952919);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.04845351);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.0290721);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.006460468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.006460468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.1290781);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.1992298);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.1546891);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1149686);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.08529591);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.07071556);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.06415898);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06036736);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05460433);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.04901554);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.0449049);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04124086);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.0378434);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03482815);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03030228);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.02825301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02087191);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.0193814);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01515114);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01240595);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.008846359);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.006852361);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,3.49322);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,12.00921);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,9.334465);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.827147);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,3.427709);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.331854);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.867473);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.524578);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.355411);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.068075);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.8238609);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.7280824);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.6194506);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.5497935);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.4660391);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.373163);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2719944);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1807767);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1368264);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.0957785);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.04477956);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.0178289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.01119489);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.008707136);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.005390132);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.003317004);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002487753);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.002073128);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0008292511);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002487753);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.03805757);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.07056435);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.06221179);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.04915368);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.03769902);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.03109415);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.02782629);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.02514218);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02370629);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.02104403);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.01848226);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.01737474);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.01602623);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.01509829);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01390078);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01243877);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.0106196);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.008657635);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.007532047);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.006301763);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.004308915);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002718881);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.002154457);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.001900053);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.001494954);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001172738);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.001015621);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0009271309);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0005863691);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.001015621);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.06953105);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.1690869);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08533356);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.0104822);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.01634624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01161243);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.007067098);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.0052411);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07764452);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.05958282);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.03550057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01432479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01224873);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.009965071);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.006020564);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.004567324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.007473804);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.003944507);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.004014902);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.003517063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002714796);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001724502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.001594649);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.001438334);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001117991);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0009737568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0009049321);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__378 = new TH1D("VbbHcc_algo_H_dR_Bj0__378","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(1,25002);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(2,57697);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(3,46044);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(4,31038);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(5,20245);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(6,14590);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(7,11481);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(8,9641);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(9,8002);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(10,6566);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(11,5520);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(12,4457);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(13,3823);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(14,3009);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(15,2355);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(16,1850);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(17,1353);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(18,943);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(19,627);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(20,398);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(21,247);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(22,158);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(23,95);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(24,66);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(25,51);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(26,17);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(27,19);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(28,9);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(29,11);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(30,6);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(31,19);
   VbbHcc_algo_H_dR_Bj0__378->SetEntries(255368);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__378->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__378->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275[30] = {
   164284.4,
   393119.4,
   315524,
   208649.7,
   173109.1,
   96481.66,
   75425.88,
   67409.11,
   68747.39,
   48060.28,
   34827.84,
   34661.04,
   28638.39,
   23131.37,
   13359.1,
   13318.04,
   7592.52,
   6001.69,
   4684.286,
   2234.582,
   1495.268,
   512.4627,
   214.8478,
   742.6264,
   74.41101,
   287.228,
   97.84739,
   57.49797,
   12.49162,
   32.61995};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275[30] = {
   15173.11,
   16235.51,
   7251.151,
   5680.238,
   21559.37,
   3775.291,
   3177.721,
   3756.07,
   15063.75,
   2842.437,
   2178.843,
   2962.601,
   2131.111,
   2182.312,
   1317.228,
   1466.971,
   992.1533,
   981.335,
   901.1251,
   549.5949,
   473.2566,
   271.9101,
   52.11776,
   384.0261,
   31.97912,
   268.3454,
   40.01672,
   31.95823,
   6.840863,
   23.10344};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMinimum(5.085686);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMaximum(450289.8);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__379 = new TH1D("data_mc_ratio__379","",30,0,6);
   data_mc_ratio__379->SetBinContent(1,0.1521873);
   data_mc_ratio__379->SetBinContent(2,0.1467671);
   data_mc_ratio__379->SetBinContent(3,0.1459287);
   data_mc_ratio__379->SetBinContent(4,0.1487565);
   data_mc_ratio__379->SetBinContent(5,0.1169494);
   data_mc_ratio__379->SetBinContent(6,0.1512204);
   data_mc_ratio__379->SetBinContent(7,0.1522157);
   data_mc_ratio__379->SetBinContent(8,0.1430222);
   data_mc_ratio__379->SetBinContent(9,0.1163972);
   data_mc_ratio__379->SetBinContent(10,0.1366201);
   data_mc_ratio__379->SetBinContent(11,0.1584939);
   data_mc_ratio__379->SetBinContent(12,0.1285882);
   data_mc_ratio__379->SetBinContent(13,0.1334922);
   data_mc_ratio__379->SetBinContent(14,0.1300831);
   data_mc_ratio__379->SetBinContent(15,0.1762843);
   data_mc_ratio__379->SetBinContent(16,0.1389094);
   data_mc_ratio__379->SetBinContent(17,0.1782017);
   data_mc_ratio__379->SetBinContent(18,0.1571224);
   data_mc_ratio__379->SetBinContent(19,0.1338518);
   data_mc_ratio__379->SetBinContent(20,0.1781093);
   data_mc_ratio__379->SetBinContent(21,0.1651877);
   data_mc_ratio__379->SetBinContent(22,0.3083151);
   data_mc_ratio__379->SetBinContent(23,0.4421735);
   data_mc_ratio__379->SetBinContent(24,0.08887376);
   data_mc_ratio__379->SetBinContent(25,0.6853824);
   data_mc_ratio__379->SetBinContent(26,0.05918642);
   data_mc_ratio__379->SetBinContent(27,0.1941799);
   data_mc_ratio__379->SetBinContent(28,0.1565273);
   data_mc_ratio__379->SetBinContent(29,0.88059);
   data_mc_ratio__379->SetBinContent(30,0.1839365);
   data_mc_ratio__379->SetBinContent(31,1.329867);
   data_mc_ratio__379->SetBinError(1,0.0009624787);
   data_mc_ratio__379->SetBinError(2,0.0006110155);
   data_mc_ratio__379->SetBinError(3,0.0006800708);
   data_mc_ratio__379->SetBinError(4,0.0008443629);
   data_mc_ratio__379->SetBinError(5,0.0008219379);
   data_mc_ratio__379->SetBinError(6,0.001251938);
   data_mc_ratio__379->SetBinError(7,0.001420592);
   data_mc_ratio__379->SetBinError(8,0.001456607);
   data_mc_ratio__379->SetBinError(9,0.001301197);
   data_mc_ratio__379->SetBinError(10,0.001686025);
   data_mc_ratio__379->SetBinError(11,0.002133256);
   data_mc_ratio__379->SetBinError(12,0.001926104);
   data_mc_ratio__379->SetBinError(13,0.002159005);
   data_mc_ratio__379->SetBinError(14,0.002371427);
   data_mc_ratio__379->SetBinError(15,0.003632606);
   data_mc_ratio__379->SetBinError(16,0.003229577);
   data_mc_ratio__379->SetBinError(17,0.004844656);
   data_mc_ratio__379->SetBinError(18,0.005116609);
   data_mc_ratio__379->SetBinError(19,0.005345525);
   data_mc_ratio__379->SetBinError(20,0.008927814);
   data_mc_ratio__379->SetBinError(21,0.01051064);
   data_mc_ratio__379->SetBinError(22,0.02452824);
   data_mc_ratio__379->SetBinError(23,0.04536605);
   data_mc_ratio__379->SetBinError(24,0.0109396);
   data_mc_ratio__379->SetBinError(25,0.09597273);
   data_mc_ratio__379->SetBinError(26,0.01435482);
   data_mc_ratio__379->SetBinError(27,0.04454793);
   data_mc_ratio__379->SetBinError(28,0.05217576);
   data_mc_ratio__379->SetBinError(29,0.2655079);
   data_mc_ratio__379->SetBinError(30,0.07509176);
   data_mc_ratio__379->SetBinError(31,0.7070356);
   data_mc_ratio__379->SetMinimum(0.4);
   data_mc_ratio__379->SetMaximum(1.6);
   data_mc_ratio__379->SetEntries(74.74218);
   data_mc_ratio__379->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__379->SetLineColor(ci);
   data_mc_ratio__379->SetLineWidth(2);
   data_mc_ratio__379->SetMarkerStyle(20);
   data_mc_ratio__379->SetMarkerSize(1.2);
   data_mc_ratio__379->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__379->GetXaxis()->SetRange(1,30);
   data_mc_ratio__379->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__379->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__379->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__379->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__379->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__379->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1276[30] = {
   0.09235882,
   0.04129918,
   0.0229813,
   0.02722381,
   0.1245421,
   0.03912962,
   0.04213038,
   0.05572051,
   0.2191174,
   0.05914317,
   0.06256037,
   0.08547351,
   0.07441448,
   0.09434425,
   0.09860156,
   0.1101492,
   0.1306751,
   0.1635098,
   0.1923719,
   0.2459497,
   0.3165028,
   0.530595,
   0.2425799,
   0.5171188,
   0.4297633,
   0.9342592,
   0.4089707,
   0.5558149,
   0.5476359,
   0.708261};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1276,Graph_from_mc_statistical_error_fy1276,Graph_from_mc_statistical_error_fex1276,Graph_from_mc_statistical_error_fey1276);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1276 = new TH1F("Graph_Graph_from_mc_statistical_error1276","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1276->SetMinimum(0.0591667);
   Graph_Graph_from_mc_statistical_error1276->SetMaximum(2.121111);
   Graph_Graph_from_mc_statistical_error1276->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1276->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1276);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
