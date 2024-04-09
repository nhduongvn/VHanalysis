#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_DHZfirst_17()
{
//=========Macro generated from canvas: H_dR_DHZfirst_17/H_dR_DHZfirst_17
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *H_dR_DHZfirst_17 = new TCanvas("H_dR_DHZfirst_17", "H_dR_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_DHZfirst_17->SetHighLightColor(2);
   H_dR_DHZfirst_17->Range(-1.24,-0.006443236,7.026667,0.05798912);
   H_dR_DHZfirst_17->SetFillColor(0);
   H_dR_DHZfirst_17->SetFillStyle(4000);
   H_dR_DHZfirst_17->SetBorderMode(0);
   H_dR_DHZfirst_17->SetBorderSize(2);
   H_dR_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__161 = new TH1D("VH_DHZfirst_H_dR__161","",30,0,6);
   VH_DHZfirst_H_dR__161->SetBinContent(3,0.01398484);
   VH_DHZfirst_H_dR__161->SetBinContent(4,0.02887177);
   VH_DHZfirst_H_dR__161->SetBinContent(5,0.04909132);
   VH_DHZfirst_H_dR__161->SetBinContent(6,0.04740991);
   VH_DHZfirst_H_dR__161->SetBinContent(7,0.03840472);
   VH_DHZfirst_H_dR__161->SetBinContent(8,0.01386464);
   VH_DHZfirst_H_dR__161->SetBinContent(9,0.002861308);
   VH_DHZfirst_H_dR__161->SetBinContent(10,0.001273448);
   VH_DHZfirst_H_dR__161->SetBinContent(11,0.008243874);
   VH_DHZfirst_H_dR__161->SetBinContent(12,0.003957433);
   VH_DHZfirst_H_dR__161->SetBinContent(13,0.001224989);
   VH_DHZfirst_H_dR__161->SetBinContent(15,0.00488147);
   VH_DHZfirst_H_dR__161->SetBinContent(16,0.00312529);
   VH_DHZfirst_H_dR__161->SetBinContent(17,0.005748456);
   VH_DHZfirst_H_dR__161->SetBinContent(18,0.002145032);
   VH_DHZfirst_H_dR__161->SetBinContent(19,0.001181582);
   VH_DHZfirst_H_dR__161->SetBinContent(21,0.00109231);
   VH_DHZfirst_H_dR__161->SetBinContent(22,0.0006564677);
   VH_DHZfirst_H_dR__161->SetBinContent(23,0.002323722);
   VH_DHZfirst_H_dR__161->SetBinContent(24,0.004659116);
   VH_DHZfirst_H_dR__161->SetBinContent(25,0.001956206);
   VH_DHZfirst_H_dR__161->SetBinContent(26,0.002848859);
   VH_DHZfirst_H_dR__161->SetBinContent(27,0.005106011);
   VH_DHZfirst_H_dR__161->SetBinContent(28,0.004456853);
   VH_DHZfirst_H_dR__161->SetBinContent(29,0.00437191);
   VH_DHZfirst_H_dR__161->SetBinError(3,0.004863329);
   VH_DHZfirst_H_dR__161->SetBinError(4,0.006467058);
   VH_DHZfirst_H_dR__161->SetBinError(5,0.008335269);
   VH_DHZfirst_H_dR__161->SetBinError(6,0.008430853);
   VH_DHZfirst_H_dR__161->SetBinError(7,0.007460363);
   VH_DHZfirst_H_dR__161->SetBinError(8,0.003998965);
   VH_DHZfirst_H_dR__161->SetBinError(9,0.002027857);
   VH_DHZfirst_H_dR__161->SetBinError(10,0.001273448);
   VH_DHZfirst_H_dR__161->SetBinError(11,0.004613984);
   VH_DHZfirst_H_dR__161->SetBinError(12,0.00232868);
   VH_DHZfirst_H_dR__161->SetBinError(13,0.001224989);
   VH_DHZfirst_H_dR__161->SetBinError(15,0.002913933);
   VH_DHZfirst_H_dR__161->SetBinError(16,0.002291052);
   VH_DHZfirst_H_dR__161->SetBinError(17,0.002597403);
   VH_DHZfirst_H_dR__161->SetBinError(18,0.002145032);
   VH_DHZfirst_H_dR__161->SetBinError(19,0.001181582);
   VH_DHZfirst_H_dR__161->SetBinError(21,0.00109231);
   VH_DHZfirst_H_dR__161->SetBinError(22,0.0006564677);
   VH_DHZfirst_H_dR__161->SetBinError(23,0.001655689);
   VH_DHZfirst_H_dR__161->SetBinError(24,0.002852355);
   VH_DHZfirst_H_dR__161->SetBinError(25,0.00139167);
   VH_DHZfirst_H_dR__161->SetBinError(26,0.00208522);
   VH_DHZfirst_H_dR__161->SetBinError(27,0.002806344);
   VH_DHZfirst_H_dR__161->SetBinError(28,0.002284734);
   VH_DHZfirst_H_dR__161->SetBinError(29,0.002325897);
   VH_DHZfirst_H_dR__161->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__161->SetLineColor(ci);
   VH_DHZfirst_H_dR__161->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__161->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__161->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__161->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__161->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__161->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__161->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__161->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__161->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__161->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__161->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__161->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__161->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__161->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__161->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_DHZfirst_17->Modified();
   H_dR_DHZfirst_17->cd();
   H_dR_DHZfirst_17->SetSelected(H_dR_DHZfirst_17);
}
