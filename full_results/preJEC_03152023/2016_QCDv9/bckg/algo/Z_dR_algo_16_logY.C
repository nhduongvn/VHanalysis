#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.2439463,7.029799,6.051541);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(144247.6);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(3.247223);
   st_stack_81->SetMaximum(264235.9);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Event/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,10.04535);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,106727.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,117463.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,105441.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,67423.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,72023);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,47152.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,45472.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,42496.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,42282.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,36290.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,29273.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,32282.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,30198.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,18771.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,12726.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,9818.566);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,8480.088);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,22751.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,2766.439);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1561.106);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,791.9092);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,43.67076);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,44.02549);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,3.095806);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,6.608433);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,8.475848);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,7059.327);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,8375.729);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,23364.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,6396.758);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,6694.919);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4913.552);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,4870.574);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,4800.743);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,5684.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,4547.512);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,3554.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,4282.393);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,4459.315);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,2763.845);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,2896.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,2776.316);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2025.986);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,19553.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,1689.294);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1337.868);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,393.1783);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,25.43369);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,28.87243);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,3.095806);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,6.024311);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,1.383258);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,1100.851);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,2262.242);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,2988.903);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,3576.274);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,3998.823);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,4196.455);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,4144.18);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,3972.129);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,3678.069);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,3397.173);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,3052.836);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,2755.811);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,2533.32);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,2200.905);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1002.593);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,499.0193);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,246.6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,125.2709);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,58.96988);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,27.67823);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,11.67265);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,4.391982);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,1.585843);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.5157765);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.1462698);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3037861);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,8.69055);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,12.4391);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,14.27901);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,15.60783);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,16.44747);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,16.8215);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,16.67691);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,16.28938);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,15.63841);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,14.98957);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,14.17705);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,13.43298);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,12.88069);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,11.9754);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,8.077069);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,5.667177);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,3.994094);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.821318);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,1.935311);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.314628);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.8542344);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.517537);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.322059);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.169402);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1034432);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
