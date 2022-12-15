void nB_medium_jets_17()
{
//=========Macro generated from canvas: nB_medium_jets_17/nB_medium_jets_17
//=========  (Thu Dec 15 10:05:10 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_17 = new TCanvas("nB_medium_jets_17", "nB_medium_jets_17",0,0,600,600);
   nB_medium_jets_17->SetHighLightColor(2);
   nB_medium_jets_17->Range(-2.683529,-3.195267e+11,11.21633,2.343196e+12);
   nB_medium_jets_17->SetFillColor(0);
   nB_medium_jets_17->SetFillStyle(4000);
   nB_medium_jets_17->SetBorderMode(0);
   nB_medium_jets_17->SetBorderSize(2);
   nB_medium_jets_17->SetLeftMargin(0.15709);
   nB_medium_jets_17->SetRightMargin(0.1234783);
   nB_medium_jets_17->SetBottomMargin(0.12);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.978023e+12);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",10,-0.5,9.5);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(2.076924e+12);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_18->GetXaxis()->SetRange(1,10);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.035);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleOffset(0);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.318677e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,8.594939e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,5.391475e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.199657e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,3421397);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,75354.85);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,1488.272);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,40.6094);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.450734e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,3.610623e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,8482864);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,1073338);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,141323.2);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,19044.56);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,508.2267);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,30.69129);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(3.0187e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,4837779);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.561481e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,1.382816e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,1859504);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,122984.7);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,6510.608);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,363.7833);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,24.35348);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,1.577427);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(10,0.5529804);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(11,0.06803299);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,557.8992);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1008.008);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,955.174);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,360.8881);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,94.31817);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,21.79166);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,5.186955);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,1.350537);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.3551855);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(10,0.2103945);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(11,0.06803299);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(6.245234e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_17->Modified();
   nB_medium_jets_17->cd();
   nB_medium_jets_17->SetSelected(nB_medium_jets_17);
}
