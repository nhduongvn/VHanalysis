#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-527.1808,1.133333,4744.627);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__577 = new TH1D("VbbHcc_algo_Sphericity__577","",25,0,1);
   VbbHcc_algo_Sphericity__577->SetBinContent(1,4016.615);
   VbbHcc_algo_Sphericity__577->SetBinContent(2,3931.692);
   VbbHcc_algo_Sphericity__577->SetBinContent(3,2180.19);
   VbbHcc_algo_Sphericity__577->SetBinContent(4,1283.213);
   VbbHcc_algo_Sphericity__577->SetBinContent(5,675.9721);
   VbbHcc_algo_Sphericity__577->SetBinContent(6,283.803);
   VbbHcc_algo_Sphericity__577->SetBinContent(7,83.08144);
   VbbHcc_algo_Sphericity__577->SetBinContent(8,34.84994);
   VbbHcc_algo_Sphericity__577->SetBinContent(9,7.61588);
   VbbHcc_algo_Sphericity__577->SetBinContent(10,5.154823);
   VbbHcc_algo_Sphericity__577->SetBinContent(11,2.216747);
   VbbHcc_algo_Sphericity__577->SetBinContent(12,2.859015);
   VbbHcc_algo_Sphericity__577->SetBinContent(13,1.713865);
   VbbHcc_algo_Sphericity__577->SetBinContent(14,0.6542842);
   VbbHcc_algo_Sphericity__577->SetBinContent(15,3.077026);
   VbbHcc_algo_Sphericity__577->SetBinContent(16,0.4611556);
   VbbHcc_algo_Sphericity__577->SetBinContent(17,0.2295021);
   VbbHcc_algo_Sphericity__577->SetBinContent(18,0.3914957);
   VbbHcc_algo_Sphericity__577->SetBinContent(19,0.08026608);
   VbbHcc_algo_Sphericity__577->SetBinError(1,46.29947);
   VbbHcc_algo_Sphericity__577->SetBinError(2,52.02792);
   VbbHcc_algo_Sphericity__577->SetBinError(3,36.36053);
   VbbHcc_algo_Sphericity__577->SetBinError(4,27.12599);
   VbbHcc_algo_Sphericity__577->SetBinError(5,19.25376);
   VbbHcc_algo_Sphericity__577->SetBinError(6,11.41564);
   VbbHcc_algo_Sphericity__577->SetBinError(7,5.225187);
   VbbHcc_algo_Sphericity__577->SetBinError(8,4.765884);
   VbbHcc_algo_Sphericity__577->SetBinError(9,1.04796);
   VbbHcc_algo_Sphericity__577->SetBinError(10,1.000867);
   VbbHcc_algo_Sphericity__577->SetBinError(11,0.4562739);
   VbbHcc_algo_Sphericity__577->SetBinError(12,0.7033327);
   VbbHcc_algo_Sphericity__577->SetBinError(13,0.4871847);
   VbbHcc_algo_Sphericity__577->SetBinError(14,0.2489687);
   VbbHcc_algo_Sphericity__577->SetBinError(15,1.990714);
   VbbHcc_algo_Sphericity__577->SetBinError(16,0.1963303);
   VbbHcc_algo_Sphericity__577->SetBinError(17,0.1013787);
   VbbHcc_algo_Sphericity__577->SetBinError(18,0.2199053);
   VbbHcc_algo_Sphericity__577->SetBinError(19,0.05901445);
   VbbHcc_algo_Sphericity__577->SetEntries(93738);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity__577->SetFillColor(ci);
   VbbHcc_algo_Sphericity__577->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__577->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__577->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__577->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__577->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__577->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__577->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__577->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__577->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__577->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__577->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
