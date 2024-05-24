#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_2b1c_16/Sphericity_WZ_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_2b1c_16 = new TCanvas("Sphericity_WZ_tagOnly_2b1c_16", "Sphericity_WZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_2b1c_16->Range(-0.2,-32.89465,1.133333,296.0518);
   Sphericity_WZ_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_WZ_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_WZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3325 = new TH1D("VH_tagOnly_2b1c_Sphericity__3325","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(1,250.6259);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(2,212.3179);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(3,120.9927);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(4,70.63606);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(5,42.88023);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(6,22.79272);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(7,8.626837);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(8,4.622032);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(9,1.941647);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(10,2.273464);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(11,1.277067);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(12,0.7592413);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(13,1.003148);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(14,0.1351943);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(15,0.3160288);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(16,0.1722109);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(17,0.5406952);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(18,0.08355698);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(19,0.0915609);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinContent(20,0.2147203);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(1,4.830225);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(2,4.396768);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(3,3.331541);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(4,2.552361);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(5,1.997051);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(6,1.461209);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(7,0.9075943);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(8,0.672199);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(9,0.4237846);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(10,0.4805331);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(11,0.3617478);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(12,0.2728245);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(13,0.3192883);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(14,0.09559681);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(15,0.1795563);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(16,0.1232674);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(17,0.2476144);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(18,0.08355698);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(19,0.0915609);
   VH_tagOnly_2b1c_Sphericity__3325->SetBinError(20,0.1564576);
   VH_tagOnly_2b1c_Sphericity__3325->SetEntries(8370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3325->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3325->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3325->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3325->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3325->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3325->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3325->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3325->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_2b1c_16->Modified();
   Sphericity_WZ_tagOnly_2b1c_16->cd();
   Sphericity_WZ_tagOnly_2b1c_16->SetSelected(Sphericity_WZ_tagOnly_2b1c_16);
}
