#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_16/H_jetmass_noJEC_algo_16
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_noJEC_algo_16 = new TCanvas("H_jetmass_noJEC_algo_16", "H_jetmass_noJEC_algo_16",0,0,600,600);
   H_jetmass_noJEC_algo_16->SetHighLightColor(2);
   H_jetmass_noJEC_algo_16->Range(-65.50587,-0.01375654,351.4899,0.1008813);
   H_jetmass_noJEC_algo_16->SetFillColor(0);
   H_jetmass_noJEC_algo_16->SetFillStyle(4000);
   H_jetmass_noJEC_algo_16->SetBorderMode(0);
   H_jetmass_noJEC_algo_16->SetBorderSize(2);
   H_jetmass_noJEC_algo_16->SetLeftMargin(0.15709);
   H_jetmass_noJEC_algo_16->SetRightMargin(0.1234783);
   H_jetmass_noJEC_algo_16->SetBottomMargin(0.12);
   H_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.08941752);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",150,0,300);
   st_stack_169->SetMinimum(0);
   st_stack_169->SetMaximum(0.08941752);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("c-jet mass [GeV]");
   st_stack_169->GetXaxis()->SetRange(1,150);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_H_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(3,0.005926268);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(4,0.02096093);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(5,0.02005605);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(6,0.02970411);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(7,0.04776111);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(8,0.05429726);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(9,0.05612304);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(10,0.01844666);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(11,0.01796511);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(12,0.01678334);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(13,0.01157254);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(14,0.01519897);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(15,0.01146925);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(16,0.0028745);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(17,0.005821399);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(18,0.008281687);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(19,0.006109642);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(20,0.008082695);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(24,0.00296763);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(47,0.003303299);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(3,0.004215393);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(4,0.007935301);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(5,0.007617237);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(6,0.009437756);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(7,0.01196842);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(8,0.0125336);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(9,0.01293405);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(10,0.007538756);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(11,0.007341697);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(12,0.006856329);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(13,0.005787624);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(14,0.006806108);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(15,0.005736636);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(16,0.0028745);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(17,0.004116533);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(18,0.004785901);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(19,0.004327927);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(20,0.004714467);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(24,0.00296763);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(47,0.003303299);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_H_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(4,0.003045831);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(5,0.008026804);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(6,0.008321162);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(7,0.01496477);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(8,0.01991928);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(9,0.0166074);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(10,0.01292653);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(11,0.006654161);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(12,0.006253756);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(13,0.003907361);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(14,0.002890876);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(15,0.002622832);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(16,0.003114492);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(17,0.00242217);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(18,0.001929637);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(19,0.002301261);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(21,0.000372613);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(23,0.0003914646);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(24,0.0003911379);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(27,0.0003572656);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(34,0.0003931697);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(36,0.0004284568);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(45,0.0002507395);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(4,0.001079388);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(5,0.001744208);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(6,0.001786844);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(7,0.002403693);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(8,0.002744668);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(9,0.00253699);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(10,0.00222812);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(11,0.001573837);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(12,0.001572761);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(13,0.001198388);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(14,0.001030299);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(15,0.000995908);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(16,0.001104883);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(17,0.000941212);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(18,0.0008665514);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(19,0.0009396287);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(21,0.000372613);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(23,0.0003914646);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(24,0.0003911379);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(27,0.0003572656);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(34,0.0003931697);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(36,0.0004284568);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(45,0.0002507395);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_jetmass_noJEC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_jetmass_noJEC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   H_jetmass_noJEC_algo_16->Modified();
   H_jetmass_noJEC_algo_16->cd();
   H_jetmass_noJEC_algo_16->SetSelected(H_jetmass_noJEC_algo_16);
}
