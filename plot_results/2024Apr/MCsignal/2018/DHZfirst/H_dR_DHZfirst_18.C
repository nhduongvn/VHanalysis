#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_DHZfirst_18/H_dR_DHZfirst_18
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *H_dR_DHZfirst_18 = new TCanvas("H_dR_DHZfirst_18", "H_dR_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_DHZfirst_18->SetHighLightColor(2);
   H_dR_DHZfirst_18->Range(-1.24,-0.01305727,7.026667,0.1175154);
   H_dR_DHZfirst_18->SetFillColor(0);
   H_dR_DHZfirst_18->SetFillStyle(4000);
   H_dR_DHZfirst_18->SetBorderMode(0);
   H_dR_DHZfirst_18->SetBorderSize(2);
   H_dR_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__162 = new TH1D("VH_DHZfirst_H_dR__162","",30,0,6);
   VH_DHZfirst_H_dR__162->SetBinContent(3,0.03107376);
   VH_DHZfirst_H_dR__162->SetBinContent(4,0.09948395);
   VH_DHZfirst_H_dR__162->SetBinContent(5,0.09279475);
   VH_DHZfirst_H_dR__162->SetBinContent(6,0.087076);
   VH_DHZfirst_H_dR__162->SetBinContent(7,0.03637603);
   VH_DHZfirst_H_dR__162->SetBinContent(8,0.02452016);
   VH_DHZfirst_H_dR__162->SetBinContent(9,0.01840375);
   VH_DHZfirst_H_dR__162->SetBinContent(10,0.002383234);
   VH_DHZfirst_H_dR__162->SetBinContent(11,0.005666863);
   VH_DHZfirst_H_dR__162->SetBinContent(13,0.004418318);
   VH_DHZfirst_H_dR__162->SetBinContent(15,0.01107749);
   VH_DHZfirst_H_dR__162->SetBinContent(16,0.005660279);
   VH_DHZfirst_H_dR__162->SetBinContent(19,0.008811808);
   VH_DHZfirst_H_dR__162->SetBinContent(20,0.006711979);
   VH_DHZfirst_H_dR__162->SetBinContent(21,0.002162561);
   VH_DHZfirst_H_dR__162->SetBinContent(22,0.005637705);
   VH_DHZfirst_H_dR__162->SetBinContent(23,0.002094795);
   VH_DHZfirst_H_dR__162->SetBinContent(24,0.002462404);
   VH_DHZfirst_H_dR__162->SetBinContent(25,0.01080162);
   VH_DHZfirst_H_dR__162->SetBinContent(26,0.002175631);
   VH_DHZfirst_H_dR__162->SetBinContent(27,0.01218075);
   VH_DHZfirst_H_dR__162->SetBinContent(28,0.01240731);
   VH_DHZfirst_H_dR__162->SetBinContent(29,0.0101603);
   VH_DHZfirst_H_dR__162->SetBinContent(30,0.002372123);
   VH_DHZfirst_H_dR__162->SetBinContent(31,0.00239961);
   VH_DHZfirst_H_dR__162->SetBinError(3,0.01081692);
   VH_DHZfirst_H_dR__162->SetBinError(4,0.03010796);
   VH_DHZfirst_H_dR__162->SetBinError(5,0.01670403);
   VH_DHZfirst_H_dR__162->SetBinError(6,0.01596516);
   VH_DHZfirst_H_dR__162->SetBinError(7,0.009920849);
   VH_DHZfirst_H_dR__162->SetBinError(8,0.008401691);
   VH_DHZfirst_H_dR__162->SetBinError(9,0.009143758);
   VH_DHZfirst_H_dR__162->SetBinError(10,0.002383234);
   VH_DHZfirst_H_dR__162->SetBinError(11,0.004080698);
   VH_DHZfirst_H_dR__162->SetBinError(13,0.003550373);
   VH_DHZfirst_H_dR__162->SetBinError(15,0.005153977);
   VH_DHZfirst_H_dR__162->SetBinError(16,0.004032429);
   VH_DHZfirst_H_dR__162->SetBinError(19,0.005530863);
   VH_DHZfirst_H_dR__162->SetBinError(20,0.004746823);
   VH_DHZfirst_H_dR__162->SetBinError(21,0.002162561);
   VH_DHZfirst_H_dR__162->SetBinError(22,0.005637705);
   VH_DHZfirst_H_dR__162->SetBinError(23,0.002094795);
   VH_DHZfirst_H_dR__162->SetBinError(24,0.002462404);
   VH_DHZfirst_H_dR__162->SetBinError(25,0.005463929);
   VH_DHZfirst_H_dR__162->SetBinError(26,0.002175631);
   VH_DHZfirst_H_dR__162->SetBinError(27,0.005884239);
   VH_DHZfirst_H_dR__162->SetBinError(28,0.005893436);
   VH_DHZfirst_H_dR__162->SetBinError(29,0.005144825);
   VH_DHZfirst_H_dR__162->SetBinError(30,0.002372123);
   VH_DHZfirst_H_dR__162->SetBinError(31,0.00239961);
   VH_DHZfirst_H_dR__162->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__162->SetLineColor(ci);
   VH_DHZfirst_H_dR__162->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__162->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__162->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__162->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__162->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__162->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__162->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__162->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__162->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__162->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__162->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__162->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__162->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__162->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__162->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_DHZfirst_18->Modified();
   H_dR_DHZfirst_18->cd();
   H_dR_DHZfirst_18->SetSelected(H_dR_DHZfirst_18);
}
