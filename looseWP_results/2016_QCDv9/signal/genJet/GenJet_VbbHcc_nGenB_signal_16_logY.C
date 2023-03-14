#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenB_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenB_signal_16/GenJet_VbbHcc_nGenB_signal_16
//=========  (Fri Mar 10 12:49:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenB_signal_16 = new TCanvas("GenJet_VbbHcc_nGenB_signal_16", "GenJet_VbbHcc_nGenB_signal_16",0,0,600,600);
   GenJet_VbbHcc_nGenB_signal_16->SetHighLightColor(2);
   GenJet_VbbHcc_nGenB_signal_16->Range(-4.867058,-0.7356032,22.93266,2.706253);
   GenJet_VbbHcc_nGenB_signal_16->SetFillColor(0);
   GenJet_VbbHcc_nGenB_signal_16->SetFillStyle(4000);
   GenJet_VbbHcc_nGenB_signal_16->SetBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_16->SetBorderSize(2);
   GenJet_VbbHcc_nGenB_signal_16->SetLogy();
   GenJet_VbbHcc_nGenB_signal_16->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenB_signal_16->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenB_signal_16->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_16->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(159.7696);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",20,-0.5,19.5);
   st_stack_157->SetMinimum(0.4757946);
   st_stack_157->SetMaximum(230.1799);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetTitleOffset(1);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Event/1.0");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetTitleSize(0.037);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetTitleOffset(1);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *GenJet_VbbHcc_nGenB_stack_1 = new TH1D("GenJet_VbbHcc_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(1,0.7982294);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(2,21.59342);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(3,115.3971);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(4,7.81898);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(5,1.484807);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(6,0.1123388);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(7,0.02303166);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(1,0.04942616);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(2,0.2594722);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(3,0.5992394);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(4,0.1550099);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(5,0.0659477);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(6,0.01832963);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(7,0.008167904);
   GenJet_VbbHcc_nGenB_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenB_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenB_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenB_stack_2 = new TH1D("GenJet_VbbHcc_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(1,0.01139745);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(2,1.742247);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(3,17.21173);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(4,1.217348);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(5,0.2279675);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(6,0.02251752);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(7,0.00164911);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(1,0.0020854);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(2,0.02579689);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(3,0.08108734);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(4,0.02156726);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(5,0.009318812);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(6,0.002915579);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(7,0.0007594446);
   GenJet_VbbHcc_nGenB_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenB_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenB_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenB_signal_16->Modified();
   GenJet_VbbHcc_nGenB_signal_16->cd();
   GenJet_VbbHcc_nGenB_signal_16->SetSelected(GenJet_VbbHcc_nGenB_signal_16);
}
