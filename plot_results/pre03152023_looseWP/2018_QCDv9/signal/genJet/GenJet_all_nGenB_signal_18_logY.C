#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenB_signal_18/GenJet_all_nGenB_signal_18
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_signal_18 = new TCanvas("GenJet_all_nGenB_signal_18", "GenJet_all_nGenB_signal_18",0,0,600,600);
   GenJet_all_nGenB_signal_18->SetHighLightColor(2);
   GenJet_all_nGenB_signal_18->Range(-4.867058,-0.9774684,22.93266,3.782373);
   GenJet_all_nGenB_signal_18->SetFillColor(0);
   GenJet_all_nGenB_signal_18->SetFillStyle(4000);
   GenJet_all_nGenB_signal_18->SetBorderMode(0);
   GenJet_all_nGenB_signal_18->SetBorderSize(2);
   GenJet_all_nGenB_signal_18->SetLogy();
   GenJet_all_nGenB_signal_18->SetLeftMargin(0.15709);
   GenJet_all_nGenB_signal_18->SetRightMargin(0.1234783);
   GenJet_all_nGenB_signal_18->SetBottomMargin(0.12);
   GenJet_all_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_18->SetFrameBorderMode(0);
   GenJet_all_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1250.354);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",20,-0.5,19.5);
   st_stack_17->SetMinimum(0.3923851);
   st_stack_17->SetMaximum(2024.832);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Event/1.0");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,912.4552);
   GenJet_all_nGenB_stack_1->SetBinContent(2,63.48316);
   GenJet_all_nGenB_stack_1->SetBinContent(3,219.3331);
   GenJet_all_nGenB_stack_1->SetBinContent(4,15.11417);
   GenJet_all_nGenB_stack_1->SetBinContent(5,2.796939);
   GenJet_all_nGenB_stack_1->SetBinContent(6,0.2537988);
   GenJet_all_nGenB_stack_1->SetBinContent(7,0.0245119);
   GenJet_all_nGenB_stack_1->SetBinContent(8,0.005888097);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.741719);
   GenJet_all_nGenB_stack_1->SetBinError(2,0.4570035);
   GenJet_all_nGenB_stack_1->SetBinError(3,0.8404683);
   GenJet_all_nGenB_stack_1->SetBinError(4,0.2241462);
   GenJet_all_nGenB_stack_1->SetBinError(5,0.09054762);
   GenJet_all_nGenB_stack_1->SetBinError(6,0.02664271);
   GenJet_all_nGenB_stack_1->SetBinError(7,0.008236005);
   GenJet_all_nGenB_stack_1->SetBinError(8,0.004194756);
   GenJet_all_nGenB_stack_1->SetEntries(498953);

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
   GenJet_all_nGenB_stack_2->SetBinContent(1,125.3388);
   GenJet_all_nGenB_stack_2->SetBinContent(2,7.210974);
   GenJet_all_nGenB_stack_2->SetBinContent(3,32.94083);
   GenJet_all_nGenB_stack_2->SetBinContent(4,2.276793);
   GenJet_all_nGenB_stack_2->SetBinContent(5,0.4168204);
   GenJet_all_nGenB_stack_2->SetBinContent(6,0.03562717);
   GenJet_all_nGenB_stack_2->SetBinContent(7,0.002685024);
   GenJet_all_nGenB_stack_2->SetBinContent(8,0.0007633504);
   GenJet_all_nGenB_stack_2->SetBinError(1,0.2236288);
   GenJet_all_nGenB_stack_2->SetBinError(2,0.05486883);
   GenJet_all_nGenB_stack_2->SetBinError(3,0.1174474);
   GenJet_all_nGenB_stack_2->SetBinError(4,0.02941202);
   GenJet_all_nGenB_stack_2->SetBinError(5,0.01236471);
   GenJet_all_nGenB_stack_2->SetBinError(6,0.003583723);
   GenJet_all_nGenB_stack_2->SetBinError(7,0.000958023);
   GenJet_all_nGenB_stack_2->SetBinError(8,0.0005454322);
   GenJet_all_nGenB_stack_2->SetEntries(493157);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenB_signal_18->Modified();
   GenJet_all_nGenB_signal_18->cd();
   GenJet_all_nGenB_signal_18->SetSelected(GenJet_all_nGenB_signal_18);
}
