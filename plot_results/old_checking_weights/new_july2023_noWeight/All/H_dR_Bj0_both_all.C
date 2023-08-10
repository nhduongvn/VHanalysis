void H_dR_Bj0_both_all()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Thu Aug  3 12:26:07 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_all->SetHighLightColor(2);
   H_dR_Bj0_both_all->Range(0,0,1,1);
   H_dR_Bj0_both_all->SetFillColor(0);
   H_dR_Bj0_both_all->SetFillStyle(4000);
   H_dR_Bj0_both_all->SetBorderMode(0);
   H_dR_Bj0_both_all->SetBorderSize(2);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-273.6631,6.314516,273689.4);
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
   st->SetMaximum(234564.8);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,6);
   st_stack_236->SetMinimum(0.3);
   st_stack_236->SetMaximum(246293.1);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetRange(1,30);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetLabelSize(0.035);
   st_stack_236->GetXaxis()->SetTitleSize(0.035);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/0.2");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetLabelSize(0.05);
   st_stack_236->GetYaxis()->SetTitleSize(0.057);
   st_stack_236->GetYaxis()->SetTitleOffset(1.2);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetLabelSize(0.035);
   st_stack_236->GetZaxis()->SetTitleSize(0.035);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,19180.7);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,97709.11);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,75882.6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,56211.53);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,50284.03);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,36519.58);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,33641.9);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,28373.59);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,43298.09);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,22127.08);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,20624.64);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,25187.71);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,20236.18);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,19378.1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,13818.73);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,14775.52);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,9056.368);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,5454.649);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,4394.513);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,3990.266);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,2004.235);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,2355.027);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,1606.275);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,503.5715);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,113.302);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,315.5045);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,44.95586);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(28,68.50694);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(29,31.92775);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,1455.091);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,15487.59);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,4114.225);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,4214.024);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,3708.393);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,2573.424);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,3361.235);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,2651.077);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,15096.19);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,2668.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,1925.171);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,2486.139);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,1852.803);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,1864.607);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,1233.837);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,1457.73);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,1081.187);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,751.5654);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,741.4222);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,739.6649);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,487.1106);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,710.9586);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,601.3353);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,96.0353);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,43.93043);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,269.4544);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,18.80236);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(28,34.02981);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(29,31.92775);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,100.2653);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,315.9209);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,380.8336);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,335.0984);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,279.6821);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,236.7251);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,213.9431);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,178.9197);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,158.8982);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,149.9699);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,124.0176);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,122.8089);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,113.4028);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,114.0239);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,104.182);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,101.4944);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,58.35406);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,44.42899);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,29.91845);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,19.85357);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,14.36811);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,8.703212);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,8.126113);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,4.674952);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,2.116955);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,1.297715);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,1.359959);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(28,0.8753546);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(29,0.04860075);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,0.04860075);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,0.4965815);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,4.202975);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,7.081561);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,7.862522);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,7.4047);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,6.820863);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,6.165465);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,5.927963);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,5.442092);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,5.08752);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,5.012966);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,4.390413);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,4.489825);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,4.225458);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,4.33191);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,4.02612);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,4.06543);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,2.974238);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,2.66375);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,2.09727);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,1.55626);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,1.376925);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,0.9821583);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,1.087064);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,0.8052639);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,0.5403486);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,0.4215959);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,0.5089127);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(28,0.3960947);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(29,0.04860075);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.04860075);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,0.3176704);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(1,1578.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(2,6357.19);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(3,7972.991);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(4,7172.208);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(5,6004.23);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(6,4986.561);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(7,4136.534);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(8,3521.808);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(9,3071.738);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(10,2737.26);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(11,2449.083);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(12,2251.864);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(13,2055.67);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(14,1924.416);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(15,1824.318);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(16,1645.058);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(17,1022.215);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(18,691.3809);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(19,465.6499);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(20,318.4439);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(21,216.3668);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(22,138.6843);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(23,93.07265);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(24,59.46035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(25,36.23974);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(26,20.92511);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(27,11.86208);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(28,6.295015);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(29,4.686048);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(30,2.497618);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(31,4.190105);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(1,9.91192);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(2,19.92368);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(3,22.35201);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(4,21.187);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(5,19.36681);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(6,17.63531);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(7,16.04458);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(8,14.78882);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(9,13.8098);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(10,13.04686);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(11,12.33819);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(12,11.83027);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(13,11.30424);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(14,10.94459);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(15,10.66611);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(16,10.12506);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(17,7.96343);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(18,6.554438);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(19,5.37157);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(20,4.436484);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(21,3.660321);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(22,2.928533);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(23,2.391579);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(24,1.91363);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(25,1.493576);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(26,1.128464);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(27,0.8635667);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(28,0.6261624);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(29,0.547302);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(30,0.3922257);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(31,0.5079522);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(1,319.5777);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(2,1008.679);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(3,1089.277);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(4,827.3732);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(5,630.2268);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(6,515.1535);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(7,439.7001);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(8,384.5847);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(9,347.558);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(10,321.7518);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(11,305.2324);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(12,286.2388);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(13,254.1133);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(14,267.7081);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(15,274.6924);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(16,242.8888);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(17,135.4784);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(18,82.56332);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(19,50.43865);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(20,37.03304);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(21,29.12529);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(22,18.00968);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(23,11.2596);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(24,5.910102);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(25,4.523452);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(26,0.5924223);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(27,1.483623);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(28,0.5135967);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(29,0.4124018);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(30,0.4792001);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(31,0.3181317);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(1,8.917472);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(2,19.37193);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(3,23.02941);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(4,21.90691);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(5,18.18667);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(6,17.6557);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(7,15.81214);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(8,15.11467);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(9,15.05809);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(10,12.86327);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(11,13.2364);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(12,13.22472);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(13,10.58036);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(14,11.63182);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(15,12.49379);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(16,9.981868);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(17,8.150431);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(18,5.607043);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(19,3.286266);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(20,2.98925);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(21,3.657108);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(22,2.195815);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(23,3.008322);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(24,1.103892);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(25,1.152073);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(26,0.2318999);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(27,0.7232135);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(28,0.3250833);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(29,0.2948881);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(30,0.3751362);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(31,0.1899279);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(1,37.33141);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(2,94.62877);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(3,110.1902);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(4,77.38059);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(5,66.26895);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(6,54.0485);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(7,33.62644);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(8,43.18589);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(9,32.44618);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(10,36.96013);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(11,30.58981);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(12,34.75286);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(13,30.77577);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(14,27.46608);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(15,23.81581);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(16,27.22864);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(17,12.84716);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(18,14.80382);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(19,7.922507);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(20,3.35622);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(21,4.43651);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(22,3.164214);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(23,0.7836179);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(24,0.4027113);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(25,0.2075754);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(26,0.5632759);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(27,0.001553709);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(29,0.01245686);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(1,3.058727);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(2,11.92788);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(3,11.44625);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(4,8.865098);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(5,5.814263);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(6,6.149727);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(7,3.108651);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(8,7.882794);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(9,4.671125);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(10,5.061388);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(11,3.750147);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(12,4.777494);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(13,4.185153);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(14,3.353406);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(15,2.201411);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(16,4.142969);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(17,2.371256);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(18,2.404455);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(19,2.292731);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(20,0.6486747);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(21,1.280501);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(22,1.302311);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(23,0.4146394);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(24,0.2092785);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(25,0.1233241);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(26,0.414284);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(27,0.001166223);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(29,0.01224507);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(2,0.7673486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(3,0.8551506);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(4,0.4496752);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(7,0.586412);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(15,0.7207813);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(16,0.7673486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(2,0.5511446);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(3,0.5084367);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(4,0.3427432);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(7,0.4715906);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(15,0.4903599);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(16,0.5511446);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(1,0.2181173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(2,1.748876);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(3,1.106395);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(4,0.7515404);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(5,0.5452932);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(7,0.6701599);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(10,0.7515404);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(15,0.6701599);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(16,0.9854658);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(1,0.1542322);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(2,0.6409403);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(3,0.5250765);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(4,0.3833966);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(5,0.2438625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(6,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(7,0.4776297);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(10,0.3833966);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(11,0.1888951);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(15,0.4776297);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(16,0.5723181);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(17,0.1542322);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(1,7.830886);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(2,29.19527);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(3,23.60743);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(4,18.92593);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(5,7.479057);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(6,6.18674);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(7,8.389714);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(8,4.701308);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(9,7.008813);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(10,6.124569);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(11,4.128595);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(12,3.662217);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(13,5.7404);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(14,5.667985);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(15,4.194857);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(16,3.93548);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(17,2.771597);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(18,2.606956);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(19,1.262261);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(1,1.432235);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(2,2.763954);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(3,2.492923);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(4,2.219078);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(5,1.39118);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(6,1.265233);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(7,1.485747);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(8,1.109941);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(9,1.351317);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(10,1.279171);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(11,1.034349);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(12,0.9805743);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(13,1.225728);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(14,1.210192);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(15,1.050582);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(16,1.017642);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(17,0.8363077);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(18,0.8258985);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(19,0.5653713);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(1,6.094692);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(2,26.29455);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(3,26.11901);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(4,18.04184);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(5,11.45036);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(6,8.077733);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(7,6.326942);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(8,5.618835);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(9,5.196549);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(10,4.940805);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(11,4.877833);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(12,4.592521);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(13,4.578896);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(14,4.391003);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(15,4.452594);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(16,3.991241);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(17,2.284196);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(18,1.318845);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(19,0.7230816);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(20,0.3992732);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(21,0.2635664);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(22,0.206651);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(23,0.08282747);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(24,0.04930969);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(25,0.03670297);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(26,0.02612065);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(27,0.008726037);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(28,0.008934576);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(29,0.005274846);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(31,0.003659729);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(1,0.10629);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(2,0.2211361);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(3,0.2188384);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(4,0.181138);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(5,0.1437451);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(6,0.1207361);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(7,0.10723);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(8,0.1012617);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(9,0.0974235);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(10,0.09519254);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(11,0.09456156);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(12,0.0922489);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(13,0.09164394);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(14,0.08973992);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(15,0.09069901);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(16,0.08603021);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(17,0.06465333);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(18,0.04910217);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(19,0.03664931);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(20,0.02713295);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(21,0.02187799);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(22,0.01963039);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(23,0.01197285);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(24,0.009377024);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(25,0.008379621);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(26,0.007356658);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(27,0.003573257);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(28,0.004102883);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(29,0.003117872);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(31,0.002666932);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(1,2.276342);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(2,10.53441);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(3,12.32482);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(4,9.344909);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(5,6.193894);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(6,4.436334);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(7,3.390558);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(8,2.838925);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(9,2.5679);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(10,2.280448);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(11,2.020373);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(12,1.899917);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(13,1.731553);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(14,1.715127);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(15,1.575508);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(16,1.478322);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(17,0.8308715);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(18,0.521519);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(19,0.2997708);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(20,0.1683644);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(21,0.1081365);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(22,0.05749029);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(23,0.04927739);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(24,0.02737633);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(25,0.01505698);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01095053);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(27,0.005475266);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(28,0.004106449);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(29,0.004106449);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(31,0.002737633);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(1,0.03301661);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(2,0.07102624);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(3,0.07682526);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(4,0.06689617);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(5,0.05446225);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(6,0.04609203);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(7,0.04029483);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(8,0.03687149);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(9,0.03506733);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(10,0.03304637);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(11,0.03110495);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(12,0.03016345);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(13,0.02879596);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(14,0.02865905);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(15,0.02746781);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(16,0.02660714);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(17,0.01994714);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(18,0.01580334);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(19,0.01198142);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(20,0.008979225);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(21,0.007196144);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(22,0.005246999);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(23,0.004857777);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(24,0.003620773);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(25,0.002685237);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(26,0.002289978);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(27,0.001619259);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(28,0.001402319);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(29,0.001402319);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(31,0.001144989);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(1,0.03115187);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(2,0.08242151);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(3,0.07143445);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(4,0.05789441);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(5,0.04290914);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(6,0.03361686);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(7,0.03407611);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(8,0.007712026);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(9,0.01341831);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(10,0.01360754);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(11,0.0127228);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(12,0.003856013);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(14,0.008171272);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(15,0.007016515);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(16,0.008171272);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(1,0.008447788);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(2,0.01332965);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(3,0.01202128);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(4,0.01123646);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(5,0.009566994);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(6,0.008583566);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(7,0.008716581);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(8,0.003918236);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(9,0.005540201);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(10,0.005275152);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(11,0.00529263);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(12,0.002770611);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(13,0.003218413);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(14,0.004201636);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(15,0.003559589);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(16,0.004201636);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(1,0.007665873);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(2,0.02816196);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(3,0.03665758);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(4,0.03113699);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(5,0.02023053);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01673798);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(7,0.01106671);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(8,0.012265);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(9,0.009475706);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(10,0.006767239);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(11,0.005487163);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(12,0.00450708);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(13,0.00483024);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(14,0.002535976);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(15,0.004265369);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(16,0.002052217);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(17,0.003883927);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001902557);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(19,0.0008069192);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(20,0.0005072625);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(1,0.001479806);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(2,0.002832737);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(3,0.003247336);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(4,0.002953774);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(5,0.002415142);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(6,0.002186762);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(7,0.001764888);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(8,0.001885017);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(9,0.001666653);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(10,0.001356894);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(11,0.001254476);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(12,0.001147506);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(13,0.001164593);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(14,0.0008624122);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(15,0.001088824);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(16,0.0007487139);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(17,0.001125502);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(18,0.000689952);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(19,0.0004718988);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(20,0.0003645467);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all__648 = new TH1D("VbbHcc_both_H_dR_Bj0_all__648","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(1,18991);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(2,63091);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(3,63351);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(4,49858);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(5,40981);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(6,34481);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(7,29350);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(8,25598);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(9,23046);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(10,20790);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(11,19360);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(12,17991);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(13,17019);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(14,16464);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(15,15852);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(16,14676);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(17,9387);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(18,6438);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(19,4588);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(20,3257);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(21,2269);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(22,1595);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(23,1049);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(24,655);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(25,391);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(26,286);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(27,127);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(28,95);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(29,54);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(30,28);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(31,47);
   VbbHcc_both_H_dR_Bj0_all__648->SetEntries(501194);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all__648->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all__648->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471[30] = {
   21232.36,
   105554.2,
   85500.01,
   64671.2,
   57290.17,
   42331.06,
   38485.11,
   32515.48,
   46923.96,
   25387.45,
   23545.07,
   27893.65,
   22702.42,
   21723.88,
   16057.36,
   16803.35,
   10291.37,
   6292.906,
   4950.73,
   4369.8,
   2268.903,
   2524.132,
   1719.65,
   574.0963,
   156.4415,
   338.9224,
   59.67728,
   76.20394,
   37.09685,
   3.027705};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471[30] = {
   1455.162,
   15487.62,
   4114.375,
   4214.15,
   3708.499,
   2573.56,
   3361.318,
   2651.179,
   15096.21,
   2668.108,
   1925.265,
   2486.211,
   1852.878,
   1864.684,
   1233.955,
   1457.811,
   1081.254,
   751.6241,
   741.4557,
   739.6863,
   487.1417,
   710.9699,
   601.3487,
   96.06431,
   43.9744,
   269.4575,
   18.84295,
   34.03942,
   31.93385,
   0.5449178};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMinimum(2.234508);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMaximum(133145.7);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   H_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__649 = new TH1D("data_mc_ratio__649","",30,0,6);
   data_mc_ratio__649->SetBinContent(1,0.8944364);
   data_mc_ratio__649->SetBinContent(2,0.597712);
   data_mc_ratio__649->SetBinContent(3,0.7409473);
   data_mc_ratio__649->SetBinContent(4,0.770946);
   data_mc_ratio__649->SetBinContent(5,0.7153234);
   data_mc_ratio__649->SetBinContent(6,0.8145555);
   data_mc_ratio__649->SetBinContent(7,0.7626325);
   data_mc_ratio__649->SetBinContent(8,0.7872557);
   data_mc_ratio__649->SetBinContent(9,0.491135);
   data_mc_ratio__649->SetBinContent(10,0.8189085);
   data_mc_ratio__649->SetBinContent(11,0.8222528);
   data_mc_ratio__649->SetBinContent(12,0.6449855);
   data_mc_ratio__649->SetBinContent(13,0.7496556);
   data_mc_ratio__649->SetBinContent(14,0.7578757);
   data_mc_ratio__649->SetBinContent(15,0.9872106);
   data_mc_ratio__649->SetBinContent(16,0.873397);
   data_mc_ratio__649->SetBinContent(17,0.9121231);
   data_mc_ratio__649->SetBinContent(18,1.023057);
   data_mc_ratio__649->SetBinContent(19,0.9267321);
   data_mc_ratio__649->SetBinContent(20,0.745343);
   data_mc_ratio__649->SetBinContent(21,1.000043);
   data_mc_ratio__649->SetBinContent(22,0.6319003);
   data_mc_ratio__649->SetBinContent(23,0.6100079);
   data_mc_ratio__649->SetBinContent(24,1.140924);
   data_mc_ratio__649->SetBinContent(25,2.499337);
   data_mc_ratio__649->SetBinContent(26,0.8438509);
   data_mc_ratio__649->SetBinContent(27,2.128113);
   data_mc_ratio__649->SetBinContent(28,1.246655);
   data_mc_ratio__649->SetBinContent(29,1.455649);
   data_mc_ratio__649->SetBinContent(30,9.24793);
   data_mc_ratio__649->SetBinContent(31,9.356103);
   data_mc_ratio__649->SetBinError(1,0.006490461);
   data_mc_ratio__649->SetBinError(2,0.002379624);
   data_mc_ratio__649->SetBinError(3,0.002943815);
   data_mc_ratio__649->SetBinError(4,0.003452682);
   data_mc_ratio__649->SetBinError(5,0.003533549);
   data_mc_ratio__649->SetBinError(6,0.004386627);
   data_mc_ratio__649->SetBinError(7,0.00445155);
   data_mc_ratio__649->SetBinError(8,0.00492054);
   data_mc_ratio__649->SetBinError(9,0.003235215);
   data_mc_ratio__649->SetBinError(10,0.005679475);
   data_mc_ratio__649->SetBinError(11,0.005909526);
   data_mc_ratio__649->SetBinError(12,0.00480864);
   data_mc_ratio__649->SetBinError(13,0.005746386);
   data_mc_ratio__649->SetBinError(14,0.005906501);
   data_mc_ratio__649->SetBinError(15,0.007840934);
   data_mc_ratio__649->SetBinError(16,0.007209545);
   data_mc_ratio__649->SetBinError(17,0.009414343);
   data_mc_ratio__649->SetBinError(18,0.01275041);
   data_mc_ratio__649->SetBinError(19,0.01368178);
   data_mc_ratio__649->SetBinError(20,0.01306012);
   data_mc_ratio__649->SetBinError(21,0.02099429);
   data_mc_ratio__649->SetBinError(22,0.01582225);
   data_mc_ratio__649->SetBinError(23,0.01883422);
   data_mc_ratio__649->SetBinError(24,0.04457957);
   data_mc_ratio__649->SetBinError(25,0.1263969);
   data_mc_ratio__649->SetBinError(26,0.04989795);
   data_mc_ratio__649->SetBinError(27,0.1888395);
   data_mc_ratio__649->SetBinError(28,0.1279041);
   data_mc_ratio__649->SetBinError(29,0.1980888);
   data_mc_ratio__649->SetBinError(30,1.747694);
   data_mc_ratio__649->SetBinError(31,1.798119);
   data_mc_ratio__649->SetMinimum(0.4);
   data_mc_ratio__649->SetMaximum(1.6);
   data_mc_ratio__649->SetEntries(141.0093);
   data_mc_ratio__649->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__649->SetLineColor(ci);
   data_mc_ratio__649->SetLineWidth(2);
   data_mc_ratio__649->SetMarkerStyle(20);
   data_mc_ratio__649->SetMarkerSize(1.2);
   data_mc_ratio__649->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__649->GetXaxis()->SetRange(1,30);
   data_mc_ratio__649->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__649->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__649->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__649->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__649->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__649->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1472[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1472[30] = {
   0.06853511,
   0.1467267,
   0.04812134,
   0.06516271,
   0.06473186,
   0.06079602,
   0.08734072,
   0.0815359,
   0.3217164,
   0.1050956,
   0.08176935,
   0.08913179,
   0.08161585,
   0.08583566,
   0.07684669,
   0.08675715,
   0.1050641,
   0.1194399,
   0.149767,
   0.1692723,
   0.2147036,
   0.281669,
   0.3496925,
   0.1673313,
   0.2810917,
   0.795042,
   0.3157474,
   0.4466885,
   0.8608236,
   0.1799772};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.1252587);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(2.032988);
   Graph_Graph_from_mc_statistical_error1472->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1472->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1472);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->SetSelected(H_dR_Bj0_both_all);
}
