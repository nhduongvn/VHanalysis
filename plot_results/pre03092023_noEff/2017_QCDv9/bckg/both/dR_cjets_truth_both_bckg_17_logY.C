#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_cjets_truth_both_bckg_17_logY()
{
//=========Macro generated from canvas: dR_cjets_truth_both_bckg_17/dR_cjets_truth_both_bckg_17
//=========  (Thu Mar  2 13:32:45 2023) by ROOT version 6.26/06
   TCanvas *dR_cjets_truth_both_bckg_17 = new TCanvas("dR_cjets_truth_both_bckg_17", "dR_cjets_truth_both_bckg_17",0,0,600,600);
   dR_cjets_truth_both_bckg_17->SetHighLightColor(2);
   dR_cjets_truth_both_bckg_17->Range(-1.310117,-0.1538462,7.029799,1.128205);
   dR_cjets_truth_both_bckg_17->SetFillColor(0);
   dR_cjets_truth_both_bckg_17->SetFillStyle(4000);
   dR_cjets_truth_both_bckg_17->SetBorderMode(0);
   dR_cjets_truth_both_bckg_17->SetBorderSize(2);
   dR_cjets_truth_both_bckg_17->SetLogy();
   dR_cjets_truth_both_bckg_17->SetLeftMargin(0.15709);
   dR_cjets_truth_both_bckg_17->SetRightMargin(0.1234783);
   dR_cjets_truth_both_bckg_17->SetBottomMargin(0.12);
   dR_cjets_truth_both_bckg_17->SetFrameFillStyle(1000);
   dR_cjets_truth_both_bckg_17->SetFrameBorderMode(0);
   dR_cjets_truth_both_bckg_17->SetFrameFillStyle(1000);
   dR_cjets_truth_both_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",60,0,6);
   st_stack_34->SetMinimum(-0);
   st_stack_34->SetMaximum(-nan);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetTitle("#Delta R(c,c-jet)");
   st_stack_34->GetXaxis()->SetRange(1,60);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetTitleOffset(1);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Events/0.1");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetTitleSize(0.037);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetTitleOffset(1);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *VbbHcc_eff_both_dR_cjets_truth_stack_1 = new TH1D("VbbHcc_eff_both_dR_cjets_truth_stack_1","",60,0,6);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_eff_both_dR_cjets_truth_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_eff_both_dR_cjets_truth_stack_1->SetLineColor(ci);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_eff_both_dR_cjets_truth_stack_1,"");
   
   TH1D *VbbHcc_eff_both_dR_cjets_truth_stack_2 = new TH1D("VbbHcc_eff_both_dR_cjets_truth_stack_2","",60,0,6);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_eff_both_dR_cjets_truth_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_eff_both_dR_cjets_truth_stack_2->SetLineColor(ci);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_eff_both_dR_cjets_truth_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_eff_both_dR_cjets_truth_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_eff_both_dR_cjets_truth_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_cjets_truth_both_bckg_17->Modified();
   dR_cjets_truth_both_bckg_17->cd();
   dR_cjets_truth_both_bckg_17->SetSelected(dR_cjets_truth_both_bckg_17);
}
