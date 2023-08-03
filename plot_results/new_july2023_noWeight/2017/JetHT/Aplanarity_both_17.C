void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-5818.575,1.133333,52367.18);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__699 = new TH1D("VbbHcc_both_Aplanarity__699","",50,0,1);
   VbbHcc_both_Aplanarity__699->SetBinContent(1,44332);
   VbbHcc_both_Aplanarity__699->SetBinContent(2,12959);
   VbbHcc_both_Aplanarity__699->SetBinContent(3,5986);
   VbbHcc_both_Aplanarity__699->SetBinContent(4,3399);
   VbbHcc_both_Aplanarity__699->SetBinContent(5,2068);
   VbbHcc_both_Aplanarity__699->SetBinContent(6,1349);
   VbbHcc_both_Aplanarity__699->SetBinContent(7,875);
   VbbHcc_both_Aplanarity__699->SetBinContent(8,602);
   VbbHcc_both_Aplanarity__699->SetBinContent(9,403);
   VbbHcc_both_Aplanarity__699->SetBinContent(10,255);
   VbbHcc_both_Aplanarity__699->SetBinContent(11,187);
   VbbHcc_both_Aplanarity__699->SetBinContent(12,129);
   VbbHcc_both_Aplanarity__699->SetBinContent(13,82);
   VbbHcc_both_Aplanarity__699->SetBinContent(14,54);
   VbbHcc_both_Aplanarity__699->SetBinContent(15,47);
   VbbHcc_both_Aplanarity__699->SetBinContent(16,22);
   VbbHcc_both_Aplanarity__699->SetBinContent(17,14);
   VbbHcc_both_Aplanarity__699->SetBinContent(18,8);
   VbbHcc_both_Aplanarity__699->SetBinContent(19,6);
   VbbHcc_both_Aplanarity__699->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__699->SetEntries(72779);
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__699->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__699->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__699->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__699->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__699->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__699->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__699->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__699->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__699->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__699->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__699->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
