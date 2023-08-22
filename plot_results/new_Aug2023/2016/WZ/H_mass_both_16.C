void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Tue Aug 22 09:22:27 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.06020888,453.3333,0.5418799);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(4,0.09837659);
   VbbHcc_both_H_mass_stack_7->SetBinContent(6,0.07699256);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.1875275);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,0.4587343);
   VbbHcc_both_H_mass_stack_7->SetBinContent(10,0.1623838);
   VbbHcc_both_H_mass_stack_7->SetBinContent(11,0.1783283);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.1870263);
   VbbHcc_both_H_mass_stack_7->SetBinContent(13,0.1679649);
   VbbHcc_both_H_mass_stack_7->SetBinContent(14,0.1903386);
   VbbHcc_both_H_mass_stack_7->SetBinContent(15,0.0778465);
   VbbHcc_both_H_mass_stack_7->SetBinContent(16,0.08610475);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.07819951);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.2648924);
   VbbHcc_both_H_mass_stack_7->SetBinContent(21,0.07971497);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.2067703);
   VbbHcc_both_H_mass_stack_7->SetBinContent(26,0.2705492);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.09078265);
   VbbHcc_both_H_mass_stack_7->SetBinContent(28,0.07873842);
   VbbHcc_both_H_mass_stack_7->SetBinContent(30,0.09049555);
   VbbHcc_both_H_mass_stack_7->SetBinContent(31,0.1796705);
   VbbHcc_both_H_mass_stack_7->SetBinContent(32,0.09442741);
   VbbHcc_both_H_mass_stack_7->SetBinContent(33,0.08828565);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.1394411);
   VbbHcc_both_H_mass_stack_7->SetBinContent(40,0.09206678);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,0.7403712);
   VbbHcc_both_H_mass_stack_7->SetBinError(4,0.09837659);
   VbbHcc_both_H_mass_stack_7->SetBinError(6,0.07699256);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.1327459);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,0.2057879);
   VbbHcc_both_H_mass_stack_7->SetBinError(10,0.1149578);
   VbbHcc_both_H_mass_stack_7->SetBinError(11,0.1261316);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.1340021);
   VbbHcc_both_H_mass_stack_7->SetBinError(13,0.1189219);
   VbbHcc_both_H_mass_stack_7->SetBinError(14,0.134755);
   VbbHcc_both_H_mass_stack_7->SetBinError(15,0.0778465);
   VbbHcc_both_H_mass_stack_7->SetBinError(16,0.08610475);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.07819951);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.1534632);
   VbbHcc_both_H_mass_stack_7->SetBinError(21,0.07971497);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.1462249);
   VbbHcc_both_H_mass_stack_7->SetBinError(26,0.1562281);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.09078265);
   VbbHcc_both_H_mass_stack_7->SetBinError(28,0.07873842);
   VbbHcc_both_H_mass_stack_7->SetBinError(30,0.09049555);
   VbbHcc_both_H_mass_stack_7->SetBinError(31,0.1271885);
   VbbHcc_both_H_mass_stack_7->SetBinError(32,0.09442741);
   VbbHcc_both_H_mass_stack_7->SetBinError(33,0.08828565);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.1061571);
   VbbHcc_both_H_mass_stack_7->SetBinError(40,0.09206678);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,0.2635929);
   VbbHcc_both_H_mass_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
