#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_bckg_17_logY()
{
//=========Macro generated from canvas: nC_medium_jets_bckg_17/nC_medium_jets_bckg_17
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_bckg_17 = new TCanvas("nC_medium_jets_bckg_17", "nC_medium_jets_bckg_17",0,0,600,600);
   nC_medium_jets_bckg_17->SetHighLightColor(2);
   nC_medium_jets_bckg_17->Range(-2.683529,-1.741601,11.21633,14.28346);
   nC_medium_jets_bckg_17->SetFillColor(0);
   nC_medium_jets_bckg_17->SetFillStyle(4000);
   nC_medium_jets_bckg_17->SetBorderMode(0);
   nC_medium_jets_bckg_17->SetBorderSize(2);
   nC_medium_jets_bckg_17->SetLogy();
   nC_medium_jets_bckg_17->SetLeftMargin(0.15709);
   nC_medium_jets_bckg_17->SetRightMargin(0.1234783);
   nC_medium_jets_bckg_17->SetBottomMargin(0.12);
   nC_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_17->SetFrameBorderMode(0);
   nC_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.483126e+12);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",10,-0.5,9.5);
   st_stack_34->SetMinimum(1.518467);
   st_stack_34->SetMaximum(4.796779e+12);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_34->GetXaxis()->SetRange(1,10);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetTitleOffset(1);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Event/1.0");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetTitleSize(0.037);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetTitleOffset(1);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.23098e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.660305e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.278627e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,3.338066e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.293002e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,489161.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,20483.94);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,915.4323);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,46.34987);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.5059063);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.416967e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,4.886538e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.217231e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1133215);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,166839.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,11866.61);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,1372.668);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,98.36327);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,17.36568);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.5059063);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(3.028331e+08);

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
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.481915e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.395445e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,5828167);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,1411351);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,227274.9);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,26926.59);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,2571.79);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,212.9382);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,17.56263);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.328766);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,955.5979);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,961.6592);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,640.8518);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,322.6291);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,131.3783);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,45.53225);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,14.10924);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,4.056362);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.174566);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3082015);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_bckg_17->Modified();
   nC_medium_jets_bckg_17->cd();
   nC_medium_jets_bckg_17->SetSelected(nC_medium_jets_bckg_17);
}
