#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC()
{
//=========Macro generated from canvas: Z_jetmass_noJEC/Z_jetmass_noJEC
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC = new TCanvas("Z_jetmass_noJEC", "Z_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC->SetHighLightColor(2);
   Z_jetmass_noJEC->Range(-60,-5.400815,340,48.60733);
   Z_jetmass_noJEC->SetFillColor(0);
   Z_jetmass_noJEC->SetBorderMode(0);
   Z_jetmass_noJEC->SetBorderSize(2);
   Z_jetmass_noJEC->SetLeftMargin(0.15);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_noJEC__23 = new TH1D("VH_tagFirst_Z_jetmass_noJEC__23","",150,0,300);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(3,2.64357);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(4,12.47616);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(5,15.82284);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(6,41.14906);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(7,11.5307);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(8,25.63326);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(9,14.97302);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(10,18.08471);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(11,9.59503);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(12,3.907049);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(13,2.412041);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(14,4.856784);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(15,3.553085);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(23,2.808368);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinContent(29,0.9865878);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(3,1.897636);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(4,4.335572);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(5,4.891469);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(6,8.199045);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(7,4.113435);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(8,5.938489);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(9,4.383339);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(10,5.679638);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(11,4.626766);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(12,2.25955);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(13,1.822015);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(14,2.851179);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(15,2.703424);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(23,2.085016);
   VH_tagFirst_Z_jetmass_noJEC__23->SetBinError(29,0.9865878);
   VH_tagFirst_Z_jetmass_noJEC__23->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Z_jetmass_noJEC__23->SetFillColor(ci);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetRange(1,300);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__23->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__23->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__23->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC->Modified();
   Z_jetmass_noJEC->cd();
   Z_jetmass_noJEC->SetSelected(Z_jetmass_noJEC);
}
