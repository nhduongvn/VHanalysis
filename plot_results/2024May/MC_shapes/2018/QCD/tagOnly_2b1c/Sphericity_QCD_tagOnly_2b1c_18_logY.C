#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_2b1c_18/Sphericity_QCD_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_2b1c_18 = new TCanvas("Sphericity_QCD_tagOnly_2b1c_18", "Sphericity_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_2b1c_18->Range(-0.2,0.8476992,1.133333,7.403274);
   Sphericity_QCD_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_QCD_tagOnly_2b1c_18->SetLogy();
   Sphericity_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3309 = new TH1D("VH_tagOnly_2b1c_Sphericity__3309","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(1,2952350);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(2,2381105);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(3,1303824);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(4,824119.1);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(5,411104.1);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(6,199702.3);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(7,92960.92);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(8,74373.17);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(9,34526.37);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(10,18569.13);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(11,15993.66);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(12,11340.27);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(13,7617.539);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(14,5838.674);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(15,4459.434);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(16,5972.698);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(17,3016.825);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(18,1470.297);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(19,1553.585);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(20,377.6147);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(21,109.0239);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinContent(22,63.72161);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(1,53155);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(2,39231.32);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(3,24951.14);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(4,27088.44);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(5,18346.88);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(6,9074.48);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(7,12948.72);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(8,23168.48);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(9,4277.545);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(10,1784.835);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(11,2419.389);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(12,1527.039);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(13,1229.355);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(14,989.4626);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(15,657.627);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(16,3590.782);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(17,975.663);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(18,295.9408);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(19,936.0715);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(20,138.5732);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(21,76.7334);
   VH_tagOnly_2b1c_Sphericity__3309->SetBinError(22,63.34893);
   VH_tagOnly_2b1c_Sphericity__3309->SetEntries(258336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3309->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3309->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3309->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3309->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3309->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3309->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3309->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3309->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_2b1c_18->Modified();
   Sphericity_QCD_tagOnly_2b1c_18->cd();
   Sphericity_QCD_tagOnly_2b1c_18->SetSelected(Sphericity_QCD_tagOnly_2b1c_18);
}
