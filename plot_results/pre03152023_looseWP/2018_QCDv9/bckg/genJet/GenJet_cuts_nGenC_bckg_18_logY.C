#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_bckg_18/GenJet_cuts_nGenC_bckg_18
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_bckg_18 = new TCanvas("GenJet_cuts_nGenC_bckg_18", "GenJet_cuts_nGenC_bckg_18",0,0,600,600);
   GenJet_cuts_nGenC_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenC_bckg_18->Range(-4.867058,-2.973969,22.93266,14.67287);
   GenJet_cuts_nGenC_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenC_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenC_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenC_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenC_bckg_18->SetLogy();
   GenJet_cuts_nGenC_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.330332e+12);
   
   TH1F *st_stack_96 = new TH1F("st_stack_96","",20,-0.5,19.5);
   st_stack_96->SetMinimum(0.1392039);
   st_stack_96->SetMaximum(8.094371e+12);
   st_stack_96->SetDirectory(0);
   st_stack_96->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_96->SetLineColor(ci);
   st_stack_96->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_96->GetXaxis()->SetLabelFont(42);
   st_stack_96->GetXaxis()->SetTitleOffset(1);
   st_stack_96->GetXaxis()->SetTitleFont(42);
   st_stack_96->GetYaxis()->SetTitle("Event/1.0");
   st_stack_96->GetYaxis()->SetLabelFont(42);
   st_stack_96->GetYaxis()->SetTitleSize(0.037);
   st_stack_96->GetYaxis()->SetTitleFont(42);
   st_stack_96->GetZaxis()->SetLabelFont(42);
   st_stack_96->GetZaxis()->SetTitleOffset(1);
   st_stack_96->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_96);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,1.934141e+12);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,1.056409e+11);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,5.298529e+09);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,8.804517e+07);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,2923429);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,77041.78);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,2430.816);
   GenJet_cuts_nGenC_stack_1->SetBinContent(8,100.3483);
   GenJet_cuts_nGenC_stack_1->SetBinContent(9,0.6768199);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,2.363347e+08);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,5.242595e+07);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,1.029433e+07);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,641516.2);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,57820.55);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,4590.154);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,443.7019);
   GenJet_cuts_nGenC_stack_1->SetBinError(8,56.29287);
   GenJet_cuts_nGenC_stack_1->SetBinError(9,0.6768199);
   GenJet_cuts_nGenC_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
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
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,3.517827e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,1.604757e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,2352697);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,132106.7);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,7718.384);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,395.8349);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,18.46428);
   GenJet_cuts_nGenC_stack_2->SetBinContent(8,1.299307);
   GenJet_cuts_nGenC_stack_2->SetBinContent(9,0.07170828);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,1610.855);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,1148.705);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,461.4387);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,108.9474);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,25.85814);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,5.766882);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,1.240614);
   GenJet_cuts_nGenC_stack_2->SetBinError(8,0.3762991);
   GenJet_cuts_nGenC_stack_2->SetBinError(9,0.07170828);
   GenJet_cuts_nGenC_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenC_bckg_18->Modified();
   GenJet_cuts_nGenC_bckg_18->cd();
   GenJet_cuts_nGenC_bckg_18->SetSelected(GenJet_cuts_nGenC_bckg_18);
}
