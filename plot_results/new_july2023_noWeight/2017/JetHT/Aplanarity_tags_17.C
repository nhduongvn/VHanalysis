void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-7513.144,1.133333,67618.29);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__171 = new TH1D("VbbHcc_tags_Aplanarity__171","",50,0,1);
   VbbHcc_tags_Aplanarity__171->SetBinContent(1,57243);
   VbbHcc_tags_Aplanarity__171->SetBinContent(2,7249);
   VbbHcc_tags_Aplanarity__171->SetBinContent(3,2149);
   VbbHcc_tags_Aplanarity__171->SetBinContent(4,870);
   VbbHcc_tags_Aplanarity__171->SetBinContent(5,444);
   VbbHcc_tags_Aplanarity__171->SetBinContent(6,218);
   VbbHcc_tags_Aplanarity__171->SetBinContent(7,121);
   VbbHcc_tags_Aplanarity__171->SetBinContent(8,97);
   VbbHcc_tags_Aplanarity__171->SetBinContent(9,49);
   VbbHcc_tags_Aplanarity__171->SetBinContent(10,28);
   VbbHcc_tags_Aplanarity__171->SetBinContent(11,21);
   VbbHcc_tags_Aplanarity__171->SetBinContent(12,15);
   VbbHcc_tags_Aplanarity__171->SetBinContent(13,13);
   VbbHcc_tags_Aplanarity__171->SetBinContent(14,5);
   VbbHcc_tags_Aplanarity__171->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__171->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__171->SetEntries(68531);
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__171->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__171->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__171->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__171->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__171->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__171->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__171->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
