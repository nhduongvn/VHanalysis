void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-10737.43,1.133333,96636.88);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__168 = new TH1D("VbbHcc_tags_Aplanarity__168","",50,0,1);
   VbbHcc_tags_Aplanarity__168->SetBinContent(1,81809);
   VbbHcc_tags_Aplanarity__168->SetBinContent(2,10171);
   VbbHcc_tags_Aplanarity__168->SetBinContent(3,2925);
   VbbHcc_tags_Aplanarity__168->SetBinContent(4,1093);
   VbbHcc_tags_Aplanarity__168->SetBinContent(5,534);
   VbbHcc_tags_Aplanarity__168->SetBinContent(6,258);
   VbbHcc_tags_Aplanarity__168->SetBinContent(7,152);
   VbbHcc_tags_Aplanarity__168->SetBinContent(8,80);
   VbbHcc_tags_Aplanarity__168->SetBinContent(9,70);
   VbbHcc_tags_Aplanarity__168->SetBinContent(10,34);
   VbbHcc_tags_Aplanarity__168->SetBinContent(11,20);
   VbbHcc_tags_Aplanarity__168->SetBinContent(12,19);
   VbbHcc_tags_Aplanarity__168->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__168->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__168->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__168->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__168->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__168->SetEntries(97185);
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__168->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__168->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__168->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__168->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__168->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__168->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__168->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
