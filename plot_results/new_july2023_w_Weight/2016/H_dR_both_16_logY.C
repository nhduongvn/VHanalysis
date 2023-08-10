void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:21:33 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(0,0,1,1);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.848107,6.525,11.60318);
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
   st->SetMaximum(4.324845e+09);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0.001466709);
   st_stack_213->SetMaximum(1.43896e+10);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetLabelSize(0.035);
   st_stack_213->GetXaxis()->SetTitleSize(0.035);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetLabelSize(0.05);
   st_stack_213->GetYaxis()->SetTitleSize(0.057);
   st_stack_213->GetYaxis()->SetTitleOffset(1.2);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetLabelSize(0.035);
   st_stack_213->GetZaxis()->SetTitleSize(0.035);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,6.53357);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13695.28);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11085.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8654.354);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7099.231);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,8193.619);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,8297.93);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,7338.707);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,10861.39);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,6635.893);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9648.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,13279.34);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15475.84);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,19916.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,18890.26);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,9500.516);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,5370.349);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3673.867);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3992.781);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,3033.947);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1136.659);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,356.4389);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,149.7189);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,356.5565);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,28.20677);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,6.53357);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,2643.902);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,2035.132);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,2008.425);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1119.871);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,2015.613);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,2017.566);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1160.066);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2119.064);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,955.2528);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1320.405);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,2523.717);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2752.896);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2449.672);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2735.946);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1893.681);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,904.4316);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,780.1012);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,871.0196);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1557.909);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,401.3705);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,81.1598);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,51.83468);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,286.4041);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,21.39855);
   VbbHcc_both_H_dR_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,17.82062);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,27.56244);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,26.27842);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,29.00442);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,31.76864);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,36.76805);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,45.80249);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,39.62568);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,46.17302);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,53.93454);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,56.91364);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,68.53308);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,79.40511);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,73.01692);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,47.9262);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,25.06099);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,16.29398);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,13.60214);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,9.419275);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,5.417381);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,4.085857);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,1.571989);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.09947);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.4283165);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.04346448);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.3545068);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,1.816554);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.303084);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,2.239761);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,2.294595);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,2.405821);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,2.579565);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,3.053194);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,2.673389);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,2.911574);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,3.206176);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,3.157436);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,3.562853);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,3.907164);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,3.653707);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,2.936646);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,1.950024);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,1.690767);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.584608);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.14439);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.8684086);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.7362491);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.4370693);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.3724344);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1436993);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.04346448);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.3150273);
   VbbHcc_both_H_dR_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.5204654);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,368.5721);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,590.9217);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,680.1765);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,754.209);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,812.7838);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,846.7666);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,868.5656);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,923.6823);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,999.1036);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1103.35);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,1223.347);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,1314.104);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,1429.593);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,1387.248);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,801.5201);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,499.1603);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,325.5998);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,207.4804);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,132.3065);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,74.93485);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,45.26569);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,20.62922);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,12.83431);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,4.040384);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,2.10044);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.4256711);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1786038);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,5.094986);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,6.485479);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,6.939681);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,7.306619);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,7.572057);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,7.718556);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,7.778093);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,8.015888);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,8.327342);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,8.746032);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,9.230946);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,9.561685);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,9.970364);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,9.845655);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,7.448906);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,5.863267);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,4.714013);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,3.747733);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,2.988019);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.252762);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,1.728505);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.148485);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,0.9192499);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.5119206);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.383925);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.1558951);
   VbbHcc_both_H_dR_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,0.03310702);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,83.42199);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,124.7203);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,104.7719);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,100.3804);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,93.54499);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,90.06865);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,117.0171);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,111.5494);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,138.163);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,163.2888);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,163.1537);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,173.5426);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,227.1767);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,209.3091);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,102.2086);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,74.26757);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,38.05333);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,23.41744);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,22.44652);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,12.44831);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,6.209923);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,1.446617);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,0.8118466);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.373665);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1156613);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.07945873);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.03310702);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,4.088373);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,6.774789);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,5.095008);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,8.250947);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,8.139045);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,7.726995);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,10.28483);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,9.293441);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,10.0407);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,11.68079);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,9.892017);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,9.108489);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,13.54954);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,10.74661);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,7.563434);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,7.42555);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.73799);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,3.250757);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,5.256739);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,2.909535);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.097164);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.5065762);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.3509683);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.1693406);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.08343659);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.07945873);
   VbbHcc_both_H_dR_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,9.74911);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,10.8117);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,15.48032);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,5.916608);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,9.467839);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,6.355294);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,10.04646);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,6.782224);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,12.89467);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,11.55295);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,14.84692);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,22.52422);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,21.67256);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,18.26546);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.07592);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,6.587121);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,3.906021);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,4.276945);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.183419);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.941826);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.4297517);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.767628);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.06830193);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,0.000296794);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.450671);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.122954);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,7.349526);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,1.274717);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,2.022935);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.861431);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.31114);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.8410467);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.338732);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.88304);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.241309);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,7.686726);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.912904);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.774198);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.836142);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.426478);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.6841039);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.288877);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.32267);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.2934072);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.2068537);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,1.123628);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.06830193);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,0.000296794);
   VbbHcc_both_H_dR_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,0.139529);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.2981555);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,0.289717);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,0.1333553);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,0.3063097);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,0.3814147);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.139529);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.2109243);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.205385);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,0.1333553);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.2169786);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.2264918);
   VbbHcc_both_H_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.845656);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.3584787);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.4600077);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.2331017);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.2295864);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,0.2406448);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.2287687);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.3722059);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.239674);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.5476697);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,0.4578169);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.3476239);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.7148507);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.2996727);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,0.2426865);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.1122779);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.08719582);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.3210284);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.2072906);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.2300249);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.1648783);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.1623558);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.1704472);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.1617641);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2151938);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.1696072);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.2471849);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.2289252);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.2009634);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.2921664);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.182517);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.1718905);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.1122779);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.08719582);
   VbbHcc_both_H_dR_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,2.569726);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.846359);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,5.884227);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.409229);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.843704);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,1.034431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.060434);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.798105);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.916442);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,3.453877);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,1.633749);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.184038);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.106315);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,3.249267);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.739229);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.110442);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.7651763);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.2511492);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,0.8143416);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.146579);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.255802);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.9490324);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6974606);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.517233);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.5307944);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.6812877);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.7253524);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.9602774);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.6678682);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9057963);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.278505);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,0.9252252);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6621802);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.5563142);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4417913);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.2511492);
   VbbHcc_both_H_dR_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,2.031736);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,3.843612);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,4.297);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,3.743312);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,2.729377);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.061052);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.431069);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.326678);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.470566);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.891783);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.529983);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.277926);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,4.093377);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,4.03193);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.407792);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.4820586);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1898925);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.09883181);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.06443016);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.02467806);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.0141984);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.0073159);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002892197);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.05627239);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.07717971);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.08227846);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.07652459);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06520275);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.05597861);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04696006);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.0452243);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.04741826);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05410144);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.06276481);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.07144702);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.07941854);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.07935238);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.04639982);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.02752389);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01712609);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01212364);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.009756063);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.006000124);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.00449566);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.003280229);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.002046462);
   VbbHcc_both_H_dR_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0004312861);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.7422516);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.594917);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.917047);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.888288);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.48802);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.098543);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.8264654);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.7386021);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.8244064);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.022249);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.217363);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.417836);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.599194);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.545517);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.6310041);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.2789014);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1323284);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.07052207);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04230953);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.01959654);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.008793142);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.006547442);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002647804);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0007502919);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003596523);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0004312861);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01690454);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.0248349);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02722275);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02708225);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02401725);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02066144);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.01789081);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01689329);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.01785172);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01989332);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.02174723);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02342236);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02491046);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02447104);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01563248);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01038159);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.007124617);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.005185944);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.00401822);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002727114);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.00181005);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.00156289);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001004384);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0005305573);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003596523);
   VbbHcc_both_H_dR_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.009008292);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.01801258);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01057764);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.005999398);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.002959173);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.0114998);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.005802646);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.002994311);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.008503787);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.002909221);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.01119501);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.009012555);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.003218024);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.003003725);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.005203119);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.007364174);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.00532004);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.004245985);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.002959173);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.00575194);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.004103342);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002994311);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.004909802);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002909221);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.005611966);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.005210144);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003218024);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.003003725);
   VbbHcc_both_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.001176057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003174029);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005832182);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.002787966);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.007288543);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003128911);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.002039826);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.002350478);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.00219577);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.004500661);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.002968987);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.004975322);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.00236107);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005717871);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.00110431);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.0003519057);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006793139);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.00107333);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.0015073);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001054966);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001675588);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001074505);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0009133793);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0009609696);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009004339);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001301007);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.00105518);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001381494);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.0009654832);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001479485);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0006386872);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0003519057);
   VbbHcc_both_H_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__584 = new TH1D("VbbHcc_both_H_dR__584","",30,0,6);
   VbbHcc_both_H_dR__584->SetBinContent(2,2);
   VbbHcc_both_H_dR__584->SetBinContent(3,4776);
   VbbHcc_both_H_dR__584->SetBinContent(4,5258);
   VbbHcc_both_H_dR__584->SetBinContent(5,4283);
   VbbHcc_both_H_dR__584->SetBinContent(6,4256);
   VbbHcc_both_H_dR__584->SetBinContent(7,4439);
   VbbHcc_both_H_dR__584->SetBinContent(8,4588);
   VbbHcc_both_H_dR__584->SetBinContent(9,4956);
   VbbHcc_both_H_dR__584->SetBinContent(10,5231);
   VbbHcc_both_H_dR__584->SetBinContent(11,5866);
   VbbHcc_both_H_dR__584->SetBinContent(12,6599);
   VbbHcc_both_H_dR__584->SetBinContent(13,7364);
   VbbHcc_both_H_dR__584->SetBinContent(14,8421);
   VbbHcc_both_H_dR__584->SetBinContent(15,9301);
   VbbHcc_both_H_dR__584->SetBinContent(16,9590);
   VbbHcc_both_H_dR__584->SetBinContent(17,5927);
   VbbHcc_both_H_dR__584->SetBinContent(18,3941);
   VbbHcc_both_H_dR__584->SetBinContent(19,2746);
   VbbHcc_both_H_dR__584->SetBinContent(20,1928);
   VbbHcc_both_H_dR__584->SetBinContent(21,1321);
   VbbHcc_both_H_dR__584->SetBinContent(22,819);
   VbbHcc_both_H_dR__584->SetBinContent(23,513);
   VbbHcc_both_H_dR__584->SetBinContent(24,302);
   VbbHcc_both_H_dR__584->SetBinContent(25,155);
   VbbHcc_both_H_dR__584->SetBinContent(26,65);
   VbbHcc_both_H_dR__584->SetBinContent(27,25);
   VbbHcc_both_H_dR__584->SetBinContent(28,9);
   VbbHcc_both_H_dR__584->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__584->SetLineColor(ci);
   VbbHcc_both_H_dR__584->SetLineWidth(2);
   VbbHcc_both_H_dR__584->SetMarkerStyle(20);
   VbbHcc_both_H_dR__584->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__584->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__584->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1425[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1425[30] = {
   0,
   7.087574,
   14181.03,
   11849.72,
   9493.782,
   7998.028,
   9147.488,
   9282.329,
   8383.768,
   11947.13,
   7836.816,
   10987.35,
   14743.67,
   17062.89,
   21686.36,
   20587.66,
   10467.71,
   5977.54,
   4058.808,
   4241.978,
   3201.409,
   1230.558,
   412.4562,
   175.1482,
   371.4603,
   33.05308,
   2.259925,
   0.8596366,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1425[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1425[30] = {
   0,
   6.536095,
   2643.911,
   2035.156,
   2008.459,
   1119.929,
   2015.646,
   2017.598,
   1160.144,
   2119.101,
   955.3495,
   1320.492,
   2523.757,
   2752.941,
   2449.735,
   2735.989,
   1893.714,
   904.4845,
   780.1321,
   871.0361,
   1557.922,
   401.3884,
   81.18922,
   51.86389,
   286.4061,
   21.40582,
   0.3952839,
   0.3603598,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1425,Graph_from_VbbHcc_both_H_dR_fy1425,Graph_from_VbbHcc_both_H_dR_fex1425,Graph_from_VbbHcc_both_H_dR_fey1425);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1425 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1425","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMinimum(26.54971);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMaximum(26549.71);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1425);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__585 = new TH1D("data_mc_ratio__585","",30,0,6);
   data_mc_ratio__585->SetBinContent(2,0.282184);
   data_mc_ratio__585->SetBinContent(3,0.3367879);
   data_mc_ratio__585->SetBinContent(4,0.4437235);
   data_mc_ratio__585->SetBinContent(5,0.4511374);
   data_mc_ratio__585->SetBinContent(6,0.5321312);
   data_mc_ratio__585->SetBinContent(7,0.4852698);
   data_mc_ratio__585->SetBinContent(8,0.4942725);
   data_mc_ratio__585->SetBinContent(9,0.5911423);
   data_mc_ratio__585->SetBinContent(10,0.4378458);
   data_mc_ratio__585->SetBinContent(11,0.7485183);
   data_mc_ratio__585->SetBinContent(12,0.6005999);
   data_mc_ratio__585->SetBinContent(13,0.4994685);
   data_mc_ratio__585->SetBinContent(14,0.4935272);
   data_mc_ratio__585->SetBinContent(15,0.428887);
   data_mc_ratio__585->SetBinContent(16,0.465813);
   data_mc_ratio__585->SetBinContent(17,0.5662174);
   data_mc_ratio__585->SetBinContent(18,0.6593013);
   data_mc_ratio__585->SetBinContent(19,0.6765534);
   data_mc_ratio__585->SetBinContent(20,0.4545049);
   data_mc_ratio__585->SetBinContent(21,0.4126308);
   data_mc_ratio__585->SetBinContent(22,0.6655518);
   data_mc_ratio__585->SetBinContent(23,1.243769);
   data_mc_ratio__585->SetBinContent(24,1.724254);
   data_mc_ratio__585->SetBinContent(25,0.4172721);
   data_mc_ratio__585->SetBinContent(26,1.966534);
   data_mc_ratio__585->SetBinContent(27,11.06231);
   data_mc_ratio__585->SetBinContent(28,10.46954);
   data_mc_ratio__585->SetBinError(2,0.1995342);
   data_mc_ratio__585->SetBinError(3,0.004873313);
   data_mc_ratio__585->SetBinError(4,0.006119305);
   data_mc_ratio__585->SetBinError(5,0.00689342);
   data_mc_ratio__585->SetBinError(6,0.008156764);
   data_mc_ratio__585->SetBinError(7,0.00728351);
   data_mc_ratio__585->SetBinError(8,0.007297175);
   data_mc_ratio__585->SetBinError(9,0.008397043);
   data_mc_ratio__585->SetBinError(10,0.006053811);
   data_mc_ratio__585->SetBinError(11,0.009773079);
   data_mc_ratio__585->SetBinError(12,0.007393434);
   data_mc_ratio__585->SetBinError(13,0.005820378);
   data_mc_ratio__585->SetBinError(14,0.005378105);
   data_mc_ratio__585->SetBinError(15,0.004447112);
   data_mc_ratio__585->SetBinError(16,0.004756662);
   data_mc_ratio__585->SetBinError(17,0.007354713);
   data_mc_ratio__585->SetBinError(18,0.01050221);
   data_mc_ratio__585->SetBinError(19,0.01291076);
   data_mc_ratio__585->SetBinError(20,0.01035107);
   data_mc_ratio__585->SetBinError(21,0.01135299);
   data_mc_ratio__585->SetBinError(22,0.02325626);
   data_mc_ratio__585->SetBinError(23,0.05491372);
   data_mc_ratio__585->SetBinError(24,0.09921966);
   data_mc_ratio__585->SetBinError(25,0.0335161);
   data_mc_ratio__585->SetBinError(26,0.2439185);
   data_mc_ratio__585->SetBinError(27,2.212463);
   data_mc_ratio__585->SetBinError(28,3.489847);
   data_mc_ratio__585->SetMinimum(0.4);
   data_mc_ratio__585->SetMaximum(1.6);
   data_mc_ratio__585->SetEntries(33.25433);
   data_mc_ratio__585->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__585->SetLineColor(ci);
   data_mc_ratio__585->SetLineWidth(2);
   data_mc_ratio__585->SetMarkerStyle(20);
   data_mc_ratio__585->SetMarkerSize(1.2);
   data_mc_ratio__585->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__585->GetXaxis()->SetRange(1,31);
   data_mc_ratio__585->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__585->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__585->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__585->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__585->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__585->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__585->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__585->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__585->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__585->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__585->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__585->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__585->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__585->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1426[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1426[30] = {
   0,
   0.9221907,
   0.1864399,
   0.1717472,
   0.2115552,
   0.1400256,
   0.2203497,
   0.217359,
   0.1383798,
   0.1773733,
   0.1219053,
   0.1201829,
   0.1711756,
   0.1613408,
   0.112962,
   0.1328946,
   0.18091,
   0.1513138,
   0.1922072,
   0.2053373,
   0.4866362,
   0.3261841,
   0.1968433,
   0.2961143,
   0.7710275,
   0.6476196,
   0.1749102,
   0.4192001,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1426,Graph_from_mc_statistical_error_fy1426,Graph_from_mc_statistical_error_fex1426,Graph_from_mc_statistical_error_fey1426);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1426 = new TH1F("Graph_Graph_from_mc_statistical_error1426","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1426->SetMinimum(0.07002836);
   Graph_Graph_from_mc_statistical_error1426->SetMaximum(2.106629);
   Graph_Graph_from_mc_statistical_error1426->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1426->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1426);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
