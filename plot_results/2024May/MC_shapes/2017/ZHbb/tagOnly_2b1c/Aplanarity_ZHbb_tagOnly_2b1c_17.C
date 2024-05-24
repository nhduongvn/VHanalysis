#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagOnly_2b1c_17/Aplanarity_ZHbb_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagOnly_2b1c_17 = new TCanvas("Aplanarity_ZHbb_tagOnly_2b1c_17", "Aplanarity_ZHbb_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHbb_tagOnly_2b1c_17->Range(-0.2,-31.15359,1.133333,280.3823);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3335 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3335","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(1,237.3606);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(2,24.20872);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(3,5.466653);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(4,1.715404);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(5,0.7443098);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(6,0.306047);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(7,0.2051697);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(8,0.1033176);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(9,0.06602034);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(10,0.04939564);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(11,0.01530052);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(12,0.01867038);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(13,0.0158654);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(14,0.003787037);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(15,0.000348123);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(16,0.0005089974);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(17,0.0006222481);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(18,0.0003440587);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(19,0.006786688);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinContent(21,0.0003700873);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(1,0.5794866);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(2,0.17594);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(3,0.08543919);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(4,0.04732414);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(5,0.03101538);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(6,0.01946536);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(7,0.01665626);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(8,0.01038765);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(9,0.008680791);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(10,0.01128637);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(11,0.00302647);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(12,0.0039126);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(13,0.005140419);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(14,0.001117919);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(15,0.000348123);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(16,0.0003700688);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(17,0.0004431232);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(18,0.0003440587);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(19,0.003667991);
   VH_tagOnly_2b1c_Aplanarity__3335->SetBinError(21,0.0003700873);
   VH_tagOnly_2b1c_Aplanarity__3335->SetEntries(459536);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3335->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3335->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3335->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3335->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3335->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3335->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3335->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3335->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagOnly_2b1c_17->Modified();
   Aplanarity_ZHbb_tagOnly_2b1c_17->cd();
   Aplanarity_ZHbb_tagOnly_2b1c_17->SetSelected(Aplanarity_ZHbb_tagOnly_2b1c_17);
}
