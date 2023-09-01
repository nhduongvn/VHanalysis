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
   Sphericity_algo_16->Range(-0.2,-741.0843,1.133333,6669.759);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__575 = new TH1D("VbbHcc_algo_Sphericity__575","",25,0,1);
   VbbHcc_algo_Sphericity__575->SetBinContent(1,5646.356);
   VbbHcc_algo_Sphericity__575->SetBinContent(2,5464.038);
   VbbHcc_algo_Sphericity__575->SetBinContent(3,3051.787);
   VbbHcc_algo_Sphericity__575->SetBinContent(4,1704.073);
   VbbHcc_algo_Sphericity__575->SetBinContent(5,886.08);
   VbbHcc_algo_Sphericity__575->SetBinContent(6,416.4607);
   VbbHcc_algo_Sphericity__575->SetBinContent(7,168.032);
   VbbHcc_algo_Sphericity__575->SetBinContent(8,72.17332);
   VbbHcc_algo_Sphericity__575->SetBinContent(9,34.83793);
   VbbHcc_algo_Sphericity__575->SetBinContent(10,22.4297);
   VbbHcc_algo_Sphericity__575->SetBinContent(11,11.91756);
   VbbHcc_algo_Sphericity__575->SetBinContent(12,10.25808);
   VbbHcc_algo_Sphericity__575->SetBinContent(13,6.682963);
   VbbHcc_algo_Sphericity__575->SetBinContent(14,3.98735);
   VbbHcc_algo_Sphericity__575->SetBinContent(15,2.006677);
   VbbHcc_algo_Sphericity__575->SetBinContent(16,2.238167);
   VbbHcc_algo_Sphericity__575->SetBinContent(17,1.923351);
   VbbHcc_algo_Sphericity__575->SetBinContent(18,1.190307);
   VbbHcc_algo_Sphericity__575->SetBinContent(19,0.4858672);
   VbbHcc_algo_Sphericity__575->SetBinContent(20,0.0672036);
   VbbHcc_algo_Sphericity__575->SetBinContent(22,0.01667485);
   VbbHcc_algo_Sphericity__575->SetBinError(1,27.2636);
   VbbHcc_algo_Sphericity__575->SetBinError(2,26.4539);
   VbbHcc_algo_Sphericity__575->SetBinError(3,20.02036);
   VbbHcc_algo_Sphericity__575->SetBinError(4,15.09537);
   VbbHcc_algo_Sphericity__575->SetBinError(5,10.95252);
   VbbHcc_algo_Sphericity__575->SetBinError(6,7.4807);
   VbbHcc_algo_Sphericity__575->SetBinError(7,4.725763);
   VbbHcc_algo_Sphericity__575->SetBinError(8,2.976749);
   VbbHcc_algo_Sphericity__575->SetBinError(9,2.050631);
   VbbHcc_algo_Sphericity__575->SetBinError(10,1.736879);
   VbbHcc_algo_Sphericity__575->SetBinError(11,1.21315);
   VbbHcc_algo_Sphericity__575->SetBinError(12,1.275016);
   VbbHcc_algo_Sphericity__575->SetBinError(13,1.002069);
   VbbHcc_algo_Sphericity__575->SetBinError(14,0.6884955);
   VbbHcc_algo_Sphericity__575->SetBinError(15,0.4529632);
   VbbHcc_algo_Sphericity__575->SetBinError(16,0.5480483);
   VbbHcc_algo_Sphericity__575->SetBinError(17,0.5274357);
   VbbHcc_algo_Sphericity__575->SetBinError(18,0.5008554);
   VbbHcc_algo_Sphericity__575->SetBinError(19,0.2760773);
   VbbHcc_algo_Sphericity__575->SetBinError(20,0.05694029);
   VbbHcc_algo_Sphericity__575->SetBinError(22,0.01667485);
   VbbHcc_algo_Sphericity__575->SetEntries(350651);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity__575->SetFillColor(ci);
   VbbHcc_algo_Sphericity__575->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__575->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__575->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__575->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__575->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__575->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__575->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__575->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__575->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__575->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__575->Draw("HIST");
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
