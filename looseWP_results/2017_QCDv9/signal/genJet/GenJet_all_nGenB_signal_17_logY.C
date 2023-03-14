#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenB_signal_17/GenJet_all_nGenB_signal_17
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_signal_17 = new TCanvas("GenJet_all_nGenB_signal_17", "GenJet_all_nGenB_signal_17",0,0,600,600);
   GenJet_all_nGenB_signal_17->SetHighLightColor(2);
   GenJet_all_nGenB_signal_17->Range(-4.867058,-0.9327712,22.93266,3.577714);
   GenJet_all_nGenB_signal_17->SetFillColor(0);
   GenJet_all_nGenB_signal_17->SetFillStyle(4000);
   GenJet_all_nGenB_signal_17->SetBorderMode(0);
   GenJet_all_nGenB_signal_17->SetBorderSize(2);
   GenJet_all_nGenB_signal_17->SetLogy();
   GenJet_all_nGenB_signal_17->SetLeftMargin(0.15709);
   GenJet_all_nGenB_signal_17->SetRightMargin(0.1234783);
   GenJet_all_nGenB_signal_17->SetBottomMargin(0.12);
   GenJet_all_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_17->SetFrameBorderMode(0);
   GenJet_all_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(844.4058);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",20,-0.5,19.5);
   st_stack_15->SetMinimum(0.4059635);
   st_stack_15->SetMaximum(1338.645);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/1.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,616.0707);
   GenJet_all_nGenB_stack_1->SetBinContent(2,42.58322);
   GenJet_all_nGenB_stack_1->SetBinContent(3,149.0927);
   GenJet_all_nGenB_stack_1->SetBinContent(4,10.3724);
   GenJet_all_nGenB_stack_1->SetBinContent(5,1.780411);
   GenJet_all_nGenB_stack_1->SetBinContent(6,0.1823484);
   GenJet_all_nGenB_stack_1->SetBinContent(7,0.01714138);
   GenJet_all_nGenB_stack_1->SetBinContent(8,0.002244592);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.094846);
   GenJet_all_nGenB_stack_1->SetBinError(2,0.2873861);
   GenJet_all_nGenB_stack_1->SetBinError(3,0.5389253);
   GenJet_all_nGenB_stack_1->SetBinError(4,0.1414992);
   GenJet_all_nGenB_stack_1->SetBinError(5,0.05740279);
   GenJet_all_nGenB_stack_1->SetBinError(6,0.01804055);
   GenJet_all_nGenB_stack_1->SetBinError(7,0.00576938);
   GenJet_all_nGenB_stack_1->SetBinError(8,0.002244592);
   GenJet_all_nGenB_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,84.78613);
   GenJet_all_nGenB_stack_2->SetBinContent(2,4.855831);
   GenJet_all_nGenB_stack_2->SetBinContent(3,22.11339);
   GenJet_all_nGenB_stack_2->SetBinContent(4,1.59695);
   GenJet_all_nGenB_stack_2->SetBinContent(5,0.3094699);
   GenJet_all_nGenB_stack_2->SetBinContent(6,0.02589421);
   GenJet_all_nGenB_stack_2->SetBinContent(7,0.00406629);
   GenJet_all_nGenB_stack_2->SetBinContent(8,0.00116843);
   GenJet_all_nGenB_stack_2->SetBinError(1,0.1427146);
   GenJet_all_nGenB_stack_2->SetBinError(2,0.03414831);
   GenJet_all_nGenB_stack_2->SetBinError(3,0.07288153);
   GenJet_all_nGenB_stack_2->SetBinError(4,0.01957444);
   GenJet_all_nGenB_stack_2->SetBinError(5,0.008639256);
   GenJet_all_nGenB_stack_2->SetBinError(6,0.002460636);
   GenJet_all_nGenB_stack_2->SetBinError(7,0.0009933712);
   GenJet_all_nGenB_stack_2->SetBinError(8,0.0005291269);
   GenJet_all_nGenB_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","ZHcc","F");

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
   GenJet_all_nGenB_signal_17->Modified();
   GenJet_all_nGenB_signal_17->cd();
   GenJet_all_nGenB_signal_17->SetSelected(GenJet_all_nGenB_signal_17);
}
