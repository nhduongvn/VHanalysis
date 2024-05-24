#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_WW_tagFirst_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_WW_tagFirst_17/H_jetmass_JEC_WW_tagFirst_17
//=========  (Fri May 24 12:42:13 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_WW_tagFirst_17 = new TCanvas("H_jetmass_JEC_WW_tagFirst_17", "H_jetmass_JEC_WW_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_WW_tagFirst_17->SetHighLightColor(2);
   H_jetmass_JEC_WW_tagFirst_17->Range(-60,-1.637752,340,14.73976);
   H_jetmass_JEC_WW_tagFirst_17->SetFillColor(0);
   H_jetmass_JEC_WW_tagFirst_17->SetFillStyle(4000);
   H_jetmass_JEC_WW_tagFirst_17->SetBorderMode(0);
   H_jetmass_JEC_WW_tagFirst_17->SetBorderSize(2);
   H_jetmass_JEC_WW_tagFirst_17->SetLeftMargin(0.15);
   H_jetmass_JEC_WW_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagFirst_17->SetFrameBorderMode(0);
   H_jetmass_JEC_WW_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_JEC__593 = new TH1D("VH_tagFirst_H_jetmass_JEC__593","",150,0,300);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(3,0.3466615);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(4,6.860495);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(5,12.47811);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(6,7.371871);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(7,10.02582);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(8,6.258643);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(9,3.28245);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(10,3.611497);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(11,1.605994);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(12,1.505984);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(13,0.8004719);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(14,1.409822);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(15,0.557875);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(16,0.7464834);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(17,0.1901637);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(18,0.9996013);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(19,0.7878062);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(21,0.5239543);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(23,0.3745624);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(24,0.07791458);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(28,0.2776511);
   VH_tagFirst_H_jetmass_JEC__593->SetBinContent(33,0.4199524);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(3,0.3466615);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(4,1.714403);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(5,2.057819);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(6,1.794874);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(7,1.897659);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(8,1.490499);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(9,0.9333484);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(10,1.139762);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(11,0.7110837);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(12,0.7133042);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(13,0.6156067);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(14,0.6663437);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(15,0.3957202);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(16,0.4346703);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(17,0.1901637);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(18,0.9996013);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(19,0.4625601);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(21,0.3800238);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(23,0.3745624);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(24,0.07791458);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(28,0.2776511);
   VH_tagFirst_H_jetmass_JEC__593->SetBinError(33,0.4199524);
   VH_tagFirst_H_jetmass_JEC__593->SetEntries(204);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_JEC__593->SetLineColor(ci);
   VH_tagFirst_H_jetmass_JEC__593->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_H_jetmass_JEC__593->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_JEC__593->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__593->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__593->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_JEC__593->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__593->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__593->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__593->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__593->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_WW_tagFirst_17->Modified();
   H_jetmass_JEC_WW_tagFirst_17->cd();
   H_jetmass_JEC_WW_tagFirst_17->SetSelected(H_jetmass_JEC_WW_tagFirst_17);
}
