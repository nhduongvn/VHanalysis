#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_bckg_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_bckg_16/GenJet_cuts_nGenB_bckg_16
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_bckg_16 = new TCanvas("GenJet_cuts_nGenB_bckg_16", "GenJet_cuts_nGenB_bckg_16",0,0,600,600);
   GenJet_cuts_nGenB_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenB_bckg_16->Range(-4.867058,-2.089292e+11,22.93266,1.532147e+12);
   GenJet_cuts_nGenB_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenB_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenB_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenB_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenB_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.35804e+12);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",20,-0.5,19.5);
   st_stack_86->SetMinimum(0);
   st_stack_86->SetMaximum(1.35804e+12);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Event/1.0");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,1.127168e+12);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,2.375574e+10);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,1.640422e+09);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,1.502078e+07);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,641029.8);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,14448.31);
   GenJet_cuts_nGenB_stack_1->SetBinContent(7,447.2631);
   GenJet_cuts_nGenB_stack_1->SetBinContent(8,8.403697);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.535648e+08);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,2.10022e+07);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,4828069);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,206537.9);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,17424.71);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,2051.668);
   GenJet_cuts_nGenB_stack_1->SetBinError(7,287.5153);
   GenJet_cuts_nGenB_stack_1->SetBinError(8,8.403697);
   GenJet_cuts_nGenB_stack_1->SetEntries(2.416594e+08);

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
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,4463623);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,1.382164e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,1.13163e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,247456.7);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,17434.35);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,607.9689);
   GenJet_cuts_nGenB_stack_2->SetBinContent(7,26.33371);
   GenJet_cuts_nGenB_stack_2->SetBinContent(8,1.317901);
   GenJet_cuts_nGenB_stack_2->SetBinContent(9,0.07407034);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,523.8415);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,924.7192);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,838.8382);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,125.0425);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,33.21031);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,6.229751);
   GenJet_cuts_nGenB_stack_2->SetBinError(7,1.283793);
   GenJet_cuts_nGenB_stack_2->SetBinError(8,0.3004742);
   GenJet_cuts_nGenB_stack_2->SetBinError(9,0.07407034);
   GenJet_cuts_nGenB_stack_2->SetEntries(5.194289e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenB_bckg_16->Modified();
   GenJet_cuts_nGenB_bckg_16->cd();
   GenJet_cuts_nGenB_bckg_16->SetSelected(GenJet_cuts_nGenB_bckg_16);
}
