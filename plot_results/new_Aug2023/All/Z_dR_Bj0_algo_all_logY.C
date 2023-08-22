void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Tue Aug 22 09:17:29 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(0,0,1,1);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.449543,6.314516,16.03651);
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
   st->SetMinimum(0.3);
   st->SetMaximum(5.046456e+13);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0.036978);
   st_stack_148->SetMaximum(1.94045e+14);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetLabelSize(0.035);
   st_stack_148->GetXaxis()->SetTitleSize(0.035);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetLabelSize(0.05);
   st_stack_148->GetYaxis()->SetTitleSize(0.057);
   st_stack_148->GetYaxis()->SetTitleOffset(1.2);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetLabelSize(0.035);
   st_stack_148->GetZaxis()->SetTitleSize(0.035);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,348384.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1263478);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,1223272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,999030.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,692453);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,452642.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,367815.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,249016.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,199139.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,186685.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,137875.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,157880.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,92548.96);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,87009.43);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,75910.16);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,61182.47);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,49333.47);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,39652.79);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,31287.93);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,28057.84);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,17686.53);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,9172.055);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,6746.665);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,4383.754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,3032.727);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,2855.094);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(27,513.4354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(28,1052.932);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(29,298.317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(30,756.0816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1656.97);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,5866.116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,23389.09);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,17642.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,27230.93);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,22991.11);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,12861.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,36200.92);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,8971.463);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,7904.286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,28174.41);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,7344.232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,28162.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,5448.418);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,6141.077);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,5080.511);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,4159.71);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,4007.278);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,3749.983);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2965.256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,3615.102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,2777.767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,1437.022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,1627.907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,1028.509);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,814.7829);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,1559.701);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(27,315.5038);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(28,530.3874);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(29,77.01422);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(30,441.6725);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,626.1505);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,1824.406);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,9488.121);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,10427.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,7549.978);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,4907.763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,3296.729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,2290.783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,1731.053);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,1354.509);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,1102.041);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,918.5678);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,774.5959);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,673.8818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,577.9819);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,521.4194);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,448.8565);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,384.8322);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,330.3648);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,256.4655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,184.7545);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,107.2798);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,64.59727);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,37.53855);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,26.05528);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,12.33298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,12.44783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,7.469539);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,7.216832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.402747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.900698);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,6.901536);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,16.79471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,37.19812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,38.72156);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,32.9136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,26.49049);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,21.79351);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,18.14696);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,15.66554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,13.89356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,12.5582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,11.36021);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,10.43215);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,9.84838);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,8.994315);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,8.740201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,8.005054);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,7.318091);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,6.924954);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,6.139996);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,5.157601);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,3.888256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,2.90183);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,2.255125);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.879104);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.130559);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,1.348066);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.8581391);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,1.002248);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.6362982);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.5670424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.9001752);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(1,29025.85);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(2,182299);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(3,189728.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(4,123170.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(5,73971.72);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(6,47556.18);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(7,33071.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(8,24620.49);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(9,19383.97);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(10,15811.87);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(11,13274.37);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(12,11293.53);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(13,9890.879);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(14,8694.179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(15,7847.178);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(16,7053.271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(17,6170.582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(18,5279.116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(19,4117.209);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(20,2820.858);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(21,1578.491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(22,736.3956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(23,360.3867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(24,204.8382);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(25,132.5133);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(26,84.45659);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(27,56.43935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(28,41.07621);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(29,30.37938);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(30,19.23667);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(31,48.8875);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(1,44.14744);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(2,110.2304);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(3,111.8404);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(4,89.68416);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(5,69.35108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(6,55.55767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(7,46.3025);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(8,39.90621);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(9,35.40579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(10,31.95254);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(11,29.28282);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(12,27.01157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(13,25.29206);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(14,23.73679);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(15,22.59753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(16,21.46268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(17,20.09536);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(18,18.61526);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(19,16.45217);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(20,13.60591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(21,10.14928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(22,6.890705);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(23,4.788562);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(24,3.591786);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(25,2.878718);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(26,2.287197);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(27,1.882396);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(28,1.588899);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(29,1.375136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(30,1.094541);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(31,1.748658);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(1,2091.211);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(2,7873.458);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(3,6981.095);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(4,4917.274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(5,3218.522);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(6,2069.392);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(7,1573.775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(8,1179.455);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(9,924.4733);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(10,741.2349);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(11,640.0884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(12,508.9326);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(13,449.9853);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(14,382.3669);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(15,363.7882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(16,312.1471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(17,247.5139);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(18,207.8372);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(19,158.6583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(20,85.91491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(21,65.35066);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(22,37.94502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(23,16.90168);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(24,16.38165);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(25,9.270965);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(26,11.1808);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(27,4.589754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(28,6.451459);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.021932);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.397546);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(31,4.88435);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(1,20.89247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(2,60.40818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(3,69.92308);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(4,60.94914);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(5,49.92275);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(6,38.58936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(7,35.14578);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(8,30.0962);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(9,25.2832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(10,24.09488);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(11,21.89662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(12,18.91432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(13,17.37311);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(14,15.88099);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(15,17.76754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(16,16.48999);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(17,13.93226);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(18,13.22931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(19,10.3924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(20,6.076969);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(21,5.281849);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(22,5.242709);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(23,2.116063);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(24,3.023187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(25,1.665459);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(26,2.740252);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(27,1.015611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(28,3.236355);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6816224);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(30,0.6916832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(31,1.06764);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(1,1137.633);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(2,3219.647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(3,2693.854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(4,1949.397);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(5,1223.736);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(6,894.176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(7,613.782);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(8,474.4581);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(9,326.8527);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(10,314.0449);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(11,258.121);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(12,214.6753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(13,151.8585);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(14,187.8556);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(15,118.0214);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(16,122.0176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(17,82.83284);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(18,61.7058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(19,74.21323);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(20,51.4903);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(21,32.31086);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(22,14.05627);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(23,11.01855);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(24,3.937412);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(25,5.051986);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(26,5.413084);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.096784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(28,4.665274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.7798926);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.3224554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(31,1.341429);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(1,21.15714);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(2,66.7212);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(3,74.26579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(4,67.31656);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(5,50.24282);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(6,45.51837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(7,35.81541);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(8,34.89933);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(9,23.99131);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(10,25.65115);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(11,25.25294);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(12,23.68452);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(13,15.44645);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(14,23.55147);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(15,14.99199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(16,16.88424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(17,12.34553);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(18,11.62219);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(19,14.1973);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(20,9.56966);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(21,10.56679);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(22,3.243211);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(23,3.519625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(24,1.236467);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(25,2.504126);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(26,2.014141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(27,0.4438616);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(28,1.996321);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(29,0.3999542);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(30,0.2283159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(31,0.5207605);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(1,11.27048);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(2,33.92903);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(3,25.99036);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(4,19.53342);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(5,11.67148);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(6,6.789312);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(7,5.201456);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(8,3.888045);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(9,4.985075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(10,1.826424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(11,1.5242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(12,1.5242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(13,1.070865);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(14,1.537283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(15,2.350763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(16,0.6044472);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(17,0.7686413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(18,0.6175295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.7686413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(20,0.4533354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(22,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.4664177);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(1,1.820914);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(2,3.194471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(3,2.655025);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(4,2.343185);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(5,1.780236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(6,1.618458);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(7,1.247736);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(8,1.081875);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(9,1.221287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(10,0.5725081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(11,0.5311271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(12,0.5311271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(13,0.4621598);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(14,0.5795207);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(15,0.9135699);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(16,0.3022236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(17,0.409783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(18,0.3809033);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(19,0.409783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(20,0.2617333);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(22,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(24,0.3496464);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(1,15.92628);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(2,48.462);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(3,32.68087);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(4,23.83821);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(5,14.66506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(6,10.31945);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(7,8.312715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(8,6.261485);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(9,5.18735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(10,3.345384);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(11,2.447583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(12,1.437557);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(13,2.784258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(14,1.640638);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(15,2.600795);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(16,1.571152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.6519812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(18,1.213107);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(19,1.100882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.4489005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(21,0.7953844);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(22,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(1,1.899751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(2,3.341514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(3,2.680111);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(4,2.353461);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(5,1.792033);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(6,1.709256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(7,1.335143);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(8,1.16385);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(9,1.194194);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(10,0.6629243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(11,0.5819904);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(12,0.4747237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(13,0.6135929);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(14,0.558736);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(15,0.9031389);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(16,0.4199079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(17,0.3704068);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(18,0.4474077);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(19,0.4331041);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(20,0.2244502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(21,0.5925832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(22,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(1,32.87671);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(2,131.6152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(3,88.55679);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(4,42.92445);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(5,34.30209);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(6,16.55598);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(7,14.14961);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(8,13.64213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(9,9.889003);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(10,8.531472);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(11,4.817889);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.487127);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.421781);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.902559);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(15,4.83227);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(16,4.285249);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(17,2.941069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.344179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(19,0.8248912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.370368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(21,1.863982);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(22,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(27,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(1,2.966629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(2,5.938323);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(3,4.863865);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(4,3.385174);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(5,3.022256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(6,2.103827);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(7,1.945136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(8,1.911563);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(9,1.626839);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(10,1.509131);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(11,1.136328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(12,1.089268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(13,0.8076426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(14,0.8759001);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(15,1.140069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(16,1.071935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(17,0.8872424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6015368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(19,0.4763759);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(20,0.6130217);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(21,0.7052489);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(22,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(23,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(27,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(1,21.19504);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(2,96.74274);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(3,59.89995);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(4,31.07367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(5,17.33234);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(6,12.00615);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(7,8.76839);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(8,7.31563);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.069385);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(10,5.009272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.140632);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(12,3.327261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(13,2.979395);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.499712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.28399);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.919199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.529307);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.365461);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(19,1.074124);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.7714754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.4842514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.236651);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.08993895);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.05477865);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.02879582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.01924326);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.004121852);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.008660942);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01601303);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(1,0.2086747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(2,0.4448148);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(3,0.3430392);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(4,0.2455784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1826745);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(6,0.153143);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1304248);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1193648);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1095575);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09954433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(11,0.09131514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(12,0.08122458);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(13,0.07739587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(14,0.06932759);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(15,0.06652069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(16,0.06148506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05386882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(18,0.05131323);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04515728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03874751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03101774);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(22,0.02153026);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(23,0.01315576);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(24,0.01092935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(25,0.007596479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(26,0.006056324);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(27,0.002379753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(28,0.00194306);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(30,0.004536675);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005609086);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(1,6.204478);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(2,38.55153);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(3,35.0743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(4,20.42348);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(5,12.05669);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(6,7.918746);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(7,5.826236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(8,4.748325);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(9,3.944763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(10,3.074642);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.477246);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.129847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.926927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.689917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.65258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.310051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(17,1.115248);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.8831073);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.6818108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.501618);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3149317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.1412322);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.06493436);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.04707741);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.01461023);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.02435039);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.008116795);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.01623359);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.006493436);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.009740155);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.01136351);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(1,0.05936098);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(2,0.1479685);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(3,0.1411377);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(4,0.1076994);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(5,0.08274894);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(6,0.06706202);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(7,0.05752312);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(8,0.05193004);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(9,0.04733243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(10,0.04178743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03750878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03477944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03308119);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(14,0.03097998);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(15,0.03063583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02727674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02516715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(18,0.02239521);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01967797);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01687854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01337385);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(22,0.008956026);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(23,0.006072754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(24,0.005170764);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(25,0.00288056);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(26,0.003718787);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(27,0.002147043);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003036377);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(29,0.001920373);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(30,0.002351968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(31,0.002540415);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.1846233);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.7650647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.5202048);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.275709);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.1760531);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.1067328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.06428292);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.08117878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.06220967);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.04675187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.03067934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.04112637);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.02204882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.02728257);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.01861831);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.0226973);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.007712026);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.008171272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(1,0.02021622);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(2,0.04160024);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(3,0.03461424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(4,0.02538199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(5,0.02058098);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(6,0.01533125);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(7,0.01207564);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(8,0.0137813);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(9,0.011672);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(10,0.0100371);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(11,0.008402599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(12,0.009666256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(13,0.007116793);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(14,0.00807642);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(15,0.006362907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(17,0.007076957);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(19,0.003918236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(20,0.004201636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.04145271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.2904867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.2351242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.1367753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.0781201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.05850319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.04004743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.03995336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.03084687);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.02725199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.01860441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.01694491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.01522775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.01395861);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.009521423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.01135476);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.008403235);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.005717599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.003723664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.002293928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.001844611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0008645283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(1,0.003471482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(2,0.009267912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(3,0.008345474);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(4,0.006329971);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(5,0.004832088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(6,0.004118501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(7,0.003411585);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(8,0.003473891);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(9,0.003039591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(10,0.002814912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(11,0.002376032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(12,0.002232397);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(13,0.002124069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(14,0.002074454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(15,0.001663261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001817706);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(17,0.001597931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(18,0.001313426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(19,0.001021662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0008317484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0007193555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0005104245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all__406 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all__406","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(1,175178);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(2,665705);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(3,613854);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(4,455375);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(5,299043);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(6,200359);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(7,144340);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(8,109397);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(9,87525);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(10,71765);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(11,59855);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(12,51119);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(13,43465);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(14,37331);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(15,32449);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(16,27852);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(17,23138);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(18,18922);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(19,14814);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(20,10723);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(21,6941);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(22,4347);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(23,2721);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(24,1944);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(25,1428);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(26,962);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(27,707);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(28,487);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(29,335);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(30,234);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(31,625);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetEntries(3162969);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all__406->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295[30] = {
   382551,
   1466709,
   1433346,
   1136757,
   775865,
   506512.7,
   405407.9,
   277058.1,
   221159.6,
   204676.3,
   152981.9,
   170685.6,
   103726.8,
   96862.12,
   84774.32,
   69128.47,
   56226.27,
   45537.25,
   35898.94,
   31204.41,
   19474,
   10025.96,
   7172.933,
   4635.851,
   3191.939,
   2968.637,
   583.3093,
   1112.36,
   335.021,
   779.9573};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295[30] = {
   5866.383,
   23389.55,
   17643.33,
   27231.25,
   22991.34,
   12861.98,
   36200.99,
   8971.684,
   7904.455,
   28174.46,
   7344.376,
   28162.23,
   5448.535,
   6141.195,
   5080.622,
   4159.84,
   4007.378,
   3750.077,
   2965.36,
   3615.15,
   2777.813,
   1437.055,
   1627.921,
   1028.522,
   814.7943,
   1559.707,
   315.5127,
   530.4044,
   77.03326,
   441.6748};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMinimum(232.189);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMaximum(1639082);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__407 = new TH1D("data_mc_ratio__407","",30,0,6);
   data_mc_ratio__407->SetBinContent(1,0.4579206);
   data_mc_ratio__407->SetBinContent(2,0.4538767);
   data_mc_ratio__407->SetBinContent(3,0.4282665);
   data_mc_ratio__407->SetBinContent(4,0.4005915);
   data_mc_ratio__407->SetBinContent(5,0.3854318);
   data_mc_ratio__407->SetBinContent(6,0.3955656);
   data_mc_ratio__407->SetBinContent(7,0.3560365);
   data_mc_ratio__407->SetBinContent(8,0.3948522);
   data_mc_ratio__407->SetBinContent(9,0.3957549);
   data_mc_ratio__407->SetBinContent(10,0.3506268);
   data_mc_ratio__407->SetBinContent(11,0.3912554);
   data_mc_ratio__407->SetBinContent(12,0.2994922);
   data_mc_ratio__407->SetBinContent(13,0.4190335);
   data_mc_ratio__407->SetBinContent(14,0.3854035);
   data_mc_ratio__407->SetBinContent(15,0.3827692);
   data_mc_ratio__407->SetBinContent(16,0.402902);
   data_mc_ratio__407->SetBinContent(17,0.4115158);
   data_mc_ratio__407->SetBinContent(18,0.4155279);
   data_mc_ratio__407->SetBinContent(19,0.4126584);
   data_mc_ratio__407->SetBinContent(20,0.3436373);
   data_mc_ratio__407->SetBinContent(21,0.3564239);
   data_mc_ratio__407->SetBinContent(22,0.4335746);
   data_mc_ratio__407->SetBinContent(23,0.3793427);
   data_mc_ratio__407->SetBinContent(24,0.4193405);
   data_mc_ratio__407->SetBinContent(25,0.4473769);
   data_mc_ratio__407->SetBinContent(26,0.3240545);
   data_mc_ratio__407->SetBinContent(27,1.21205);
   data_mc_ratio__407->SetBinContent(28,0.4378077);
   data_mc_ratio__407->SetBinContent(29,0.9999372);
   data_mc_ratio__407->SetBinContent(30,0.3000164);
   data_mc_ratio__407->SetBinContent(31,0.3635808);
   data_mc_ratio__407->SetBinError(1,0.001094083);
   data_mc_ratio__407->SetBinError(2,0.0005562846);
   data_mc_ratio__407->SetBinError(3,0.000546615);
   data_mc_ratio__407->SetBinError(4,0.0005936317);
   data_mc_ratio__407->SetBinError(5,0.000704824);
   data_mc_ratio__407->SetBinError(6,0.0008837188);
   data_mc_ratio__407->SetBinError(7,0.0009371328);
   data_mc_ratio__407->SetBinError(8,0.001193801);
   data_mc_ratio__407->SetBinError(9,0.001337705);
   data_mc_ratio__407->SetBinError(10,0.001308847);
   data_mc_ratio__407->SetBinError(11,0.001599227);
   data_mc_ratio__407->SetBinError(12,0.001324629);
   data_mc_ratio__407->SetBinError(13,0.002009921);
   data_mc_ratio__407->SetBinError(14,0.001994715);
   data_mc_ratio__407->SetBinError(15,0.00212489);
   data_mc_ratio__407->SetBinError(16,0.002414189);
   data_mc_ratio__407->SetBinError(17,0.002705351);
   data_mc_ratio__407->SetBinError(18,0.003020763);
   data_mc_ratio__407->SetBinError(19,0.003390428);
   data_mc_ratio__407->SetBinError(20,0.003318503);
   data_mc_ratio__407->SetBinError(21,0.004278148);
   data_mc_ratio__407->SetBinError(22,0.006576109);
   data_mc_ratio__407->SetBinError(23,0.007272228);
   data_mc_ratio__407->SetBinError(24,0.009510836);
   data_mc_ratio__407->SetBinError(25,0.01183885);
   data_mc_ratio__407->SetBinError(26,0.01044794);
   data_mc_ratio__407->SetBinError(27,0.04558383);
   data_mc_ratio__407->SetBinError(28,0.01983896);
   data_mc_ratio__407->SetBinError(29,0.0546324);
   data_mc_ratio__407->SetBinError(30,0.01961269);
   data_mc_ratio__407->SetBinError(31,0.1332314);
   data_mc_ratio__407->SetMinimum(0.4);
   data_mc_ratio__407->SetMaximum(1.6);
   data_mc_ratio__407->SetEntries(271.9832);
   data_mc_ratio__407->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__407->SetLineColor(ci);
   data_mc_ratio__407->SetLineWidth(2);
   data_mc_ratio__407->SetMarkerStyle(20);
   data_mc_ratio__407->SetMarkerSize(1.2);
   data_mc_ratio__407->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__407->GetXaxis()->SetRange(1,30);
   data_mc_ratio__407->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__407->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__407->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__407->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__407->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__407->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__407->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__407->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__407->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__407->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__407->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__407->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__407->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__407->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1296[30] = {
   0.0153349,
   0.01594696,
   0.0123092,
   0.02395522,
   0.02963318,
   0.0253932,
   0.08929522,
   0.03238196,
   0.03574095,
   0.1376537,
   0.04800813,
   0.1649948,
   0.05252776,
   0.06340141,
   0.05993115,
   0.0601755,
   0.07127234,
   0.08235186,
   0.08260299,
   0.1158538,
   0.1426422,
   0.1433334,
   0.2269533,
   0.2218627,
   0.2552662,
   0.5253951,
   0.5409011,
   0.4768278,
   0.2299356,
   0.5662807};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1296,Graph_from_mc_statistical_error_fy1296,Graph_from_mc_statistical_error_fex1296,Graph_from_mc_statistical_error_fey1296);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1296 = new TH1F("Graph_Graph_from_mc_statistical_error1296","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1296->SetMinimum(0.3204631);
   Graph_Graph_from_mc_statistical_error1296->SetMaximum(1.679537);
   Graph_Graph_from_mc_statistical_error1296->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1296->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1296);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
