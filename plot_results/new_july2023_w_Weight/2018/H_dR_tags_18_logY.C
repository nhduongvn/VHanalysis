void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Aug 10 12:20:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(0,0,1,1);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.845351,6.525,11.508);
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
   st->SetMaximum(3.57079e+09);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0.001475714);
   st_stack_23->SetMaximum(1.182129e+10);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,15028.48);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,12029.44);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,8936.273);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,7591.221);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,7081.002);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,8580.037);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,8428.512);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,8424.667);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,9503.394);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,11815.43);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,10653.81);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,12896.25);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,16380.02);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,14328.48);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,14259.84);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,17004.49);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,12679.73);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,10971.53);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,5409.409);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,4753.492);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,4265.687);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,2869.581);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2167.191);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,3403.899);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,2970.346);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1332.747);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,3695.497);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,1701.766);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1135.187);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1908.603);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1554.05);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,1418.19);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,1261.586);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,1248.48);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,1454.194);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,1384.364);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1329.542);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1463.624);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1795.367);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1509.632);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1648.99);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,2764.501);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,1776.757);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1848.379);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,2031.247);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1565.057);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1683.219);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,804.1596);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,739.5289);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,905.8307);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,538.3035);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,601.0927);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,2180.718);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,924.9988);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,329.176);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1986.59);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,678.4353);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,554.4488);
   VbbHcc_tags_H_dR_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.08117907);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,49.48493);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,58.20529);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,52.3541);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,52.1005);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,50.9031);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,44.88548);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,50.40061);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,53.9858);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,59.90417);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,67.19523);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,63.5735);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,76.85841);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,83.6329);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,88.50149);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,73.19843);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,70.69757);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,58.15479);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,52.34999);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,44.95787);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,37.46968);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,29.49058);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,21.68884);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,24.51072);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,16.10229);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,13.00547);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,11.94518);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,9.683578);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,6.569176);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,7.815759);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.08117907);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,3.271542);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,3.547103);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,3.343266);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,3.386885);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,3.342845);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,3.005602);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,3.268747);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,3.635104);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,3.555708);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,3.832264);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,3.716967);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,4.187249);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,4.131617);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,4.36697);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,4.081859);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,3.929222);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,3.455717);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,3.297944);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.993677);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.830901);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,2.412126);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,2.085437);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,2.284255);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.837249);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.587634);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.603581);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.570829);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,1.117113);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,1.363893);
   VbbHcc_tags_H_dR_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.6388512);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,830.9241);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,1154.35);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,1158.072);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,1191.662);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,1166.987);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,1149.736);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,1127.236);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,1181.962);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,1230.419);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,1337.52);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,1452.818);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,1567.268);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1668.22);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1741.304);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1651.416);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,1494.703);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,1308.302);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,1139.869);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,967.4495);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,800.847);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,646.846);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,526.0731);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,427.0955);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,336.1312);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,281.4605);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,236.6638);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,189.1813);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,122.5503);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,100.8957);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.2282213);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,9.613003);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,10.51264);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,10.22243);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,10.95631);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,10.6435);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,10.32411);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,10.17348);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,11.30529);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,10.59042);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,11.63004);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,11.59212);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,12.07202);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,12.69231);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,13.38331);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,13.51434);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,11.69196);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,11.54391);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,10.86665);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,10.07244);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,8.848276);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,7.898395);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,7.883929);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,7.147464);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,5.659984);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,6.197874);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,4.703793);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,4.1613);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,3.237229);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.953617);
   VbbHcc_tags_H_dR_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,172.1797);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,204.2964);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,187.1165);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,183.1953);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,133.8415);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,116.8875);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,114.0971);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,119.6214);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,143.7825);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,169.2983);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,190.8095);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,202.3166);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,219.2932);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,265.9607);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,226.4318);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,228.7831);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,175.8465);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,153.5634);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,115.7864);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,101.8537);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,75.81026);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,52.26505);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,55.62426);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,45.59674);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,34.64394);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,26.64334);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,23.60493);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,18.64551);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,12.95449);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,9.983201);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,8.227479);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,10.57668);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,13.04638);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,8.465411);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,6.4123);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,6.330723);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,9.000277);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,8.583687);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,12.04104);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,10.22008);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,10.74236);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,9.918369);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,18.86005);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,12.52674);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,14.88947);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,10.59388);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,11.00584);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,8.679409);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,11.59507);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,8.783917);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,4.097971);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,7.873038);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,4.151678);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,3.726734);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,3.078979);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,2.673526);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,2.618911);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.986826);
   VbbHcc_tags_H_dR_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,16.81638);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,18.01573);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,12.70574);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,18.47308);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,10.78564);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,11.86845);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,15.12838);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,9.515489);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,20.40084);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,23.30222);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,14.22327);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,26.57028);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,15.48068);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,17.13478);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,22.08654);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,19.67008);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,19.8648);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,15.28009);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,7.847414);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,8.662189);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,8.422264);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.900034);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,9.31954);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.862342);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,4.28967);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,2.775805);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,2.054779);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,2.510041);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.7684986);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,3.521461);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,4.406543);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.828049);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,9.657753);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.571976);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,2.613873);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,2.893722);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,2.527361);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,4.84215);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,4.714951);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.732706);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,5.820379);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.502487);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,3.30207);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,4.457136);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,4.414076);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,4.238692);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,4.177446);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.293068);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,2.550804);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,2.314152);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.8710028);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,3.527149);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.5646897);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,2.259653);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,1.165161);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.693482);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.7769054);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.2881426);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.6599753);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.4921557);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.3743199);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.5029805);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.6599753);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.4921557);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.3743199);
   VbbHcc_tags_H_dR_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,1.355405);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,1.883605);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,1.891365);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,1.027309);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,1.389715);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.4019721);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.9833285);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.9953587);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,1.053926);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3805224);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.748679);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.6738216);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.5093878);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.1101045);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.7883238);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.946305);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.9594801);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.5998066);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.8094488);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.5144501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.4019721);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.9833285);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.7043367);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.774094);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3805224);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.529497);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.4804391);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.5093878);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.1101045);
   VbbHcc_tags_H_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,4.660217);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,3.680978);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,5.565563);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.655007);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.761041);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,1.413887);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,1.287712);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,2.354508);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,0.9558606);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.823732);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,2.18716);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.662564);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.782371);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,8.807693);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,5.08569);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,6.031738);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,4.614591);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,2.136137);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,3.406079);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,0.7408434);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.7794623);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,1.022916);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.8801375);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,1.02265);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.7363384);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.927933);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.3487978);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.1936072);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.256737);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,1.118115);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.374166);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.7021068);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.7550483);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.7172245);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.6718739);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.8697882);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.5626044);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.7705708);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.8334546);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.9524043);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.259439);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.737099);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.210872);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.418162);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.245971);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.813576);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,1.047673);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.5239544);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.5514289);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.5918158);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.508235);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.6155724);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.4461689);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.7956453);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.3487978);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.1936072);
   VbbHcc_tags_H_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.002368554);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,3.025645);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,5.464816);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,4.884435);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,3.816111);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,2.492022);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.584267);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.26395);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,1.368122);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.6226);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,2.284318);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,3.434699);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,4.309632);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,5.222766);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,5.713131);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,5.598402);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,4.661421);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,3.459683);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,2.433953);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.579259);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.122506);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.7152868);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.4571709);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.4520034);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.4487582);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.5412204);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.6157108);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.4428795);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.2868857);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.1388266);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.002368554);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.09518483);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1268167);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.1214092);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.1036534);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.1021227);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.077297);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.06062177);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.06380201);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.06685022);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.0798827);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.1034928);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.1154049);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.1311239);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.1359948);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.131779);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.1562999);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.1110444);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.08772644);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.06685068);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.0580447);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.0446453);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.0352001);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.03494626);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03619152);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.03885938);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.04147241);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.04554144);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02773744);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01914546);
   VbbHcc_tags_H_dR_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.9362772);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.815498);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,2.086364);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.977503);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,1.534812);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,1.190981);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.983843);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.9358916);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,1.024089);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,1.242959);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,1.518231);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.732424);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.911923);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,2.00739);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.965858);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.786001);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,1.375507);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,1.161007);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.8653806);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.6273315);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.4470669);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.4087966);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.3305119);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.3341853);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.3066191);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.2398507);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.186323);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.1247495);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.07242078);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.02452885);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.03417285);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.03666279);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.03570331);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.03149186);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.02771092);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.02518791);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.02452877);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.02569126);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.02832063);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.03131278);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.03345082);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.0351504);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.03601644);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.03559632);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.03394848);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.02982342);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02732054);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.0236292);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.02014502);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01690113);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01621881);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01462864);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01470483);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.01402894);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.01241513);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.01096392);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.008959857);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.006794185);
   VbbHcc_tags_H_dR_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.01437819);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.009601941);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.005591907);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.02632373);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01061837);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.007746397);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008511906);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.01078935);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.01108148);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.005717142);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.003280315);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.005407963);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.008629064);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.009861468);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.004767341);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.003142173);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.01225067);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.005299443);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.005605851);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.005504087);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.002794763);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.006518732);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005622295);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004050118);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.009373647);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.006158565);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.004793915);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.004914777);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.005507721);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.005545266);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.004042812);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.003280315);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.003828256);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.004985704);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.005122831);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.003414545);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002830518);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.006153108);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.003748703);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.003963952);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.003894058);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.002794763);
   VbbHcc_tags_H_dR_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.003357451);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.006589111);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.01007259);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.0114386);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.006737043);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.003858609);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.005809901);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.003852581);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.006014754);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.00355341);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.004875414);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.00256036);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.003397387);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.003169028);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001194717);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.005396959);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.002427727);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.002946383);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.001706065);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001781908);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001494898);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.001255102);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001220364);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0005756864);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.003450602);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0003334233);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0007611919);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.001114046);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.001547248);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001882672);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.00206486);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.00153209);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.001171092);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.001463856);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.001144353);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.001434474);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.001067051);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.001313557);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0009175877);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0010769);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.001028066);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.000696617);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.001338774);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0008447524);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.001079431);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0007722951);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0007998271);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0006933205);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0006430533);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0006448956);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004546049);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.001058559);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0003334233);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0005441439);
   VbbHcc_tags_H_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__62 = new TH1D("VbbHcc_tags_H_dR__62","",30,0,6);
   VbbHcc_tags_H_dR__62->SetBinContent(2,13);
   VbbHcc_tags_H_dR__62->SetBinContent(3,14833);
   VbbHcc_tags_H_dR__62->SetBinContent(4,15761);
   VbbHcc_tags_H_dR__62->SetBinContent(5,11865);
   VbbHcc_tags_H_dR__62->SetBinContent(6,11161);
   VbbHcc_tags_H_dR__62->SetBinContent(7,10625);
   VbbHcc_tags_H_dR__62->SetBinContent(8,10671);
   VbbHcc_tags_H_dR__62->SetBinContent(9,10871);
   VbbHcc_tags_H_dR__62->SetBinContent(10,11313);
   VbbHcc_tags_H_dR__62->SetBinContent(11,12407);
   VbbHcc_tags_H_dR__62->SetBinContent(12,13530);
   VbbHcc_tags_H_dR__62->SetBinContent(13,15106);
   VbbHcc_tags_H_dR__62->SetBinContent(14,17203);
   VbbHcc_tags_H_dR__62->SetBinContent(15,18519);
   VbbHcc_tags_H_dR__62->SetBinContent(16,19895);
   VbbHcc_tags_H_dR__62->SetBinContent(17,19166);
   VbbHcc_tags_H_dR__62->SetBinContent(18,17658);
   VbbHcc_tags_H_dR__62->SetBinContent(19,16190);
   VbbHcc_tags_H_dR__62->SetBinContent(20,13923);
   VbbHcc_tags_H_dR__62->SetBinContent(21,11602);
   VbbHcc_tags_H_dR__62->SetBinContent(22,9143);
   VbbHcc_tags_H_dR__62->SetBinContent(23,7325);
   VbbHcc_tags_H_dR__62->SetBinContent(24,5738);
   VbbHcc_tags_H_dR__62->SetBinContent(25,4624);
   VbbHcc_tags_H_dR__62->SetBinContent(26,3624);
   VbbHcc_tags_H_dR__62->SetBinContent(27,2979);
   VbbHcc_tags_H_dR__62->SetBinContent(28,2543);
   VbbHcc_tags_H_dR__62->SetBinContent(29,2345);
   VbbHcc_tags_H_dR__62->SetBinContent(30,1637);
   VbbHcc_tags_H_dR__62->SetBinContent(31,1375);
   VbbHcc_tags_H_dR__62->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__62->SetLineColor(ci);
   VbbHcc_tags_H_dR__62->SetLineWidth(2);
   VbbHcc_tags_H_dR__62->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__62->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1045[30] = {
   0,
   0.7223989,
   16107.88,
   13477.67,
   10361.62,
   9044.139,
   8450.352,
   9907.616,
   9738.924,
   9794.939,
   10962.91,
   13418.62,
   12383.28,
   14778.95,
   18378.57,
   16458.91,
   16246.69,
   18831.59,
   14252.11,
   12339,
   6551.306,
   5704.822,
   5028.202,
   3475.919,
   2685.41,
   3805.404,
   3305.333,
   1613.559,
   3921.006,
   1852.759};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1045[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1045[30] = {
   0,
   0.2422409,
   1908.66,
   1554.118,
   1418.274,
   1261.743,
   1248.56,
   1454.251,
   1384.423,
   1329.628,
   1463.701,
   1795.456,
   1509.719,
   1649.085,
   2764.552,
   1776.916,
   1848.482,
   2031.344,
   1565.145,
   1683.299,
   804.2768,
   739.6827,
   905.914,
   538.3821,
   601.2017,
   2180.73,
   925.0313,
   329.2309,
   1986.597,
   678.4494};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1045,Graph_from_VbbHcc_tags_H_dR_fy1045,Graph_from_VbbHcc_tags_H_dR_fex1045,Graph_from_VbbHcc_tags_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1045","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMinimum(23.25743);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMaximum(23257.43);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__63 = new TH1D("data_mc_ratio__63","",30,0,6);
   data_mc_ratio__63->SetBinContent(2,17.9956);
   data_mc_ratio__63->SetBinContent(3,0.9208536);
   data_mc_ratio__63->SetBinContent(4,1.169415);
   data_mc_ratio__63->SetBinContent(5,1.145091);
   data_mc_ratio__63->SetBinContent(6,1.234059);
   data_mc_ratio__63->SetBinContent(7,1.257344);
   data_mc_ratio__63->SetBinContent(8,1.07705);
   data_mc_ratio__63->SetBinContent(9,1.116242);
   data_mc_ratio__63->SetBinContent(10,1.154984);
   data_mc_ratio__63->SetBinContent(11,1.131725);
   data_mc_ratio__63->SetBinContent(12,1.008301);
   data_mc_ratio__63->SetBinContent(13,1.219871);
   data_mc_ratio__63->SetBinContent(14,1.16402);
   data_mc_ratio__63->SetBinContent(15,1.007641);
   data_mc_ratio__63->SetBinContent(16,1.208768);
   data_mc_ratio__63->SetBinContent(17,1.179687);
   data_mc_ratio__63->SetBinContent(18,0.9376799);
   data_mc_ratio__63->SetBinContent(19,1.135972);
   data_mc_ratio__63->SetBinContent(20,1.128374);
   data_mc_ratio__63->SetBinContent(21,1.770945);
   data_mc_ratio__63->SetBinContent(22,1.602679);
   data_mc_ratio__63->SetBinContent(23,1.456783);
   data_mc_ratio__63->SetBinContent(24,1.650786);
   data_mc_ratio__63->SetBinContent(25,1.721897);
   data_mc_ratio__63->SetBinContent(26,0.95233);
   data_mc_ratio__63->SetBinContent(27,0.9012707);
   data_mc_ratio__63->SetBinContent(28,1.576019);
   data_mc_ratio__63->SetBinContent(29,0.5980608);
   data_mc_ratio__63->SetBinContent(30,0.8835472);
   data_mc_ratio__63->SetBinContent(31,1.093151);
   data_mc_ratio__63->SetBinError(2,4.991081);
   data_mc_ratio__63->SetBinError(3,0.007560945);
   data_mc_ratio__63->SetBinError(4,0.009314872);
   data_mc_ratio__63->SetBinError(5,0.0105125);
   data_mc_ratio__63->SetBinError(6,0.01168112);
   data_mc_ratio__63->SetBinError(7,0.01219803);
   data_mc_ratio__63->SetBinError(8,0.01042638);
   data_mc_ratio__63->SetBinError(9,0.01070591);
   data_mc_ratio__63->SetBinError(10,0.01085893);
   data_mc_ratio__63->SetBinError(11,0.01016032);
   data_mc_ratio__63->SetBinError(12,0.008668445);
   data_mc_ratio__63->SetBinError(13,0.009925196);
   data_mc_ratio__63->SetBinError(14,0.008874798);
   data_mc_ratio__63->SetBinError(15,0.007404522);
   data_mc_ratio__63->SetBinError(16,0.008569803);
   data_mc_ratio__63->SetBinError(17,0.008521202);
   data_mc_ratio__63->SetBinError(18,0.007056411);
   data_mc_ratio__63->SetBinError(19,0.008927798);
   data_mc_ratio__63->SetBinError(20,0.009562833);
   data_mc_ratio__63->SetBinError(21,0.01644139);
   data_mc_ratio__63->SetBinError(22,0.01676109);
   data_mc_ratio__63->SetBinError(23,0.01702124);
   data_mc_ratio__63->SetBinError(24,0.02179268);
   data_mc_ratio__63->SetBinError(25,0.02532202);
   data_mc_ratio__63->SetBinError(26,0.01581952);
   data_mc_ratio__63->SetBinError(27,0.01651277);
   data_mc_ratio__63->SetBinError(28,0.03125275);
   data_mc_ratio__63->SetBinError(29,0.0123502);
   data_mc_ratio__63->SetBinError(30,0.02183763);
   data_mc_ratio__63->SetBinError(31,0.48277);
   data_mc_ratio__63->SetMinimum(0.4);
   data_mc_ratio__63->SetMaximum(1.6);
   data_mc_ratio__63->SetEntries(41.95285);
   data_mc_ratio__63->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__63->SetLineColor(ci);
   data_mc_ratio__63->SetLineWidth(2);
   data_mc_ratio__63->SetMarkerStyle(20);
   data_mc_ratio__63->SetMarkerSize(1.2);
   data_mc_ratio__63->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__63->GetXaxis()->SetRange(1,31);
   data_mc_ratio__63->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__63->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__63->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__63->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__63->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__63->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1046[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1046[30] = {
   0,
   0.3353284,
   0.1184923,
   0.1153105,
   0.1368776,
   0.1395094,
   0.1477524,
   0.1467811,
   0.1421536,
   0.1357464,
   0.1335139,
   0.1338034,
   0.1219159,
   0.1115834,
   0.1504226,
   0.1079608,
   0.1137759,
   0.107869,
   0.1098185,
   0.1364211,
   0.1227659,
   0.1296592,
   0.1801666,
   0.1548891,
   0.2238771,
   0.5730614,
   0.2798602,
   0.2040401,
   0.506655,
   0.3661833};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.3123263);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.687674);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
