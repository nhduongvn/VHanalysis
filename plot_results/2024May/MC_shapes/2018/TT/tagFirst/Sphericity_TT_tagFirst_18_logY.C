#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagFirst_18/Sphericity_TT_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagFirst_18 = new TCanvas("Sphericity_TT_tagFirst_18", "Sphericity_TT_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagFirst_18->SetHighLightColor(2);
   Sphericity_TT_tagFirst_18->Range(-0.2,-1.712508,1.133333,6.4326);
   Sphericity_TT_tagFirst_18->SetFillColor(0);
   Sphericity_TT_tagFirst_18->SetFillStyle(4000);
   Sphericity_TT_tagFirst_18->SetBorderMode(0);
   Sphericity_TT_tagFirst_18->SetBorderSize(2);
   Sphericity_TT_tagFirst_18->SetLogy();
   Sphericity_TT_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_TT_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_TT_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__438 = new TH1D("VH_tagFirst_Sphericity__438","",25,0,1);
   VH_tagFirst_Sphericity__438->SetBinContent(1,219048.4);
   VH_tagFirst_Sphericity__438->SetBinContent(2,183013.2);
   VH_tagFirst_Sphericity__438->SetBinContent(3,102342.7);
   VH_tagFirst_Sphericity__438->SetBinContent(4,59325.09);
   VH_tagFirst_Sphericity__438->SetBinContent(5,34507.82);
   VH_tagFirst_Sphericity__438->SetBinContent(6,19834.08);
   VH_tagFirst_Sphericity__438->SetBinContent(7,11610.46);
   VH_tagFirst_Sphericity__438->SetBinContent(8,7018.114);
   VH_tagFirst_Sphericity__438->SetBinContent(9,4711.209);
   VH_tagFirst_Sphericity__438->SetBinContent(10,3258.61);
   VH_tagFirst_Sphericity__438->SetBinContent(11,2317.519);
   VH_tagFirst_Sphericity__438->SetBinContent(12,1737.18);
   VH_tagFirst_Sphericity__438->SetBinContent(13,1282.999);
   VH_tagFirst_Sphericity__438->SetBinContent(14,976.7576);
   VH_tagFirst_Sphericity__438->SetBinContent(15,769.6823);
   VH_tagFirst_Sphericity__438->SetBinContent(16,588.3019);
   VH_tagFirst_Sphericity__438->SetBinContent(17,418.3837);
   VH_tagFirst_Sphericity__438->SetBinContent(18,267.8648);
   VH_tagFirst_Sphericity__438->SetBinContent(19,157.5236);
   VH_tagFirst_Sphericity__438->SetBinContent(20,66.09659);
   VH_tagFirst_Sphericity__438->SetBinContent(21,19.35481);
   VH_tagFirst_Sphericity__438->SetBinContent(22,5.641875);
   VH_tagFirst_Sphericity__438->SetBinContent(23,1.00595);
   VH_tagFirst_Sphericity__438->SetBinContent(24,0.2529489);
   VH_tagFirst_Sphericity__438->SetBinError(1,209.8576);
   VH_tagFirst_Sphericity__438->SetBinError(2,190.2723);
   VH_tagFirst_Sphericity__438->SetBinError(3,143.9793);
   VH_tagFirst_Sphericity__438->SetBinError(4,110.6942);
   VH_tagFirst_Sphericity__438->SetBinError(5,83.18663);
   VH_tagFirst_Sphericity__438->SetBinError(6,62.70968);
   VH_tagFirst_Sphericity__438->SetBinError(7,47.95967);
   VH_tagFirst_Sphericity__438->SetBinError(8,37.46215);
   VH_tagFirst_Sphericity__438->SetBinError(9,32.66132);
   VH_tagFirst_Sphericity__438->SetBinError(10,25.2367);
   VH_tagFirst_Sphericity__438->SetBinError(11,21.50818);
   VH_tagFirst_Sphericity__438->SetBinError(12,21.11034);
   VH_tagFirst_Sphericity__438->SetBinError(13,15.85185);
   VH_tagFirst_Sphericity__438->SetBinError(14,13.3251);
   VH_tagFirst_Sphericity__438->SetBinError(15,12.95977);
   VH_tagFirst_Sphericity__438->SetBinError(16,13.41062);
   VH_tagFirst_Sphericity__438->SetBinError(17,9.765294);
   VH_tagFirst_Sphericity__438->SetBinError(18,7.245437);
   VH_tagFirst_Sphericity__438->SetBinError(19,5.33487);
   VH_tagFirst_Sphericity__438->SetBinError(20,4.279867);
   VH_tagFirst_Sphericity__438->SetBinError(21,1.840545);
   VH_tagFirst_Sphericity__438->SetBinError(22,0.8495398);
   VH_tagFirst_Sphericity__438->SetBinError(23,0.5529497);
   VH_tagFirst_Sphericity__438->SetBinError(24,0.1891881);
   VH_tagFirst_Sphericity__438->SetEntries(5358098);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__438->SetLineColor(ci);
   VH_tagFirst_Sphericity__438->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__438->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__438->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__438->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__438->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__438->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__438->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__438->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__438->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__438->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__438->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__438->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__438->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__438->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__438->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagFirst_18->Modified();
   Sphericity_TT_tagFirst_18->cd();
   Sphericity_TT_tagFirst_18->SetSelected(Sphericity_TT_tagFirst_18);
}
