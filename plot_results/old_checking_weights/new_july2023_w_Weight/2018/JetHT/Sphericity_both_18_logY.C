void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 10:43:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.9687781,1.133333,5.708703);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__691 = new TH1D("VbbHcc_both_Sphericity__691","",25,0,1);
   VbbHcc_both_Sphericity__691->SetBinContent(1,56429);
   VbbHcc_both_Sphericity__691->SetBinContent(2,57997);
   VbbHcc_both_Sphericity__691->SetBinContent(3,43145);
   VbbHcc_both_Sphericity__691->SetBinContent(4,32689);
   VbbHcc_both_Sphericity__691->SetBinContent(5,25553);
   VbbHcc_both_Sphericity__691->SetBinContent(6,20237);
   VbbHcc_both_Sphericity__691->SetBinContent(7,16613);
   VbbHcc_both_Sphericity__691->SetBinContent(8,13698);
   VbbHcc_both_Sphericity__691->SetBinContent(9,11246);
   VbbHcc_both_Sphericity__691->SetBinContent(10,9578);
   VbbHcc_both_Sphericity__691->SetBinContent(11,8104);
   VbbHcc_both_Sphericity__691->SetBinContent(12,6876);
   VbbHcc_both_Sphericity__691->SetBinContent(13,5929);
   VbbHcc_both_Sphericity__691->SetBinContent(14,4735);
   VbbHcc_both_Sphericity__691->SetBinContent(15,4031);
   VbbHcc_both_Sphericity__691->SetBinContent(16,3039);
   VbbHcc_both_Sphericity__691->SetBinContent(17,2489);
   VbbHcc_both_Sphericity__691->SetBinContent(18,1774);
   VbbHcc_both_Sphericity__691->SetBinContent(19,965);
   VbbHcc_both_Sphericity__691->SetBinContent(20,405);
   VbbHcc_both_Sphericity__691->SetBinContent(21,165);
   VbbHcc_both_Sphericity__691->SetBinContent(22,49);
   VbbHcc_both_Sphericity__691->SetBinContent(23,17);
   VbbHcc_both_Sphericity__691->SetBinContent(24,3);
   VbbHcc_both_Sphericity__691->SetBinContent(25,1);
   VbbHcc_both_Sphericity__691->SetEntries(325767);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__691->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
