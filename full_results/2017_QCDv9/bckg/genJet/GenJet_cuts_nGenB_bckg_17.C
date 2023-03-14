#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_bckg_17/GenJet_cuts_nGenB_bckg_17
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_bckg_17 = new TCanvas("GenJet_cuts_nGenB_bckg_17", "GenJet_cuts_nGenB_bckg_17",0,0,600,600);
   GenJet_cuts_nGenB_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenB_bckg_17->Range(-4.867058,-2.556538e+11,22.93266,1.874795e+12);
   GenJet_cuts_nGenB_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenB_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenB_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenB_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenB_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.66175e+12);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",20,-0.5,19.5);
   st_stack_88->SetMinimum(0);
   st_stack_88->SetMaximum(1.66175e+12);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Event/1.0");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,1.379247e+12);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,2.889848e+10);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,1.979503e+09);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,1.726415e+07);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,752537.4);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,17833.14);
   GenJet_cuts_nGenB_stack_1->SetBinContent(7,638.9365);
   GenJet_cuts_nGenB_stack_1->SetBinContent(8,9.037262);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.491814e+08);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,2.037644e+07);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,4695356);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,191972.9);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,19357.99);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,2249.337);
   GenJet_cuts_nGenB_stack_1->SetBinError(7,322.8496);
   GenJet_cuts_nGenB_stack_1->SetBinError(8,9.037262);
   GenJet_cuts_nGenB_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenB_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_1,"");
   
   TH1D *GenJet_cuts_nGenB_stack_2 = new TH1D("GenJet_cuts_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,5401243);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,1.677618e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,1.377045e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,300415.4);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,21098.95);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,731.3904);
   GenJet_cuts_nGenB_stack_2->SetBinContent(7,33.38264);
   GenJet_cuts_nGenB_stack_2->SetBinContent(8,1.35984);
   GenJet_cuts_nGenB_stack_2->SetBinContent(9,0.05951331);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,594.3401);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,1052.17);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,956.6042);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,142.6958);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,37.851);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,7.08166);
   GenJet_cuts_nGenB_stack_2->SetBinError(7,1.526223);
   GenJet_cuts_nGenB_stack_2->SetBinError(8,0.3091596);
   GenJet_cuts_nGenB_stack_2->SetBinError(9,0.05951331);
   GenJet_cuts_nGenB_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenB_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_cuts_nGenB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   GenJet_cuts_nGenB_bckg_17->Modified();
   GenJet_cuts_nGenB_bckg_17->cd();
   GenJet_cuts_nGenB_bckg_17->SetSelected(GenJet_cuts_nGenB_bckg_17);
}
