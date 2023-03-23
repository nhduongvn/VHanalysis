#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_16/H_jetmass_noJEC_algo_16
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_noJEC_algo_16 = new TCanvas("H_jetmass_noJEC_algo_16", "H_jetmass_noJEC_algo_16",0,0,600,600);
   H_jetmass_noJEC_algo_16->SetHighLightColor(2);
   H_jetmass_noJEC_algo_16->Range(-65.50587,-0.01462158,351.4899,0.107225);
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
   st->SetMaximum(0.0950403);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",150,0,300);
   st_stack_169->SetMinimum(0);
   st_stack_169->SetMaximum(0.0950403);
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
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(4,0.02133515);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(5,0.02697885);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(6,0.03310583);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(7,0.05259541);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(8,0.0572377);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(9,0.05602065);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(10,0.00894702);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(11,0.01781398);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(12,0.01123544);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(13,0.01001553);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(14,0.02084871);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(15,0.01427087);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(16,0.0004440092);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(17,0.005821399);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(18,0.002897276);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(19,0.006051595);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(20,0.008082695);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinContent(24,0.00296763);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(3,0.004215393);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(4,0.008076367);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(5,0.008787992);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(6,0.01001072);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(7,0.01247424);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(8,0.01287466);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(9,0.01291352);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(10,0.005177243);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(11,0.007283136);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(12,0.005622184);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(13,0.005206553);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(14,0.007892745);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(15,0.006384203);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(16,0.0004440092);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(17,0.004116533);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(18,0.002897276);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(19,0.004289632);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(20,0.004714467);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetBinError(24,0.00296763);
   VbbHcc_algo_H_jetmass_noJEC_stack_1->SetEntries(126);

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
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(4,0.002933954);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(5,0.008074614);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(6,0.007402824);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(7,0.01345801);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(8,0.02164575);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(9,0.01510163);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(10,0.01335553);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(11,0.006883881);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(12,0.006780425);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(13,0.003964898);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(14,0.003036633);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(15,0.001812503);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(16,0.00271531);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(17,0.002417107);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(18,0.001446529);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(19,0.001408203);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(20,0.0002163237);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(21,0.0003751365);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(27,0.0003572656);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(34,0.0003931697);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinContent(36,0.0004284568);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(4,0.001048773);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(5,0.001742503);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(6,0.001671365);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(7,0.002281476);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(8,0.002856925);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(9,0.002421947);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(10,0.002266499);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(11,0.001588663);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(12,0.001614815);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(13,0.001214837);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(14,0.001074724);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(15,0.0008143279);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(16,0.001030434);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(17,0.0009378381);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(18,0.0007304402);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(19,0.0007131011);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(20,0.0002163237);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(21,0.0003751365);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(27,0.0003572656);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(34,0.0003931697);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetBinError(36,0.0004284568);
   VbbHcc_algo_H_jetmass_noJEC_stack_2->SetEntries(308);

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
