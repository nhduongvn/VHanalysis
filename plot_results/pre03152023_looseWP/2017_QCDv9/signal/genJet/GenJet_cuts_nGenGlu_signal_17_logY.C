#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_signal_17/GenJet_cuts_nGenGlu_signal_17
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_signal_17 = new TCanvas("GenJet_cuts_nGenGlu_signal_17", "GenJet_cuts_nGenGlu_signal_17",0,0,600,600);
   GenJet_cuts_nGenGlu_signal_17->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_signal_17->Range(-4.867058,-0.9487651,22.93266,3.650658);
   GenJet_cuts_nGenGlu_signal_17->SetFillColor(0);
   GenJet_cuts_nGenGlu_signal_17->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_signal_17->SetBorderMode(0);
   GenJet_cuts_nGenGlu_signal_17->SetBorderSize(2);
   GenJet_cuts_nGenGlu_signal_17->SetLogy();
   GenJet_cuts_nGenGlu_signal_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_signal_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_signal_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_signal_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(971.15);
   
   TH1F *st_stack_99 = new TH1F("st_stack_99","",20,-0.5,19.5);
   st_stack_99->SetMinimum(0.4010197);
   st_stack_99->SetMaximum(1551.371);
   st_stack_99->SetDirectory(0);
   st_stack_99->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_99->SetLineColor(ci);
   st_stack_99->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_99->GetXaxis()->SetLabelFont(42);
   st_stack_99->GetXaxis()->SetTitleOffset(1);
   st_stack_99->GetXaxis()->SetTitleFont(42);
   st_stack_99->GetYaxis()->SetTitle("Event/1.0");
   st_stack_99->GetYaxis()->SetLabelFont(42);
   st_stack_99->GetYaxis()->SetTitleSize(0.037);
   st_stack_99->GetYaxis()->SetTitleFont(42);
   st_stack_99->GetZaxis()->SetLabelFont(42);
   st_stack_99->GetZaxis()->SetTitleOffset(1);
   st_stack_99->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_99);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,726.0154);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,82.08822);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,10.23465);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,1.535511);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,0.1946717);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,0.02650677);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,0.006280242);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.192775);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,0.3886512);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,0.1359954);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,0.05242589);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,0.01842709);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,0.006644701);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,0.003181902);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_1,"");
   
   TH1D *GenJet_cuts_nGenGlu_stack_2 = new TH1D("GenJet_cuts_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,80.03914);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,27.53051);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,5.260421);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,0.7567754);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,0.09575887);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,0.00944852);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,0.0006223151);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,0.0002326679);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,0.1387093);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,0.0812698);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,0.03549746);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,0.01341697);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,0.004766096);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,0.001516171);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,0.0004400869);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,0.0002326679);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenGlu_signal_17->Modified();
   GenJet_cuts_nGenGlu_signal_17->cd();
   GenJet_cuts_nGenGlu_signal_17->SetSelected(GenJet_cuts_nGenGlu_signal_17);
}
