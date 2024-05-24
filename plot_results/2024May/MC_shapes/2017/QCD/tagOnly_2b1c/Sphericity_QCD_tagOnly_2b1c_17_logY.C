#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_2b1c_17/Sphericity_QCD_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_2b1c_17 = new TCanvas("Sphericity_QCD_tagOnly_2b1c_17", "Sphericity_QCD_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_2b1c_17->Range(-0.2,0.2662893,1.133333,7.17177);
   Sphericity_QCD_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_QCD_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_QCD_tagOnly_2b1c_17->SetLogy();
   Sphericity_QCD_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3308 = new TH1D("VH_tagOnly_2b1c_Sphericity__3308","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(1,1598354);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(2,1295457);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(3,715151.1);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(4,383750.4);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(5,252854.7);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(6,158114.5);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(7,43680.58);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(8,22700.33);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(9,14588.88);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(10,10428.68);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(11,6299.435);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(12,5369.507);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(13,3718.377);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(14,3832.675);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(15,4195.145);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(16,2883.286);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(17,1544.727);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(18,434.2915);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(19,627.7131);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(20,117.8993);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(21,88.13383);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinContent(22,18.10787);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(1,58313.31);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(2,36082.26);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(3,19677.74);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(4,8940.895);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(5,36343.58);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(6,41183.89);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(7,3824.158);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(8,1716.363);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(9,1210.806);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(10,1162.489);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(11,688.5798);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(12,1003.328);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(13,622.8224);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(14,1101.982);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(15,1141.563);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(16,726.2895);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(17,350.522);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(18,70.57172);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(19,227.8437);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(20,43.17921);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(21,51.25641);
   VH_tagOnly_2b1c_Sphericity__3308->SetBinError(22,9.417353);
   VH_tagOnly_2b1c_Sphericity__3308->SetEntries(278833);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3308->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3308->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3308->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3308->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3308->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3308->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3308->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3308->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_2b1c_17->Modified();
   Sphericity_QCD_tagOnly_2b1c_17->cd();
   Sphericity_QCD_tagOnly_2b1c_17->SetSelected(Sphericity_QCD_tagOnly_2b1c_17);
}
