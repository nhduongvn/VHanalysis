void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-0.6111405,1.133333,5.500264);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__699 = new TH1D("VbbHcc_both_Aplanarity__699","",50,0,1);
   VbbHcc_both_Aplanarity__699->SetBinContent(1,40886);
   VbbHcc_both_Aplanarity__699->SetBinContent(2,11951);
   VbbHcc_both_Aplanarity__699->SetBinContent(3,5474);
   VbbHcc_both_Aplanarity__699->SetBinContent(4,3124);
   VbbHcc_both_Aplanarity__699->SetBinContent(5,1911);
   VbbHcc_both_Aplanarity__699->SetBinContent(6,1231);
   VbbHcc_both_Aplanarity__699->SetBinContent(7,793);
   VbbHcc_both_Aplanarity__699->SetBinContent(8,567);
   VbbHcc_both_Aplanarity__699->SetBinContent(9,364);
   VbbHcc_both_Aplanarity__699->SetBinContent(10,232);
   VbbHcc_both_Aplanarity__699->SetBinContent(11,172);
   VbbHcc_both_Aplanarity__699->SetBinContent(12,116);
   VbbHcc_both_Aplanarity__699->SetBinContent(13,73);
   VbbHcc_both_Aplanarity__699->SetBinContent(14,51);
   VbbHcc_both_Aplanarity__699->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__699->SetBinContent(16,19);
   VbbHcc_both_Aplanarity__699->SetBinContent(17,13);
   VbbHcc_both_Aplanarity__699->SetBinContent(18,7);
   VbbHcc_both_Aplanarity__699->SetBinContent(19,6);
   VbbHcc_both_Aplanarity__699->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__699->SetEntries(67036);
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
