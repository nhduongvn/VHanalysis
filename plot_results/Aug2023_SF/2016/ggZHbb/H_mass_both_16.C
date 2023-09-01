#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.1651608,453.3333,1.486447);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__748 = new TH1D("VbbHcc_both_H_mass__748","",40,0,400);
   VbbHcc_both_H_mass__748->SetBinContent(3,0.001431186);
   VbbHcc_both_H_mass__748->SetBinContent(4,0.0088891);
   VbbHcc_both_H_mass__748->SetBinContent(5,0.03529805);
   VbbHcc_both_H_mass__748->SetBinContent(6,0.1006122);
   VbbHcc_both_H_mass__748->SetBinContent(7,0.2760292);
   VbbHcc_both_H_mass__748->SetBinContent(8,0.6918199);
   VbbHcc_both_H_mass__748->SetBinContent(9,1.174138);
   VbbHcc_both_H_mass__748->SetBinContent(10,1.258368);
   VbbHcc_both_H_mass__748->SetBinContent(11,1.04916);
   VbbHcc_both_H_mass__748->SetBinContent(12,1.156279);
   VbbHcc_both_H_mass__748->SetBinContent(13,1.101961);
   VbbHcc_both_H_mass__748->SetBinContent(14,0.7110617);
   VbbHcc_both_H_mass__748->SetBinContent(15,0.4984332);
   VbbHcc_both_H_mass__748->SetBinContent(16,0.4623892);
   VbbHcc_both_H_mass__748->SetBinContent(17,0.4721985);
   VbbHcc_both_H_mass__748->SetBinContent(18,0.4739044);
   VbbHcc_both_H_mass__748->SetBinContent(19,0.4766118);
   VbbHcc_both_H_mass__748->SetBinContent(20,0.4849148);
   VbbHcc_both_H_mass__748->SetBinContent(21,0.4622051);
   VbbHcc_both_H_mass__748->SetBinContent(22,0.4118055);
   VbbHcc_both_H_mass__748->SetBinContent(23,0.4033861);
   VbbHcc_both_H_mass__748->SetBinContent(24,0.3613614);
   VbbHcc_both_H_mass__748->SetBinContent(25,0.3241065);
   VbbHcc_both_H_mass__748->SetBinContent(26,0.3104077);
   VbbHcc_both_H_mass__748->SetBinContent(27,0.2587513);
   VbbHcc_both_H_mass__748->SetBinContent(28,0.2463869);
   VbbHcc_both_H_mass__748->SetBinContent(29,0.2127134);
   VbbHcc_both_H_mass__748->SetBinContent(30,0.1917231);
   VbbHcc_both_H_mass__748->SetBinContent(31,0.1757888);
   VbbHcc_both_H_mass__748->SetBinContent(32,0.1522189);
   VbbHcc_both_H_mass__748->SetBinContent(33,0.1388587);
   VbbHcc_both_H_mass__748->SetBinContent(34,0.12761);
   VbbHcc_both_H_mass__748->SetBinContent(35,0.1153664);
   VbbHcc_both_H_mass__748->SetBinContent(36,0.1042775);
   VbbHcc_both_H_mass__748->SetBinContent(37,0.08531385);
   VbbHcc_both_H_mass__748->SetBinContent(38,0.09061622);
   VbbHcc_both_H_mass__748->SetBinContent(39,0.07630979);
   VbbHcc_both_H_mass__748->SetBinContent(40,0.070303);
   VbbHcc_both_H_mass__748->SetBinContent(41,0.8976516);
   VbbHcc_both_H_mass__748->SetBinError(3,0.0008287822);
   VbbHcc_both_H_mass__748->SetBinError(4,0.001677422);
   VbbHcc_both_H_mass__748->SetBinError(5,0.00346088);
   VbbHcc_both_H_mass__748->SetBinError(6,0.005672519);
   VbbHcc_both_H_mass__748->SetBinError(7,0.009321053);
   VbbHcc_both_H_mass__748->SetBinError(8,0.0149322);
   VbbHcc_both_H_mass__748->SetBinError(9,0.01935116);
   VbbHcc_both_H_mass__748->SetBinError(10,0.02009836);
   VbbHcc_both_H_mass__748->SetBinError(11,0.01829576);
   VbbHcc_both_H_mass__748->SetBinError(12,0.01927912);
   VbbHcc_both_H_mass__748->SetBinError(13,0.01895829);
   VbbHcc_both_H_mass__748->SetBinError(14,0.01519189);
   VbbHcc_both_H_mass__748->SetBinError(15,0.01266479);
   VbbHcc_both_H_mass__748->SetBinError(16,0.01215405);
   VbbHcc_both_H_mass__748->SetBinError(17,0.01235947);
   VbbHcc_both_H_mass__748->SetBinError(18,0.01233668);
   VbbHcc_both_H_mass__748->SetBinError(19,0.01234969);
   VbbHcc_both_H_mass__748->SetBinError(20,0.01251767);
   VbbHcc_both_H_mass__748->SetBinError(21,0.01226298);
   VbbHcc_both_H_mass__748->SetBinError(22,0.01161115);
   VbbHcc_both_H_mass__748->SetBinError(23,0.01149276);
   VbbHcc_both_H_mass__748->SetBinError(24,0.01093135);
   VbbHcc_both_H_mass__748->SetBinError(25,0.01031556);
   VbbHcc_both_H_mass__748->SetBinError(26,0.01011743);
   VbbHcc_both_H_mass__748->SetBinError(27,0.009263528);
   VbbHcc_both_H_mass__748->SetBinError(28,0.009026775);
   VbbHcc_both_H_mass__748->SetBinError(29,0.008405131);
   VbbHcc_both_H_mass__748->SetBinError(30,0.008017819);
   VbbHcc_both_H_mass__748->SetBinError(31,0.007616441);
   VbbHcc_both_H_mass__748->SetBinError(32,0.007129109);
   VbbHcc_both_H_mass__748->SetBinError(33,0.00680055);
   VbbHcc_both_H_mass__748->SetBinError(34,0.006528776);
   VbbHcc_both_H_mass__748->SetBinError(35,0.006280687);
   VbbHcc_both_H_mass__748->SetBinError(36,0.005909056);
   VbbHcc_both_H_mass__748->SetBinError(37,0.005377865);
   VbbHcc_both_H_mass__748->SetBinError(38,0.00558308);
   VbbHcc_both_H_mass__748->SetBinError(39,0.005057941);
   VbbHcc_both_H_mass__748->SetBinError(40,0.004951605);
   VbbHcc_both_H_mass__748->SetBinError(41,0.01803039);
   VbbHcc_both_H_mass__748->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_mass__748->SetFillColor(ci);
   VbbHcc_both_H_mass__748->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__748->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__748->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__748->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__748->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__748->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__748->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__748->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__748->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__748->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__748->Draw("HIST");
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
