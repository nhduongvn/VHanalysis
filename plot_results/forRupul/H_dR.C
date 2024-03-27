#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR()
{
//=========Macro generated from canvas: H_dR/H_dR
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *H_dR = new TCanvas("H_dR", "H_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR->SetHighLightColor(2);
   H_dR->Range(-1.24,-19.41885,7.026667,174.7697);
   H_dR->SetFillColor(0);
   H_dR->SetFillStyle(4000);
   H_dR->SetBorderMode(0);
   H_dR->SetBorderSize(2);
   H_dR->SetLeftMargin(0.15);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__6 = new TH1D("VH_tagFirst_H_dR__6","",30,0,6);
   VH_tagFirst_H_dR__6->SetBinContent(3,88.34322);
   VH_tagFirst_H_dR__6->SetBinContent(4,147.9532);
   VH_tagFirst_H_dR__6->SetBinContent(5,123.4993);
   VH_tagFirst_H_dR__6->SetBinContent(6,138.3035);
   VH_tagFirst_H_dR__6->SetBinContent(7,62.6998);
   VH_tagFirst_H_dR__6->SetBinContent(8,61.58274);
   VH_tagFirst_H_dR__6->SetBinContent(9,42.59074);
   VH_tagFirst_H_dR__6->SetBinContent(10,28.93406);
   VH_tagFirst_H_dR__6->SetBinContent(11,45.22026);
   VH_tagFirst_H_dR__6->SetBinContent(12,51.64356);
   VH_tagFirst_H_dR__6->SetBinContent(13,46.53783);
   VH_tagFirst_H_dR__6->SetBinContent(14,45.51405);
   VH_tagFirst_H_dR__6->SetBinContent(15,63.9966);
   VH_tagFirst_H_dR__6->SetBinContent(16,49.66865);
   VH_tagFirst_H_dR__6->SetBinContent(17,60.24705);
   VH_tagFirst_H_dR__6->SetBinContent(18,43.63306);
   VH_tagFirst_H_dR__6->SetBinContent(19,42.18277);
   VH_tagFirst_H_dR__6->SetBinContent(20,41.61045);
   VH_tagFirst_H_dR__6->SetBinContent(21,28.85101);
   VH_tagFirst_H_dR__6->SetBinContent(22,20.78545);
   VH_tagFirst_H_dR__6->SetBinContent(23,11.7033);
   VH_tagFirst_H_dR__6->SetBinContent(24,9.946792);
   VH_tagFirst_H_dR__6->SetBinContent(25,12.38076);
   VH_tagFirst_H_dR__6->SetBinContent(26,3.434135);
   VH_tagFirst_H_dR__6->SetBinContent(27,8.751287);
   VH_tagFirst_H_dR__6->SetBinContent(28,14.93126);
   VH_tagFirst_H_dR__6->SetBinContent(29,10.01679);
   VH_tagFirst_H_dR__6->SetBinContent(30,8.372054);
   VH_tagFirst_H_dR__6->SetBinContent(31,7.954957);
   VH_tagFirst_H_dR__6->SetBinError(3,11.2103);
   VH_tagFirst_H_dR__6->SetBinError(4,18.85262);
   VH_tagFirst_H_dR__6->SetBinError(5,13.45347);
   VH_tagFirst_H_dR__6->SetBinError(6,16.73811);
   VH_tagFirst_H_dR__6->SetBinError(7,9.654119);
   VH_tagFirst_H_dR__6->SetBinError(8,11.99137);
   VH_tagFirst_H_dR__6->SetBinError(9,8.562017);
   VH_tagFirst_H_dR__6->SetBinError(10,6.982986);
   VH_tagFirst_H_dR__6->SetBinError(11,9.672291);
   VH_tagFirst_H_dR__6->SetBinError(12,13.0215);
   VH_tagFirst_H_dR__6->SetBinError(13,9.002953);
   VH_tagFirst_H_dR__6->SetBinError(14,8.568804);
   VH_tagFirst_H_dR__6->SetBinError(15,9.723613);
   VH_tagFirst_H_dR__6->SetBinError(16,8.659673);
   VH_tagFirst_H_dR__6->SetBinError(17,9.917722);
   VH_tagFirst_H_dR__6->SetBinError(18,8.694305);
   VH_tagFirst_H_dR__6->SetBinError(19,8.624048);
   VH_tagFirst_H_dR__6->SetBinError(20,11.20655);
   VH_tagFirst_H_dR__6->SetBinError(21,6.814505);
   VH_tagFirst_H_dR__6->SetBinError(22,6.28903);
   VH_tagFirst_H_dR__6->SetBinError(23,3.795787);
   VH_tagFirst_H_dR__6->SetBinError(24,3.910955);
   VH_tagFirst_H_dR__6->SetBinError(25,3.970857);
   VH_tagFirst_H_dR__6->SetBinError(26,1.99006);
   VH_tagFirst_H_dR__6->SetBinError(27,3.37096);
   VH_tagFirst_H_dR__6->SetBinError(28,4.305916);
   VH_tagFirst_H_dR__6->SetBinError(29,3.916136);
   VH_tagFirst_H_dR__6->SetBinError(30,3.188817);
   VH_tagFirst_H_dR__6->SetBinError(31,3.454168);
   VH_tagFirst_H_dR__6->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__6->SetLineColor(ci);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__6->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR->Modified();
   H_dR->cd();
   H_dR->SetSelected(H_dR);
}
