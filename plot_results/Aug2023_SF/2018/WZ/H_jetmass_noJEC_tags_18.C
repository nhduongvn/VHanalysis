#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-0.4619031,340,4.157128);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__280 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__280","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(4,2.613817);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(5,3.165676);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(6,1.428106);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(8,1.59612);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(9,3.519261);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(10,0.7156926);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(11,0.6143759);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(12,1.745735);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(13,0.8259742);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(14,0.6214135);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(18,0.7371838);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(19,0.8776001);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(30,0.5004492);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(45,0.7924306);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(48,0.670189);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(4,1.763351);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(5,2.31515);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(6,1.064979);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(8,0.9451522);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(9,2.097525);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(10,0.7156926);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(11,0.6143759);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(12,1.264354);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(13,0.8259742);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(14,0.6214135);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(18,0.7371838);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(19,0.8776001);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(30,0.5004492);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(45,0.7924306);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(48,0.670189);
   VbbHcc_tags_H_jetmass_noJEC__280->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_noJEC__280->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
