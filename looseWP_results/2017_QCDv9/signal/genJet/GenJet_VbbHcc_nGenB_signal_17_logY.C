#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenB_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenB_signal_17/GenJet_VbbHcc_nGenB_signal_17
//=========  (Fri Mar 10 12:49:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenB_signal_17 = new TCanvas("GenJet_VbbHcc_nGenB_signal_17", "GenJet_VbbHcc_nGenB_signal_17",0,0,600,600);
   GenJet_VbbHcc_nGenB_signal_17->SetHighLightColor(2);
   GenJet_VbbHcc_nGenB_signal_17->Range(-4.867058,-0.7601899,22.93266,2.81201);
   GenJet_VbbHcc_nGenB_signal_17->SetFillColor(0);
   GenJet_VbbHcc_nGenB_signal_17->SetFillStyle(4000);
   GenJet_VbbHcc_nGenB_signal_17->SetBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_17->SetBorderSize(2);
   GenJet_VbbHcc_nGenB_signal_17->SetLogy();
   GenJet_VbbHcc_nGenB_signal_17->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenB_signal_17->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenB_signal_17->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_17->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(195.4224);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",20,-0.5,19.5);
   st_stack_159->SetMinimum(0.4660946);
   st_stack_159->SetMaximum(284.964);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetTitleOffset(1);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Event/1.0");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetTitleSize(0.037);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetTitleOffset(1);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *GenJet_VbbHcc_nGenB_stack_1 = new TH1D("GenJet_VbbHcc_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(1,0.9767909);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(2,25.75912);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(3,141.3371);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(4,9.833985);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(5,1.713815);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(6,0.1783687);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(7,0.01714138);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(8,0.002244592);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(1,0.04429126);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(2,0.2254057);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(3,0.525291);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(4,0.1379368);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(5,0.05635776);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(6,0.01781968);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(7,0.00576938);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(8,0.002244592);
   GenJet_VbbHcc_nGenB_stack_1->SetEntries(109542);

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
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(1,0.01083066);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(2,2.124245);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(3,20.86351);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(4,1.508581);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(5,0.3004662);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(6,0.02522381);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(7,0.00406629);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(8,0.00116843);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(1,0.001618111);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(2,0.02260796);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(3,0.07079552);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(4,0.01902087);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(5,0.008515552);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(6,0.002429428);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(7,0.0009933712);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(8,0.0005291269);
   GenJet_VbbHcc_nGenB_stack_2->SetEntries(108038);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_nGenB_signal_17->Modified();
   GenJet_VbbHcc_nGenB_signal_17->cd();
   GenJet_VbbHcc_nGenB_signal_17->SetSelected(GenJet_VbbHcc_nGenB_signal_17);
}
