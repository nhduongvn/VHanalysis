#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZZ_tagOnly_16_logY()
{
//=========Macro generated from canvas: Z_dR_ZZ_tagOnly_16/Z_dR_ZZ_tagOnly_16
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZZ_tagOnly_16 = new TCanvas("Z_dR_ZZ_tagOnly_16", "Z_dR_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZZ_tagOnly_16->SetHighLightColor(2);
   Z_dR_ZZ_tagOnly_16->Range(-1.2,-0.5298681,6.8,1.861069);
   Z_dR_ZZ_tagOnly_16->SetFillColor(0);
   Z_dR_ZZ_tagOnly_16->SetFillStyle(4000);
   Z_dR_ZZ_tagOnly_16->SetBorderMode(0);
   Z_dR_ZZ_tagOnly_16->SetBorderSize(2);
   Z_dR_ZZ_tagOnly_16->SetLogy();
   Z_dR_ZZ_tagOnly_16->SetLeftMargin(0.15);
   Z_dR_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_ZZ_tagOnly_16->SetFrameBorderMode(0);
   Z_dR_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__868 = new TH1D("VH_tagOnly_Z_dR__868","",30,0,6);
   VH_tagOnly_Z_dR__868->SetBinContent(3,16.27074);
   VH_tagOnly_Z_dR__868->SetBinContent(4,22.10172);
   VH_tagOnly_Z_dR__868->SetBinContent(5,20.93596);
   VH_tagOnly_Z_dR__868->SetBinContent(6,15.57783);
   VH_tagOnly_Z_dR__868->SetBinContent(7,11.45836);
   VH_tagOnly_Z_dR__868->SetBinContent(8,6.614128);
   VH_tagOnly_Z_dR__868->SetBinContent(9,5.127045);
   VH_tagOnly_Z_dR__868->SetBinContent(10,4.658322);
   VH_tagOnly_Z_dR__868->SetBinContent(11,3.862231);
   VH_tagOnly_Z_dR__868->SetBinContent(12,2.520337);
   VH_tagOnly_Z_dR__868->SetBinContent(13,3.519005);
   VH_tagOnly_Z_dR__868->SetBinContent(14,5.08965);
   VH_tagOnly_Z_dR__868->SetBinContent(15,5.770443);
   VH_tagOnly_Z_dR__868->SetBinContent(16,7.407288);
   VH_tagOnly_Z_dR__868->SetBinContent(17,6.004692);
   VH_tagOnly_Z_dR__868->SetBinContent(18,5.547094);
   VH_tagOnly_Z_dR__868->SetBinContent(19,3.29002);
   VH_tagOnly_Z_dR__868->SetBinContent(20,2.802965);
   VH_tagOnly_Z_dR__868->SetBinContent(21,2.551089);
   VH_tagOnly_Z_dR__868->SetBinContent(22,2.623355);
   VH_tagOnly_Z_dR__868->SetBinContent(23,1.577873);
   VH_tagOnly_Z_dR__868->SetBinContent(24,1.735918);
   VH_tagOnly_Z_dR__868->SetBinContent(25,1.123711);
   VH_tagOnly_Z_dR__868->SetBinContent(26,1.839805);
   VH_tagOnly_Z_dR__868->SetBinContent(27,1.893445);
   VH_tagOnly_Z_dR__868->SetBinContent(28,3.268391);
   VH_tagOnly_Z_dR__868->SetBinContent(29,1.170271);
   VH_tagOnly_Z_dR__868->SetBinContent(30,1.023895);
   VH_tagOnly_Z_dR__868->SetBinContent(31,0.2093882);
   VH_tagOnly_Z_dR__868->SetBinError(3,1.910114);
   VH_tagOnly_Z_dR__868->SetBinError(4,2.203168);
   VH_tagOnly_Z_dR__868->SetBinError(5,2.082054);
   VH_tagOnly_Z_dR__868->SetBinError(6,1.795778);
   VH_tagOnly_Z_dR__868->SetBinError(7,1.526352);
   VH_tagOnly_Z_dR__868->SetBinError(8,1.176501);
   VH_tagOnly_Z_dR__868->SetBinError(9,1.003733);
   VH_tagOnly_Z_dR__868->SetBinError(10,0.9926242);
   VH_tagOnly_Z_dR__868->SetBinError(11,0.9230799);
   VH_tagOnly_Z_dR__868->SetBinError(12,0.7355697);
   VH_tagOnly_Z_dR__868->SetBinError(13,0.8370561);
   VH_tagOnly_Z_dR__868->SetBinError(14,1.022818);
   VH_tagOnly_Z_dR__868->SetBinError(15,1.087267);
   VH_tagOnly_Z_dR__868->SetBinError(16,1.257486);
   VH_tagOnly_Z_dR__868->SetBinError(17,1.174676);
   VH_tagOnly_Z_dR__868->SetBinError(18,1.066696);
   VH_tagOnly_Z_dR__868->SetBinError(19,0.851478);
   VH_tagOnly_Z_dR__868->SetBinError(20,0.7582729);
   VH_tagOnly_Z_dR__868->SetBinError(21,0.746634);
   VH_tagOnly_Z_dR__868->SetBinError(22,0.7396678);
   VH_tagOnly_Z_dR__868->SetBinError(23,0.5817855);
   VH_tagOnly_Z_dR__868->SetBinError(24,0.5550588);
   VH_tagOnly_Z_dR__868->SetBinError(25,0.4610641);
   VH_tagOnly_Z_dR__868->SetBinError(26,0.5913921);
   VH_tagOnly_Z_dR__868->SetBinError(27,0.6040316);
   VH_tagOnly_Z_dR__868->SetBinError(28,0.8323696);
   VH_tagOnly_Z_dR__868->SetBinError(29,0.4780606);
   VH_tagOnly_Z_dR__868->SetBinError(30,0.4460602);
   VH_tagOnly_Z_dR__868->SetBinError(31,0.2093882);
   VH_tagOnly_Z_dR__868->SetEntries(834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__868->SetLineColor(ci);
   VH_tagOnly_Z_dR__868->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__868->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__868->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__868->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__868->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__868->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__868->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__868->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__868->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__868->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__868->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__868->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__868->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__868->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__868->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZZ_tagOnly_16->Modified();
   Z_dR_ZZ_tagOnly_16->cd();
   Z_dR_ZZ_tagOnly_16->SetSelected(Z_dR_ZZ_tagOnly_16);
}
