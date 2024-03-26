#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR()
{
//=========Macro generated from canvas: H_dR/H_dR
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *H_dR = new TCanvas("H_dR", "H_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR->SetHighLightColor(2);
   H_dR->Range(-1.2,-3.086115,6.8,27.77504);
   H_dR->SetFillColor(0);
   H_dR->SetBorderMode(0);
   H_dR->SetBorderSize(2);
   H_dR->SetLeftMargin(0.15);
   H_dR->SetFrameBorderMode(0);
   H_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__6 = new TH1D("VH_tagFirst_H_dR__6","",30,0,6);
   VH_tagFirst_H_dR__6->SetBinContent(3,15.31161);
   VH_tagFirst_H_dR__6->SetBinContent(4,23.51326);
   VH_tagFirst_H_dR__6->SetBinContent(5,12.49323);
   VH_tagFirst_H_dR__6->SetBinContent(6,16.664);
   VH_tagFirst_H_dR__6->SetBinContent(7,5.926972);
   VH_tagFirst_H_dR__6->SetBinContent(8,12.36542);
   VH_tagFirst_H_dR__6->SetBinContent(9,4.731948);
   VH_tagFirst_H_dR__6->SetBinContent(10,0.9548362);
   VH_tagFirst_H_dR__6->SetBinContent(11,3.333855);
   VH_tagFirst_H_dR__6->SetBinContent(12,3.640281);
   VH_tagFirst_H_dR__6->SetBinContent(13,6.131348);
   VH_tagFirst_H_dR__6->SetBinContent(14,7.363639);
   VH_tagFirst_H_dR__6->SetBinContent(15,7.474686);
   VH_tagFirst_H_dR__6->SetBinContent(16,8.79223);
   VH_tagFirst_H_dR__6->SetBinContent(17,8.342935);
   VH_tagFirst_H_dR__6->SetBinContent(18,4.464642);
   VH_tagFirst_H_dR__6->SetBinContent(19,6.128661);
   VH_tagFirst_H_dR__6->SetBinContent(20,6.783996);
   VH_tagFirst_H_dR__6->SetBinContent(21,0.7841709);
   VH_tagFirst_H_dR__6->SetBinContent(22,2.482338);
   VH_tagFirst_H_dR__6->SetBinContent(23,2.404234);
   VH_tagFirst_H_dR__6->SetBinContent(24,0.8092873);
   VH_tagFirst_H_dR__6->SetBinContent(27,3.21438);
   VH_tagFirst_H_dR__6->SetBinContent(29,1.00205);
   VH_tagFirst_H_dR__6->SetBinContent(30,2.098138);
   VH_tagFirst_H_dR__6->SetBinContent(31,3.220117);
   VH_tagFirst_H_dR__6->SetBinError(3,4.576937);
   VH_tagFirst_H_dR__6->SetBinError(4,5.953787);
   VH_tagFirst_H_dR__6->SetBinError(5,4.035089);
   VH_tagFirst_H_dR__6->SetBinError(6,4.93802);
   VH_tagFirst_H_dR__6->SetBinError(7,2.693384);
   VH_tagFirst_H_dR__6->SetBinError(8,5.421222);
   VH_tagFirst_H_dR__6->SetBinError(9,2.768386);
   VH_tagFirst_H_dR__6->SetBinError(10,0.9548362);
   VH_tagFirst_H_dR__6->SetBinError(11,1.977908);
   VH_tagFirst_H_dR__6->SetBinError(12,2.643173);
   VH_tagFirst_H_dR__6->SetBinError(13,4.142794);
   VH_tagFirst_H_dR__6->SetBinError(14,3.46968);
   VH_tagFirst_H_dR__6->SetBinError(15,3.05783);
   VH_tagFirst_H_dR__6->SetBinError(16,3.675853);
   VH_tagFirst_H_dR__6->SetBinError(17,3.308757);
   VH_tagFirst_H_dR__6->SetBinError(18,2.253304);
   VH_tagFirst_H_dR__6->SetBinError(19,2.836403);
   VH_tagFirst_H_dR__6->SetBinError(20,3.68658);
   VH_tagFirst_H_dR__6->SetBinError(21,0.7841709);
   VH_tagFirst_H_dR__6->SetBinError(22,2.482338);
   VH_tagFirst_H_dR__6->SetBinError(23,1.707836);
   VH_tagFirst_H_dR__6->SetBinError(24,0.8092873);
   VH_tagFirst_H_dR__6->SetBinError(27,2.478992);
   VH_tagFirst_H_dR__6->SetBinError(29,1.00205);
   VH_tagFirst_H_dR__6->SetBinError(30,1.486237);
   VH_tagFirst_H_dR__6->SetBinError(31,2.277195);
   VH_tagFirst_H_dR__6->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_H_dR__6->SetFillColor(ci);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__6->GetXaxis()->SetRange(1,60);
   VH_tagFirst_H_dR__6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR->Modified();
   H_dR->cd();
   H_dR->SetSelected(H_dR);
}
