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
   Sphericity_algo_16->Range(-0.2,-0.01315049,1.133333,0.1183544);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__585 = new TH1D("VbbHcc_algo_Sphericity__585","",25,0,1);
   VbbHcc_algo_Sphericity__585->SetBinContent(1,0.1001942);
   VbbHcc_algo_Sphericity__585->SetBinContent(2,0.09266267);
   VbbHcc_algo_Sphericity__585->SetBinContent(3,0.05297529);
   VbbHcc_algo_Sphericity__585->SetBinContent(4,0.03491369);
   VbbHcc_algo_Sphericity__585->SetBinContent(5,0.01818775);
   VbbHcc_algo_Sphericity__585->SetBinContent(6,0.009642963);
   VbbHcc_algo_Sphericity__585->SetBinContent(7,0.003842502);
   VbbHcc_algo_Sphericity__585->SetBinContent(8,0.001094427);
   VbbHcc_algo_Sphericity__585->SetBinContent(9,0.0003416568);
   VbbHcc_algo_Sphericity__585->SetBinContent(10,0.0005551341);
   VbbHcc_algo_Sphericity__585->SetBinContent(11,0.0002063389);
   VbbHcc_algo_Sphericity__585->SetBinContent(13,0.0002149845);
   VbbHcc_algo_Sphericity__585->SetBinError(1,0.005371112);
   VbbHcc_algo_Sphericity__585->SetBinError(2,0.00512465);
   VbbHcc_algo_Sphericity__585->SetBinError(3,0.003954947);
   VbbHcc_algo_Sphericity__585->SetBinError(4,0.003159637);
   VbbHcc_algo_Sphericity__585->SetBinError(5,0.002288102);
   VbbHcc_algo_Sphericity__585->SetBinError(6,0.001642655);
   VbbHcc_algo_Sphericity__585->SetBinError(7,0.001052739);
   VbbHcc_algo_Sphericity__585->SetBinError(8,0.000552639);
   VbbHcc_algo_Sphericity__585->SetBinError(9,0.0003416568);
   VbbHcc_algo_Sphericity__585->SetBinError(10,0.0003940659);
   VbbHcc_algo_Sphericity__585->SetBinError(11,0.0002063389);
   VbbHcc_algo_Sphericity__585->SetBinError(13,0.0002149845);
   VbbHcc_algo_Sphericity__585->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity__585->SetFillColor(ci);
   VbbHcc_algo_Sphericity__585->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__585->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__585->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__585->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__585->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__585->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__585->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__585->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__585->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__585->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__585->Draw("HIST");
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
