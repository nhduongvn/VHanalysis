#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Mon Dec 19 11:15:38 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.8287214,7.264125,9.081398);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.253069e+07);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",30,0,6);
   st_stack_77->SetMinimum(2.293469);
   st_stack_77->SetMaximum(1.231363e+08);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_77->GetXaxis()->SetRange(1,31);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Events/0.2");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,273521);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,351069.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,331799);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,342234.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,228139.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,306927.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,334159);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,307850.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,381273.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,374768);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,358011.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,519003.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,285916.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,355092.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,299655.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,219721.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,88237.62);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,54177.66);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,55475.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,33470.38);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,8732.474);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,4823.646);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3517.001);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,348.8817);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,45.98367);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,20.14539);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,32718.59);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,50054.32);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,55451.07);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,55929.58);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,36383.44);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,42824.93);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,45534.55);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,43484.2);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,52261.24);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,42186.27);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,48746.68);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,70172.42);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,30611.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,41280.45);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,52211.39);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,48339.24);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,22226.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,19702.09);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,25421.28);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,20541.71);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2770.726);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1681.912);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2126.979);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,299.6345);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,28.77209);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,17.37158);
   VbbHcc_algo_H_dR_stack_1->SetEntries(37218);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.249028);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1939.904);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,4171.095);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,6036.589);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,7761.115);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,8518.588);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,8395.857);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,7975.24);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,7673.428);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,7452.451);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,7274.952);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,6881.563);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,6303.653);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,5751.328);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,5006.029);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,3007.821);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1855.546);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1158.527);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,695.3571);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,395.175);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,209.4945);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,111.6776);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,52.95304);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,20.22404);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,6.834545);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,2.098991);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.610503);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.05081464);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2945289);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,11.85076);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,17.35614);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,20.89494);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,23.77782);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,25.08122);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,25.11732);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,24.70702);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,24.37382);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,24.05569);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,23.79415);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,23.10845);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,22.04843);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,20.97322);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,19.50336);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,15.06029);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,11.74843);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,9.206557);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,7.090565);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,5.311034);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.826386);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.794101);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.936627);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.161296);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.6727213);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3561778);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1973487);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.05081464);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1448757);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
