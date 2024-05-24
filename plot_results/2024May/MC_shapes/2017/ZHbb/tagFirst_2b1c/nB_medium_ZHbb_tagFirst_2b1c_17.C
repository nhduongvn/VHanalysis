#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHbb_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_ZHbb_tagFirst_2b1c_17/nB_medium_ZHbb_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHbb_tagFirst_2b1c_17 = new TCanvas("nB_medium_ZHbb_tagFirst_2b1c_17", "nB_medium_ZHbb_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetHighLightColor(2);
   nB_medium_ZHbb_tagFirst_2b1c_17->Range(-2.5,-810.9522,10.83333,7298.569);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFillColor(0);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFillStyle(4000);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetBorderMode(0);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetBorderSize(2);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetLeftMargin(0.15);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6785 = new TH1D("Jets_cut_nB_medium__6785","",10,-0.5,9.5);
   Jets_cut_nB_medium__6785->SetBinContent(1,5191.647);
   Jets_cut_nB_medium__6785->SetBinContent(2,6178.683);
   Jets_cut_nB_medium__6785->SetBinContent(3,2682.689);
   Jets_cut_nB_medium__6785->SetBinContent(4,503.5618);
   Jets_cut_nB_medium__6785->SetBinContent(5,88.98497);
   Jets_cut_nB_medium__6785->SetBinContent(6,2.507364);
   Jets_cut_nB_medium__6785->SetBinContent(7,0.136759);
   Jets_cut_nB_medium__6785->SetBinContent(8,0.001559218);
   Jets_cut_nB_medium__6785->SetBinContent(9,0.0028367);
   Jets_cut_nB_medium__6785->SetBinError(1,2.848802);
   Jets_cut_nB_medium__6785->SetBinError(2,3.010778);
   Jets_cut_nB_medium__6785->SetBinError(3,2.005357);
   Jets_cut_nB_medium__6785->SetBinError(4,0.9218922);
   Jets_cut_nB_medium__6785->SetBinError(5,0.4245387);
   Jets_cut_nB_medium__6785->SetBinError(6,0.08090062);
   Jets_cut_nB_medium__6785->SetBinError(7,0.02348139);
   Jets_cut_nB_medium__6785->SetBinError(8,0.0011989);
   Jets_cut_nB_medium__6785->SetBinError(9,0.002496606);
   Jets_cut_nB_medium__6785->SetEntries(1.472656e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6785->SetLineColor(ci);
   Jets_cut_nB_medium__6785->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6785->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6785->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6785->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6785->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6785->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6785->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6785->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6785->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6785->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6785->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6785->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6785->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6785->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6785->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHbb_tagFirst_2b1c_17->Modified();
   nB_medium_ZHbb_tagFirst_2b1c_17->cd();
   nB_medium_ZHbb_tagFirst_2b1c_17->SetSelected(nB_medium_ZHbb_tagFirst_2b1c_17);
}
