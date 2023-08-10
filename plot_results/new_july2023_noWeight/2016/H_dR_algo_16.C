void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Aug 10 12:28:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(0,0,1,1);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-679.4908,6.525,678821.2);
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
   st->SetMaximum(581782.1);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(610871.2);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetLabelSize(0.035);
   st_stack_117->GetXaxis()->SetTitleSize(0.035);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetLabelSize(0.035);
   st_stack_117->GetZaxis()->SetTitleSize(0.035);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,22.20356);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,68721.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,100018.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,89286.35);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,82285.47);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,108665.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,109119.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,128985);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,139055.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,151902.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,182861.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,206290.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,242549.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,213698.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,232677.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,179933.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,177252.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,176445.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,168755.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,135407);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,107264.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,91993.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,63179.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,53163.99);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,55346.62);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,34950.36);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,21968.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,20236.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,11478.72);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,12176.08);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,22.20356);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,4277.749);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,5528.541);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5828.957);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,4691.092);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,6597.989);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,5901.075);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,6768.725);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,7130.724);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,7172.133);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,21207.45);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,8662.067);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,22040.1);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,8904.234);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,21842.8);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,7177.587);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,7035.287);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,7352.545);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,7686.948);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,6775.273);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,5827.763);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,5327.375);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,5030.789);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,4347.903);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,20317.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,4154.849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3321.631);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,2739.061);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,2364.766);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,2755.582);
   VbbHcc_algo_H_dR_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.04373405);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,427.6607);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,736.0975);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,840.328);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,948.4281);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,1029.261);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,1066.427);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,1170.542);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,1248.285);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,1315.211);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,1437.195);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,1481.277);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,1450.849);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,1389.007);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,1348.656);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,1231.842);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1157.859);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1077.577);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,1010.529);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,910.8152);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,782.2632);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,621.1921);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,527.5082);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,421.7897);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,325.4898);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,246.4754);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,173.3941);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,136.8721);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,83.40225);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,66.58714);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.04373405);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,8.155213);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,10.54763);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,11.07102);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,11.63437);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,11.9894);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,12.1639);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,12.74037);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,13.13717);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,13.30011);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,14.07936);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,14.14778);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,13.8864);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,13.32241);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,13.00236);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,12.39611);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,12.05988);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,11.72687);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,11.35246);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,10.91554);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,10.20415);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,8.825308);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,8.308836);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,7.4439);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,6.469713);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,5.711401);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,4.577277);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,4.286238);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,3.424349);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.966521);
   VbbHcc_algo_H_dR_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,4.013706);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,10931.14);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,22081.63);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,26868.22);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,28396.73);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,26955.64);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,24439.11);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,21995.38);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,20049.41);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,19143.03);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,18666.11);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,17957.46);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,16417.96);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,14703.06);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,13426.74);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,12237.69);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,11684.29);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,11614.45);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,11598.86);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,10947.94);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,9988.433);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,9030.361);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,8175.95);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,7291.416);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,6293.696);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,5188.962);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,4097.37);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,2954.701);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1681.527);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,1136.032);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.4752746);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,26.2757);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,37.52124);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,41.42842);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,42.5816);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,41.42976);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,39.36041);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,37.19986);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,35.37531);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,34.42865);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,33.93602);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,33.23097);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,31.7281);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,29.96388);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,28.61541);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,27.3294);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,26.73944);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,26.70298);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,26.72593);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,25.98718);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,24.86284);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,23.6749);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,22.59247);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,21.39301);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,19.91021);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,18.10203);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,16.0787);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,13.63779);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,10.25642);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,8.383785);
   VbbHcc_algo_H_dR_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.1448776);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,345.863);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,543.145);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,578.6463);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,542.3613);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,556.5066);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,564.7078);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,648.3704);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,685.6206);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,739.5219);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,812.7938);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,913.0847);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,897.1352);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,888.9243);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,875.9445);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,802.3791);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,746.4388);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,728.646);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,699.0149);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,600.1545);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,504.2274);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,373.6024);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,273.6333);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,210.2505);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,181.6635);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,155.7158);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,102.3062);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,82.0289);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,50.67297);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,40.31141);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.1027791);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,11.22324);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,16.3999);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,22.25461);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,24.62358);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,24.80933);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,24.05023);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,26.09454);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,25.10764);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,25.80524);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,25.28366);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,28.60714);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,26.06769);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,25.33813);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,24.30681);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,22.13607);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,21.3967);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,21.74148);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,23.40324);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,21.89928);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,21.37874);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,18.42558);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,15.47402);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,14.18738);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,14.23689);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,13.3398);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,9.701342);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,8.286066);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,6.5486);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,6.419777);
   VbbHcc_algo_H_dR_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(2,0.2891357);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,229.653);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,288.2522);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,243.2012);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,253.0989);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,235.5334);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,253.5513);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,274.5269);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,348.5745);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,389.8262);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,434.166);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,442.1865);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,464.8918);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,437.1054);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,437.2486);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,446.0184);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,398.6149);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,407.7392);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,345.8604);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,321.8316);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,252.7543);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,241.3745);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,168.7124);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,97.67582);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,92.60693);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,83.86617);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,39.88399);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,52.4027);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,32.41584);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,29.23508);
   VbbHcc_algo_H_dR_stack_5->SetBinError(2,0.1778042);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,16.21862);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,22.23977);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,20.9481);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,23.31945);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,20.67307);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,22.54882);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,22.62617);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,28.0079);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,29.57308);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,28.31897);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,26.19133);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,25.90335);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,23.27572);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,21.85935);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,24.80972);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,21.25705);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,25.82451);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,22.96283);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,23.69439);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,21.55242);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,21.00299);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,17.21005);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,12.17378);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,13.53711);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,15.67911);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,7.321189);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,13.87475);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,9.117704);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,9.131572);
   VbbHcc_algo_H_dR_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,2.149909);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,4.971664);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,3.359232);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,5.509141);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,1.88117);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.746801);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.687386);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,3.090494);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,2.821755);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,5.240403);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,4.031079);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,3.493602);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,5.106033);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,3.359232);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,6.180988);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,3.89671);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,2.956125);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,3.493602);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,2.687386);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,1.074954);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,3.224863);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,1.074954);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(25,0.8062158);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.5374772);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.2687386);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.6718465);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,0.4031079);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.1343693);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.5374772);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.8173365);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.6718465);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.8603833);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.5027639);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.4844754);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.6009178);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.6444125);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.6157575);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.839136);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.735971);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.6851517);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.828308);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.6718465);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.9113369);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.7236008);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6302479);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.6851517);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.6009178);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.3800538);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.6582724);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.3800538);
   VbbHcc_algo_H_dR_stack_6->SetBinError(25,0.3291362);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.2687386);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.1900269);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.3004589);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.2327345);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.1343693);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_H_dR_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,7.634105);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,12.32363);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,8.506574);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,6.761636);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,4.79858);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,3.053642);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,3.380818);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,3.380818);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,3.598935);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,4.580463);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,6.652577);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,5.889167);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,5.780108);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,6.652577);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,5.671049);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,7.306929);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,6.43446);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,5.452932);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.726466);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.072114);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,2.617407);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,2.726466);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,1.744938);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,1.417762);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,1.417762);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.853997);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,1.090586);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.5452932);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.3271759);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.91245);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.159309);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,0.9631798);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.8587286);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.7234132);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.5770841);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.6072128);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.6072128);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.6264942);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.7067808);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.8517752);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.8014141);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.7939589);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.8517752);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.786433);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.8926834);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.8376953);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.771161);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.5452932);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.4753756);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.534276);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.5452932);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.4362346);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.3932165);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.3932165);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.4496603);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.3448737);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2438625);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.1888951);
   VbbHcc_algo_H_dR_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,8.51225);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,12.40356);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,12.16036);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,12.40356);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,7.539422);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,6.8098);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,7.296215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,5.10735);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,5.350557);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,6.080179);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,7.053007);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,6.566593);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,5.593764);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,7.782629);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,5.593764);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,6.566593);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,7.296215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,6.323386);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,5.350557);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,4.134522);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,3.4049);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.459243);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,2.918486);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,2.432072);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,2.918486);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,1.216036);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,0.7296215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.2432072);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.4864143);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.438833);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.736846);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.719734);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.736846);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.35412);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.286931);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.3321);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.114515);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.140743);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,1.216036);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.309711);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.263741);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.166381);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.375787);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.166381);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.263741);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.3321);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.240118);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.140743);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,1.002769);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.9099978);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.5957334);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.8424943);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.7690885);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.8424943);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.5438277);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.4212471);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.2432072);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.3439469);
   VbbHcc_algo_H_dR_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.002747902);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.686546);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,8.842747);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,9.658874);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,8.829008);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,6.993409);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,5.2375);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,4.062772);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,3.412894);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,3.67257);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,3.7976);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,4.178184);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.050407);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,3.52968);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,3.105129);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,2.936133);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,2.912776);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,2.995213);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.640733);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,2.348082);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.858955);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.643245);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.49898);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.464632);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.391812);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.40143);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.149997);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.893068);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.4863786);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.2940255);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.00194306);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.0802439);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1102248);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.115199);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1101391);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.09802347);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.08482964);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.07471311);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.06847735);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.07103472);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.07223376);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.07576688);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.07459933);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.06963911);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.06531687);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.06351458);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.06326144);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.06415041);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.06023485);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.0567992);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.05053824);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.04751566);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.04538199);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.04485902);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.04372964);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.04388047);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.0397497);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.03502901);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.02585073);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.02009917);
   VbbHcc_algo_H_dR_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0003580462);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.008974);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,2.592613);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,3.335917);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,3.424712);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,2.749795);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.991095);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.488398);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.372749);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.528141);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,1.766242);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,1.913757);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,1.884755);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.675298);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.597244);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.40748);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.429679);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.425024);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.376688);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.18012);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.9806886);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.7060671);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.6520021);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.6301613);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.5900602);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.519525);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.4257169);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.3111422);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1586145);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.1041914);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0003580462);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01900682);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03046761);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.03456027);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.03501721);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.0313776);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.02670026);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.02308496);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02216997);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.02339113);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.02514749);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.02617658);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.02597748);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02449151);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02391416);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.02244867);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.02262501);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.02258815);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.02220175);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.02055572);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.01873851);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01589983);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.01527897);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.01502088);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.01453509);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01363869);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01234611);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01055477);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.007536001);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.006107811);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.0355551);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.07931522);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.1011953);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.05743516);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.06564018);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.05470015);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.02735007);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.04376012);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.0355551);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.04649513);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.06564018);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.0355551);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.05196514);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.0382901);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01914505);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.04649513);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.04923013);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.02735007);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.02188006);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.01641004);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.02461507);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01094003);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01094003);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01641004);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.02188006);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.008205022);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.00986121);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01472847);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.0166364);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01253338);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01339875);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.01223133);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.008648853);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.01094003);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.00986121);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.01127672);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01339875);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.00986121);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.01192162);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.01023346);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.00723615);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.01127672);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.01160365);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.008648853);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.007735769);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.006699373);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.008205022);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.005470015);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.002735007);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.006115663);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.005470015);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.006699373);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.007735769);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.004737172);
   VbbHcc_algo_H_dR_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.006430785);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.01929236);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.03108213);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.028224);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.02965307);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.02250775);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01429063);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01321884);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01536243);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.02215048);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01893509);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.02000689);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01893509);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.01750603);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01393337);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.0125043);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01964962);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01714876);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.01178977);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.007502583);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.009288912);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.006073519);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.008931646);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.006430785);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004644456);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.005001722);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.002143595);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.0007145317);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001071798);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001515751);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002625357);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003332354);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.003175448);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.003254847);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.00283571);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.002259548);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.002173163);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.002342749);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002813114);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002600935);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002673533);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002600935);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.002500861);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.002231125);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.002113613);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.002649554);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.00247521);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.002052336);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001637198);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001821706);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001473045);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001786329);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001515751);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.00128814);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001336766);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.000875119);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005052502);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0006188026);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__320 = new TH1D("VbbHcc_algo_H_dR__320","",30,0,6);
   VbbHcc_algo_H_dR__320->SetBinContent(2,12);
   VbbHcc_algo_H_dR__320->SetBinContent(3,25462);
   VbbHcc_algo_H_dR__320->SetBinContent(4,32280);
   VbbHcc_algo_H_dR__320->SetBinContent(5,27675);
   VbbHcc_algo_H_dR__320->SetBinContent(6,27780);
   VbbHcc_algo_H_dR__320->SetBinContent(7,27979);
   VbbHcc_algo_H_dR__320->SetBinContent(8,29324);
   VbbHcc_algo_H_dR__320->SetBinContent(9,31798);
   VbbHcc_algo_H_dR__320->SetBinContent(10,34602);
   VbbHcc_algo_H_dR__320->SetBinContent(11,38889);
   VbbHcc_algo_H_dR__320->SetBinContent(12,43314);
   VbbHcc_algo_H_dR__320->SetBinContent(13,48217);
   VbbHcc_algo_H_dR__320->SetBinContent(14,51351);
   VbbHcc_algo_H_dR__320->SetBinContent(15,52693);
   VbbHcc_algo_H_dR__320->SetBinContent(16,52374);
   VbbHcc_algo_H_dR__320->SetBinContent(17,50313);
   VbbHcc_algo_H_dR__320->SetBinContent(18,47300);
   VbbHcc_algo_H_dR__320->SetBinContent(19,43837);
   VbbHcc_algo_H_dR__320->SetBinContent(20,39336);
   VbbHcc_algo_H_dR__320->SetBinContent(21,33166);
   VbbHcc_algo_H_dR__320->SetBinContent(22,26658);
   VbbHcc_algo_H_dR__320->SetBinContent(23,21297);
   VbbHcc_algo_H_dR__320->SetBinContent(24,16666);
   VbbHcc_algo_H_dR__320->SetBinContent(25,12737);
   VbbHcc_algo_H_dR__320->SetBinContent(26,9741);
   VbbHcc_algo_H_dR__320->SetBinContent(27,7730);
   VbbHcc_algo_H_dR__320->SetBinContent(28,6020);
   VbbHcc_algo_H_dR__320->SetBinContent(29,4942);
   VbbHcc_algo_H_dR__320->SetBinContent(30,3204);
   VbbHcc_algo_H_dR__320->SetBinContent(31,2407);
   VbbHcc_algo_H_dR__320->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__320->SetLineColor(ci);
   VbbHcc_algo_H_dR__320->SetLineWidth(2);
   VbbHcc_algo_H_dR__320->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__320->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1233[30] = {
   0,
   26.69812,
   80680.33,
   123708.5,
   117853.9,
   112463.1,
   137466.6,
   135462.4,
   153092.7,
   161403.9,
   173507,
   204233.2,
   227108.8,
   261801.9,
   231137.9,
   248788.6,
   194673,
   191261.7,
   190294.7,
   182429,
   148202,
   118802.1,
   102271.6,
   72332.84,
   61192.69,
   62246.47,
   40631.93,
   26387.03,
   23466.36,
   13328.31};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1233[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1233[30] = {
   0,
   22.20964,
   4277.884,
   5528.748,
   5829.195,
   4691.423,
   6598.209,
   5901.311,
   6768.928,
   7130.923,
   7172.336,
   21207.51,
   8662.23,
   22040.15,
   8904.361,
   21842.85,
   7177.727,
   7035.413,
   7352.681,
   7687.072,
   6775.408,
   5827.904,
   5327.508,
   5030.9,
   4348.002,
   20317.59,
   4154.944,
   3321.695,
   2739.146,
   2364.817};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1233,Graph_from_VbbHcc_algo_H_dR_fy1233,Graph_from_VbbHcc_algo_H_dR_fex1233,Graph_from_VbbHcc_algo_H_dR_fey1233);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1233 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1233","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMaximum(312226.3);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   H_dR_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__321 = new TH1D("data_mc_ratio__321","",30,0,6);
   data_mc_ratio__321->SetBinContent(2,0.4494699);
   data_mc_ratio__321->SetBinContent(3,0.3155912);
   data_mc_ratio__321->SetBinContent(4,0.2609359);
   data_mc_ratio__321->SetBinContent(5,0.2348246);
   data_mc_ratio__321->SetBinContent(6,0.2470143);
   data_mc_ratio__321->SetBinContent(7,0.2035331);
   data_mc_ratio__321->SetBinContent(8,0.2164734);
   data_mc_ratio__321->SetBinContent(9,0.2077042);
   data_mc_ratio__321->SetBinContent(10,0.2143815);
   data_mc_ratio__321->SetBinContent(11,0.224135);
   data_mc_ratio__321->SetBinContent(12,0.2120811);
   data_mc_ratio__321->SetBinContent(13,0.2123079);
   data_mc_ratio__321->SetBinContent(14,0.1961445);
   data_mc_ratio__321->SetBinContent(15,0.2279721);
   data_mc_ratio__321->SetBinContent(16,0.2105161);
   data_mc_ratio__321->SetBinContent(17,0.2584488);
   data_mc_ratio__321->SetBinContent(18,0.2473051);
   data_mc_ratio__321->SetBinContent(19,0.2303637);
   data_mc_ratio__321->SetBinContent(20,0.2156236);
   data_mc_ratio__321->SetBinContent(21,0.2237891);
   data_mc_ratio__321->SetBinContent(22,0.22439);
   data_mc_ratio__321->SetBinContent(23,0.2082397);
   data_mc_ratio__321->SetBinContent(24,0.2304071);
   data_mc_ratio__321->SetBinContent(25,0.2081458);
   data_mc_ratio__321->SetBinContent(26,0.1564908);
   data_mc_ratio__321->SetBinContent(27,0.1902445);
   data_mc_ratio__321->SetBinContent(28,0.2281424);
   data_mc_ratio__321->SetBinContent(29,0.2105993);
   data_mc_ratio__321->SetBinContent(30,0.2403906);
   data_mc_ratio__321->SetBinContent(31,0.1789644);
   data_mc_ratio__321->SetBinError(2,0.1297508);
   data_mc_ratio__321->SetBinError(3,0.001977783);
   data_mc_ratio__321->SetBinError(4,0.001452336);
   data_mc_ratio__321->SetBinError(5,0.001411562);
   data_mc_ratio__321->SetBinError(6,0.001482027);
   data_mc_ratio__321->SetBinError(7,0.001216799);
   data_mc_ratio__321->SetBinError(8,0.001264133);
   data_mc_ratio__321->SetBinError(9,0.001164784);
   data_mc_ratio__321->SetBinError(10,0.001152489);
   data_mc_ratio__321->SetBinError(11,0.00113657);
   data_mc_ratio__321->SetBinError(12,0.001019032);
   data_mc_ratio__321->SetBinError(13,0.0009668655);
   data_mc_ratio__321->SetBinError(14,0.0008655688);
   data_mc_ratio__321->SetBinError(15,0.0009931281);
   data_mc_ratio__321->SetBinError(16,0.000919872);
   data_mc_ratio__321->SetBinError(17,0.001152217);
   data_mc_ratio__321->SetBinError(18,0.00113711);
   data_mc_ratio__321->SetBinError(19,0.001100256);
   data_mc_ratio__321->SetBinError(20,0.001087179);
   data_mc_ratio__321->SetBinError(21,0.001228832);
   data_mc_ratio__321->SetBinError(22,0.001374326);
   data_mc_ratio__321->SetBinError(23,0.001426935);
   data_mc_ratio__321->SetBinError(24,0.001784762);
   data_mc_ratio__321->SetBinError(25,0.00184431);
   data_mc_ratio__321->SetBinError(26,0.001585576);
   data_mc_ratio__321->SetBinError(27,0.002163826);
   data_mc_ratio__321->SetBinError(28,0.002940409);
   data_mc_ratio__321->SetBinError(29,0.00299575);
   data_mc_ratio__321->SetBinError(30,0.004246892);
   data_mc_ratio__321->SetBinError(31,0.03684808);
   data_mc_ratio__321->SetMinimum(0.4);
   data_mc_ratio__321->SetMaximum(1.6);
   data_mc_ratio__321->SetEntries(270.1378);
   data_mc_ratio__321->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__321->SetLineColor(ci);
   data_mc_ratio__321->SetLineWidth(2);
   data_mc_ratio__321->SetMarkerStyle(20);
   data_mc_ratio__321->SetMarkerSize(1.2);
   data_mc_ratio__321->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__321->GetXaxis()->SetRange(1,31);
   data_mc_ratio__321->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__321->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__321->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__321->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__321->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__321->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1234[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1234[30] = {
   0,
   0.8318803,
   0.05302264,
   0.04469172,
   0.0494612,
   0.04171521,
   0.04799864,
   0.04356421,
   0.04421456,
   0.04418062,
   0.04133744,
   0.1038397,
   0.03814132,
   0.08418637,
   0.03852402,
   0.08779683,
   0.03687068,
   0.03678422,
   0.03863838,
   0.04213734,
   0.04571738,
   0.04905556,
   0.05209178,
   0.06955209,
   0.07105427,
   0.3264056,
   0.1022581,
   0.1258836,
   0.1167265,
   0.1774282};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0.001743668);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(1.998256);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
