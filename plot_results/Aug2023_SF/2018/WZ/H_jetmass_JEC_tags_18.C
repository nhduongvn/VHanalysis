#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-0.578037,340,5.202332);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__295 = new TH1D("VbbHcc_tags_H_jetmass_JEC__295","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(4,4.404091);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(5,1.448006);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(6,1.355503);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(7,0.3908613);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(8,2.495732);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(9,0.1162559);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(10,3.442601);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(12,1.745735);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(13,0.8259742);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(14,0.6214135);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(17,0.7371838);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(18,0.8776001);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(30,0.5004492);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(43,0.7924306);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(46,0.670189);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(4,2.797442);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(5,0.8410262);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(6,1.03465);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(7,0.3908613);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(8,1.551084);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(9,0.1162559);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(10,1.900119);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(12,1.264354);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(13,0.8259742);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(14,0.6214135);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(17,0.7371838);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(18,0.8776001);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(30,0.5004492);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(43,0.7924306);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(46,0.670189);
   VbbHcc_tags_H_jetmass_JEC__295->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_JEC__295->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
