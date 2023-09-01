#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Fri Sep  1 13:34:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-0.006090711,453.3333,0.0548164);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__14 = new TH1D("VbbHcc_tags_Z_mass__14","",40,0,400);
   VbbHcc_tags_Z_mass__14->SetBinContent(5,0.002240019);
   VbbHcc_tags_Z_mass__14->SetBinContent(6,0.002308886);
   VbbHcc_tags_Z_mass__14->SetBinContent(8,0.008809903);
   VbbHcc_tags_Z_mass__14->SetBinContent(9,0.02346667);
   VbbHcc_tags_Z_mass__14->SetBinContent(10,0.04640542);
   VbbHcc_tags_Z_mass__14->SetBinContent(11,0.02028736);
   VbbHcc_tags_Z_mass__14->SetBinContent(14,0.002928909);
   VbbHcc_tags_Z_mass__14->SetBinContent(15,0.004679848);
   VbbHcc_tags_Z_mass__14->SetBinContent(18,0.002031966);
   VbbHcc_tags_Z_mass__14->SetBinContent(19,0.001980639);
   VbbHcc_tags_Z_mass__14->SetBinContent(21,0.002848447);
   VbbHcc_tags_Z_mass__14->SetBinContent(22,0.002161793);
   VbbHcc_tags_Z_mass__14->SetBinContent(23,0.002567018);
   VbbHcc_tags_Z_mass__14->SetBinContent(26,0.002143298);
   VbbHcc_tags_Z_mass__14->SetBinContent(27,0.002945999);
   VbbHcc_tags_Z_mass__14->SetBinContent(30,0.001947693);
   VbbHcc_tags_Z_mass__14->SetBinContent(31,0.004685718);
   VbbHcc_tags_Z_mass__14->SetBinContent(32,0.002683418);
   VbbHcc_tags_Z_mass__14->SetBinContent(35,0.002299241);
   VbbHcc_tags_Z_mass__14->SetBinContent(37,0.003078801);
   VbbHcc_tags_Z_mass__14->SetBinContent(39,0.001955411);
   VbbHcc_tags_Z_mass__14->SetBinContent(41,0.04806156);
   VbbHcc_tags_Z_mass__14->SetBinError(5,0.002240019);
   VbbHcc_tags_Z_mass__14->SetBinError(6,0.002308886);
   VbbHcc_tags_Z_mass__14->SetBinError(8,0.005426099);
   VbbHcc_tags_Z_mass__14->SetBinError(9,0.008123247);
   VbbHcc_tags_Z_mass__14->SetBinError(10,0.01148615);
   VbbHcc_tags_Z_mass__14->SetBinError(11,0.007196198);
   VbbHcc_tags_Z_mass__14->SetBinError(14,0.002928909);
   VbbHcc_tags_Z_mass__14->SetBinError(15,0.003322319);
   VbbHcc_tags_Z_mass__14->SetBinError(18,0.002031966);
   VbbHcc_tags_Z_mass__14->SetBinError(19,0.001980639);
   VbbHcc_tags_Z_mass__14->SetBinError(21,0.002848447);
   VbbHcc_tags_Z_mass__14->SetBinError(22,0.002161793);
   VbbHcc_tags_Z_mass__14->SetBinError(23,0.002567018);
   VbbHcc_tags_Z_mass__14->SetBinError(26,0.002143298);
   VbbHcc_tags_Z_mass__14->SetBinError(27,0.002945999);
   VbbHcc_tags_Z_mass__14->SetBinError(30,0.001947693);
   VbbHcc_tags_Z_mass__14->SetBinError(31,0.004685718);
   VbbHcc_tags_Z_mass__14->SetBinError(32,0.002683418);
   VbbHcc_tags_Z_mass__14->SetBinError(35,0.002299241);
   VbbHcc_tags_Z_mass__14->SetBinError(37,0.003078801);
   VbbHcc_tags_Z_mass__14->SetBinError(39,0.001955411);
   VbbHcc_tags_Z_mass__14->SetBinError(41,0.01137748);
   VbbHcc_tags_Z_mass__14->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass__14->SetFillColor(ci);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
