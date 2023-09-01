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
   Z_mass_both_16->Range(-80,-0.1707975,453.3333,1.537177);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__733 = new TH1D("VbbHcc_both_Z_mass__733","",40,0,400);
   VbbHcc_both_Z_mass__733->SetBinContent(3,0.0003941814);
   VbbHcc_both_Z_mass__733->SetBinContent(4,0.01087169);
   VbbHcc_both_Z_mass__733->SetBinContent(5,0.04192581);
   VbbHcc_both_Z_mass__733->SetBinContent(6,0.1022849);
   VbbHcc_both_Z_mass__733->SetBinContent(7,0.2247236);
   VbbHcc_both_Z_mass__733->SetBinContent(8,0.5415275);
   VbbHcc_both_Z_mass__733->SetBinContent(9,1.081894);
   VbbHcc_both_Z_mass__733->SetBinContent(10,1.301314);
   VbbHcc_both_Z_mass__733->SetBinContent(11,0.9836772);
   VbbHcc_both_Z_mass__733->SetBinContent(12,0.8792661);
   VbbHcc_both_Z_mass__733->SetBinContent(13,0.8093788);
   VbbHcc_both_Z_mass__733->SetBinContent(14,0.6298913);
   VbbHcc_both_Z_mass__733->SetBinContent(15,0.4355295);
   VbbHcc_both_Z_mass__733->SetBinContent(16,0.2902415);
   VbbHcc_both_Z_mass__733->SetBinContent(17,0.2601234);
   VbbHcc_both_Z_mass__733->SetBinContent(18,0.208699);
   VbbHcc_both_Z_mass__733->SetBinContent(19,0.2232361);
   VbbHcc_both_Z_mass__733->SetBinContent(20,0.1919433);
   VbbHcc_both_Z_mass__733->SetBinContent(21,0.1771037);
   VbbHcc_both_Z_mass__733->SetBinContent(22,0.1855169);
   VbbHcc_both_Z_mass__733->SetBinContent(23,0.1849931);
   VbbHcc_both_Z_mass__733->SetBinContent(24,0.1607574);
   VbbHcc_both_Z_mass__733->SetBinContent(25,0.1740111);
   VbbHcc_both_Z_mass__733->SetBinContent(26,0.1721948);
   VbbHcc_both_Z_mass__733->SetBinContent(27,0.1578593);
   VbbHcc_both_Z_mass__733->SetBinContent(28,0.1558339);
   VbbHcc_both_Z_mass__733->SetBinContent(29,0.1557076);
   VbbHcc_both_Z_mass__733->SetBinContent(30,0.1526684);
   VbbHcc_both_Z_mass__733->SetBinContent(31,0.1466173);
   VbbHcc_both_Z_mass__733->SetBinContent(32,0.1400017);
   VbbHcc_both_Z_mass__733->SetBinContent(33,0.1438564);
   VbbHcc_both_Z_mass__733->SetBinContent(34,0.1293355);
   VbbHcc_both_Z_mass__733->SetBinContent(35,0.1343056);
   VbbHcc_both_Z_mass__733->SetBinContent(36,0.1309363);
   VbbHcc_both_Z_mass__733->SetBinContent(37,0.1302167);
   VbbHcc_both_Z_mass__733->SetBinContent(38,0.1240673);
   VbbHcc_both_Z_mass__733->SetBinContent(39,0.1168358);
   VbbHcc_both_Z_mass__733->SetBinContent(40,0.1221957);
   VbbHcc_both_Z_mass__733->SetBinContent(41,4.438723);
   VbbHcc_both_Z_mass__733->SetBinError(3,0.0003941814);
   VbbHcc_both_Z_mass__733->SetBinError(4,0.001999889);
   VbbHcc_both_Z_mass__733->SetBinError(5,0.003703471);
   VbbHcc_both_Z_mass__733->SetBinError(6,0.005826058);
   VbbHcc_both_Z_mass__733->SetBinError(7,0.008566418);
   VbbHcc_both_Z_mass__733->SetBinError(8,0.01320987);
   VbbHcc_both_Z_mass__733->SetBinError(9,0.01873404);
   VbbHcc_both_Z_mass__733->SetBinError(10,0.02058372);
   VbbHcc_both_Z_mass__733->SetBinError(11,0.01785039);
   VbbHcc_both_Z_mass__733->SetBinError(12,0.01695494);
   VbbHcc_both_Z_mass__733->SetBinError(13,0.01632144);
   VbbHcc_both_Z_mass__733->SetBinError(14,0.01437232);
   VbbHcc_both_Z_mass__733->SetBinError(15,0.01192704);
   VbbHcc_both_Z_mass__733->SetBinError(16,0.00972403);
   VbbHcc_both_Z_mass__733->SetBinError(17,0.009244022);
   VbbHcc_both_Z_mass__733->SetBinError(18,0.008316921);
   VbbHcc_both_Z_mass__733->SetBinError(19,0.008521297);
   VbbHcc_both_Z_mass__733->SetBinError(20,0.007928131);
   VbbHcc_both_Z_mass__733->SetBinError(21,0.007622133);
   VbbHcc_both_Z_mass__733->SetBinError(22,0.007751013);
   VbbHcc_both_Z_mass__733->SetBinError(23,0.007866915);
   VbbHcc_both_Z_mass__733->SetBinError(24,0.007235329);
   VbbHcc_both_Z_mass__733->SetBinError(25,0.007532471);
   VbbHcc_both_Z_mass__733->SetBinError(26,0.007478587);
   VbbHcc_both_Z_mass__733->SetBinError(27,0.007181804);
   VbbHcc_both_Z_mass__733->SetBinError(28,0.007161321);
   VbbHcc_both_Z_mass__733->SetBinError(29,0.007118876);
   VbbHcc_both_Z_mass__733->SetBinError(30,0.007052148);
   VbbHcc_both_Z_mass__733->SetBinError(31,0.006871926);
   VbbHcc_both_Z_mass__733->SetBinError(32,0.006723456);
   VbbHcc_both_Z_mass__733->SetBinError(33,0.00683913);
   VbbHcc_both_Z_mass__733->SetBinError(34,0.006408393);
   VbbHcc_both_Z_mass__733->SetBinError(35,0.006577347);
   VbbHcc_both_Z_mass__733->SetBinError(36,0.006536966);
   VbbHcc_both_Z_mass__733->SetBinError(37,0.00650796);
   VbbHcc_both_Z_mass__733->SetBinError(38,0.006359004);
   VbbHcc_both_Z_mass__733->SetBinError(39,0.006163986);
   VbbHcc_both_Z_mass__733->SetBinError(40,0.006286773);
   VbbHcc_both_Z_mass__733->SetBinError(41,0.03814082);
   VbbHcc_both_Z_mass__733->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass__733->SetFillColor(ci);
   VbbHcc_both_Z_mass__733->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__733->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__733->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__733->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__733->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__733->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__733->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__733->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__733->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__733->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__733->Draw("HIST");
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
