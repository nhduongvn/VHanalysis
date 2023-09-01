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
   Sphericity_algo_16->Range(-0.2,-13469.5,1.133333,121225.5);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__576 = new TH1D("VbbHcc_algo_Sphericity__576","",25,0,1);
   VbbHcc_algo_Sphericity__576->SetBinContent(1,99226.31);
   VbbHcc_algo_Sphericity__576->SetBinContent(2,102624.8);
   VbbHcc_algo_Sphericity__576->SetBinContent(3,53822.94);
   VbbHcc_algo_Sphericity__576->SetBinContent(4,29060.36);
   VbbHcc_algo_Sphericity__576->SetBinContent(5,15416.07);
   VbbHcc_algo_Sphericity__576->SetBinContent(6,7412.915);
   VbbHcc_algo_Sphericity__576->SetBinContent(7,3228.86);
   VbbHcc_algo_Sphericity__576->SetBinContent(8,1421.552);
   VbbHcc_algo_Sphericity__576->SetBinContent(9,702.2672);
   VbbHcc_algo_Sphericity__576->SetBinContent(10,371.4132);
   VbbHcc_algo_Sphericity__576->SetBinContent(11,210.2644);
   VbbHcc_algo_Sphericity__576->SetBinContent(12,129.524);
   VbbHcc_algo_Sphericity__576->SetBinContent(13,75.04131);
   VbbHcc_algo_Sphericity__576->SetBinContent(14,54.10651);
   VbbHcc_algo_Sphericity__576->SetBinContent(15,34.74771);
   VbbHcc_algo_Sphericity__576->SetBinContent(16,23.00878);
   VbbHcc_algo_Sphericity__576->SetBinContent(17,15.18887);
   VbbHcc_algo_Sphericity__576->SetBinContent(18,9.490145);
   VbbHcc_algo_Sphericity__576->SetBinContent(19,6.420526);
   VbbHcc_algo_Sphericity__576->SetBinContent(20,2.277302);
   VbbHcc_algo_Sphericity__576->SetBinContent(21,0.980202);
   VbbHcc_algo_Sphericity__576->SetBinContent(22,0.2448958);
   VbbHcc_algo_Sphericity__576->SetBinError(1,71.84105);
   VbbHcc_algo_Sphericity__576->SetBinError(2,72.89112);
   VbbHcc_algo_Sphericity__576->SetBinError(3,52.80063);
   VbbHcc_algo_Sphericity__576->SetBinError(4,38.89534);
   VbbHcc_algo_Sphericity__576->SetBinError(5,28.36777);
   VbbHcc_algo_Sphericity__576->SetBinError(6,19.57906);
   VbbHcc_algo_Sphericity__576->SetBinError(7,12.77496);
   VbbHcc_algo_Sphericity__576->SetBinError(8,8.343716);
   VbbHcc_algo_Sphericity__576->SetBinError(9,5.807989);
   VbbHcc_algo_Sphericity__576->SetBinError(10,4.183073);
   VbbHcc_algo_Sphericity__576->SetBinError(11,3.118911);
   VbbHcc_algo_Sphericity__576->SetBinError(12,2.444321);
   VbbHcc_algo_Sphericity__576->SetBinError(13,1.849765);
   VbbHcc_algo_Sphericity__576->SetBinError(14,1.552247);
   VbbHcc_algo_Sphericity__576->SetBinError(15,1.242058);
   VbbHcc_algo_Sphericity__576->SetBinError(16,1.013816);
   VbbHcc_algo_Sphericity__576->SetBinError(17,0.8206262);
   VbbHcc_algo_Sphericity__576->SetBinError(18,0.6450362);
   VbbHcc_algo_Sphericity__576->SetBinError(19,0.5388214);
   VbbHcc_algo_Sphericity__576->SetBinError(20,0.3296711);
   VbbHcc_algo_Sphericity__576->SetBinError(21,0.207957);
   VbbHcc_algo_Sphericity__576->SetBinError(22,0.1021292);
   VbbHcc_algo_Sphericity__576->SetEntries(6564600);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity__576->SetFillColor(ci);
   VbbHcc_algo_Sphericity__576->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__576->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__576->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__576->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__576->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__576->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__576->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__576->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__576->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__576->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__576->Draw("HIST");
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
