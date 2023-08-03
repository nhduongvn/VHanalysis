void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Aug  3 10:21:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(0,0,1,1);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-354.0656,6.314516,353721.5);
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
   st->SetMaximum(303156.1);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",30,0,6);
   st_stack_142->SetMinimum(0.01);
   st_stack_142->SetMaximum(318314);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetRange(1,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetLabelSize(0.035);
   st_stack_142->GetXaxis()->SetTitleSize(0.035);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/0.2");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetLabelSize(0.05);
   st_stack_142->GetYaxis()->SetTitleSize(0.057);
   st_stack_142->GetYaxis()->SetTitleOffset(1.2);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetLabelSize(0.035);
   st_stack_142->GetZaxis()->SetTitleSize(0.035);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,43457.55);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,85000.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,108846.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,107501.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,114903.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,121195.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,100121);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,89692.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,88156.39);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,80716.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,77074.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,83596.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,71472.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,59079.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,71561.51);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,49996.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,42948.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,38361.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,42508.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,23705.92);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,17545.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,14703.95);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,9154.465);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,7609.369);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,8042.368);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4524.898);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,4177.616);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,1030.442);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,734.7176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,653.6024);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,2720.788);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,3981.937);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,15483.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4267.121);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,4912.063);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,15502.04);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,3864.761);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,3746.526);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,3678.687);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,3443.381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,3415.044);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,15140.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,3639.463);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,2723.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,15093.69);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2994.936);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,2765.303);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2301.077);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,14925.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1765.388);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1843.154);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1405.298);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1005.231);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,888.248);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1155.646);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,734.8772);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,857.556);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,283.3433);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,279.8329);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,277.1434);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.3095302);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,243.5795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,653.7064);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,825.783);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,932.0655);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,894.4125);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,877.7583);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,807.1967);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,718.8227);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,668.4399);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,599.1651);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,547.6246);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,504.0993);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,463.2694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,441.5141);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,413.2162);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,340.0296);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,311.2005);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,258.7202);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,215.2582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,172.4746);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,128.5895);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,105.1169);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,81.50618);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,57.82463);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,38.62026);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,26.32288);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,14.76482);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,9.696897);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,6.206186);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,8.189854);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2666041);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,6.399715);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,10.13458);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,11.33659);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,11.88011);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,11.35795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,11.22284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,10.85036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,10.13077);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,9.762779);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,9.216429);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,8.79941);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,8.351888);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,7.983788);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,7.909006);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,7.725738);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,6.764576);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,6.642837);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.035213);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.528895);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.965147);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.216771);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.820421);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.38763);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,2.790093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.283913);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,1.866109);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.27386);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.123869);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.8686629);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.9820232);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,9.706502);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,7024.081);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,21595.7);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,23575.01);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,20481.27);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,16587.48);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,13506.16);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,11268.18);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,9592.163);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,8330.285);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,7222.959);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,6342.567);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,5726.403);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,5275.303);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,4951.98);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,4678.557);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,4314.953);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,3939.227);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,3476.578);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3042.578);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,2619.791);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2189.678);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,1773.113);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1352.904);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,993.0161);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,672.6256);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,408.8723);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,223.32);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,109.7448);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,55.86757);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,70.97485);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.7150001);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,21.06844);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,37.17818);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,38.77667);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,35.94943);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,32.15516);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,28.85964);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,26.2751);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,24.19724);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,22.52091);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,20.95549);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,19.63093);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,18.65132);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,17.89981);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,17.36917);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,16.90124);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,16.25279);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,15.55439);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,14.61219);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,13.69077);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,12.73235);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,11.66066);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,10.49321);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,9.173331);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,7.845228);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,6.455236);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,5.013997);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,3.669486);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,2.561229);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,1.803039);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.032225);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.240921);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,234.9397);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,610.6372);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,581.5573);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,708.6451);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,656.8883);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,623.7903);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,587.8235);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,537.1219);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,498.7215);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,501.9088);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,408.9354);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,365.2812);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,355.039);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,310.631);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,304.2026);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,279.7955);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,250.1291);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,201.3864);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,147.1123);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,129.6511);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,105.3609);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,83.64294);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,56.26494);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,42.61907);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,37.82252);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,21.21847);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,13.56227);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,6.129759);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,2.704721);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,9.472001);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.1432591);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,9.690424);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,18.00657);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,18.42438);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,22.99992);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,20.66885);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,19.61748);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,19.1242);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,17.43939);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,16.30346);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,18.5804);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,13.57571);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,11.25037);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,12.56762);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,10.32734);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,11.27751);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,13.0571);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,11.43908);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,9.304637);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,6.831654);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,8.330575);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,8.06559);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,7.346392);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,4.426845);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.756857);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,4.724421);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,3.321589);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.740343);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.090655);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.7148782);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,3.976008);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.001126401);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,87.83884);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,205.1538);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,169.0036);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,210.1979);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,202.4357);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,193.7637);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,204.1207);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,188.7976);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,171.8058);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,155.354);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,131.9165);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,120.7267);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,124.1266);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,130.0565);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,111.066);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,94.25261);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,77.874);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,85.89742);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,52.53626);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,58.64817);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,35.07685);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,52.82386);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,19.16649);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,26.74469);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,10.64654);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,6.509244);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,6.797965);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,2.426928);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.9543326);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,2.877783);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.001126401);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,9.54815);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,17.14942);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,15.04929);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,17.12881);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,14.22766);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,15.63056);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,19.9364);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,18.50586);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,16.12754);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,12.88521);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,10.4928);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,9.719388);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,8.318794);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,13.58411);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,13.04808);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,6.917679);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,6.512161);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,11.30674);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,8.064445);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,10.77856);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,4.436048);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,12.29614);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.160231);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,7.576821);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,2.005065);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.475486);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.127044);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.5876906);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.3040829);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,1.284126);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,2.522447);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.8918197);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,5.454728);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,9.421803);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,8.182092);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,4.462959);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,4.710902);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,6.198555);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,2.23148);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.975306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,4.215017);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,2.975306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.23148);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,1.239711);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,3.223248);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,2.727364);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.719133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,0.9917687);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.727364);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.162952);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.528418);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.424319);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.05193);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.080755);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.239711);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.8588969);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,1.022292);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.8588969);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.5544156);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.8939683);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.8223312);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.960276);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.8223312);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3506432);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.3506432);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,9.875799);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,18.23224);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,14.68709);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,5.570963);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,6.583866);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,7.849994);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,5.824189);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,5.064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,4.811287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,3.798384);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,3.545159);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.304835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,3.038707);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,4.558061);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,2.025805);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,2.785482);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,0.7596768);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.581393);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.148691);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,1.928509);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.187733);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.291202);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.409901);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.214427);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.132459);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.103785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.9807386);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,0.9474835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.044076);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,0.8771992);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.074345);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.7162302);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.8398543);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.4385996);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.001615117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.951948);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.02244);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,12.60437);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,8.808847);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,5.644833);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,3.93604);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,3.17532);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,2.915286);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,2.69563);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,2.408139);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.246628);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.020511);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,1.900993);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,1.736251);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,1.689412);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.37931);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.122506);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.03206);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.8172491);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.8963899);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.7445689);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.7058061);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.6928851);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.5184525);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.3682466);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.2245012);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.1324396);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.04199304);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.0193814);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.0193814);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.001615117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.0894314);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1504921);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1426798);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1192783);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.09548333);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.07973183);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.07161363);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.06861871);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.06598301);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06236527);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.06023758);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05712584);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.05541052);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.05295515);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05223599);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.04719901);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04257909);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04082765);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.03633116);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03804963);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03467803);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03376328);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03345281);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.0289372);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02438773);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01904195);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01462551);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008235512);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.005594929);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005594929);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0008292511);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.576406);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,5.544373);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,6.317649);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,5.390547);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.78719);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.974938);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.462876);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,2.174296);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.995593);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.774183);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.577236);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.381947);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.290729);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.223145);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.138976);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.058954);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.9038837);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.7736913);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.7177168);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.5933291);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.5315499);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.4303813);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.3395783);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.2384097);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1662648);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.110705);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.05473057);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.03234079);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.009536387);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01202414);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0005863691);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02556596);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.0479462);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.05118065);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.0472764);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.03962658);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.03512101);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.03195577);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.0300253);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.02876497);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02712234);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02557268);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02393722);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.02313373);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.02251993);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.02173128);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.02095398);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01935906);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01791067);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01725061);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.01568469);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01484568);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01335841);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01186583);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.009942371);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.00830287);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.006775037);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.004763685);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003661874);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001988474);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.002232827);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.03950628);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.07585205);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1042966);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.0742718);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.06004954);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03002477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02370377);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.01738276);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.0109483);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01283802);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01083366);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.009741322);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.006888155);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.006120286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.0052411);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.0110031);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.0402755);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.03986029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03093324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02387465);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02013775);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.01390958);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01806169);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01432479);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01494761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.009342254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008511832);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007266198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.007889015);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.00622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.004567324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.003944507);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.002283662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001511392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.002891612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.002876668);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00253415);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.002226323);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002044679);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001699326);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.001936417);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.001724502);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.001761592);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.001392661);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001329325);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001228212);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001279767);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001137103);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.0009737568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0009284407);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.0009049321);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0006885501);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0003595835);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__283 = new TH1D("VbbHcc_algo_H_dR_Bj1__283","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(1,5);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(2,7647);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(3,16136);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(4,16469);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(5,18834);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(6,19199);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(7,18232);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(8,16888);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(9,15770);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(10,14287);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(11,13444);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(12,12523);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(13,11833);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(14,11204);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(15,10256);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(16,9619);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(17,8415);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(18,7378);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(19,6031);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(20,4993);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(21,3961);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(22,3234);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(23,2549);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(24,1981);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(25,1461);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(26,1075);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(27,784);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(28,514);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(29,280);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(30,172);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(31,165);
   VbbHcc_algo_H_dR_Bj1__283->SetEntries(255368);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__283->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__283->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__283->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__283->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283[30] = {
   10.26052,
   51071.16,
   108114.2,
   134042.1,
   129860.3,
   133266.8,
   136420.3,
   113003.9,
   100744.1,
   97840.34,
   89208.39,
   84516.94,
   90323.95,
   77700.35,
   64925.14,
   77078.6,
   55031.59,
   47534.25,
   42390.44,
   45970.27,
   26688.99,
   20006.71,
   16721.62,
   10666.42,
   8730.842,
   8803.122,
   4989.225,
   4436.251,
   1158.514,
   800.7276};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283[30] = {
   0.7764214,
   2720.912,
   3982.202,
   15483.36,
   4267.386,
   4912.246,
   15502.09,
   3864.964,
   3746.705,
   3678.841,
   3443.531,
   3415.155,
   15140.35,
   3639.547,
   2723.61,
   15093.72,
   2995.024,
   2765.386,
   2301.178,
   14925.68,
   1765.494,
   1843.219,
   1405.416,
   1005.293,
   888.3322,
   1155.678,
   734.9058,
   857.5692,
   283.3598,
   279.8413};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMinimum(8.535692);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMaximum(167113.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__284 = new TH1D("data_mc_ratio__284","",30,0,6);
   data_mc_ratio__284->SetBinContent(1,0.4873046);
   data_mc_ratio__284->SetBinContent(2,0.1497323);
   data_mc_ratio__284->SetBinContent(3,0.1492495);
   data_mc_ratio__284->SetBinContent(4,0.1228644);
   data_mc_ratio__284->SetBinContent(5,0.1450328);
   data_mc_ratio__284->SetBinContent(6,0.1440644);
   data_mc_ratio__284->SetBinContent(7,0.1336458);
   data_mc_ratio__284->SetBinContent(8,0.1494461);
   data_mc_ratio__284->SetBinContent(9,0.1565352);
   data_mc_ratio__284->SetBinContent(10,0.1460236);
   data_mc_ratio__284->SetBinContent(11,0.1507033);
   data_mc_ratio__284->SetBinContent(12,0.1481715);
   data_mc_ratio__284->SetBinContent(13,0.1310062);
   data_mc_ratio__284->SetBinContent(14,0.144195);
   data_mc_ratio__284->SetBinContent(15,0.1579665);
   data_mc_ratio__284->SetBinContent(16,0.1247947);
   data_mc_ratio__284->SetBinContent(17,0.1529122);
   data_mc_ratio__284->SetBinContent(18,0.1552144);
   data_mc_ratio__284->SetBinContent(19,0.1422727);
   data_mc_ratio__284->SetBinContent(20,0.1086137);
   data_mc_ratio__284->SetBinContent(21,0.1484133);
   data_mc_ratio__284->SetBinContent(22,0.1616458);
   data_mc_ratio__284->SetBinContent(23,0.1524374);
   data_mc_ratio__284->SetBinContent(24,0.185723);
   data_mc_ratio__284->SetBinContent(25,0.1673378);
   data_mc_ratio__284->SetBinContent(26,0.1221158);
   data_mc_ratio__284->SetBinContent(27,0.1571386);
   data_mc_ratio__284->SetBinContent(28,0.1158636);
   data_mc_ratio__284->SetBinContent(29,0.2416889);
   data_mc_ratio__284->SetBinContent(30,0.2148046);
   data_mc_ratio__284->SetBinContent(31,0.2213587);
   data_mc_ratio__284->SetBinError(1,0.2179292);
   data_mc_ratio__284->SetBinError(2,0.001712261);
   data_mc_ratio__284->SetBinError(3,0.001174938);
   data_mc_ratio__284->SetBinError(4,0.0009573979);
   data_mc_ratio__284->SetBinError(5,0.001056805);
   data_mc_ratio__284->SetBinError(6,0.001039722);
   data_mc_ratio__284->SetBinError(7,0.0009897791);
   data_mc_ratio__284->SetBinError(8,0.001149994);
   data_mc_ratio__284->SetBinError(9,0.001246511);
   data_mc_ratio__284->SetBinError(10,0.001221666);
   data_mc_ratio__284->SetBinError(11,0.001299746);
   data_mc_ratio__284->SetBinError(12,0.001324068);
   data_mc_ratio__284->SetBinError(13,0.001204327);
   data_mc_ratio__284->SetBinError(14,0.001362271);
   data_mc_ratio__284->SetBinError(15,0.001559826);
   data_mc_ratio__284->SetBinError(16,0.001272422);
   data_mc_ratio__284->SetBinError(17,0.001666921);
   data_mc_ratio__284->SetBinError(18,0.001807019);
   data_mc_ratio__284->SetBinError(19,0.001832006);
   data_mc_ratio__284->SetBinError(20,0.001537106);
   data_mc_ratio__284->SetBinError(21,0.002358144);
   data_mc_ratio__284->SetBinError(22,0.00284246);
   data_mc_ratio__284->SetBinError(23,0.003019302);
   data_mc_ratio__284->SetBinError(24,0.00417276);
   data_mc_ratio__284->SetBinError(25,0.004377932);
   data_mc_ratio__284->SetBinError(26,0.003724496);
   data_mc_ratio__284->SetBinError(27,0.005612094);
   data_mc_ratio__284->SetBinError(28,0.005110525);
   data_mc_ratio__284->SetBinError(29,0.01444367);
   data_mc_ratio__284->SetBinError(30,0.0163787);
   data_mc_ratio__284->SetBinError(31,0.08409929);
   data_mc_ratio__284->SetMinimum(0.4);
   data_mc_ratio__284->SetMaximum(1.6);
   data_mc_ratio__284->SetEntries(368.0445);
   data_mc_ratio__284->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__284->SetLineColor(ci);
   data_mc_ratio__284->SetLineWidth(2);
   data_mc_ratio__284->SetMarkerStyle(20);
   data_mc_ratio__284->SetMarkerSize(1.2);
   data_mc_ratio__284->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__284->GetXaxis()->SetRange(1,30);
   data_mc_ratio__284->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__284->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__284->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__284->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__284->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__284->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__284->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__284->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__284->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__284->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__284->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__284->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__284->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__284->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1284[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1284[30] = {
   0.07567074,
   0.05327687,
   0.03683329,
   0.1155112,
   0.03286136,
   0.03686023,
   0.1136348,
   0.03420203,
   0.0371903,
   0.03760045,
   0.03860098,
   0.04040794,
   0.1676228,
   0.04684081,
   0.04195001,
   0.1958224,
   0.05442372,
   0.0581767,
   0.05428531,
   0.3246812,
   0.06615066,
   0.09213003,
   0.08404782,
   0.09424838,
   0.1017464,
   0.1312805,
   0.1472986,
   0.1933095,
   0.244589,
   0.3494837};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1284,Graph_from_mc_statistical_error_fy1284,Graph_from_mc_statistical_error_fex1284,Graph_from_mc_statistical_error_fey1284);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1284 = new TH1F("Graph_Graph_from_mc_statistical_error1284","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1284->SetMinimum(0.5806195);
   Graph_Graph_from_mc_statistical_error1284->SetMaximum(1.41938);
   Graph_Graph_from_mc_statistical_error1284->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1284->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1284);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
