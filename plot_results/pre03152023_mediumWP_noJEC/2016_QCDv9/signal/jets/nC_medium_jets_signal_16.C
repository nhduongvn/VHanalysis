#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_signal_16()
{
//=========Macro generated from canvas: nC_medium_jets_signal_16/nC_medium_jets_signal_16
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_signal_16 = new TCanvas("nC_medium_jets_signal_16", "nC_medium_jets_signal_16",0,0,600,600);
   nC_medium_jets_signal_16->SetHighLightColor(2);
   nC_medium_jets_signal_16->Range(-2.683529,-56.27131,11.21633,412.6562);
   nC_medium_jets_signal_16->SetFillColor(0);
   nC_medium_jets_signal_16->SetFillStyle(4000);
   nC_medium_jets_signal_16->SetBorderMode(0);
   nC_medium_jets_signal_16->SetBorderSize(2);
   nC_medium_jets_signal_16->SetLeftMargin(0.15709);
   nC_medium_jets_signal_16->SetRightMargin(0.1234783);
   nC_medium_jets_signal_16->SetBottomMargin(0.12);
   nC_medium_jets_signal_16->SetFrameFillStyle(1000);
   nC_medium_jets_signal_16->SetFrameBorderMode(0);
   nC_medium_jets_signal_16->SetFrameFillStyle(1000);
   nC_medium_jets_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(365.7635);
   
   TH1F *st_stack_31 = new TH1F("st_stack_31","",10,-0.5,9.5);
   st_stack_31->SetMinimum(0);
   st_stack_31->SetMaximum(365.7635);
   st_stack_31->SetDirectory(0);
   st_stack_31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_31->SetLineColor(ci);
   st_stack_31->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_31->GetXaxis()->SetRange(1,10);
   st_stack_31->GetXaxis()->SetLabelFont(42);
   st_stack_31->GetXaxis()->SetTitleOffset(1);
   st_stack_31->GetXaxis()->SetTitleFont(42);
   st_stack_31->GetYaxis()->SetTitle("Event/1.0");
   st_stack_31->GetYaxis()->SetLabelFont(42);
   st_stack_31->GetYaxis()->SetTitleSize(0.037);
   st_stack_31->GetYaxis()->SetTitleFont(42);
   st_stack_31->GetZaxis()->SetLabelFont(42);
   st_stack_31->GetZaxis()->SetTitleOffset(1);
   st_stack_31->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_31);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,238.1748);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,266.3972);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,130.9417);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,31.18615);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,4.584712);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,0.3688749);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,0.02113583);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,0.8683567);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,0.9080137);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,0.633315);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,0.3076604);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,0.1165628);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,0.03269825);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,0.007577005);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,17.73608);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,37.18654);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,26.84893);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,9.398612);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,1.782969);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,0.1869558);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,0.01662205);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,0.001471741);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,0.0003063731);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,0.08222648);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,0.1192702);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,0.1012855);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,0.05986158);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,0.02601152);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,0.008385698);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,0.002491578);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,0.0007376449);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,0.0003063731);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_signal_16->Modified();
   nC_medium_jets_signal_16->cd();
   nC_medium_jets_signal_16->SetSelected(nC_medium_jets_signal_16);
}
