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
   Sphericity_algo_16->Range(-0.2,-290.9938,1.133333,2618.944);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__578 = new TH1D("VbbHcc_algo_Sphericity__578","",25,0,1);
   VbbHcc_algo_Sphericity__578->SetBinContent(1,2217.095);
   VbbHcc_algo_Sphericity__578->SetBinContent(2,1916.048);
   VbbHcc_algo_Sphericity__578->SetBinContent(3,1129.877);
   VbbHcc_algo_Sphericity__578->SetBinContent(4,656.3301);
   VbbHcc_algo_Sphericity__578->SetBinContent(5,294.0362);
   VbbHcc_algo_Sphericity__578->SetBinContent(6,141.8344);
   VbbHcc_algo_Sphericity__578->SetBinContent(7,50.6205);
   VbbHcc_algo_Sphericity__578->SetBinContent(8,9.277303);
   VbbHcc_algo_Sphericity__578->SetBinContent(9,8.723654);
   VbbHcc_algo_Sphericity__578->SetBinContent(10,3.290445);
   VbbHcc_algo_Sphericity__578->SetBinContent(11,2.443806);
   VbbHcc_algo_Sphericity__578->SetBinContent(12,6.904859);
   VbbHcc_algo_Sphericity__578->SetBinContent(13,0.7791165);
   VbbHcc_algo_Sphericity__578->SetBinContent(14,0.7778158);
   VbbHcc_algo_Sphericity__578->SetBinContent(15,0.4043937);
   VbbHcc_algo_Sphericity__578->SetBinContent(16,0.09483423);
   VbbHcc_algo_Sphericity__578->SetBinContent(17,0.02947167);
   VbbHcc_algo_Sphericity__578->SetBinContent(18,7.545029e-06);
   VbbHcc_algo_Sphericity__578->SetBinContent(19,0.07221088);
   VbbHcc_algo_Sphericity__578->SetBinError(1,50.42172);
   VbbHcc_algo_Sphericity__578->SetBinError(2,50.18223);
   VbbHcc_algo_Sphericity__578->SetBinError(3,38.30784);
   VbbHcc_algo_Sphericity__578->SetBinError(4,27.67009);
   VbbHcc_algo_Sphericity__578->SetBinError(5,14.22833);
   VbbHcc_algo_Sphericity__578->SetBinError(6,9.792228);
   VbbHcc_algo_Sphericity__578->SetBinError(7,7.962826);
   VbbHcc_algo_Sphericity__578->SetBinError(8,1.312847);
   VbbHcc_algo_Sphericity__578->SetBinError(9,4.916523);
   VbbHcc_algo_Sphericity__578->SetBinError(10,0.8390471);
   VbbHcc_algo_Sphericity__578->SetBinError(11,1.135931);
   VbbHcc_algo_Sphericity__578->SetBinError(12,5.059392);
   VbbHcc_algo_Sphericity__578->SetBinError(13,0.4468611);
   VbbHcc_algo_Sphericity__578->SetBinError(14,0.4377944);
   VbbHcc_algo_Sphericity__578->SetBinError(15,0.1998357);
   VbbHcc_algo_Sphericity__578->SetBinError(16,0.0563909);
   VbbHcc_algo_Sphericity__578->SetBinError(17,0.0243899);
   VbbHcc_algo_Sphericity__578->SetBinError(18,7.545029e-06);
   VbbHcc_algo_Sphericity__578->SetBinError(19,0.07221088);
   VbbHcc_algo_Sphericity__578->SetEntries(71880);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity__578->SetFillColor(ci);
   VbbHcc_algo_Sphericity__578->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__578->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__578->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__578->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__578->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__578->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__578->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__578->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__578->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__578->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__578->Draw("HIST");
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
