void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:21:50 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.127357,1.133333,1.654646);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,12.55731);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,12.3871);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,8.476915);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,8.670729);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,7.414238);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.314689);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.360815);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.885861);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.321122);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,3.019588);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.719286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,0.9361076);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6757969);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.665923);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2830566);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.403099);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3253838);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.4075756);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.4092674);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,2.045745);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.998919);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.708248);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.670297);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.532178);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.085941);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.232131);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.09327);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8897017);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,1.017108);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.7765971);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.5545949);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4863404);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.4185722);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2830566);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.650022);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.3253838);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.4075756);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.4092674);
   VbbHcc_both_Sphericity_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
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
