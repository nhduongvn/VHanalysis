#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_18/Sphericity_QCD_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_18 = new TCanvas("Sphericity_QCD_tagOnly_18", "Sphericity_QCD_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_18->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_18->Range(-0.2,-120685.1,1.133333,1086165);
   Sphericity_QCD_tagOnly_18->SetFillColor(0);
   Sphericity_QCD_tagOnly_18->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_18->SetBorderMode(0);
   Sphericity_QCD_tagOnly_18->SetBorderSize(2);
   Sphericity_QCD_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1149 = new TH1D("VH_tagOnly_Sphericity__1149","",25,0,1);
   VH_tagOnly_Sphericity__1149->SetBinContent(1,919505.1);
   VH_tagOnly_Sphericity__1149->SetBinContent(2,684995.8);
   VH_tagOnly_Sphericity__1149->SetBinContent(3,374073.2);
   VH_tagOnly_Sphericity__1149->SetBinContent(4,275988.6);
   VH_tagOnly_Sphericity__1149->SetBinContent(5,126812.8);
   VH_tagOnly_Sphericity__1149->SetBinContent(6,67041.87);
   VH_tagOnly_Sphericity__1149->SetBinContent(7,25858.91);
   VH_tagOnly_Sphericity__1149->SetBinContent(8,19742.31);
   VH_tagOnly_Sphericity__1149->SetBinContent(9,13635.65);
   VH_tagOnly_Sphericity__1149->SetBinContent(10,8653.361);
   VH_tagOnly_Sphericity__1149->SetBinContent(11,9112.15);
   VH_tagOnly_Sphericity__1149->SetBinContent(12,4474.211);
   VH_tagOnly_Sphericity__1149->SetBinContent(13,2516.074);
   VH_tagOnly_Sphericity__1149->SetBinContent(14,3344.489);
   VH_tagOnly_Sphericity__1149->SetBinContent(15,1784.365);
   VH_tagOnly_Sphericity__1149->SetBinContent(16,4386.838);
   VH_tagOnly_Sphericity__1149->SetBinContent(17,615.0836);
   VH_tagOnly_Sphericity__1149->SetBinContent(18,723.6691);
   VH_tagOnly_Sphericity__1149->SetBinContent(19,341.063);
   VH_tagOnly_Sphericity__1149->SetBinContent(20,38.39785);
   VH_tagOnly_Sphericity__1149->SetBinContent(21,54.67183);
   VH_tagOnly_Sphericity__1149->SetBinError(1,29339.79);
   VH_tagOnly_Sphericity__1149->SetBinError(2,18437.8);
   VH_tagOnly_Sphericity__1149->SetBinError(3,12938.8);
   VH_tagOnly_Sphericity__1149->SetBinError(4,21877.79);
   VH_tagOnly_Sphericity__1149->SetBinError(5,8090.103);
   VH_tagOnly_Sphericity__1149->SetBinError(6,5211.101);
   VH_tagOnly_Sphericity__1149->SetBinError(7,2041.731);
   VH_tagOnly_Sphericity__1149->SetBinError(8,2589.36);
   VH_tagOnly_Sphericity__1149->SetBinError(9,2362.773);
   VH_tagOnly_Sphericity__1149->SetBinError(10,1177.247);
   VH_tagOnly_Sphericity__1149->SetBinError(11,2224.396);
   VH_tagOnly_Sphericity__1149->SetBinError(12,906.2269);
   VH_tagOnly_Sphericity__1149->SetBinError(13,294.9989);
   VH_tagOnly_Sphericity__1149->SetBinError(14,916.9314);
   VH_tagOnly_Sphericity__1149->SetBinError(15,311.9849);
   VH_tagOnly_Sphericity__1149->SetBinError(16,3578.697);
   VH_tagOnly_Sphericity__1149->SetBinError(17,109.6332);
   VH_tagOnly_Sphericity__1149->SetBinError(18,247.062);
   VH_tagOnly_Sphericity__1149->SetBinError(19,110.9301);
   VH_tagOnly_Sphericity__1149->SetBinError(20,19.37619);
   VH_tagOnly_Sphericity__1149->SetBinError(21,54.67183);
   VH_tagOnly_Sphericity__1149->SetEntries(92465);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1149->SetLineColor(ci);
   VH_tagOnly_Sphericity__1149->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1149->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1149->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1149->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1149->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1149->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1149->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1149->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1149->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1149->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_18->Modified();
   Sphericity_QCD_tagOnly_18->cd();
   Sphericity_QCD_tagOnly_18->SetSelected(Sphericity_QCD_tagOnly_18);
}
