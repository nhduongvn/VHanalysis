void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-0.9181799,1.133333,5.253319);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__160 = new TH1D("VbbHcc_tags_Sphericity__160","",25,0,1);
   VbbHcc_tags_Sphericity__160->SetBinContent(1,22836);
   VbbHcc_tags_Sphericity__160->SetBinContent(2,15884);
   VbbHcc_tags_Sphericity__160->SetBinContent(3,9133);
   VbbHcc_tags_Sphericity__160->SetBinContent(4,5595);
   VbbHcc_tags_Sphericity__160->SetBinContent(5,3503);
   VbbHcc_tags_Sphericity__160->SetBinContent(6,2134);
   VbbHcc_tags_Sphericity__160->SetBinContent(7,1323);
   VbbHcc_tags_Sphericity__160->SetBinContent(8,850);
   VbbHcc_tags_Sphericity__160->SetBinContent(9,670);
   VbbHcc_tags_Sphericity__160->SetBinContent(10,466);
   VbbHcc_tags_Sphericity__160->SetBinContent(11,317);
   VbbHcc_tags_Sphericity__160->SetBinContent(12,273);
   VbbHcc_tags_Sphericity__160->SetBinContent(13,204);
   VbbHcc_tags_Sphericity__160->SetBinContent(14,161);
   VbbHcc_tags_Sphericity__160->SetBinContent(15,120);
   VbbHcc_tags_Sphericity__160->SetBinContent(16,111);
   VbbHcc_tags_Sphericity__160->SetBinContent(17,73);
   VbbHcc_tags_Sphericity__160->SetBinContent(18,55);
   VbbHcc_tags_Sphericity__160->SetBinContent(19,21);
   VbbHcc_tags_Sphericity__160->SetBinContent(20,10);
   VbbHcc_tags_Sphericity__160->SetBinContent(21,3);
   VbbHcc_tags_Sphericity__160->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__160->SetEntries(63743);
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__160->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__160->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__160->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__160->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__160->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__160->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__160->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__160->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__160->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__160->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__160->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
