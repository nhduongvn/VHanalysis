#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_both_16()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-0.0008744278,453.3333,0.00786985);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__735 = new TH1D("VbbHcc_both_Z_mass__735","",40,0,400);
   VbbHcc_both_Z_mass__735->SetBinContent(5,0.0005777384);
   VbbHcc_both_Z_mass__735->SetBinContent(6,0.0002827512);
   VbbHcc_both_Z_mass__735->SetBinContent(7,0.0006953681);
   VbbHcc_both_Z_mass__735->SetBinContent(8,0.001490564);
   VbbHcc_both_Z_mass__735->SetBinContent(9,0.006662307);
   VbbHcc_both_Z_mass__735->SetBinContent(10,0.006147201);
   VbbHcc_both_Z_mass__735->SetBinContent(11,0.002483415);
   VbbHcc_both_Z_mass__735->SetBinContent(12,0.001620064);
   VbbHcc_both_Z_mass__735->SetBinContent(13,0.0002270886);
   VbbHcc_both_Z_mass__735->SetBinContent(14,0.0002900433);
   VbbHcc_both_Z_mass__735->SetBinContent(15,0.0009056824);
   VbbHcc_both_Z_mass__735->SetBinContent(16,0.0003494097);
   VbbHcc_both_Z_mass__735->SetBinContent(17,0.0002888196);
   VbbHcc_both_Z_mass__735->SetBinContent(18,0.000309151);
   VbbHcc_both_Z_mass__735->SetBinContent(19,0.000945241);
   VbbHcc_both_Z_mass__735->SetBinContent(20,0.000263898);
   VbbHcc_both_Z_mass__735->SetBinContent(21,0.0003431276);
   VbbHcc_both_Z_mass__735->SetBinContent(22,0.0002573456);
   VbbHcc_both_Z_mass__735->SetBinContent(23,0.0003456145);
   VbbHcc_both_Z_mass__735->SetBinContent(27,0.0002574087);
   VbbHcc_both_Z_mass__735->SetBinContent(28,0.0003566413);
   VbbHcc_both_Z_mass__735->SetBinContent(29,0.0002346945);
   VbbHcc_both_Z_mass__735->SetBinContent(30,0.001009853);
   VbbHcc_both_Z_mass__735->SetBinContent(31,0.0005260693);
   VbbHcc_both_Z_mass__735->SetBinContent(32,0.0002780781);
   VbbHcc_both_Z_mass__735->SetBinContent(33,0.00029471);
   VbbHcc_both_Z_mass__735->SetBinContent(34,0.0003086149);
   VbbHcc_both_Z_mass__735->SetBinContent(36,0.0002676548);
   VbbHcc_both_Z_mass__735->SetBinContent(38,0.0002951042);
   VbbHcc_both_Z_mass__735->SetBinContent(39,0.0002665921);
   VbbHcc_both_Z_mass__735->SetBinContent(40,0.0002701572);
   VbbHcc_both_Z_mass__735->SetBinContent(41,0.01021424);
   VbbHcc_both_Z_mass__735->SetBinError(5,0.0004085546);
   VbbHcc_both_Z_mass__735->SetBinError(6,0.0002827512);
   VbbHcc_both_Z_mass__735->SetBinError(7,0.0005021624);
   VbbHcc_both_Z_mass__735->SetBinError(8,0.0006217304);
   VbbHcc_both_Z_mass__735->SetBinError(9,0.001400719);
   VbbHcc_both_Z_mass__735->SetBinError(10,0.001341782);
   VbbHcc_both_Z_mass__735->SetBinError(11,0.0008310222);
   VbbHcc_both_Z_mass__735->SetBinError(12,0.0006641602);
   VbbHcc_both_Z_mass__735->SetBinError(13,0.0002270886);
   VbbHcc_both_Z_mass__735->SetBinError(14,0.0002900433);
   VbbHcc_both_Z_mass__735->SetBinError(15,0.0005399421);
   VbbHcc_both_Z_mass__735->SetBinError(16,0.0003494097);
   VbbHcc_both_Z_mass__735->SetBinError(17,0.0002888196);
   VbbHcc_both_Z_mass__735->SetBinError(18,0.000309151);
   VbbHcc_both_Z_mass__735->SetBinError(19,0.0005518134);
   VbbHcc_both_Z_mass__735->SetBinError(20,0.000263898);
   VbbHcc_both_Z_mass__735->SetBinError(21,0.0003431276);
   VbbHcc_both_Z_mass__735->SetBinError(22,0.0002573456);
   VbbHcc_both_Z_mass__735->SetBinError(23,0.0003456145);
   VbbHcc_both_Z_mass__735->SetBinError(27,0.0002574087);
   VbbHcc_both_Z_mass__735->SetBinError(28,0.0003566413);
   VbbHcc_both_Z_mass__735->SetBinError(29,0.0002346945);
   VbbHcc_both_Z_mass__735->SetBinError(30,0.0005083224);
   VbbHcc_both_Z_mass__735->SetBinError(31,0.0003720151);
   VbbHcc_both_Z_mass__735->SetBinError(32,0.0002780781);
   VbbHcc_both_Z_mass__735->SetBinError(33,0.00029471);
   VbbHcc_both_Z_mass__735->SetBinError(34,0.0003086149);
   VbbHcc_both_Z_mass__735->SetBinError(36,0.0002676548);
   VbbHcc_both_Z_mass__735->SetBinError(38,0.0002951042);
   VbbHcc_both_Z_mass__735->SetBinError(39,0.0002665921);
   VbbHcc_both_Z_mass__735->SetBinError(40,0.0002701572);
   VbbHcc_both_Z_mass__735->SetBinError(41,0.001747745);
   VbbHcc_both_Z_mass__735->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass__735->SetFillColor(ci);
   VbbHcc_both_Z_mass__735->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__735->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__735->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__735->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__735->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__735->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__735->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__735->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__735->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__735->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__735->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
