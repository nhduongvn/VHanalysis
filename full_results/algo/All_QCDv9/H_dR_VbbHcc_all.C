void H_dR_VbbHcc_all()
{
//=========Macro generated from canvas: H_dR_VbbHcc_all/H_dR_VbbHcc_all
//=========  (Mon Nov 21 13:06:14 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_all = new TCanvas("H_dR_VbbHcc_all", "H_dR_VbbHcc_all",0,0,600,600);
   H_dR_VbbHcc_all->SetHighLightColor(2);
   H_dR_VbbHcc_all->Range(0,0,1,1);
   H_dR_VbbHcc_all->SetFillColor(0);
   H_dR_VbbHcc_all->SetFillStyle(4000);
   H_dR_VbbHcc_all->SetBorderMode(0);
   H_dR_VbbHcc_all->SetBorderSize(2);
   H_dR_VbbHcc_all->SetFrameFillStyle(1000);
   H_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-1549.038,10.52419,1547789);
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
   st->SetMaximum(1326529);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",50,0,10);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(1392855);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,50);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,356626.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,445782.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,355399.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,386236.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,337455.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,395277.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,467625.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,426796.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,469369.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,565702.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,473716.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,466739.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,455712.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,491729.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,302731.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,155671);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,114286.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,65447.53);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,41810.67);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,23993.55);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,13868.11);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,5392.519);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,8304.815);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,1361.46);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,22059.56);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,24565.27);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,21827.33);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,22905.14);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,21251.86);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,22914.19);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,25226.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,23983.51);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,25022.62);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,27547.34);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,25171.17);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,24904.35);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,24828.44);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,25739.03);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,20081.26);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,14308.58);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,12348.61);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,9411.608);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,7347.954);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,5760.375);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,4224.653);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,2699.753);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,3396.935);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,1361.46);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(5252);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.3099645);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,754.6671);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,1342.315);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,1729.284);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,2313.284);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,2860.005);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,2972.862);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,2899.001);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,2760.214);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,2778.519);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,2918.563);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,3071.512);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,3005.923);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,2928.184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,2783.999);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,1815.541);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,1252.08);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,820.6429);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,544.6837);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,324.5934);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,190.6513);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,101.4555);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,50.95813);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,24.24762);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,9.008347);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,2.057765);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,0.6431364);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.127411);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,12.3381);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,16.41233);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,17.6768);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,18.871);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,19.92031);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,19.8213);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,19.64702);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,19.56362);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,19.85056);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,20.2358);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,20.81507);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,20.30734);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,19.8383);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,18.999);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,14.56805);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,11.57695);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,8.819772);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,7.112253);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,5.378419);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,4.014816);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,2.830271);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,1.953553);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,1.337166);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,0.7804116);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.35689);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.2050338);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(660055);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_all_stack_3","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(2,4.125356);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(3,6678.62);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(4,14541.01);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(5,20984.3);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(6,27144.09);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(7,29824.94);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(8,29323.43);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(9,27954.2);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(10,26870.27);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(11,26148.1);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(12,25447);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(13,24092.03);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(14,21965.89);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(15,19923.92);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(16,17406.56);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(17,10377.48);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(18,6390.267);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(19,3963.96);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(20,2374.523);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(21,1346.751);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(22,705.2799);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(23,369.1132);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(24,172.3575);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(25,68.18151);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(26,22.58142);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(27,6.734288);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(28,1.380051);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(29,0.09532398);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(2,0.5093091);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(3,20.54146);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(4,30.3004);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(5,36.40693);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(6,41.50939);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(7,43.75386);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(8,43.66995);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(9,42.92943);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(10,42.25904);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(11,41.74136);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(12,41.19036);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(13,40.04868);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(14,38.13886);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(15,36.18854);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(16,33.75753);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(17,25.95148);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(18,20.25332);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(19,15.84351);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(20,12.18887);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(21,9.126088);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(22,6.549675);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(23,4.718517);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(24,3.219581);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(25,2.0069);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(26,1.14598);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(27,0.6152685);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(28,0.2655283);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(29,0.06740423);
   VbbHcc_algo_H_dR_all_stack_3->SetEntries(5745826);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_all_stack_4","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(2,0.5787544);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(3,665.5894);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(4,847.9589);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(5,833.4314);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(6,809.7175);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(7,785.2661);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(8,806.5628);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(9,889.5893);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(10,887.5812);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(11,918.3718);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(12,910.5188);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(13,892.3444);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(14,898.7416);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(15,905.687);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(16,794.3);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(17,448.9611);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(18,271.1814);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(19,166.1365);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(20,96.783);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(21,56.96336);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(22,28.36708);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(23,17.44516);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(24,9.912665);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(25,1.686111);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(26,0.5081208);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(27,0.5606831);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(2,0.4092412);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(3,14.96408);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(4,16.97269);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(5,16.73788);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(6,16.49012);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(7,16.27134);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(8,16.42586);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(9,17.34575);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(10,17.27439);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(11,17.57251);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(12,17.55903);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(13,17.37681);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(14,17.42463);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(15,17.44739);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(16,16.39296);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(17,12.27733);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(18,9.541739);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(19,7.39527);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(20,5.601825);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(21,4.357963);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(22,3.139994);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(23,2.375864);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(24,1.772963);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(25,0.6897159);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(26,0.3592956);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(27,0.3964628);
   VbbHcc_algo_H_dR_all_stack_4->SetEntries(40350);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_all_stack_5","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(3,228.4937);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(4,555.3972);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(5,467.0243);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(6,325.2733);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(7,311.4035);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(8,341.4632);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(9,336.2064);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(10,329.5466);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(11,391.5484);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(12,371.7859);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(13,399.0694);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(14,425.404);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(15,407.4043);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(16,368.7527);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(17,200.4969);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(18,108.1408);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(19,57.89193);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(20,35.38903);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(21,26.39324);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(22,15.12092);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(23,10.87117);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(24,3.434398);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(25,0.8531787);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(3,16.49956);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(4,25.90365);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(5,23.54646);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(6,19.75623);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(7,19.27787);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(8,20.0493);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(9,20.13031);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(10,19.67639);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(11,21.63124);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(12,20.86362);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(13,21.74726);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(14,22.72087);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(15,21.88159);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(16,21.08797);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(17,15.70963);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(18,11.2484);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(19,8.522557);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(20,6.620721);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(21,5.604284);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(22,4.265862);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(23,3.43593);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(24,1.99657);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(25,0.8531787);
   VbbHcc_algo_H_dR_all_stack_5->SetEntries(4995);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_all_stack_6","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(3,4.724125);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(4,8.514418);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(5,10.46201);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(6,13.95242);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(7,15.04501);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(8,15.1355);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(9,12.11969);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(10,11.40732);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(11,12.97875);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(12,12.51996);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(13,12.62475);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(14,14.71413);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(15,12.96693);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(16,10.60155);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(17,7.159862);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(18,4.188406);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(19,2.837412);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(20,0.5605393);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(21,0.9079316);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(22,0.2057269);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(23,0.4219418);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(3,0.7306853);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(4,1.083118);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(5,1.197066);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(6,1.479165);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(7,1.558032);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(8,1.547932);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(9,1.419715);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(10,1.241696);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(11,1.424381);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(12,1.40238);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(13,1.450333);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(14,1.494725);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(15,1.491721);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(16,1.283077);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(17,1.124167);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(18,0.7924707);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(19,0.6901626);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(20,0.2630474);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(21,0.371569);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(22,0.2057269);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(23,0.2785695);
   VbbHcc_algo_H_dR_all_stack_6->SetEntries(1494);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_all_stack_7","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(3,32.05655);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(4,52.70154);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(5,59.95178);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(6,63.35242);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(7,63.40322);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(8,57.71389);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(9,50.08203);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(10,43.43304);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(11,38.66218);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(12,38.99458);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(13,37.36832);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(14,32.75584);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(15,30.52709);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(16,27.42695);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(17,14.34317);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(18,8.35647);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(19,5.164526);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(20,3.573937);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(21,1.475291);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(22,1.084327);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(23,0.9228639);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(24,0.1250881);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(25,0.1773522);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(3,1.867194);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(4,2.425683);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(5,2.645091);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(6,2.679664);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(7,2.600259);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(8,2.47399);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(9,2.356723);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(10,2.237862);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(11,2.043753);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(12,2.115718);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(13,2.040238);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(14,1.950837);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(15,1.837076);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(16,1.775627);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(17,1.221723);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(18,0.9865095);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(19,0.7584866);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(20,0.6466604);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(21,0.4325871);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(22,0.3857952);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(23,0.3551703);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(24,0.08845062);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(25,0.1773522);
   VbbHcc_algo_H_dR_all_stack_7->SetEntries(7384);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_all_stack_8","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(3,19.40962);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(4,34.67236);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(5,46.97733);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(6,52.43894);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(7,61.09799);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(8,60.20132);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(9,63.00528);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(10,56.91509);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(11,49.39816);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(12,49.83028);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(13,44.56434);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(14,31.57718);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(15,30.28975);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(16,23.0212);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(17,12.16032);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(18,5.55431);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(19,2.052676);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(20,3.629894);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(21,1.797231);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(22,0.4838646);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(23,0.5699959);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(3,1.975219);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(4,2.678693);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(5,3.08619);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(6,3.27366);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(7,3.519791);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(8,3.494072);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(9,3.594114);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(10,3.388964);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(11,3.164204);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(12,3.165134);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(13,3.026407);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(14,2.545916);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(15,2.503955);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(16,2.156938);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(17,1.551584);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(18,1.015665);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(19,0.6405507);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(20,0.8621689);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(21,0.6022197);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(22,0.3459994);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(23,0.3351138);
   VbbHcc_algo_H_dR_all_stack_8->SetEntries(3300);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_all_stack_9","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(2,0.01266287);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(3,10.95923);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(4,16.15302);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(5,17.03093);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(6,17.50899);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(7,16.53202);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(8,14.9111);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(9,13.71005);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(10,12.10524);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(11,10.97171);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(12,10.68684);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(13,9.42925);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(14,8.017718);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(15,6.9474);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(16,5.786106);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(17,3.024074);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(18,1.664538);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(19,0.920648);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(20,0.5592842);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(21,0.3214929);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(22,0.1966347);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(23,0.09712009);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(24,0.04529459);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(25,0.02027473);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(26,0.01532775);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(27,0.003081317);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(2,0.004303476);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(3,0.1372925);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(4,0.16746);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(5,0.1715605);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(6,0.1744369);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(7,0.1689646);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(8,0.1601126);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(9,0.1526417);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(10,0.1434134);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(11,0.136426);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(12,0.1335248);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(13,0.125754);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(14,0.1158954);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(15,0.1077573);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(16,0.09831877);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(17,0.07083229);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(18,0.05229499);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(19,0.03888561);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(20,0.03011956);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(21,0.0229533);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(22,0.01754311);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(23,0.01267795);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(24,0.008684338);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(25,0.005411512);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(26,0.004906605);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(27,0.00217882);
   VbbHcc_algo_H_dR_all_stack_9->SetEntries(116514);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_all_stack_10","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(2,0.001356032);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(3,1.90839);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(4,4.091802);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(5,5.297226);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(6,5.780911);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(7,4.977783);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(8,3.689435);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(9,2.697853);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(10,2.352219);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(11,2.236245);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(12,2.46461);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(13,2.389278);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(14,2.298922);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(15,2.126708);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(16,1.81543);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(17,1.097947);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(18,0.572372);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(19,0.3682266);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(20,0.2223448);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(21,0.1391611);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(22,0.06614245);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(23,0.04081413);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(24,0.01873096);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(25,0.008762897);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(26,0.005531807);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(27,0.001323658);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(2,0.0007848631);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(3,0.0277709);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(4,0.04072097);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(5,0.04642772);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(6,0.04856362);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(7,0.04502848);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(8,0.03874879);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(9,0.03309308);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(10,0.03084855);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(11,0.0301214);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(12,0.03158999);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(13,0.03106843);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(14,0.03050675);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(15,0.02932718);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(16,0.02707772);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(17,0.02105238);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(18,0.01516863);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(19,0.01216666);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(20,0.009399656);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(21,0.007320539);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(22,0.005062914);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(23,0.003964247);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(24,0.002714558);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(25,0.001811599);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(26,0.001460941);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(27,0.0007661255);
   VbbHcc_algo_H_dR_all_stack_10->SetEntries(117744);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_all_stack_11","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(3,0.06050057);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(4,0.2452071);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(5,0.2471132);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(6,0.3280468);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(7,0.6770501);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(8,0.6031485);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(9,0.668899);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(10,0.5866144);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(11,0.5339518);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(12,0.4104659);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(13,0.3385092);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(14,0.2547472);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(15,0.1759786);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(16,0.1579493);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(17,0.056592);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(18,0.02793596);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(19,0.01059083);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(20,0.006436191);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(22,0.004023498);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(27,0.002872517);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(3,0.01023826);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(4,0.02015518);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(5,0.01997852);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(6,0.02367216);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(7,0.03390298);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(8,0.03207529);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(9,0.03353505);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(10,0.03192082);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(11,0.03018854);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(12,0.02699862);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(13,0.02386937);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(14,0.02059305);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(15,0.01729482);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(16,0.01607223);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(17,0.009434165);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(18,0.006639933);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(19,0.003937395);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(20,0.003230182);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(22,0.002471293);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(27,0.002031176);
   VbbHcc_algo_H_dR_all_stack_11->SetEntries(3789);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_all_stack_12","",50,0,10);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(3,399.4503);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(4,1341.496);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(5,1519.062);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(6,2862.097);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(7,4351.283);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(8,4686.3);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(9,3956.421);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(10,2709.17);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(11,2084.486);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(12,1472.697);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(13,1199.188);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(14,941.2421);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(15,997.1911);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(16,939.8538);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(17,426.4324);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(18,184.8589);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(19,140.2328);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(20,42.09885);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(21,30.41028);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(22,24.55934);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(3,41.92843);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(4,76.72965);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(5,82.85182);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(6,114.0468);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(7,141.5294);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(8,147.056);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(9,135.7509);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(10,111.4916);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(11,97.31902);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(12,81.01088);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(13,73.72707);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(14,64.12533);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(15,66.51689);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(16,64.82847);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(17,43.38404);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(18,28.21226);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(19,24.95502);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(20,13.56771);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(21,12.03528);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(22,10.3675);
   VbbHcc_algo_H_dR_all_stack_12->SetEntries(7489);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_all__47 = new TH1D("VbbHcc_algo_H_dR_all__47","",50,0,10);
   VbbHcc_algo_H_dR_all__47->SetBinContent(2,25);
   VbbHcc_algo_H_dR_all__47->SetBinContent(3,40915);
   VbbHcc_algo_H_dR_all__47->SetBinContent(4,43325);
   VbbHcc_algo_H_dR_all__47->SetBinContent(5,33041);
   VbbHcc_algo_H_dR_all__47->SetBinContent(6,32097);
   VbbHcc_algo_H_dR_all__47->SetBinContent(7,32952);
   VbbHcc_algo_H_dR_all__47->SetBinContent(8,35274);
   VbbHcc_algo_H_dR_all__47->SetBinContent(9,37401);
   VbbHcc_algo_H_dR_all__47->SetBinContent(10,41685);
   VbbHcc_algo_H_dR_all__47->SetBinContent(11,46689);
   VbbHcc_algo_H_dR_all__47->SetBinContent(12,53164);
   VbbHcc_algo_H_dR_all__47->SetBinContent(13,60222);
   VbbHcc_algo_H_dR_all__47->SetBinContent(14,66879);
   VbbHcc_algo_H_dR_all__47->SetBinContent(15,72235);
   VbbHcc_algo_H_dR_all__47->SetBinContent(16,70282);
   VbbHcc_algo_H_dR_all__47->SetBinContent(17,41002);
   VbbHcc_algo_H_dR_all__47->SetBinContent(18,26319);
   VbbHcc_algo_H_dR_all__47->SetBinContent(19,16970);
   VbbHcc_algo_H_dR_all__47->SetBinContent(20,10672);
   VbbHcc_algo_H_dR_all__47->SetBinContent(21,6562);
   VbbHcc_algo_H_dR_all__47->SetBinContent(22,3798);
   VbbHcc_algo_H_dR_all__47->SetBinContent(23,2051);
   VbbHcc_algo_H_dR_all__47->SetBinContent(24,1099);
   VbbHcc_algo_H_dR_all__47->SetBinContent(25,489);
   VbbHcc_algo_H_dR_all__47->SetBinContent(26,208);
   VbbHcc_algo_H_dR_all__47->SetBinContent(27,47);
   VbbHcc_algo_H_dR_all__47->SetBinContent(28,12);
   VbbHcc_algo_H_dR_all__47->SetEntries(775415);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all__47->SetLineColor(ci);
   VbbHcc_algo_H_dR_all__47->SetLineWidth(2);
   VbbHcc_algo_H_dR_all__47->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_all__47->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_all__47->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_all__47->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__47->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__47->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__47->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all__47->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__47->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__47->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__47->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__47->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fx1047[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fy1047[50] = {
   0,
   5.028093,
   365422.3,
   464527,
   381072.6,
   419844.2,
   375749.9,
   433560.2,
   503803.6,
   460480.4,
   501805.5,
   596937.9,
   503477.2,
   494066.3,
   480957.8,
   514091.6,
   316038.3,
   163897.9,
   119446.6,
   68549.56,
   43600.42,
   24959.57,
   14369.05,
   5629.371,
   8399.99,
   1393.579,
   9.360013,
   2.023187,
   0.09532398,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fex1047[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fey1047[50] = {
   0,
   0.6656777,
   22059.62,
   24565.44,
   21827.54,
   22905.49,
   21252.4,
   22914.73,
   25226.72,
   23983.83,
   25022.87,
   27547.51,
   25171.33,
   24904.49,
   24828.58,
   25739.16,
   20081.34,
   14308.64,
   12348.65,
   9411.632,
   7347.975,
   5760.392,
   4224.659,
   2699.757,
   3396.936,
   1361.461,
   0.8143206,
   0.335476,
   0.06740423,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_H_dR_all_fx1047,Graph_from_VbbHcc_algo_H_dR_all_fy1047,Graph_from_VbbHcc_algo_H_dR_all_fex1047,Graph_from_VbbHcc_algo_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_all1047","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->SetMaximum(686933.9);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__48 = new TH1D("data_mc_ratio__48","",50,0,10);
   data_mc_ratio__48->SetBinContent(2,4.972064);
   data_mc_ratio__48->SetBinContent(3,0.1119664);
   data_mc_ratio__48->SetBinContent(4,0.09326691);
   data_mc_ratio__48->SetBinContent(5,0.08670527);
   data_mc_ratio__48->SetBinContent(6,0.07644978);
   data_mc_ratio__48->SetBinContent(7,0.08769663);
   data_mc_ratio__48->SetBinContent(8,0.08135895);
   data_mc_ratio__48->SetBinContent(9,0.07423727);
   data_mc_ratio__48->SetBinContent(10,0.09052503);
   data_mc_ratio__48->SetBinContent(11,0.09304202);
   data_mc_ratio__48->SetBinContent(12,0.08906119);
   data_mc_ratio__48->SetBinContent(13,0.1196122);
   data_mc_ratio__48->SetBinContent(14,0.1353644);
   data_mc_ratio__48->SetBinContent(15,0.1501899);
   data_mc_ratio__48->SetBinContent(16,0.136711);
   data_mc_ratio__48->SetBinContent(17,0.1297375);
   data_mc_ratio__48->SetBinContent(18,0.1605817);
   data_mc_ratio__48->SetBinContent(19,0.1420719);
   data_mc_ratio__48->SetBinContent(20,0.155683);
   data_mc_ratio__48->SetBinContent(21,0.1505031);
   data_mc_ratio__48->SetBinContent(22,0.1521661);
   data_mc_ratio__48->SetBinContent(23,0.1427374);
   data_mc_ratio__48->SetBinContent(24,0.1952261);
   data_mc_ratio__48->SetBinContent(25,0.05821436);
   data_mc_ratio__48->SetBinContent(26,0.149256);
   data_mc_ratio__48->SetBinContent(27,5.021361);
   data_mc_ratio__48->SetBinContent(28,5.931236);
   data_mc_ratio__48->SetBinError(2,0.9944127);
   data_mc_ratio__48->SetBinError(3,0.0005535365);
   data_mc_ratio__48->SetBinError(4,0.0004480828);
   data_mc_ratio__48->SetBinError(5,0.0004770006);
   data_mc_ratio__48->SetBinError(6,0.000426721);
   data_mc_ratio__48->SetBinError(7,0.0004831055);
   data_mc_ratio__48->SetBinError(8,0.0004331896);
   data_mc_ratio__48->SetBinError(9,0.0003838666);
   data_mc_ratio__48->SetBinError(10,0.0004433827);
   data_mc_ratio__48->SetBinError(11,0.0004305978);
   data_mc_ratio__48->SetBinError(12,0.00038626);
   data_mc_ratio__48->SetBinError(13,0.0004874138);
   data_mc_ratio__48->SetBinError(14,0.0005234313);
   data_mc_ratio__48->SetBinError(15,0.0005588134);
   data_mc_ratio__48->SetBinError(16,0.0005156815);
   data_mc_ratio__48->SetBinError(17,0.000640712);
   data_mc_ratio__48->SetBinError(18,0.0009898319);
   data_mc_ratio__48->SetBinError(19,0.001090604);
   data_mc_ratio__48->SetBinError(20,0.001507017);
   data_mc_ratio__48->SetBinError(21,0.001857922);
   data_mc_ratio__48->SetBinError(22,0.00246911);
   data_mc_ratio__48->SetBinError(23,0.003151773);
   data_mc_ratio__48->SetBinError(24,0.005888965);
   data_mc_ratio__48->SetBinError(25,0.002632544);
   data_mc_ratio__48->SetBinError(26,0.01034904);
   data_mc_ratio__48->SetBinError(27,0.7324407);
   data_mc_ratio__48->SetBinError(28,1.7122);
   data_mc_ratio__48->SetMinimum(0.4);
   data_mc_ratio__48->SetMaximum(1.6);
   data_mc_ratio__48->SetEntries(58.0121);
   data_mc_ratio__48->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__48->SetLineColor(ci);
   data_mc_ratio__48->SetLineWidth(2);
   data_mc_ratio__48->SetMarkerStyle(20);
   data_mc_ratio__48->SetMarkerSize(1.2);
   data_mc_ratio__48->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__48->GetXaxis()->SetRange(1,50);
   data_mc_ratio__48->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__48->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__48->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__48->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__48->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__48->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1048[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1048[50] = {
   0,
   0.1323917,
   0.06036748,
   0.05288269,
   0.05727923,
   0.05455711,
   0.05655997,
   0.05285247,
   0.05007253,
   0.05208436,
   0.04986567,
   0.04614804,
   0.04999499,
   0.05040718,
   0.0516232,
   0.05006725,
   0.06354084,
   0.08730216,
   0.1033822,
   0.1372968,
   0.1685299,
   0.2307889,
   0.2940111,
   0.4795842,
   0.4043976,
   0.9769529,
   0.08699995,
   0.1658156,
   0.7071068,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,11);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.02074242);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(2.172343);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->SetSelected(H_dR_VbbHcc_all);
}
