#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_signal_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_signal_16/GenJet_cuts_nGenC_signal_16
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_signal_16 = new TCanvas("GenJet_cuts_nGenC_signal_16", "GenJet_cuts_nGenC_signal_16",0,0,600,600);
   GenJet_cuts_nGenC_signal_16->SetHighLightColor(2);
   GenJet_cuts_nGenC_signal_16->Range(-4.867058,-65.14818,22.93266,477.7533);
   GenJet_cuts_nGenC_signal_16->SetFillColor(0);
   GenJet_cuts_nGenC_signal_16->SetFillStyle(4000);
   GenJet_cuts_nGenC_signal_16->SetBorderMode(0);
   GenJet_cuts_nGenC_signal_16->SetBorderSize(2);
   GenJet_cuts_nGenC_signal_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_signal_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_signal_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(423.4632);
   
   TH1F *st_stack_91 = new TH1F("st_stack_91","",20,-0.5,19.5);
   st_stack_91->SetMinimum(0);
   st_stack_91->SetMaximum(423.4632);
   st_stack_91->SetDirectory(0);
   st_stack_91->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_91->SetLineColor(ci);
   st_stack_91->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_91->GetXaxis()->SetLabelFont(42);
   st_stack_91->GetXaxis()->SetTitleOffset(1);
   st_stack_91->GetXaxis()->SetTitleFont(42);
   st_stack_91->GetYaxis()->SetTitle("Event/1.0");
   st_stack_91->GetYaxis()->SetLabelFont(42);
   st_stack_91->GetYaxis()->SetTitleSize(0.037);
   st_stack_91->GetYaxis()->SetTitleFont(42);
   st_stack_91->GetZaxis()->SetLabelFont(42);
   st_stack_91->GetZaxis()->SetTitleOffset(1);
   st_stack_91->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_91);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,141.5527);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,309.6338);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,183.3407);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,29.65502);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,7.173932);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,0.3098221);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,0.008541915);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,0.6718547);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,0.97948);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,0.7514438);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,0.3011277);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,0.1481274);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,0.0301153);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,0.004933951);
   GenJet_cuts_nGenC_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenC_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_1,"");
   
   TH1D *GenJet_cuts_nGenC_stack_2 = new TH1D("GenJet_cuts_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,5.767167);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,41.84062);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,34.50758);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,8.071747);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,2.799562);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,0.1624362);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,0.009370301);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,0.04632871);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,0.1264582);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,0.1149528);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,0.05560532);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,0.03275075);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,0.007888728);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.001881422);
   GenJet_cuts_nGenC_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenC_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenC_signal_16->Modified();
   GenJet_cuts_nGenC_signal_16->cd();
   GenJet_cuts_nGenC_signal_16->SetSelected(GenJet_cuts_nGenC_signal_16);
}
