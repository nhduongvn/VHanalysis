#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_16/nC_medium_jets_16
//=========  (Wed Mar  1 13:43:14 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_16 = new TCanvas("nC_medium_jets_16", "nC_medium_jets_16",0,0,600,600);
   nC_medium_jets_16->SetHighLightColor(2);
   nC_medium_jets_16->Range(-2.683529,-2.095855,11.21633,16.41002);
   nC_medium_jets_16->SetFillColor(0);
   nC_medium_jets_16->SetFillStyle(4000);
   nC_medium_jets_16->SetBorderMode(0);
   nC_medium_jets_16->SetBorderSize(2);
   nC_medium_jets_16->SetLogy();
   nC_medium_jets_16->SetLeftMargin(0.15709);
   nC_medium_jets_16->SetRightMargin(0.1234783);
   nC_medium_jets_16->SetBottomMargin(0.12);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.007065e+14);
   
   TH1F *st_stack_32 = new TH1F("st_stack_32","",10,-0.5,9.5);
   st_stack_32->SetMinimum(1.333062);
   st_stack_32->SetMaximum(3.626051e+14);
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
   st_stack_32->GetYaxis()->SetTitle("Events/1.0");
   st_stack_32->GetYaxis()->SetLabelFont(42);
   st_stack_32->GetYaxis()->SetTitleSize(0.037);
   st_stack_32->GetYaxis()->SetTitleFont(42);
   st_stack_32->GetZaxis()->SetLabelFont(42);
   st_stack_32->GetZaxis()->SetTitleOffset(1);
   st_stack_32->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_32);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.007053e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.349462e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.030294e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,2.697894e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.053753e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,431028.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,37718.65);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,806.8135);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,43.088);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.459329e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,4.994802e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.227908e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1070529);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,137748.7);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,24827.07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,21361.13);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,90.39489);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,16.10742);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(2.421249e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.191233e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.153227e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,4954881);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,1234362);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,204843.1);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,25023.71);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,2442.904);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,201.717);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,15.17915);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.564116);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.07410994);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,846.3742);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,856.4437);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,575.1075);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,292.3849);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,120.4942);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,42.32554);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,13.23734);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.784408);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.039917);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3340151);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.07410994);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(5.130375e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_16->Modified();
   nC_medium_jets_16->cd();
   nC_medium_jets_16->SetSelected(nC_medium_jets_16);
}
