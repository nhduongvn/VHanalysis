void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-5410.782,1.133333,48697.03);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__699 = new TH1D("VbbHcc_both_Aplanarity__699","",50,0,1);
   VbbHcc_both_Aplanarity__699->SetBinContent(1,41225);
   VbbHcc_both_Aplanarity__699->SetBinContent(2,12071);
   VbbHcc_both_Aplanarity__699->SetBinContent(3,5535);
   VbbHcc_both_Aplanarity__699->SetBinContent(4,3173);
   VbbHcc_both_Aplanarity__699->SetBinContent(5,1939);
   VbbHcc_both_Aplanarity__699->SetBinContent(6,1257);
   VbbHcc_both_Aplanarity__699->SetBinContent(7,823);
   VbbHcc_both_Aplanarity__699->SetBinContent(8,547);
   VbbHcc_both_Aplanarity__699->SetBinContent(9,371);
   VbbHcc_both_Aplanarity__699->SetBinContent(10,238);
   VbbHcc_both_Aplanarity__699->SetBinContent(11,171);
   VbbHcc_both_Aplanarity__699->SetBinContent(12,114);
   VbbHcc_both_Aplanarity__699->SetBinContent(13,77);
   VbbHcc_both_Aplanarity__699->SetBinContent(14,49);
   VbbHcc_both_Aplanarity__699->SetBinContent(15,45);
   VbbHcc_both_Aplanarity__699->SetBinContent(16,21);
   VbbHcc_both_Aplanarity__699->SetBinContent(17,13);
   VbbHcc_both_Aplanarity__699->SetBinContent(18,8);
   VbbHcc_both_Aplanarity__699->SetBinContent(19,5);
   VbbHcc_both_Aplanarity__699->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__699->SetEntries(67684);
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
