#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC()
{
//=========Macro generated from canvas: Z_jetmass_JEC/Z_jetmass_JEC
//=========  (Wed Mar 27 16:46:17 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC = new TCanvas("Z_jetmass_JEC", "Z_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC->SetHighLightColor(2);
   Z_jetmass_JEC->Range(-60,-0.07024731,340,0.6322257);
   Z_jetmass_JEC->SetFillColor(0);
   Z_jetmass_JEC->SetFillStyle(4000);
   Z_jetmass_JEC->SetBorderMode(0);
   Z_jetmass_JEC->SetBorderSize(2);
   Z_jetmass_JEC->SetLeftMargin(0.15);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_JEC__48 = new TH1D("VH_tagOnly_Z_jetmass_JEC__48","",150,0,300);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(3,0.01072307);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(4,0.08822529);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(5,0.3313308);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(6,0.5352176);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(7,0.4861386);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(8,0.3498997);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(9,0.2248792);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(10,0.1811648);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(11,0.1113176);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(12,0.09111156);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(13,0.06211508);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(14,0.05653949);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(15,0.03711116);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(16,0.0337802);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(17,0.02970352);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(18,0.01597271);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(19,0.01493798);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(20,0.006609642);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(21,0.004504299);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(22,0.008663079);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(23,0.006298755);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(26,0.00906019);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(28,0.002349545);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(31,0.002643217);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(41,0.003209975);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinContent(47,0.002611954);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(3,0.006288469);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(4,0.02355385);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(5,0.03335081);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(6,0.04793527);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(7,0.04158338);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(8,0.0405484);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(9,0.03284383);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(10,0.02525269);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(11,0.01815461);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(12,0.0180952);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(13,0.01384831);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(14,0.01565715);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(15,0.01065092);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(16,0.01163565);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(17,0.01108706);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(18,0.006111935);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(19,0.006439051);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(20,0.006609642);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(21,0.004504299);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(22,0.004538841);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(23,0.004462055);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(26,0.006739617);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(28,0.002349545);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(31,0.002643217);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(41,0.003209975);
   VH_tagOnly_Z_jetmass_JEC__48->SetBinError(47,0.002611954);
   VH_tagOnly_Z_jetmass_JEC__48->SetEntries(903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_JEC__48->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC->Modified();
   Z_jetmass_JEC->cd();
   Z_jetmass_JEC->SetSelected(Z_jetmass_JEC);
}
