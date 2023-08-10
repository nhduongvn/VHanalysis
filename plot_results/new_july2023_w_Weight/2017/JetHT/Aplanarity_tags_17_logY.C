void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-0.9641056,1.133333,5.66665);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__171 = new TH1D("VbbHcc_tags_Aplanarity__171","",50,0,1);
   VbbHcc_tags_Aplanarity__171->SetBinContent(1,53214);
   VbbHcc_tags_Aplanarity__171->SetBinContent(2,6767);
   VbbHcc_tags_Aplanarity__171->SetBinContent(3,2005);
   VbbHcc_tags_Aplanarity__171->SetBinContent(4,808);
   VbbHcc_tags_Aplanarity__171->SetBinContent(5,415);
   VbbHcc_tags_Aplanarity__171->SetBinContent(6,204);
   VbbHcc_tags_Aplanarity__171->SetBinContent(7,114);
   VbbHcc_tags_Aplanarity__171->SetBinContent(8,89);
   VbbHcc_tags_Aplanarity__171->SetBinContent(9,43);
   VbbHcc_tags_Aplanarity__171->SetBinContent(10,26);
   VbbHcc_tags_Aplanarity__171->SetBinContent(11,21);
   VbbHcc_tags_Aplanarity__171->SetBinContent(12,13);
   VbbHcc_tags_Aplanarity__171->SetBinContent(13,12);
   VbbHcc_tags_Aplanarity__171->SetBinContent(14,3);
   VbbHcc_tags_Aplanarity__171->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__171->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__171->SetEntries(63743);
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
