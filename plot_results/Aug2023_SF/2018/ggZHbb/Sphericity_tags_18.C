#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.101978,1.133333,9.917803);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__223 = new TH1D("VbbHcc_tags_Sphericity__223","",25,0,1);
   VbbHcc_tags_Sphericity__223->SetBinContent(1,8.396024);
   VbbHcc_tags_Sphericity__223->SetBinContent(2,6.841658);
   VbbHcc_tags_Sphericity__223->SetBinContent(3,3.812083);
   VbbHcc_tags_Sphericity__223->SetBinContent(4,2.501774);
   VbbHcc_tags_Sphericity__223->SetBinContent(5,1.50481);
   VbbHcc_tags_Sphericity__223->SetBinContent(6,0.8691949);
   VbbHcc_tags_Sphericity__223->SetBinContent(7,0.4565521);
   VbbHcc_tags_Sphericity__223->SetBinContent(8,0.2668929);
   VbbHcc_tags_Sphericity__223->SetBinContent(9,0.2002172);
   VbbHcc_tags_Sphericity__223->SetBinContent(10,0.1486366);
   VbbHcc_tags_Sphericity__223->SetBinContent(11,0.09919701);
   VbbHcc_tags_Sphericity__223->SetBinContent(12,0.08262673);
   VbbHcc_tags_Sphericity__223->SetBinContent(13,0.06655719);
   VbbHcc_tags_Sphericity__223->SetBinContent(14,0.05363968);
   VbbHcc_tags_Sphericity__223->SetBinContent(15,0.05078877);
   VbbHcc_tags_Sphericity__223->SetBinContent(16,0.03044725);
   VbbHcc_tags_Sphericity__223->SetBinContent(17,0.0225411);
   VbbHcc_tags_Sphericity__223->SetBinContent(18,0.02084323);
   VbbHcc_tags_Sphericity__223->SetBinContent(19,0.009021507);
   VbbHcc_tags_Sphericity__223->SetBinContent(20,0.002309343);
   VbbHcc_tags_Sphericity__223->SetBinContent(21,0.00165128);
   VbbHcc_tags_Sphericity__223->SetBinContent(22,0.001236073);
   VbbHcc_tags_Sphericity__223->SetBinContent(23,0.0004398179);
   VbbHcc_tags_Sphericity__223->SetBinError(1,0.06788221);
   VbbHcc_tags_Sphericity__223->SetBinError(2,0.06044883);
   VbbHcc_tags_Sphericity__223->SetBinError(3,0.04528247);
   VbbHcc_tags_Sphericity__223->SetBinError(4,0.0367027);
   VbbHcc_tags_Sphericity__223->SetBinError(5,0.02853129);
   VbbHcc_tags_Sphericity__223->SetBinError(6,0.02183422);
   VbbHcc_tags_Sphericity__223->SetBinError(7,0.01585819);
   VbbHcc_tags_Sphericity__223->SetBinError(8,0.01234815);
   VbbHcc_tags_Sphericity__223->SetBinError(9,0.01061191);
   VbbHcc_tags_Sphericity__223->SetBinError(10,0.009178708);
   VbbHcc_tags_Sphericity__223->SetBinError(11,0.007478856);
   VbbHcc_tags_Sphericity__223->SetBinError(12,0.006849287);
   VbbHcc_tags_Sphericity__223->SetBinError(13,0.00618854);
   VbbHcc_tags_Sphericity__223->SetBinError(14,0.005619117);
   VbbHcc_tags_Sphericity__223->SetBinError(15,0.005396257);
   VbbHcc_tags_Sphericity__223->SetBinError(16,0.004087004);
   VbbHcc_tags_Sphericity__223->SetBinError(17,0.003516955);
   VbbHcc_tags_Sphericity__223->SetBinError(18,0.003407737);
   VbbHcc_tags_Sphericity__223->SetBinError(19,0.002253166);
   VbbHcc_tags_Sphericity__223->SetBinError(20,0.001182189);
   VbbHcc_tags_Sphericity__223->SetBinError(21,0.0009618413);
   VbbHcc_tags_Sphericity__223->SetBinError(22,0.0008994489);
   VbbHcc_tags_Sphericity__223->SetBinError(23,0.0004398179);
   VbbHcc_tags_Sphericity__223->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity__223->SetFillColor(ci);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
