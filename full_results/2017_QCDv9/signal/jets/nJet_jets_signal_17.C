#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_signal_17()
{
//=========Macro generated from canvas: nJet_jets_signal_17/nJet_jets_signal_17
//=========  (Thu Mar  9 13:30:48 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_signal_17 = new TCanvas("nJet_jets_signal_17", "nJet_jets_signal_17",0,0,600,600);
   nJet_jets_signal_17->SetHighLightColor(2);
   nJet_jets_signal_17->Range(-3.556941,-52.60618,15.90286,385.7787);
   nJet_jets_signal_17->SetFillColor(0);
   nJet_jets_signal_17->SetFillStyle(4000);
   nJet_jets_signal_17->SetBorderMode(0);
   nJet_jets_signal_17->SetBorderSize(2);
   nJet_jets_signal_17->SetLeftMargin(0.15709);
   nJet_jets_signal_17->SetRightMargin(0.1234783);
   nJet_jets_signal_17->SetBottomMargin(0.12);
   nJet_jets_signal_17->SetFrameFillStyle(1000);
   nJet_jets_signal_17->SetFrameBorderMode(0);
   nJet_jets_signal_17->SetFrameFillStyle(1000);
   nJet_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(341.9402);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",14,-0.5,13.5);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(341.9402);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_3->GetXaxis()->SetRange(1,14);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Event/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,107.2929);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,157.3214);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,258.2422);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,184.0766);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,82.95669);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,22.63965);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,5.78485);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,1.421749);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.2877058);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.06857522);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.004400042);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,0.004497649);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.4694161);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.5564224);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.7076969);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.593774);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.3960061);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.2036982);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.1025552);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.0506381);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.02259751);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.01093368);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.002582874);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,0.002701965);
   VbbHcc_jets_nJet_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1.786267);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,6.937659);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,25.56816);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,36.20018);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,27.76883);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,11.38105);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3.19768);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,0.6951551);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,0.1311916);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.02167824);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.00424976);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.0008051429);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.02066455);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.04036665);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.07833026);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.09338019);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.08181197);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.05228796);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.0277177);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.01286564);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.005582065);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.002227886);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.001042314);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.0004203681);
   VbbHcc_jets_nJet_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_signal_17->Modified();
   nJet_jets_signal_17->cd();
   nJet_jets_signal_17->SetSelected(nJet_jets_signal_17);
}
