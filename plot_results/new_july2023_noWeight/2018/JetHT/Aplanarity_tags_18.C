void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug  3 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-34877.59,1.133333,313898.3);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__174 = new TH1D("VbbHcc_tags_Aplanarity__174","",50,0,1);
   VbbHcc_tags_Aplanarity__174->SetBinContent(1,265734);
   VbbHcc_tags_Aplanarity__174->SetBinContent(2,34010);
   VbbHcc_tags_Aplanarity__174->SetBinContent(3,8658);
   VbbHcc_tags_Aplanarity__174->SetBinContent(4,3002);
   VbbHcc_tags_Aplanarity__174->SetBinContent(5,1277);
   VbbHcc_tags_Aplanarity__174->SetBinContent(6,695);
   VbbHcc_tags_Aplanarity__174->SetBinContent(7,336);
   VbbHcc_tags_Aplanarity__174->SetBinContent(8,197);
   VbbHcc_tags_Aplanarity__174->SetBinContent(9,107);
   VbbHcc_tags_Aplanarity__174->SetBinContent(10,72);
   VbbHcc_tags_Aplanarity__174->SetBinContent(11,56);
   VbbHcc_tags_Aplanarity__174->SetBinContent(12,27);
   VbbHcc_tags_Aplanarity__174->SetBinContent(13,24);
   VbbHcc_tags_Aplanarity__174->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__174->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__174->SetBinContent(16,8);
   VbbHcc_tags_Aplanarity__174->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__174->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__174->SetEntries(314235);
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__174->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__174->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__174->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__174->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__174->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__174->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__174->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
