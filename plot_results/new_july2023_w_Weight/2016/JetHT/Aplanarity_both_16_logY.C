void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.9734352,1.133333,5.750616);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__696 = new TH1D("VbbHcc_both_Aplanarity__696","",50,0,1);
   VbbHcc_both_Aplanarity__696->SetBinContent(1,63192);
   VbbHcc_both_Aplanarity__696->SetBinContent(2,17937);
   VbbHcc_both_Aplanarity__696->SetBinContent(3,8536);
   VbbHcc_both_Aplanarity__696->SetBinContent(4,4638);
   VbbHcc_both_Aplanarity__696->SetBinContent(5,2880);
   VbbHcc_both_Aplanarity__696->SetBinContent(6,1834);
   VbbHcc_both_Aplanarity__696->SetBinContent(7,1179);
   VbbHcc_both_Aplanarity__696->SetBinContent(8,810);
   VbbHcc_both_Aplanarity__696->SetBinContent(9,557);
   VbbHcc_both_Aplanarity__696->SetBinContent(10,387);
   VbbHcc_both_Aplanarity__696->SetBinContent(11,272);
   VbbHcc_both_Aplanarity__696->SetBinContent(12,168);
   VbbHcc_both_Aplanarity__696->SetBinContent(13,101);
   VbbHcc_both_Aplanarity__696->SetBinContent(14,72);
   VbbHcc_both_Aplanarity__696->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__696->SetBinContent(16,33);
   VbbHcc_both_Aplanarity__696->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__696->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__696->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__696->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__696->SetEntries(102681);
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__696->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__696->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__696->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__696->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__696->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__696->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__696->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__696->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__696->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__696->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__696->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
