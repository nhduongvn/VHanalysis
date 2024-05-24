#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_2b1c_18/Sphericity_ZHcc_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_2b1c_18 = new TCanvas("Sphericity_ZHcc_tagOnly_2b1c_18", "Sphericity_ZHcc_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_2b1c_18->Range(-0.2,-4.305178,1.133333,1.231664);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetLogy();
   Sphericity_ZHcc_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3303 = new TH1D("VH_tagOnly_2b1c_Sphericity__3303","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(1,2.514381);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(2,2.096214);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(3,1.129505);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(4,0.7900886);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(5,0.5156048);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(6,0.2584089);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(7,0.1205686);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(8,0.05782903);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(9,0.02586679);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(10,0.02181041);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(11,0.01586614);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(12,0.01724052);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(13,0.006868179);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(14,0.007550089);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(15,0.004148933);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(16,0.001834442);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(17,0.001482907);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(18,0.003331728);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(19,0.0008484987);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinContent(20,0.0003544348);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(1,0.08223727);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(2,0.07101884);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(3,0.0536059);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(4,0.04259834);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(5,0.0358064);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(6,0.02442245);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(7,0.01946666);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(8,0.01088007);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(9,0.006221129);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(10,0.005922318);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(11,0.004417744);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(12,0.006001526);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(13,0.002764714);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(14,0.003230944);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(15,0.001335458);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(16,0.001121423);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(17,0.0008647);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(18,0.002733827);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(19,0.0006053457);
   VH_tagOnly_2b1c_Sphericity__3303->SetBinError(20,0.0003544348);
   VH_tagOnly_2b1c_Sphericity__3303->SetEntries(8105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3303->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3303->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3303->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3303->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3303->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3303->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3303->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3303->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_2b1c_18->Modified();
   Sphericity_ZHcc_tagOnly_2b1c_18->cd();
   Sphericity_ZHcc_tagOnly_2b1c_18->SetSelected(Sphericity_ZHcc_tagOnly_2b1c_18);
}
