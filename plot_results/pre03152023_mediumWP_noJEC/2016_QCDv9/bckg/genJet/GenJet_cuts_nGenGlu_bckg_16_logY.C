#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_16/GenJet_cuts_nGenGlu_bckg_16
//=========  (Thu Mar  9 15:52:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_16 = new TCanvas("GenJet_cuts_nGenGlu_bckg_16", "GenJet_cuts_nGenGlu_bckg_16",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_16->Range(-4.867058,-2.886658,22.93266,14.14827);
   GenJet_cuts_nGenGlu_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenGlu_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenGlu_bckg_16->SetLogy();
   GenJet_cuts_nGenGlu_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(8.23112e+11);
   
   TH1F *st_stack_98 = new TH1F("st_stack_98","",20,-0.5,19.5);
   st_stack_98->SetMinimum(0.143725);
   st_stack_98->SetMaximum(2.784664e+12);
   st_stack_98->SetDirectory(0);
   st_stack_98->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_98->SetLineColor(ci);
   st_stack_98->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_98->GetXaxis()->SetLabelFont(42);
   st_stack_98->GetXaxis()->SetTitleOffset(1);
   st_stack_98->GetXaxis()->SetTitleFont(42);
   st_stack_98->GetYaxis()->SetTitle("Event/1.0");
   st_stack_98->GetYaxis()->SetLabelFont(42);
   st_stack_98->GetYaxis()->SetTitleSize(0.037);
   st_stack_98->GetYaxis()->SetTitleFont(42);
   st_stack_98->GetZaxis()->SetLabelFont(42);
   st_stack_98->GetZaxis()->SetTitleOffset(1);
   st_stack_98->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_98);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,6.831607e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,3.680919e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,9.488007e+10);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,5.735375e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,6.455441e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,6.145126e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,6550915);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,722451.2);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,79816.69);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,8385.3);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1115.357);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,84.47742);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,4.118041);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,3.26328);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,3.518808);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.219203e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,8.640795e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,4.009908e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,4511181);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,815233.8);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,146442.9);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,32362.77);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,7430.703);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,1784.085);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,486.4307);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,100.2509);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,19.03564);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.166221);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,3.26328);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,3.518808);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
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
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,2.222816e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,6192784);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,1209219);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,200773.6);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,30101.29);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,4169.453);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,550.1292);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,71.74304);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,9.816555);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,0.8998694);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.215528);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1180.91);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,620.3705);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,272.998);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,110.9693);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,42.87811);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,15.8986);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,5.771713);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,2.083334);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,0.7661116);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.2336495);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.126811);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","QCD","F");

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
   GenJet_cuts_nGenGlu_bckg_16->Modified();
   GenJet_cuts_nGenGlu_bckg_16->cd();
   GenJet_cuts_nGenGlu_bckg_16->SetSelected(GenJet_cuts_nGenGlu_bckg_16);
}
