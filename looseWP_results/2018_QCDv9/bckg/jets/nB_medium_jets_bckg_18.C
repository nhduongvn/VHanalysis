#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_bckg_18()
{
//=========Macro generated from canvas: nB_medium_jets_bckg_18/nB_medium_jets_bckg_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_bckg_18 = new TCanvas("nB_medium_jets_bckg_18", "nB_medium_jets_bckg_18",0,0,600,600);
   nB_medium_jets_bckg_18->SetHighLightColor(2);
   nB_medium_jets_bckg_18->Range(-2.683529,-3.688231e+11,11.21633,2.704703e+12);
   nB_medium_jets_bckg_18->SetFillColor(0);
   nB_medium_jets_bckg_18->SetFillStyle(4000);
   nB_medium_jets_bckg_18->SetBorderMode(0);
   nB_medium_jets_bckg_18->SetBorderSize(2);
   nB_medium_jets_bckg_18->SetLeftMargin(0.15709);
   nB_medium_jets_bckg_18->SetRightMargin(0.1234783);
   nB_medium_jets_bckg_18->SetBottomMargin(0.12);
   nB_medium_jets_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_18->SetFrameBorderMode(0);
   nB_medium_jets_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.39735e+12);
   
   TH1F *st_stack_30 = new TH1F("st_stack_30","",10,-0.5,9.5);
   st_stack_30->SetMinimum(0);
   st_stack_30->SetMaximum(2.39735e+12);
   st_stack_30->SetDirectory(0);
   st_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_30->SetLineColor(ci);
   st_stack_30->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_30->GetXaxis()->SetRange(1,10);
   st_stack_30->GetXaxis()->SetLabelFont(42);
   st_stack_30->GetXaxis()->SetTitleOffset(1);
   st_stack_30->GetXaxis()->SetTitleFont(42);
   st_stack_30->GetYaxis()->SetTitle("Event/1.0");
   st_stack_30->GetYaxis()->SetLabelFont(42);
   st_stack_30->GetYaxis()->SetTitleSize(0.037);
   st_stack_30->GetYaxis()->SetTitleFont(42);
   st_stack_30->GetZaxis()->SetLabelFont(42);
   st_stack_30->GetZaxis()->SetTitleOffset(1);
   st_stack_30->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_30);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.989787e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,5.315147e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,2.206408e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,2.560112e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,578149.6);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,6100.145);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,129.5215);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,14.82491);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,2.39502e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,3.616126e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,6308879);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,526828.2);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,40392.27);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,1040.975);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,54.22811);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,13.84692);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,1.348781e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,2.543427e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,1.371489e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,1036761);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,43331.7);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,1645.673);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,58.58228);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,3.183838);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,1014.28);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1399.003);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,1032.322);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,290.6269);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,60.11781);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,11.44393);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,2.108079);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.5105735);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_bckg_18->Modified();
   nB_medium_jets_bckg_18->cd();
   nB_medium_jets_bckg_18->SetSelected(nB_medium_jets_bckg_18);
}
