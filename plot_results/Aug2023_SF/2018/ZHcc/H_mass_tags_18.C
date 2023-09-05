#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Tue Sep  5 10:48:05 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-0.002065881,453.3333,0.01859292);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__29 = new TH1D("VbbHcc_tags_H_mass__29","",40,0,400);
   VbbHcc_tags_H_mass__29->SetBinContent(3,0.003120856);
   VbbHcc_tags_H_mass__29->SetBinContent(5,0.001839988);
   VbbHcc_tags_H_mass__29->SetBinContent(7,0.003837638);
   VbbHcc_tags_H_mass__29->SetBinContent(8,0.004690319);
   VbbHcc_tags_H_mass__29->SetBinContent(9,0.003099963);
   VbbHcc_tags_H_mass__29->SetBinContent(10,0.003571179);
   VbbHcc_tags_H_mass__29->SetBinContent(11,0.009677556);
   VbbHcc_tags_H_mass__29->SetBinContent(12,0.01337878);
   VbbHcc_tags_H_mass__29->SetBinContent(13,0.01574004);
   VbbHcc_tags_H_mass__29->SetBinContent(14,0.01490553);
   VbbHcc_tags_H_mass__29->SetBinContent(15,0.008595524);
   VbbHcc_tags_H_mass__29->SetBinContent(16,0.003437619);
   VbbHcc_tags_H_mass__29->SetBinContent(17,0.002005537);
   VbbHcc_tags_H_mass__29->SetBinContent(19,0.003078801);
   VbbHcc_tags_H_mass__29->SetBinContent(20,0.004195942);
   VbbHcc_tags_H_mass__29->SetBinContent(21,0.002031966);
   VbbHcc_tags_H_mass__29->SetBinContent(22,0.008614745);
   VbbHcc_tags_H_mass__29->SetBinContent(23,0.005478584);
   VbbHcc_tags_H_mass__29->SetBinContent(24,0.002928909);
   VbbHcc_tags_H_mass__29->SetBinContent(25,0.002683418);
   VbbHcc_tags_H_mass__29->SetBinContent(26,0.002533353);
   VbbHcc_tags_H_mass__29->SetBinContent(27,0.004685718);
   VbbHcc_tags_H_mass__29->SetBinContent(36,0.002848447);
   VbbHcc_tags_H_mass__29->SetBinContent(37,0.001955411);
   VbbHcc_tags_H_mass__29->SetBinContent(41,0.06358219);
   VbbHcc_tags_H_mass__29->SetBinError(3,0.003120856);
   VbbHcc_tags_H_mass__29->SetBinError(5,0.001839988);
   VbbHcc_tags_H_mass__29->SetBinError(7,0.002857355);
   VbbHcc_tags_H_mass__29->SetBinError(8,0.003330359);
   VbbHcc_tags_H_mass__29->SetBinError(9,0.003099963);
   VbbHcc_tags_H_mass__29->SetBinError(10,0.003571179);
   VbbHcc_tags_H_mass__29->SetBinError(11,0.006060615);
   VbbHcc_tags_H_mass__29->SetBinError(12,0.006166535);
   VbbHcc_tags_H_mass__29->SetBinError(13,0.006929548);
   VbbHcc_tags_H_mass__29->SetBinError(14,0.005640646);
   VbbHcc_tags_H_mass__29->SetBinError(15,0.00433832);
   VbbHcc_tags_H_mass__29->SetBinError(16,0.003437619);
   VbbHcc_tags_H_mass__29->SetBinError(17,0.002005537);
   VbbHcc_tags_H_mass__29->SetBinError(19,0.003078801);
   VbbHcc_tags_H_mass__29->SetBinError(20,0.002967671);
   VbbHcc_tags_H_mass__29->SetBinError(21,0.002031966);
   VbbHcc_tags_H_mass__29->SetBinError(22,0.005085782);
   VbbHcc_tags_H_mass__29->SetBinError(23,0.004093118);
   VbbHcc_tags_H_mass__29->SetBinError(24,0.002928909);
   VbbHcc_tags_H_mass__29->SetBinError(25,0.002683418);
   VbbHcc_tags_H_mass__29->SetBinError(26,0.002533353);
   VbbHcc_tags_H_mass__29->SetBinError(27,0.004685718);
   VbbHcc_tags_H_mass__29->SetBinError(36,0.002848447);
   VbbHcc_tags_H_mass__29->SetBinError(37,0.001955411);
   VbbHcc_tags_H_mass__29->SetBinError(41,0.01287158);
   VbbHcc_tags_H_mass__29->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass__29->SetFillColor(ci);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__29->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
