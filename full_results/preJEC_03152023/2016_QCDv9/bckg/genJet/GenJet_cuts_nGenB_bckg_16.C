#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_bckg_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_bckg_16/GenJet_cuts_nGenB_bckg_16
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_bckg_16 = new TCanvas("GenJet_cuts_nGenB_bckg_16", "GenJet_cuts_nGenB_bckg_16",0,0,600,600);
   GenJet_cuts_nGenB_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenB_bckg_16->Range(-4.867058,-2.0893e+11,22.93266,1.532153e+12);
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
   st->SetMaximum(1.358045e+12);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",20,-0.5,19.5);
   st_stack_86->SetMinimum(0);
   st_stack_86->SetMaximum(1.358045e+12);
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
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,1.127173e+12);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,2.375339e+10);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,1.640564e+09);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,1.504021e+07);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,640974.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,14436.6);
   GenJet_cuts_nGenB_stack_1->SetBinContent(7,446.5304);
   GenJet_cuts_nGenB_stack_1->SetBinContent(8,8.403697);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.532877e+08);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,2.096331e+07);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,4819855);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,207460.8);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,17423.5);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,2051.225);
   GenJet_cuts_nGenB_stack_1->SetBinError(7,287.4525);
   GenJet_cuts_nGenB_stack_1->SetBinError(8,8.403697);
   GenJet_cuts_nGenB_stack_1->SetEntries(2.425785e+08);

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
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,4463350);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,1.382113e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,1.13158e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,247494.8);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,17435.05);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,607.8777);
   GenJet_cuts_nGenB_stack_2->SetBinContent(7,26.2873);
   GenJet_cuts_nGenB_stack_2->SetBinContent(8,1.337285);
   GenJet_cuts_nGenB_stack_2->SetBinContent(9,0.07557075);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,526.3963);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,929.3097);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,843.0323);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,125.7412);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,33.39943);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,6.265817);
   GenJet_cuts_nGenB_stack_2->SetBinError(7,1.289237);
   GenJet_cuts_nGenB_stack_2->SetBinError(8,0.3053234);
   GenJet_cuts_nGenB_stack_2->SetBinError(9,0.07557075);
   GenJet_cuts_nGenB_stack_2->SetEntries(5.166267e+08);

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
