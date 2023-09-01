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
   Sphericity_both_16->Range(-0.2,-3615.97,1.133333,32543.72);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__934 = new TH1D("VbbHcc_both_Sphericity__934","",25,0,1);
   VbbHcc_both_Sphericity__934->SetBinContent(1,22744.85);
   VbbHcc_both_Sphericity__934->SetBinContent(2,27550.24);
   VbbHcc_both_Sphericity__934->SetBinContent(3,18740.04);
   VbbHcc_both_Sphericity__934->SetBinContent(4,16924.09);
   VbbHcc_both_Sphericity__934->SetBinContent(5,11162.76);
   VbbHcc_both_Sphericity__934->SetBinContent(6,8425.487);
   VbbHcc_both_Sphericity__934->SetBinContent(7,8242.771);
   VbbHcc_both_Sphericity__934->SetBinContent(8,4778.27);
   VbbHcc_both_Sphericity__934->SetBinContent(9,3703.378);
   VbbHcc_both_Sphericity__934->SetBinContent(10,5452.456);
   VbbHcc_both_Sphericity__934->SetBinContent(11,3646.795);
   VbbHcc_both_Sphericity__934->SetBinContent(12,4238.593);
   VbbHcc_both_Sphericity__934->SetBinContent(13,2440.707);
   VbbHcc_both_Sphericity__934->SetBinContent(14,1894.545);
   VbbHcc_both_Sphericity__934->SetBinContent(15,3549.89);
   VbbHcc_both_Sphericity__934->SetBinContent(16,1189.162);
   VbbHcc_both_Sphericity__934->SetBinContent(17,866.6151);
   VbbHcc_both_Sphericity__934->SetBinContent(18,1037.392);
   VbbHcc_both_Sphericity__934->SetBinContent(19,64.83419);
   VbbHcc_both_Sphericity__934->SetBinContent(20,102.2674);
   VbbHcc_both_Sphericity__934->SetBinContent(21,22.26964);
   VbbHcc_both_Sphericity__934->SetBinContent(22,29.45479);
   VbbHcc_both_Sphericity__934->SetBinError(1,1756.884);
   VbbHcc_both_Sphericity__934->SetBinError(2,2821.043);
   VbbHcc_both_Sphericity__934->SetBinError(3,2333.481);
   VbbHcc_both_Sphericity__934->SetBinError(4,2309.572);
   VbbHcc_both_Sphericity__934->SetBinError(5,1550.602);
   VbbHcc_both_Sphericity__934->SetBinError(6,1372.53);
   VbbHcc_both_Sphericity__934->SetBinError(7,1552.726);
   VbbHcc_both_Sphericity__934->SetBinError(8,800.6919);
   VbbHcc_both_Sphericity__934->SetBinError(9,642.5333);
   VbbHcc_both_Sphericity__934->SetBinError(10,1686.307);
   VbbHcc_both_Sphericity__934->SetBinError(11,755.4095);
   VbbHcc_both_Sphericity__934->SetBinError(12,1327.229);
   VbbHcc_both_Sphericity__934->SetBinError(13,618.3308);
   VbbHcc_both_Sphericity__934->SetBinError(14,462.4061);
   VbbHcc_both_Sphericity__934->SetBinError(15,1407.379);
   VbbHcc_both_Sphericity__934->SetBinError(16,378.2301);
   VbbHcc_both_Sphericity__934->SetBinError(17,339.8294);
   VbbHcc_both_Sphericity__934->SetBinError(18,372.9027);
   VbbHcc_both_Sphericity__934->SetBinError(19,26.35057);
   VbbHcc_both_Sphericity__934->SetBinError(20,40.45177);
   VbbHcc_both_Sphericity__934->SetBinError(21,9.769671);
   VbbHcc_both_Sphericity__934->SetBinError(22,19.687);
   VbbHcc_both_Sphericity__934->SetEntries(10042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity__934->SetFillColor(ci);
   VbbHcc_both_Sphericity__934->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__934->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__934->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__934->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__934->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__934->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__934->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__934->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__934->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__934->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__934->Draw("HIST");
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
