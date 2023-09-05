#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Tue Sep  5 10:48:25 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-0.000754008,453.3333,0.006786072);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__15 = new TH1D("VbbHcc_tags_Z_mass__15","",40,0,400);
   VbbHcc_tags_Z_mass__15->SetBinContent(5,0.0002924782);
   VbbHcc_tags_Z_mass__15->SetBinContent(6,0.0002827512);
   VbbHcc_tags_Z_mass__15->SetBinContent(8,0.002000054);
   VbbHcc_tags_Z_mass__15->SetBinContent(9,0.005744823);
   VbbHcc_tags_Z_mass__15->SetBinContent(10,0.005169036);
   VbbHcc_tags_Z_mass__15->SetBinContent(11,0.001650187);
   VbbHcc_tags_Z_mass__15->SetBinContent(12,0.002219868);
   VbbHcc_tags_Z_mass__15->SetBinContent(13,0.0002270886);
   VbbHcc_tags_Z_mass__15->SetBinContent(15,0.0006260367);
   VbbHcc_tags_Z_mass__15->SetBinContent(17,0.0002052625);
   VbbHcc_tags_Z_mass__15->SetBinContent(18,0.000309151);
   VbbHcc_tags_Z_mass__15->SetBinContent(19,0.0005637502);
   VbbHcc_tags_Z_mass__15->SetBinContent(22,0.0005349686);
   VbbHcc_tags_Z_mass__15->SetBinContent(23,0.0002409068);
   VbbHcc_tags_Z_mass__15->SetBinContent(24,0.0002929853);
   VbbHcc_tags_Z_mass__15->SetBinContent(26,0.0003763935);
   VbbHcc_tags_Z_mass__15->SetBinContent(28,0.0002016328);
   VbbHcc_tags_Z_mass__15->SetBinContent(29,0.0002346945);
   VbbHcc_tags_Z_mass__15->SetBinContent(31,0.0005260693);
   VbbHcc_tags_Z_mass__15->SetBinContent(33,0.00029471);
   VbbHcc_tags_Z_mass__15->SetBinContent(34,0.0003686706);
   VbbHcc_tags_Z_mass__15->SetBinContent(35,0.0002554459);
   VbbHcc_tags_Z_mass__15->SetBinContent(36,0.0005655908);
   VbbHcc_tags_Z_mass__15->SetBinContent(38,0.0002951042);
   VbbHcc_tags_Z_mass__15->SetBinContent(40,0.0002701572);
   VbbHcc_tags_Z_mass__15->SetBinContent(41,0.01210219);
   VbbHcc_tags_Z_mass__15->SetBinError(5,0.0002924782);
   VbbHcc_tags_Z_mass__15->SetBinError(6,0.0002827512);
   VbbHcc_tags_Z_mass__15->SetBinError(8,0.0007185911);
   VbbHcc_tags_Z_mass__15->SetBinError(9,0.001296002);
   VbbHcc_tags_Z_mass__15->SetBinError(10,0.001212057);
   VbbHcc_tags_Z_mass__15->SetBinError(11,0.0006766442);
   VbbHcc_tags_Z_mass__15->SetBinError(12,0.0007903974);
   VbbHcc_tags_Z_mass__15->SetBinError(13,0.0002270886);
   VbbHcc_tags_Z_mass__15->SetBinError(15,0.0004562068);
   VbbHcc_tags_Z_mass__15->SetBinError(17,0.0002052625);
   VbbHcc_tags_Z_mass__15->SetBinError(18,0.000309151);
   VbbHcc_tags_Z_mass__15->SetBinError(19,0.0003987013);
   VbbHcc_tags_Z_mass__15->SetBinError(22,0.0003785515);
   VbbHcc_tags_Z_mass__15->SetBinError(23,0.0002409068);
   VbbHcc_tags_Z_mass__15->SetBinError(24,0.0002929853);
   VbbHcc_tags_Z_mass__15->SetBinError(26,0.0003763935);
   VbbHcc_tags_Z_mass__15->SetBinError(28,0.0002016328);
   VbbHcc_tags_Z_mass__15->SetBinError(29,0.0002346945);
   VbbHcc_tags_Z_mass__15->SetBinError(31,0.0003720151);
   VbbHcc_tags_Z_mass__15->SetBinError(33,0.00029471);
   VbbHcc_tags_Z_mass__15->SetBinError(34,0.0003686706);
   VbbHcc_tags_Z_mass__15->SetBinError(35,0.0002554459);
   VbbHcc_tags_Z_mass__15->SetBinError(36,0.0004005059);
   VbbHcc_tags_Z_mass__15->SetBinError(38,0.0002951042);
   VbbHcc_tags_Z_mass__15->SetBinError(40,0.0002701572);
   VbbHcc_tags_Z_mass__15->SetBinError(41,0.001908844);
   VbbHcc_tags_Z_mass__15->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass__15->SetFillColor(ci);
   VbbHcc_tags_Z_mass__15->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__15->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__15->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__15->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__15->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
