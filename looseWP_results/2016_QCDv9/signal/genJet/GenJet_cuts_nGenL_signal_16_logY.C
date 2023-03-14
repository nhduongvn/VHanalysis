#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_signal_16/GenJet_cuts_nGenL_signal_16
//=========  (Fri Mar 10 12:49:22 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_signal_16 = new TCanvas("GenJet_cuts_nGenL_signal_16", "GenJet_cuts_nGenL_signal_16",0,0,600,600);
   GenJet_cuts_nGenL_signal_16->SetHighLightColor(2);
   GenJet_cuts_nGenL_signal_16->Range(-4.867058,-0.8685865,22.93266,3.288291);
   GenJet_cuts_nGenL_signal_16->SetFillColor(0);
   GenJet_cuts_nGenL_signal_16->SetFillStyle(4000);
   GenJet_cuts_nGenL_signal_16->SetBorderMode(0);
   GenJet_cuts_nGenL_signal_16->SetBorderSize(2);
   GenJet_cuts_nGenL_signal_16->SetLogy();
   GenJet_cuts_nGenL_signal_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_signal_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_signal_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(485.1543);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",20,-0.5,19.5);
   st_stack_79->SetMinimum(0.4268142);
   st_stack_79->SetMaximum(745.7675);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Event/1.0");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,366.6071);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,218.1643);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,75.91513);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,9.995232);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,0.8803343);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,0.1035239);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,0.008862167);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,1.075154);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,0.8189685);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,0.4798079);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,0.1709407);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,0.05059122);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,0.01735014);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,0.005127258);
   GenJet_cuts_nGenL_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenL_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_1,"");
   
   TH1D *GenJet_cuts_nGenL_stack_2 = new TH1D("GenJet_cuts_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,36.07093);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,31.16637);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,21.87828);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,3.64923);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,0.3622981);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,0.03018547);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,0.001189536);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,0.1173115);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,0.109105);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,0.0915236);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,0.03729168);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,0.01172515);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,0.003383953);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,0.0006873267);
   GenJet_cuts_nGenL_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenL_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenL_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenL_signal_16->Modified();
   GenJet_cuts_nGenL_signal_16->cd();
   GenJet_cuts_nGenL_signal_16->SetSelected(GenJet_cuts_nGenL_signal_16);
}
