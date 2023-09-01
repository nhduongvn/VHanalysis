#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-1.221659,340,10.99493);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC__1061 = new TH1D("VbbHcc_both_Z_jetmass_noJEC__1061","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(3,0.610888);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(4,2.988421);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(5,9.307874);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(6,7.701737);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(7,5.010765);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(8,4.216219);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(9,2.283971);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(10,1.621993);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(11,1.146531);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(12,0.7970752);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(13,0.534733);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(14,0.2889616);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(15,0.4740359);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinContent(17,0.2001095);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(3,0.3607796);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(4,0.8163643);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(5,1.437632);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(6,1.315759);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(7,1.035304);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(8,0.9763318);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(9,0.7331214);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(10,0.5943361);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(11,0.5174187);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(12,0.4051421);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(13,0.3096304);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(14,0.2889616);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(15,0.3414291);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetBinError(17,0.2001095);
   VbbHcc_both_Z_jetmass_noJEC__1061->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_noJEC__1061->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC__1061->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1061->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1061->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
