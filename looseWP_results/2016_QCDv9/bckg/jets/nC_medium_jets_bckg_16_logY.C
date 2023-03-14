#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_bckg_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_bckg_16/nC_medium_jets_bckg_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_bckg_16 = new TCanvas("nC_medium_jets_bckg_16", "nC_medium_jets_bckg_16",0,0,600,600);
   nC_medium_jets_bckg_16->SetHighLightColor(2);
   nC_medium_jets_bckg_16->Range(-2.683529,-1.724496,11.21633,14.18205);
   nC_medium_jets_bckg_16->SetFillColor(0);
   nC_medium_jets_bckg_16->SetFillStyle(4000);
   nC_medium_jets_bckg_16->SetBorderMode(0);
   nC_medium_jets_bckg_16->SetBorderSize(2);
   nC_medium_jets_bckg_16->SetLogy();
   nC_medium_jets_bckg_16->SetLeftMargin(0.15709);
   nC_medium_jets_bckg_16->SetRightMargin(0.1234783);
   nC_medium_jets_bckg_16->SetBottomMargin(0.12);
   nC_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_16->SetFrameBorderMode(0);
   nC_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.213321e+12);
   
   TH1F *st_stack_32 = new TH1F("st_stack_32","",10,-0.5,9.5);
   st_stack_32->SetMinimum(1.528587);
   st_stack_32->SetMaximum(3.903006e+12);
   st_stack_32->SetDirectory(0);
   st_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_32->SetLineColor(ci);
   st_stack_32->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_32->GetXaxis()->SetRange(1,10);
   st_stack_32->GetXaxis()->SetLabelFont(42);
   st_stack_32->GetXaxis()->SetTitleOffset(1);
   st_stack_32->GetXaxis()->SetTitleFont(42);
   st_stack_32->GetYaxis()->SetTitle("Event/1.0");
   st_stack_32->GetYaxis()->SetLabelFont(42);
   st_stack_32->GetYaxis()->SetTitleSize(0.037);
   st_stack_32->GetYaxis()->SetTitleFont(42);
   st_stack_32->GetZaxis()->SetLabelFont(42);
   st_stack_32->GetZaxis()->SetTitleOffset(1);
   st_stack_32->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_32);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.007045e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.349511e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.030346e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,2.697557e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.054454e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,428189.4);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,38115.81);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,813.8163);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,42.72568);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.462477e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,5.005602e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.230524e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1072117);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,138142.8);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,24890.65);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,21455.33);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,91.19889);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,15.91045);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.191236e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.153246e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,4955208);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,1234510);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,204851.8);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,25037.41);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,2446.77);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,201.8937);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,15.22404);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.667101);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.07206077);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,840.0842);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,848.8239);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,569.2321);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,289.0872);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,119.0392);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,41.80374);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,13.07744);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.73646);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.030826);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3406791);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.07206077);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_bckg_16->Modified();
   nC_medium_jets_bckg_16->cd();
   nC_medium_jets_bckg_16->SetSelected(nC_medium_jets_bckg_16);
}
