#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.9445261,1.133333,8.500734);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__941 = new TH1D("VbbHcc_both_Sphericity__941","",25,0,1);
   VbbHcc_both_Sphericity__941->SetBinContent(1,7.196389);
   VbbHcc_both_Sphericity__941->SetBinContent(2,5.262215);
   VbbHcc_both_Sphericity__941->SetBinContent(3,4.698947);
   VbbHcc_both_Sphericity__941->SetBinContent(4,4.269934);
   VbbHcc_both_Sphericity__941->SetBinContent(5,2.246564);
   VbbHcc_both_Sphericity__941->SetBinContent(6,2.922734);
   VbbHcc_both_Sphericity__941->SetBinContent(7,1.622248);
   VbbHcc_both_Sphericity__941->SetBinContent(8,2.374727);
   VbbHcc_both_Sphericity__941->SetBinContent(9,0.8433644);
   VbbHcc_both_Sphericity__941->SetBinContent(10,1.064847);
   VbbHcc_both_Sphericity__941->SetBinContent(11,0.870701);
   VbbHcc_both_Sphericity__941->SetBinContent(12,1.554164);
   VbbHcc_both_Sphericity__941->SetBinContent(13,0.6965138);
   VbbHcc_both_Sphericity__941->SetBinContent(14,0.4974876);
   VbbHcc_both_Sphericity__941->SetBinContent(16,0.4191619);
   VbbHcc_both_Sphericity__941->SetBinContent(17,0.2286065);
   VbbHcc_both_Sphericity__941->SetBinContent(18,0.2427023);
   VbbHcc_both_Sphericity__941->SetBinContent(20,0.1720102);
   VbbHcc_both_Sphericity__941->SetBinError(1,1.227045);
   VbbHcc_both_Sphericity__941->SetBinError(2,1.078593);
   VbbHcc_both_Sphericity__941->SetBinError(3,1.024874);
   VbbHcc_both_Sphericity__941->SetBinError(4,1.000169);
   VbbHcc_both_Sphericity__941->SetBinError(5,0.7165294);
   VbbHcc_both_Sphericity__941->SetBinError(6,0.8065197);
   VbbHcc_both_Sphericity__941->SetBinError(7,0.5927921);
   VbbHcc_both_Sphericity__941->SetBinError(8,0.7340435);
   VbbHcc_both_Sphericity__941->SetBinError(9,0.4254262);
   VbbHcc_both_Sphericity__941->SetBinError(10,0.4835959);
   VbbHcc_both_Sphericity__941->SetBinError(11,0.4466403);
   VbbHcc_both_Sphericity__941->SetBinError(12,0.6075287);
   VbbHcc_both_Sphericity__941->SetBinError(13,0.4042969);
   VbbHcc_both_Sphericity__941->SetBinError(14,0.3560616);
   VbbHcc_both_Sphericity__941->SetBinError(16,0.3000182);
   VbbHcc_both_Sphericity__941->SetBinError(17,0.2286065);
   VbbHcc_both_Sphericity__941->SetBinError(18,0.2427023);
   VbbHcc_both_Sphericity__941->SetBinError(20,0.1720102);
   VbbHcc_both_Sphericity__941->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity__941->SetFillColor(ci);
   VbbHcc_both_Sphericity__941->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__941->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__941->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__941->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__941->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__941->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__941->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__941->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__941->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__941->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__941->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
