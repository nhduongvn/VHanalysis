void H_dR_Bj0_both_17()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Thu Aug  3 10:21:50 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(0,0,1,1);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-111.2374,6.314516,111136.2);
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
   st->SetMaximum(95248.99);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,6);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(100011.4);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,30);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.2");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5501.267);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,40301.44);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,24733.83);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,16260.59);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,15101.42);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,10696.36);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,7853.273);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,11197.63);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,21760.12);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,7882.936);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,6925.208);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8284.698);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,6343.948);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,5944.364);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,6428.149);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,5330.136);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,2941.678);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2005.351);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1714.972);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1011.083);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,1262.121);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,805.3603);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,418.6686);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,144.7145);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,17.92328);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,14.14851);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,13.61749);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,29.41215);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,696.5517);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,14942.05);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,1980.55);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,1560.426);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,1596.383);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1316.64);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1069.403);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,2041.532);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,14843.52);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,1160.651);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1062.567);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1191.393);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,990.6476);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,953.0542);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,957.5503);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,872.5759);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,620.1587);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,484.8226);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,480.9218);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,388.2107);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,472.956);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,385.2656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,273.2188);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,47.73531);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,10.46405);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,9.643653);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,9.629022);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,23.10479);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,35.83533);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,104.3028);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,124.3734);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,107.0419);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,92.86352);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,76.90729);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,69.59421);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,56.93718);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,50.93481);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,45.31849);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,38.93974);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,41.46241);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,34.44765);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,37.17553);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,34.74596);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,32.5916);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,17.87475);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,13.98921);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,9.320615);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,7.555712);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,4.19873);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.291008);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.263944);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.885195);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,1.00313);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.606546);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.2356193);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3154485);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.04712387);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.512906);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.959258);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,4.420003);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,4.019987);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.82347);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.469037);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.316834);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.024758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.800312);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.613127);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.383257);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.577083);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.238415);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.422855);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.290351);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.291654);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.634766);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.425914);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.115095);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,1.049814);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.7364958);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.6211803);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.5290792);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.5631049);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.402011);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2929415);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.1053722);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2686248);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.04712387);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,511.5507);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2074.553);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,2633.281);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,2372.968);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1971.068);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1641.195);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1357.203);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1156.437);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,1002.893);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,903.2836);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,791.7182);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,746.3061);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,666.5322);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,631.9704);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,587.8161);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,539.5396);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,334.4073);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,223.5987);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,152.3318);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,105.1745);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,69.06035);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,44.64855);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,30.43635);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,20.95727);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,12.27245);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,6.723884);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.595332);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.850379);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.913721);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.5042573);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.573702);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,5.656612);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,11.40437);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,12.87339);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,12.20934);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,11.11566);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,10.13664);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,9.202928);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,8.482613);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,7.895888);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,7.507784);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,7.025992);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,6.829403);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,6.444663);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,6.285118);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,6.067183);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,5.812672);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,4.563875);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.732855);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.081204);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.553865);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.067109);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.66844);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.371537);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.14155);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.8769908);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.6361813);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.4684513);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.3493597);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3508001);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.1724264);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.3055999);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,96.12857);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,334.66);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,348.0791);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,260.3418);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,187.6992);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,154.5527);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,143.4064);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,128.0571);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,92.63128);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,99.5456);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,104.1106);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,88.69263);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,73.38694);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,79.08733);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,79.53332);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,74.50431);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,40.54442);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,24.82313);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,13.4734);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,12.04642);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,8.761341);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,3.981589);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.576301);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.960085);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.62609);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.240921);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1746112);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.1083014);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.06630981);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.3534218);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,4.515868);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,10.70319);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,13.02975);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,11.5831);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,9.116421);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,8.28972);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,8.548012);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.754462);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,5.121647);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,6.948433);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.980197);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.206236);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,4.634728);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,4.777859);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.805916);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.319912);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,2.929472);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,2.278873);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,1.51876);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.659103);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.328671);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,0.9535356);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.7713051);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.5886929);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.6560729);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.1432591);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.1269889);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.1083014);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.06630981);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.3534218);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,13.81824);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,27.47222);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,42.31888);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,18.06433);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,24.10952);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,14.36862);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,11.97012);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,16.86399);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.609434);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,15.67788);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,10.30565);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,12.31512);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,7.834221);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,7.450201);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,8.142316);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,6.952973);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,2.569107);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,6.186594);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,2.459011);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.009149);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,0.4866469);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,2.300834);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.33755);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.1624047);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,0.1763629);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,0.001126401);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.003589);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,2.862889);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,7.886958);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,2.202797);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.62656);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.140248);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,2.289664);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,6.916683);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,1.040102);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.095994);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.24493);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,2.555017);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.816236);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,1.042021);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.568737);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,1.448676);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.4986086);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.845449);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.6696918);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.3311191);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.2336388);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,1.255469);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.1628234);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.1148375);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.1763629);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.001126401);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,0.9917687);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.7438266);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.4294485);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(22,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,7.343543);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,6.837091);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,5.824189);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.025805);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.266128);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.363662);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.315799);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.214427);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7162302);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.3581151);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.5662297);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4385996);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.847694);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,8.233866);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,8.369536);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.704593);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.574254);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.524428);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.996284);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.778244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.644189);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.544052);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.535976);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.413227);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.461681);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.368004);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.389001);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.235564);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.7154968);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.4441571);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.248728);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1211338);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.08560119);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.06621979);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02745699);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01453605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01292094);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.006460468);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.05462821);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1153198);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.116266);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.09598742);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.07597919);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.06385331);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.05678233);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.05359171);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.0515321);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.0499382);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.04980744);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.0477758);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04858791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04700517);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.04736452);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.04467193);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.03399428);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.02678368);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02004307);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01398732);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01175823);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01034179);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.006659297);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.004845351);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.00456824);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.00228412);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.6895223);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,3.190958);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.733288);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.830649);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.876181);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.343801);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.027027);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.8599334);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.7778375);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.6907661);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.6119873);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.5755002);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.5245013);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.5195258);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.477234);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.4477956);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.2516777);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1579723);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.09080299);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.05099894);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.03275542);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.01741427);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01492652);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.008292511);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.004560881);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.003317004);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.001658502);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001243877);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001243877);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0008292511);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.01690839);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03637379);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.03934357);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.03425871);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.02789108);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02360454);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.02063569);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.01888254);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.0179586);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01692363);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01592939);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01544724);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.01474692);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.01467681);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01406675);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01362599);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01021528);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.008093168);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.006135898);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.00459842);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.003685272);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002687081);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002487753);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.001854262);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001375157);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001172738);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0008292511);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.0007181525);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0007181525);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0005863691);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.02686427);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.03318527);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.02054326);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.006515542);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.00724162);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.005697677);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01058789);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00477493);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.003529296);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002906479);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002698874);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.00145324);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.001245634);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.001313013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.001482601);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.001467994);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.0009956417);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.00085598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.0007767892);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.0007485328);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0005492729);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0005085279);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__467 = new TH1D("VbbHcc_both_H_dR_Bj0__467","",30,0,6);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(1,3020);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(2,9305);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(3,9372);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(4,7343);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(5,6074);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(6,5052);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(7,4376);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(8,3859);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(9,3296);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(10,3014);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(11,2731);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(12,2541);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(13,2317);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(14,2307);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(15,2231);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(16,1957);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(17,1256);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(18,855);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(19,621);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(20,452);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(21,275);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(22,183);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(23,132);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(24,100);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(25,48);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(26,27);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(27,15);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(28,8);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(29,4);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(30,3);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(31,5);
   VbbHcc_both_H_dR_Bj0__467->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__467->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__467->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__467->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__467->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1467[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1467[30] = {
   6163.677,
   42862.04,
   27901.86,
   19034.7,
   17385.41,
   12588.79,
   9441.016,
   12561.09,
   22918.88,
   8951.336,
   7873.437,
   9176.727,
   7130.669,
   6704.967,
   7141.526,
   5987.996,
   3339.563,
   2275.875,
   1893.151,
   1137.041,
   1344.747,
   859.914,
   454.3253,
   169.5847,
   33.00484,
   21.906,
   17.62907,
   31.68914,
   1.983098,
   0.8576791};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1467[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1467[30] = {
   696.5972,
   14942.05,
   1980.656,
   1560.524,
   1596.456,
   1316.712,
   1069.484,
   2041.583,
   14843.52,
   1160.704,
   1062.625,
   1191.44,
   990.6839,
   953.0909,
   957.5858,
   872.6161,
   620.1851,
   484.8483,
   480.9359,
   388.2242,
   472.963,
   385.273,
   273.2239,
   47.75592,
   10.52951,
   9.671723,
   9.641823,
   23.10924,
   0.3570166,
   0.3932402};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1467,Graph_from_VbbHcc_both_H_dR_Bj0_fy1467,Graph_from_VbbHcc_both_H_dR_Bj0_fex1467,Graph_from_VbbHcc_both_H_dR_Bj0_fey1467);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01467 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01467","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMinimum(0.417995);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMaximum(63584.46);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01467);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__468 = new TH1D("data_mc_ratio__468","",30,0,6);
   data_mc_ratio__468->SetBinContent(1,0.4899673);
   data_mc_ratio__468->SetBinContent(2,0.2170918);
   data_mc_ratio__468->SetBinContent(3,0.3358916);
   data_mc_ratio__468->SetBinContent(4,0.3857691);
   data_mc_ratio__468->SetBinContent(5,0.3493734);
   data_mc_ratio__468->SetBinContent(6,0.4013095);
   data_mc_ratio__468->SetBinContent(7,0.4635094);
   data_mc_ratio__468->SetBinContent(8,0.3072187);
   data_mc_ratio__468->SetBinContent(9,0.1438115);
   data_mc_ratio__468->SetBinContent(10,0.3367095);
   data_mc_ratio__468->SetBinContent(11,0.3468625);
   data_mc_ratio__468->SetBinContent(12,0.2768961);
   data_mc_ratio__468->SetBinContent(13,0.3249344);
   data_mc_ratio__468->SetBinContent(14,0.3440733);
   data_mc_ratio__468->SetBinContent(15,0.3123982);
   data_mc_ratio__468->SetBinContent(16,0.3268205);
   data_mc_ratio__468->SetBinContent(17,0.3760971);
   data_mc_ratio__468->SetBinContent(18,0.3756796);
   data_mc_ratio__468->SetBinContent(19,0.3280245);
   data_mc_ratio__468->SetBinContent(20,0.3975231);
   data_mc_ratio__468->SetBinContent(21,0.2044994);
   data_mc_ratio__468->SetBinContent(22,0.212812);
   data_mc_ratio__468->SetBinContent(23,0.2905407);
   data_mc_ratio__468->SetBinContent(24,0.5896757);
   data_mc_ratio__468->SetBinContent(25,1.454332);
   data_mc_ratio__468->SetBinContent(26,1.232539);
   data_mc_ratio__468->SetBinContent(27,0.8508673);
   data_mc_ratio__468->SetBinContent(28,0.2524525);
   data_mc_ratio__468->SetBinContent(29,2.017046);
   data_mc_ratio__468->SetBinContent(30,3.497812);
   data_mc_ratio__468->SetBinContent(31,3.08327);
   data_mc_ratio__468->SetBinError(1,0.008915868);
   data_mc_ratio__468->SetBinError(2,0.002250533);
   data_mc_ratio__468->SetBinError(3,0.003469629);
   data_mc_ratio__468->SetBinError(4,0.004501847);
   data_mc_ratio__468->SetBinError(5,0.004482832);
   data_mc_ratio__468->SetBinError(6,0.00564609);
   data_mc_ratio__468->SetBinError(7,0.007006803);
   data_mc_ratio__468->SetBinError(8,0.0049455);
   data_mc_ratio__468->SetBinError(9,0.002504956);
   data_mc_ratio__468->SetBinError(10,0.006133153);
   data_mc_ratio__468->SetBinError(11,0.006637377);
   data_mc_ratio__468->SetBinError(12,0.005493062);
   data_mc_ratio__468->SetBinError(13,0.00675045);
   data_mc_ratio__468->SetBinError(14,0.007163531);
   data_mc_ratio__468->SetBinError(15,0.006613918);
   data_mc_ratio__468->SetBinError(16,0.007387779);
   data_mc_ratio__468->SetBinError(17,0.01061219);
   data_mc_ratio__468->SetBinError(18,0.01284797);
   data_mc_ratio__468->SetBinError(19,0.01316317);
   data_mc_ratio__468->SetBinError(20,0.01869791);
   data_mc_ratio__468->SetBinError(21,0.01233178);
   data_mc_ratio__468->SetBinError(22,0.01573151);
   data_mc_ratio__468->SetBinError(23,0.02528832);
   data_mc_ratio__468->SetBinError(24,0.05896757);
   data_mc_ratio__468->SetBinError(25,0.2099148);
   data_mc_ratio__468->SetBinError(26,0.2372022);
   data_mc_ratio__468->SetBinError(27,0.219693);
   data_mc_ratio__468->SetBinError(28,0.08925542);
   data_mc_ratio__468->SetBinError(29,1.008523);
   data_mc_ratio__468->SetBinError(30,2.019463);
   data_mc_ratio__468->SetBinError(31,1.498982);
   data_mc_ratio__468->SetMinimum(0.4);
   data_mc_ratio__468->SetMaximum(1.6);
   data_mc_ratio__468->SetEntries(34.2871);
   data_mc_ratio__468->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__468->SetLineColor(ci);
   data_mc_ratio__468->SetLineWidth(2);
   data_mc_ratio__468->SetMarkerStyle(20);
   data_mc_ratio__468->SetMarkerSize(1.2);
   data_mc_ratio__468->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__468->GetXaxis()->SetRange(1,30);
   data_mc_ratio__468->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__468->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__468->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__468->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__468->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__468->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.1130165,
   0.3486081,
   0.07098653,
   0.08198309,
   0.09182736,
   0.104594,
   0.1132806,
   0.1625323,
   0.6476545,
   0.1296682,
   0.1349633,
   0.1298328,
   0.1389328,
   0.142147,
   0.134087,
   0.1457276,
   0.1857084,
   0.2130382,
   0.2540399,
   0.3414338,
   0.3517115,
   0.4480367,
   0.6013838,
   0.2816051,
   0.3190294,
   0.4415102,
   0.5469274,
   0.7292481,
   0.1800298,
   0.4584934};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.1249022);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.875098);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
