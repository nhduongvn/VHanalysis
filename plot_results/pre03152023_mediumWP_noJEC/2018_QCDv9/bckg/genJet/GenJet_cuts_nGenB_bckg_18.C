#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_bckg_18/GenJet_cuts_nGenB_bckg_18
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_bckg_18 = new TCanvas("GenJet_cuts_nGenB_bckg_18", "GenJet_cuts_nGenB_bckg_18",0,0,600,600);
   GenJet_cuts_nGenB_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenB_bckg_18->Range(-4.867058,-3.707422e+11,22.93266,2.718776e+12);
   GenJet_cuts_nGenB_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenB_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenB_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenB_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenB_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.409824e+12);
   
   TH1F *st_stack_90 = new TH1F("st_stack_90","",20,-0.5,19.5);
   st_stack_90->SetMinimum(0);
   st_stack_90->SetMaximum(2.409824e+12);
   st_stack_90->SetDirectory(0);
   st_stack_90->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_90->SetLineColor(ci);
   st_stack_90->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_90->GetXaxis()->SetLabelFont(42);
   st_stack_90->GetXaxis()->SetTitleOffset(1);
   st_stack_90->GetXaxis()->SetTitleFont(42);
   st_stack_90->GetYaxis()->SetTitle("Event/1.0");
   st_stack_90->GetYaxis()->SetLabelFont(42);
   st_stack_90->GetYaxis()->SetTitleSize(0.037);
   st_stack_90->GetYaxis()->SetTitleFont(42);
   st_stack_90->GetZaxis()->SetLabelFont(42);
   st_stack_90->GetZaxis()->SetTitleOffset(1);
   st_stack_90->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_90);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,2.000146e+12);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,4.209066e+10);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,2.885447e+09);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,2.518202e+07);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,1098764);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,22382.63);
   GenJet_cuts_nGenB_stack_1->SetBinContent(7,436.2717);
   GenJet_cuts_nGenB_stack_1->SetBinContent(8,12.99369);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,2.377413e+08);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,3.265438e+07);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,7436448);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,282898.9);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,33714.31);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,2689.261);
   GenJet_cuts_nGenB_stack_1->SetBinError(7,101.8004);
   GenJet_cuts_nGenB_stack_1->SetBinError(8,12.99369);
   GenJet_cuts_nGenB_stack_1->SetEntries(3.050092e+08);

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
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,8079203);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,2.488307e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,2.027871e+07);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,444965.1);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,31473.61);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,1100.133);
   GenJet_cuts_nGenB_stack_2->SetBinContent(7,47.48142);
   GenJet_cuts_nGenB_stack_2->SetBinContent(8,2.341022);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,793.2762);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,1393.077);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,1258.273);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,188.1376);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,50.35294);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,10.24042);
   GenJet_cuts_nGenB_stack_2->SetBinError(7,1.854445);
   GenJet_cuts_nGenB_stack_2->SetBinError(8,0.4385292);
   GenJet_cuts_nGenB_stack_2->SetEntries(8.848938e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenB_bckg_18->Modified();
   GenJet_cuts_nGenB_bckg_18->cd();
   GenJet_cuts_nGenB_bckg_18->SetSelected(GenJet_cuts_nGenB_bckg_18);
}
