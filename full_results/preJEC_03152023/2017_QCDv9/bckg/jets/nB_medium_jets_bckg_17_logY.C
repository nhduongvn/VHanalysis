#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_bckg_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_bckg_17/nB_medium_jets_bckg_17
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_bckg_17 = new TCanvas("nB_medium_jets_bckg_17", "nB_medium_jets_bckg_17",0,0,600,600);
   nB_medium_jets_bckg_17->SetHighLightColor(2);
   nB_medium_jets_bckg_17->Range(-2.683529,-1.750732,11.21633,14.33763);
   nB_medium_jets_bckg_17->SetFillColor(0);
   nB_medium_jets_bckg_17->SetFillStyle(4000);
   nB_medium_jets_bckg_17->SetBorderMode(0);
   nB_medium_jets_bckg_17->SetBorderSize(2);
   nB_medium_jets_bckg_17->SetLogy();
   nB_medium_jets_bckg_17->SetLeftMargin(0.15709);
   nB_medium_jets_bckg_17->SetRightMargin(0.1234783);
   nB_medium_jets_bckg_17->SetBottomMargin(0.12);
   nB_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_17->SetFrameBorderMode(0);
   nB_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.651097e+12);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",10,-0.5,9.5);
   st_stack_28->SetMinimum(1.513114);
   st_stack_28->SetMaximum(5.355423e+12);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_28->GetXaxis()->SetRange(1,10);
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Event/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.370402e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,3.813425e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,1.587836e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.865756e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,459249.2);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,6500.824);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,110.5611);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,10.3109);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.488094e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,2.304029e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,4148415);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,247062.4);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,35438.3);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,1045.664);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,43.59228);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,9.630696);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,8876963);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.711753e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,9481234);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,759791.4);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,33284.7);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,1295.633);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,58.28052);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,2.943514);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.01975482);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(10,0.1478574);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,759.6947);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1062.405);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,796.4398);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,233.4973);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,49.60902);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,9.809533);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,2.091049);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.471263);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.1068258);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(10,0.1047727);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   nB_medium_jets_bckg_17->Modified();
   nB_medium_jets_bckg_17->cd();
   nB_medium_jets_bckg_17->SetSelected(nB_medium_jets_bckg_17);
}
