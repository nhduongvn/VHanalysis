void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Aug  3 12:26:24 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(0,0,1,1);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1025.808,1.052419,1025082);
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
   st->SetMaximum(878543.9);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0.3);
   st_stack_256->SetMaximum(922471.1);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetLabelSize(0.035);
   st_stack_256->GetXaxis()->SetTitleSize(0.035);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetLabelSize(0.05);
   st_stack_256->GetYaxis()->SetTitleSize(0.057);
   st_stack_256->GetYaxis()->SetTitleOffset(1.2);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetLabelSize(0.035);
   st_stack_256->GetZaxis()->SetTitleSize(0.035);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,352047.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,99784.71);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,65685.94);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,25792.87);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,31097.25);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,10224.81);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,7305.321);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,3977.756);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,5210.836);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,1626.391);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,1473.743);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,1025.296);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,671.8663);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,358.8332);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,438.2581);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,44.85562);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,86.33344);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,13.50397);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,322.3125);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,8689.043);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,4884.917);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,15387.94);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,2187.769);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,14963.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,1316.323);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,1731.034);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,822.8386);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,1869.218);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,542.7429);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,480.4206);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,467.9504);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,379.0657);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,76.49363);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,372.7431);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,31.2179);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,47.06939);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,7.987349);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,271.1053);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1932.289);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,572.7833);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,274.7095);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,154.4129);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,96.2466);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,64.80801);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,45.07618);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,27.88846);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,19.92491);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,12.02878);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,8.02227);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,5.131442);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,3.975588);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,2.400161);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,2.347098);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,1.078763);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.8190289);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.4578044);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.2635671);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,0.05476569);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,17.62639);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,9.563664);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,6.719794);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,5.097833);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,3.981382);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,3.308226);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,2.782939);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,2.114941);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,1.859827);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,1.437574);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,1.147844);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.9204294);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.855197);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.5565382);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.6509481);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.4741099);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.3952041);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.2818994);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.2635671);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.04860075);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.04712387);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,0.04373405);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,0.05476569);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_3 = new TH1D("VbbHcc_both_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(1,35792.77);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(2,11754.44);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(3,5734.553);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(4,3301.186);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(5,2031.077);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(6,1350.435);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(7,898.5533);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(8,604.7856);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(9,424.5763);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(10,292.0433);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(11,197.1083);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(12,139.7258);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(13,95.04171);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(14,63.28556);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(15,39.98445);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(16,26.09519);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(17,15.85093);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(18,10.65221);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(19,5.589915);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(20,2.122494);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(21,0.6499438);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(22,0.2225696);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(23,0.1131977);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(24,0.06964491);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(1,47.21651);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(2,27.07756);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(3,18.92001);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(4,14.35802);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(5,11.26354);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(6,9.195872);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(7,7.501313);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(8,6.152036);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(9,5.15379);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(10,4.282795);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(11,3.513334);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(12,2.956421);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(13,2.443012);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(14,1.989582);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(15,1.579254);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(16,1.284285);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(17,0.9908726);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(18,0.8121921);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(19,0.5910784);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(20,0.36526);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(21,0.1993348);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(22,0.1147175);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(23,0.08183167);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(24,0.06964491);
   VbbHcc_both_Aplanarity_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_4 = new TH1D("VbbHcc_both_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(1,4830.621);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(2,1394.907);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(3,657.6388);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(4,368.5659);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(5,216.4721);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(6,148.2473);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(7,85.61992);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(8,67.43209);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(9,40.28822);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(10,31.04318);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(11,17.41341);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(12,9.504968);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(13,10.58849);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(14,4.140061);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(15,5.899267);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(16,1.696317);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(17,1.86292);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(18,0.7690109);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(19,0.1083014);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(20,0.07830265);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(1,47.02987);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(2,27.18647);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(3,20.61316);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(4,14.75375);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(5,11.52249);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(6,10.23967);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(7,6.331077);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(8,7.167229);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(9,3.155069);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(10,4.570137);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(11,3.247141);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(12,1.466105);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(13,1.806514);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(14,0.9334996);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(15,2.830539);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(16,0.6704479);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(17,0.7828475);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(18,0.563679);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(19,0.1083014);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(20,0.07830265);
   VbbHcc_both_Aplanarity_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_5 = new TH1D("VbbHcc_both_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(1,506.3407);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(2,152.884);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(3,61.71748);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(4,34.95314);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(5,20.43336);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(6,8.564419);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(7,10.53889);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(8,3.676401);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(9,1.955961);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(10,1.991877);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(11,1.874423);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(12,2.769608);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(13,0.2316261);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(14,0.6480062);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(15,0.5486844);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(17,0.0002136538);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(18,0.08120236);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(1,20.12002);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(2,11.70674);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(3,8.352152);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(4,4.044672);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(5,3.970444);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(6,1.550712);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(7,2.836599);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(8,0.7862778);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(9,0.5705484);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(10,0.6522716);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(11,0.606734);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(12,2.110079);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(13,0.1513197);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(14,0.2610334);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(15,0.3107198);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(17,0.0002136538);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(18,0.08120236);
   VbbHcc_both_Aplanarity_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_6 = new TH1D("VbbHcc_both_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(1,4.146716);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(2,0.5374772);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(6,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(1,1.202644);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(2,0.2687386);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(6,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_7 = new TH1D("VbbHcc_both_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(1,6.696007);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(2,0.8724691);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(4,0.6424818);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(6,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(1,1.304058);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(2,0.3084644);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(3,0.267138);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(4,0.3675584);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(5,0.1542322);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(6,0.3153059);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(10,0.1090586);
   VbbHcc_both_Aplanarity_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_8 = new TH1D("VbbHcc_both_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(1,95.47451);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(2,28.61798);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(3,13.10697);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(4,7.567641);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(5,2.14673);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(6,2.327541);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(7,2.653181);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(8,1.308487);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(9,0.2432072);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(10,0.2532256);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(11,0.2794144);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(1,4.999643);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(2,2.733366);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(3,1.838492);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(4,1.407907);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(5,0.760104);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(6,0.7771975);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(7,0.8402407);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(8,0.5861236);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(9,0.2432072);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(10,0.2532256);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(11,0.2794144);
   VbbHcc_both_Aplanarity_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_9 = new TH1D("VbbHcc_both_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(1,90.54088);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(2,26.65503);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(3,12.96016);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(4,7.38553);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(5,4.657843);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(6,2.856053);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(7,1.892702);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(8,1.232225);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(9,0.7906786);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(10,0.5198584);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(11,0.3719822);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(12,0.2332711);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(13,0.144719);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(14,0.08508062);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(15,0.06652839);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(16,0.02455058);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(17,0.02711015);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(18,0.01125298);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(19,0.006648797);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(20,0.001373951);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(22,0.001373951);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(1,0.408576);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(2,0.2206591);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(3,0.1537909);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(4,0.1155695);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(5,0.09168457);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(6,0.07181031);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(7,0.0585845);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(8,0.04700638);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(9,0.03745235);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(10,0.03055302);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(11,0.02586983);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(12,0.02047721);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(13,0.01616971);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(14,0.01232553);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(15,0.01103951);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(16,0.006475458);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(17,0.006673273);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(18,0.004325947);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(19,0.003407179);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(20,0.001373951);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(22,0.001373951);
   VbbHcc_both_Aplanarity_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_10 = new TH1D("VbbHcc_both_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(1,38.15849);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(2,12.7998);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(3,6.619596);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(4,3.90934);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(5,2.422805);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(6,1.578245);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(7,1.064939);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(8,0.7569555);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(9,0.4708728);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(10,0.3189342);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(11,0.2025848);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(12,0.1505698);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(13,0.10403);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(14,0.07391608);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(15,0.02463869);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(16,0.02053225);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(17,0.02326988);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(18,0.006844082);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(19,0.005475266);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(21,0.002737633);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(1,0.135179);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(2,0.07829163);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(3,0.05630273);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(4,0.04326786);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(5,0.03406222);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(6,0.02749166);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(7,0.02258271);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(8,0.01903921);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(9,0.01501639);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(10,0.01235846);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(11,0.009849567);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(12,0.008491465);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(13,0.007058186);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(14,0.005949537);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(15,0.003434967);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(16,0.003135681);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(17,0.003338188);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(18,0.001810386);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(19,0.001619259);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(21,0.001144989);
   VbbHcc_both_Aplanarity_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_11 = new TH1D("VbbHcc_both_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(1,0.2793011);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(2,0.07601972);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(3,0.02702584);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(4,0.02359532);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(5,0.009987788);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(6,0.005010769);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(7,0.003160502);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(10,0.00589551);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(1,0.02458087);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(2,0.01263552);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(3,0.007649905);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(4,0.006954056);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(5,0.004531188);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(6,0.003557999);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(7,0.002234813);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(10,0.003531947);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(11,0.002275762);
   VbbHcc_both_Aplanarity_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_12 = new TH1D("VbbHcc_both_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(1,0.1186194);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(2,0.0412686);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(3,0.01799584);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(4,0.01270372);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(5,0.006467246);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(6,0.005705707);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(7,0.002985293);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(8,0.001729057);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(9,0.001613838);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(10,0.001371791);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(11,0.0007148681);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(1,0.005804819);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(2,0.003458005);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(3,0.002238389);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(4,0.001894519);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(5,0.001353015);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(6,0.001294584);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(7,0.000958169);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(8,0.0007218493);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(9,0.0006673657);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(10,0.000627238);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(11,0.0004195169);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_both_Aplanarity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity_all__703 = new TH1D("VbbHcc_both_Aplanarity_all__703","",50,0,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(1,307300);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(2,88605);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(3,41421);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(4,23117);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(5,14060);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(6,8877);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(7,5824);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(8,3884);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(9,2652);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(10,1816);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(11,1262);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(12,857);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(13,543);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(14,335);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(15,250);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(16,158);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(17,95);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(18,54);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(19,33);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(20,17);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(21,3);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(22,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(24,1);
   VbbHcc_both_Aplanarity_all__703->SetEntries(501214);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all__703->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all__703->SetLineWidth(2);
   VbbHcc_both_Aplanarity_all__703->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity_all__703->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fx1511[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fy1511[50] = {
   395344.7,
   113729.3,
   72447.95,
   29671.85,
   33470.94,
   11804.26,
   8350.726,
   4684.843,
   5699.09,
   1964.706,
   1699.019,
   1182.812,
   781.9528,
   429.466,
   487.1288,
   73.77097,
   104.9169,
   25.48229,
   328.2864,
   2.250772,
   0.6998053,
   0.2676776,
   0.1679634,
   0.06964491,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fex1511[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fey1511[50] = {
   8689.342,
   4885.092,
   15387.97,
   2187.876,
   14963.31,
   1316.4,
   1731.067,
   822.8962,
   1869.229,
   542.7814,
   480.4463,
   467.9677,
   379.0789,
   76.52767,
   372.7579,
   31.25509,
   47.08799,
   8.053647,
   271.1061,
   0.3767096,
   0.2048324,
   0.1227789,
   0.09846676,
   0.06964491,
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_all_fx1511,Graph_from_VbbHcc_both_Aplanarity_all_fy1511,Graph_from_VbbHcc_both_Aplanarity_all_fex1511,Graph_from_VbbHcc_both_Aplanarity_all_fey1511);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity_all1511 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity_all1511","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMaximum(444437.5);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity_all1511);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_both_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__704 = new TH1D("data_mc_ratio__704","",50,0,1);
   data_mc_ratio__704->SetBinContent(1,0.7772963);
   data_mc_ratio__704->SetBinContent(2,0.7790867);
   data_mc_ratio__704->SetBinContent(3,0.5717346);
   data_mc_ratio__704->SetBinContent(4,0.7790887);
   data_mc_ratio__704->SetBinContent(5,0.4200659);
   data_mc_ratio__704->SetBinContent(6,0.7520164);
   data_mc_ratio__704->SetBinContent(7,0.6974244);
   data_mc_ratio__704->SetBinContent(8,0.8290567);
   data_mc_ratio__704->SetBinContent(9,0.4653374);
   data_mc_ratio__704->SetBinContent(10,0.9243112);
   data_mc_ratio__704->SetBinContent(11,0.7427817);
   data_mc_ratio__704->SetBinContent(12,0.7245445);
   data_mc_ratio__704->SetBinContent(13,0.6944153);
   data_mc_ratio__704->SetBinContent(14,0.7800384);
   data_mc_ratio__704->SetBinContent(15,0.5132113);
   data_mc_ratio__704->SetBinContent(16,2.141764);
   data_mc_ratio__704->SetBinContent(17,0.9054784);
   data_mc_ratio__704->SetBinContent(18,2.119118);
   data_mc_ratio__704->SetBinContent(19,0.100522);
   data_mc_ratio__704->SetBinContent(20,7.552965);
   data_mc_ratio__704->SetBinContent(21,4.286907);
   data_mc_ratio__704->SetBinContent(22,3.735837);
   data_mc_ratio__704->SetBinContent(24,14.35855);
   data_mc_ratio__704->SetBinError(1,0.001402185);
   data_mc_ratio__704->SetBinError(2,0.002617319);
   data_mc_ratio__704->SetBinError(3,0.00280921);
   data_mc_ratio__704->SetBinError(4,0.005124142);
   data_mc_ratio__704->SetBinError(5,0.003542622);
   data_mc_ratio__704->SetBinError(6,0.007981678);
   data_mc_ratio__704->SetBinError(7,0.009138742);
   data_mc_ratio__704->SetBinError(8,0.01330285);
   data_mc_ratio__704->SetBinError(9,0.009036104);
   data_mc_ratio__704->SetBinError(10,0.02169004);
   data_mc_ratio__704->SetBinError(11,0.02090892);
   data_mc_ratio__704->SetBinError(12,0.02474997);
   data_mc_ratio__704->SetBinError(13,0.02980021);
   data_mc_ratio__704->SetBinError(14,0.04261805);
   data_mc_ratio__704->SetBinError(15,0.03245833);
   data_mc_ratio__704->SetBinError(16,0.1703896);
   data_mc_ratio__704->SetBinError(17,0.09290013);
   data_mc_ratio__704->SetBinError(18,0.2883755);
   data_mc_ratio__704->SetBinError(19,0.01749863);
   data_mc_ratio__704->SetBinError(20,1.831863);
   data_mc_ratio__704->SetBinError(21,2.475047);
   data_mc_ratio__704->SetBinError(22,3.735837);
   data_mc_ratio__704->SetBinError(24,14.35855);
   data_mc_ratio__704->SetMinimum(0.4);
   data_mc_ratio__704->SetMaximum(1.6);
   data_mc_ratio__704->SetEntries(4.693212);
   data_mc_ratio__704->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__704->SetLineColor(ci);
   data_mc_ratio__704->SetLineWidth(2);
   data_mc_ratio__704->SetMarkerStyle(20);
   data_mc_ratio__704->SetMarkerSize(1.2);
   data_mc_ratio__704->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__704->GetXaxis()->SetRange(1,50);
   data_mc_ratio__704->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__704->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__704->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__704->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__704->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__704->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1512[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1512[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1512[50] = {
   0.02197915,
   0.04295367,
   0.2124004,
   0.07373575,
   0.4470537,
   0.1115191,
   0.2072953,
   0.1756508,
   0.3279873,
   0.2762659,
   0.2827787,
   0.3956399,
   0.4847848,
   0.1781926,
   0.7652144,
   0.4236774,
   0.4488122,
   0.3160487,
   0.8258219,
   0.1673691,
   0.2926992,
   0.4586819,
   0.5862394,
   1,
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
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1512,Graph_from_mc_statistical_error_fy1512,Graph_from_mc_statistical_error_fex1512,Graph_from_mc_statistical_error_fey1512);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1512 = new TH1F("Graph_Graph_from_mc_statistical_error1512","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1512->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1512->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1512->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1512->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1512->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1512);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
