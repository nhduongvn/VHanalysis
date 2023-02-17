#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-388419.5,7.029799,2848409);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2524726);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(0);
   st_stack_106->SetMaximum(2524726);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,570128.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1650610);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1337530);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,947233.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,488854.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,399003.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,279281.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,124570.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,129005.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,45777.34);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,27284.23);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,32619.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,30832.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,9699.021);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,12067.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,22371.68);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,1964.829);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,33119.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,302.9688);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1536.025);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1518.221);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,31.93536);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,31.49642);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,259.696);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,1210.693);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,27226.72);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,79188.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,82720.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,79306.71);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,49852.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,55508.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,50200.05);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,28126.21);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,32063.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,6520.031);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,4902.598);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,16013.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,15967.55);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,3056.329);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,3503.071);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,15754.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1266.968);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,21981.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,261.4925);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1238.586);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1238.618);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,23.78122);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,23.77717);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,259.696);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,1210.693);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(40077);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,8837.551);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,32540.47);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,32020.99);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,21323.04);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,12767.86);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,7581.256);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,4612.64);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2935.348);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1906.539);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1255.622);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,843.3705);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,566.8904);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,380.7909);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,265.7943);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,179.7513);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,122.1714);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,86.07395);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,58.70891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,38.49798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,28.07378);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,17.25458);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,12.39033);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,9.134457);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.121766);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.047161);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.639296);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.056298);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.8465881);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.6336886);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.5387636);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.244999);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,22.5186);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,43.63216);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,43.75199);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,36.03898);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,28.03751);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,21.63284);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,16.87484);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,13.45583);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.83735);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,8.780193);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,7.199205);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.903976);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.848605);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.051261);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.333068);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.739645);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.299939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.899075);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.530391);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.314613);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.034332);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.8750442);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7530299);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.620489);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4970995);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3965223);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3558325);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2301132);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1969223);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.191656);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2825504);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2238310);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
