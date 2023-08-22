void Z_dR_Bj0_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Tue Aug 22 09:18:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(0,0,1,1);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.876049,6.314516,12.59971);
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
   st->SetMaximum(3.220087e+10);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",30,0,6);
   st_stack_243->SetMinimum(0.001378562);
   st_stack_243->SetMaximum(1.127537e+11);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,30);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.2");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8369.917);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,38505.9);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,37245.95);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,21089.99);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,20565.15);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,14750.41);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,12119.68);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,7775.563);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7821.068);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,8332.887);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,6305.306);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5514.28);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,4006.43);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,5153.367);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3498.89);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,4683.913);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2858.193);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,1723.974);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2343.241);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,1506.009);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,784.7589);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,969.1449);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,576.3516);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,403.7498);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,321.9693);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,563.1358);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,176.9521);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,422.6914);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,44.96388);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,43.70963);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,39.62767);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,660.2184);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,2615.799);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,3557.722);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,1966.806);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2058.417);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,1675.678);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,2225.364);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1160.4);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1162.64);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1321.445);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,1086.299);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1018.872);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,783.1728);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,1073.687);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,686.1015);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,1069.217);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,763.3331);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,414.7939);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,664.5783);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,540.5231);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,138.2906);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,390.3452);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,115.6064);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,100.1129);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,83.17798);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,374.9517);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,57.1447);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,371.2572);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,34.90615);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,34.89387);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,33.82535);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,49.57406);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,182.0514);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,215.133);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,169.6763);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,132.5313);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,101.8792);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,79.62561);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,63.86662);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,54.33038);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,54.58705);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,45.12874);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,37.9253);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,33.21098);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,23.99381);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,23.67457);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,21.05648);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,17.71108);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,17.31571);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,14.09766);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,10.24477);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,7.768516);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,6.645369);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,5.490703);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,5.623328);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,2.953612);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.156487);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,3.079456);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.661571);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,1.392565);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.7105059);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.8756899);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.929439);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,5.504712);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,6.044627);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,5.346214);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,4.692261);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,4.073905);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.521632);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,3.246144);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.918132);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,3.039181);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.719429);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.541073);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.401113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.859806);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.945634);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.819419);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.698498);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.777);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.638774);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.255589);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.037639);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.068299);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.001922);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,1.040554);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.6837445);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5447778);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.8035503);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.5720017);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.5015954);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.3973411);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.4087127);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,791.5323);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,3527.993);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,4145.84);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,3556.991);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2724.809);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,2104.67);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1650.277);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1335.583);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,1106.574);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,942.7204);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,821.9748);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,720.9925);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,629.8671);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,553.6279);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,487.7746);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,420.7871);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,367.0948);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,309.2943);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,268.2279);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,208.5793);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,169.5747);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,136.3104);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,111.3236);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,84.04527);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,57.80251);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,44.91186);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,27.67495);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,16.89867);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,11.14578);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,5.799492);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,11.73074);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,7.353767);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,15.49373);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,16.82307);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,15.5719);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,13.62686);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,11.96629);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,10.58513);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,9.526745);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,8.675756);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,8.006107);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,7.474584);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,7.0056);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,6.550909);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,6.132573);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,5.769695);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,5.352894);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,5.001245);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,4.587295);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,4.278887);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.76229);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,3.399779);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,3.040176);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.750321);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,2.391827);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.969211);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.747324);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.371395);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,1.063839);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.8572974);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.625657);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.8873288);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,146.5251);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,562.9199);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,574.7085);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,394.8867);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,290.0008);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,214.0983);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,167.2259);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,130.724);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,129.4562);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,121.8424);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,90.24296);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,78.67397);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,78.23049);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,69.69295);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,57.18206);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,53.25271);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,38.80449);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,30.82116);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,32.11884);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,27.81896);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,27.8907);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,15.79584);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,8.609153);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,9.774633);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,9.004627);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,5.634095);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,4.647266);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,1.799667);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.9382262);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,0.3803064);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.385407);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,5.090053);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,14.93992);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,18.22158);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,14.10155);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,10.97454);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.650235);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,8.988804);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.214127);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,10.64713);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,9.062415);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,6.426673);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,7.166092);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,7.229628);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,7.180763);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,4.031648);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.438278);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,3.244263);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.952179);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.135013);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,2.961995);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,4.884043);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,2.055455);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.376492);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.496954);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,1.534952);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,1.240167);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.9450431);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.6131821);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3190641);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.2234342);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.5871553);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,24.18045);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,50.72312);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,59.6103);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,32.11214);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,31.19037);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,20.69709);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,18.80036);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,13.45899);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,13.12087);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,7.890051);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,11.76387);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,13.64161);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,7.700994);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,7.606836);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,5.111553);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.471738);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,3.986935);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,5.149049);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,3.863236);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.456432);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,1.422942);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,3.571947);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,1.483248);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.5621443);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,0.2990151);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.30136);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.4238061);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.550474);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.2980898);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009253193);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.1265664);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,4.587782);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.401917);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,12.42619);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,5.268794);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,5.072111);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,3.573803);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,4.042034);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,3.332786);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,2.718889);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,2.393092);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,3.322373);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,4.413431);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,2.433435);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,2.363991);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.051226);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,0.5827137);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.9291281);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,2.264581);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,1.030433);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.459783);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.5248306);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,2.198802);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.5894206);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.2355987);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.1845537);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.6158448);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2214268);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.347059);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.1845514);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.0009253193);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.1265664);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.5709342);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.5709342);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.5709342);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.5709342);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,3.541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.120076);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,4.47063);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,13.41189);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,10.33833);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,8.103016);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,4.750044);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,4.191215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,2.794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,2.235315);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.935839);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.699611);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.504692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,1.152055);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,1.082167);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.8835858);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.7903031);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,2.713992);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,12.34767);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,12.1208);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,7.77614);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,4.937367);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,3.496711);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.589211);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,2.444578);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,2.078742);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.866047);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.857539);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.815);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.443492);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.174078);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.9216796);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.8366015);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.6664453);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.450914);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.3488203);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.2807578);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.2523984);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.2212031);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.2041875);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1417969);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.1474687);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.08791406);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.05671875);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.03119531);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.01417969);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.005671875);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.0877309);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1871289);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1854018);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1485013);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1183303);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.09958138);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.08569037);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.08326265);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.07678009);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.07274608);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.07258005);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.07174417);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.06398166);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.05770279);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.05112559);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.04870882);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.0434741);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.03575981);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.03145207);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.02821722);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.02675418);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.02504632);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.02406373);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.0200531);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.02045023);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.01578983);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.0126827);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.00940574);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.006341349);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.004010621);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.9784917);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,4.7553);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,5.735913);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,4.210201);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,2.794782);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.888404);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,1.380776);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,1.155949);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.9198105);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.9000144);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.798206);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.6539775);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.5825702);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.5090419);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.4687428);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.3718834);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.3139092);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.260884);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1958397);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1788717);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.1343305);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.1265535);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.1131204);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.06575125);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.0530252);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.02969411);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.02403809);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.007070027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.008484032);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.0007070027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0007070027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.02630202);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.05798284);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.06368128);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.05455844);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.0444513);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.03653911);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.0312444);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.02858775);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.02550115);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.02522524);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.02375571);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.02150265);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.02029479);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01897087);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01820446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01621489);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01489747);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.01358108);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.01176687);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.01124557);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.009745359);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.009459051);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.008942955);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.006818087);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.006122823);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.004581901);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.004122498);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.002235739);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.002449129);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0007070027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0007070027);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.0182061);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.05916981);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.04096371);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02730914);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.006436827);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.01160415);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00965524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.00788347);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.02816774);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01977735);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01078764);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.00659245);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.002696911);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.002397254);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.00290528);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002434423);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001797941);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001405515);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.001306174);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0008475574);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__667 = new TH1D("VbbHcc_both_Z_dR_Bj0__667","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(1,13479);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(2,53523);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(3,49315);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(4,36544);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(5,28206);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(6,21535);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(7,17183);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(8,14041);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(9,11843);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(10,10301);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(11,9117);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(12,8213);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(13,7194);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(14,6446);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(15,5612);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(16,4916);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(17,4039);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(18,3555);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(19,3037);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(20,2403);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(21,2112);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(22,1712);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(23,1383);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(24,1123);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(25,851);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(26,648);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(27,437);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(28,256);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(29,167);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(30,82);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(31,149);
   VbbHcc_both_Z_dR_Bj0__667->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__667->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__667->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485[30] = {
   9391.193,
   42862.67,
   42273.61,
   25264.49,
   23757.24,
   17198.27,
   14044.13,
   9324.632,
   9130.628,
   9465.85,
   7278.547,
   6370.578,
   4758.305,
   5811.37,
   4075.142,
   5183.81,
   3286.773,
   2088.108,
   2662.932,
   1755.128,
   991.8025,
   1132.525,
   703.8556,
   504.5969,
   392.789,
   617.5366,
   212.8586,
   443.64,
   58.76121,
   50.60157};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485[30] = {
   660.3028,
   2615.898,
   3557.836,
   1966.933,
   2058.504,
   1675.758,
   2225.415,
   1160.478,
   1162.728,
   1321.506,
   1086.353,
   1018.935,
   783.2412,
   1073.733,
   686.1414,
   1069.246,
   763.3589,
   414.84,
   664.6025,
   540.5461,
   138.4234,
   390.3704,
   115.6535,
   100.1594,
   83.2194,
   374.9589,
   57.17504,
   371.2599,
   34.92222,
   34.90245};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMinimum(14.1292);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMaximum(50413.02);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__668 = new TH1D("data_mc_ratio__668","",30,0,6);
   data_mc_ratio__668->SetBinContent(1,1.435281);
   data_mc_ratio__668->SetBinContent(2,1.248709);
   data_mc_ratio__668->SetBinContent(3,1.166567);
   data_mc_ratio__668->SetBinContent(4,1.446457);
   data_mc_ratio__668->SetBinContent(5,1.187259);
   data_mc_ratio__668->SetBinContent(6,1.252161);
   data_mc_ratio__668->SetBinContent(7,1.2235);
   data_mc_ratio__668->SetBinContent(8,1.505797);
   data_mc_ratio__668->SetBinContent(9,1.297063);
   data_mc_ratio__668->SetBinContent(10,1.088228);
   data_mc_ratio__668->SetBinContent(11,1.252585);
   data_mc_ratio__668->SetBinContent(12,1.289208);
   data_mc_ratio__668->SetBinContent(13,1.511883);
   data_mc_ratio__668->SetBinContent(14,1.109205);
   data_mc_ratio__668->SetBinContent(15,1.37713);
   data_mc_ratio__668->SetBinContent(16,0.9483372);
   data_mc_ratio__668->SetBinContent(17,1.228865);
   data_mc_ratio__668->SetBinContent(18,1.702498);
   data_mc_ratio__668->SetBinContent(19,1.140472);
   data_mc_ratio__668->SetBinContent(20,1.369131);
   data_mc_ratio__668->SetBinContent(21,2.129456);
   data_mc_ratio__668->SetBinContent(22,1.511667);
   data_mc_ratio__668->SetBinContent(23,1.964892);
   data_mc_ratio__668->SetBinContent(24,2.225539);
   data_mc_ratio__668->SetBinContent(25,2.166558);
   data_mc_ratio__668->SetBinContent(26,1.049331);
   data_mc_ratio__668->SetBinContent(27,2.053006);
   data_mc_ratio__668->SetBinContent(28,0.5770444);
   data_mc_ratio__668->SetBinContent(29,2.842011);
   data_mc_ratio__668->SetBinContent(30,1.620503);
   data_mc_ratio__668->SetBinContent(31,2.771967);
   data_mc_ratio__668->SetBinError(1,0.01236255);
   data_mc_ratio__668->SetBinError(2,0.00539748);
   data_mc_ratio__668->SetBinError(3,0.005253155);
   data_mc_ratio__668->SetBinError(4,0.007566542);
   data_mc_ratio__668->SetBinError(5,0.007069273);
   data_mc_ratio__668->SetBinError(6,0.008532725);
   data_mc_ratio__668->SetBinError(7,0.009333716);
   data_mc_ratio__668->SetBinError(8,0.01270771);
   data_mc_ratio__668->SetBinError(9,0.01191874);
   data_mc_ratio__668->SetBinError(10,0.01072211);
   data_mc_ratio__668->SetBinError(11,0.01311841);
   data_mc_ratio__668->SetBinError(12,0.01422565);
   data_mc_ratio__668->SetBinError(13,0.01782514);
   data_mc_ratio__668->SetBinError(14,0.0138155);
   data_mc_ratio__668->SetBinError(15,0.01838299);
   data_mc_ratio__668->SetBinError(16,0.01352561);
   data_mc_ratio__668->SetBinError(17,0.01933602);
   data_mc_ratio__668->SetBinError(18,0.028554);
   data_mc_ratio__668->SetBinError(19,0.02069485);
   data_mc_ratio__668->SetBinError(20,0.02792981);
   data_mc_ratio__668->SetBinError(21,0.04633634);
   data_mc_ratio__668->SetBinError(22,0.03653458);
   data_mc_ratio__668->SetBinError(23,0.05283571);
   data_mc_ratio__668->SetBinError(24,0.06641181);
   data_mc_ratio__668->SetBinError(25,0.07426864);
   data_mc_ratio__668->SetBinError(26,0.0412216);
   data_mc_ratio__668->SetBinError(27,0.0982086);
   data_mc_ratio__668->SetBinError(28,0.03606528);
   data_mc_ratio__668->SetBinError(29,0.2199214);
   data_mc_ratio__668->SetBinError(30,0.1789546);
   data_mc_ratio__668->SetBinError(31,1.760057);
   data_mc_ratio__668->SetMinimum(0.4);
   data_mc_ratio__668->SetMaximum(1.6);
   data_mc_ratio__668->SetEntries(277.7849);
   data_mc_ratio__668->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__668->SetLineColor(ci);
   data_mc_ratio__668->SetLineWidth(2);
   data_mc_ratio__668->SetMarkerStyle(20);
   data_mc_ratio__668->SetMarkerSize(1.2);
   data_mc_ratio__668->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__668->GetXaxis()->SetRange(1,30);
   data_mc_ratio__668->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__668->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__668->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__668->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__668->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__668->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1486[30] = {
   0.07031085,
   0.06102974,
   0.08416211,
   0.07785364,
   0.08664742,
   0.0974376,
   0.1584587,
   0.1244529,
   0.1273437,
   0.1396078,
   0.1492541,
   0.1599438,
   0.1646051,
   0.1847641,
   0.1683724,
   0.2062664,
   0.2322518,
   0.1986679,
   0.2495754,
   0.307981,
   0.1395675,
   0.3446903,
   0.1643143,
   0.1984938,
   0.211868,
   0.6071849,
   0.2686058,
   0.8368493,
   0.5943075,
   0.6897504};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0.1468356);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(2.004219);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
