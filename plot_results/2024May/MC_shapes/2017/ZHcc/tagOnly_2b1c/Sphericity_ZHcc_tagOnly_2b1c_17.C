#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_2b1c_17/Sphericity_ZHcc_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:54 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_2b1c_17 = new TCanvas("Sphericity_ZHcc_tagOnly_2b1c_17", "Sphericity_ZHcc_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_2b1c_17->Range(-0.2,-0.1690495,1.133333,1.521446);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3302 = new TH1D("VH_tagOnly_2b1c_Sphericity__3302","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(1,1.287996);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(2,1.080651);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(3,0.6622563);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(4,0.3739098);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(5,0.2756643);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(6,0.1202608);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(7,0.04483808);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(8,0.02493155);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(9,0.02023829);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(10,0.02684173);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(11,0.015642);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(12,0.008301391);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(13,0.003491974);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(14,0.002810079);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(15,0.003452091);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(16,0.002029569);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(17,0.0005092818);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinContent(19,0.0005459204);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(1,0.03685733);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(2,0.03371148);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(3,0.02638731);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(4,0.01935744);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(5,0.01900877);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(6,0.01129184);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(7,0.006394138);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(8,0.004282679);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(9,0.004139426);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(10,0.006556855);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(11,0.004056033);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(12,0.002652957);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(13,0.001143865);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(14,0.001100845);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(15,0.001490003);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(16,0.001153263);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(17,0.0002960388);
   VH_tagOnly_2b1c_Sphericity__3302->SetBinError(19,0.0003189344);
   VH_tagOnly_2b1c_Sphericity__3302->SetEntries(9705);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3302->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3302->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3302->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3302->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3302->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3302->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3302->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3302->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_2b1c_17->Modified();
   Sphericity_ZHcc_tagOnly_2b1c_17->cd();
   Sphericity_ZHcc_tagOnly_2b1c_17->SetSelected(Sphericity_ZHcc_tagOnly_2b1c_17);
}
