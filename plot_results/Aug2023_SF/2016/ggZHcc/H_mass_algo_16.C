#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_algo_16()
{
//=========Macro generated from canvas: H_mass_algo_16/H_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *H_mass_algo_16 = new TCanvas("H_mass_algo_16", "H_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_16->SetHighLightColor(2);
   H_mass_algo_16->Range(-80,-0.001996775,453.3333,0.01797098);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__390 = new TH1D("VbbHcc_algo_H_mass__390","",40,0,400);
   VbbHcc_algo_H_mass__390->SetBinContent(4,0.0002268072);
   VbbHcc_algo_H_mass__390->SetBinContent(6,0.0009758481);
   VbbHcc_algo_H_mass__390->SetBinContent(7,0.0006295556);
   VbbHcc_algo_H_mass__390->SetBinContent(8,0.005402663);
   VbbHcc_algo_H_mass__390->SetBinContent(9,0.008533605);
   VbbHcc_algo_H_mass__390->SetBinContent(10,0.01286956);
   VbbHcc_algo_H_mass__390->SetBinContent(11,0.01252735);
   VbbHcc_algo_H_mass__390->SetBinContent(12,0.01521353);
   VbbHcc_algo_H_mass__390->SetBinContent(13,0.01314719);
   VbbHcc_algo_H_mass__390->SetBinContent(14,0.01503338);
   VbbHcc_algo_H_mass__390->SetBinContent(15,0.01191633);
   VbbHcc_algo_H_mass__390->SetBinContent(16,0.00891189);
   VbbHcc_algo_H_mass__390->SetBinContent(17,0.004438563);
   VbbHcc_algo_H_mass__390->SetBinContent(18,0.004901529);
   VbbHcc_algo_H_mass__390->SetBinContent(19,0.004079293);
   VbbHcc_algo_H_mass__390->SetBinContent(20,0.002299437);
   VbbHcc_algo_H_mass__390->SetBinContent(21,0.004265522);
   VbbHcc_algo_H_mass__390->SetBinContent(22,0.003543824);
   VbbHcc_algo_H_mass__390->SetBinContent(23,0.002729476);
   VbbHcc_algo_H_mass__390->SetBinContent(24,0.002980147);
   VbbHcc_algo_H_mass__390->SetBinContent(25,0.004187582);
   VbbHcc_algo_H_mass__390->SetBinContent(26,0.002928286);
   VbbHcc_algo_H_mass__390->SetBinContent(27,0.003183788);
   VbbHcc_algo_H_mass__390->SetBinContent(28,0.003185792);
   VbbHcc_algo_H_mass__390->SetBinContent(29,0.00332925);
   VbbHcc_algo_H_mass__390->SetBinContent(30,0.002803689);
   VbbHcc_algo_H_mass__390->SetBinContent(31,0.003715757);
   VbbHcc_algo_H_mass__390->SetBinContent(32,0.00309901);
   VbbHcc_algo_H_mass__390->SetBinContent(33,0.003631965);
   VbbHcc_algo_H_mass__390->SetBinContent(34,0.002132704);
   VbbHcc_algo_H_mass__390->SetBinContent(35,0.00210667);
   VbbHcc_algo_H_mass__390->SetBinContent(36,0.001676935);
   VbbHcc_algo_H_mass__390->SetBinContent(37,0.002673765);
   VbbHcc_algo_H_mass__390->SetBinContent(38,0.002725193);
   VbbHcc_algo_H_mass__390->SetBinContent(39,0.002904363);
   VbbHcc_algo_H_mass__390->SetBinContent(40,0.001645835);
   VbbHcc_algo_H_mass__390->SetBinContent(41,0.1342755);
   VbbHcc_algo_H_mass__390->SetBinError(4,0.0002268072);
   VbbHcc_algo_H_mass__390->SetBinError(6,0.0005054325);
   VbbHcc_algo_H_mass__390->SetBinError(7,0.0004472502);
   VbbHcc_algo_H_mass__390->SetBinError(8,0.001253204);
   VbbHcc_algo_H_mass__390->SetBinError(9,0.001578712);
   VbbHcc_algo_H_mass__390->SetBinError(10,0.001896565);
   VbbHcc_algo_H_mass__390->SetBinError(11,0.001872657);
   VbbHcc_algo_H_mass__390->SetBinError(12,0.002071469);
   VbbHcc_algo_H_mass__390->SetBinError(13,0.001894865);
   VbbHcc_algo_H_mass__390->SetBinError(14,0.002044012);
   VbbHcc_algo_H_mass__390->SetBinError(15,0.00183445);
   VbbHcc_algo_H_mass__390->SetBinError(16,0.001614233);
   VbbHcc_algo_H_mass__390->SetBinError(17,0.00110878);
   VbbHcc_algo_H_mass__390->SetBinError(18,0.001166933);
   VbbHcc_algo_H_mass__390->SetBinError(19,0.001084615);
   VbbHcc_algo_H_mass__390->SetBinError(20,0.0008216525);
   VbbHcc_algo_H_mass__390->SetBinError(21,0.001050501);
   VbbHcc_algo_H_mass__390->SetBinError(22,0.0009396542);
   VbbHcc_algo_H_mass__390->SetBinError(23,0.0008691818);
   VbbHcc_algo_H_mass__390->SetBinError(24,0.0009186526);
   VbbHcc_algo_H_mass__390->SetBinError(25,0.001049971);
   VbbHcc_algo_H_mass__390->SetBinError(26,0.000893072);
   VbbHcc_algo_H_mass__390->SetBinError(27,0.0009360435);
   VbbHcc_algo_H_mass__390->SetBinError(28,0.000926951);
   VbbHcc_algo_H_mass__390->SetBinError(29,0.0009678534);
   VbbHcc_algo_H_mass__390->SetBinError(30,0.0008988403);
   VbbHcc_algo_H_mass__390->SetBinError(31,0.001035243);
   VbbHcc_algo_H_mass__390->SetBinError(32,0.0009451497);
   VbbHcc_algo_H_mass__390->SetBinError(33,0.001021144);
   VbbHcc_algo_H_mass__390->SetBinError(34,0.0008104305);
   VbbHcc_algo_H_mass__390->SetBinError(35,0.0008012477);
   VbbHcc_algo_H_mass__390->SetBinError(36,0.0007661418);
   VbbHcc_algo_H_mass__390->SetBinError(37,0.0008619011);
   VbbHcc_algo_H_mass__390->SetBinError(38,0.0009205403);
   VbbHcc_algo_H_mass__390->SetBinError(39,0.0008922843);
   VbbHcc_algo_H_mass__390->SetBinError(40,0.0006770329);
   VbbHcc_algo_H_mass__390->SetBinError(41,0.006292298);
   VbbHcc_algo_H_mass__390->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_mass__390->SetFillColor(ci);
   VbbHcc_algo_H_mass__390->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__390->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__390->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__390->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__390->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__390->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__390->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__390->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__390->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__390->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__390->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_16->Modified();
   H_mass_algo_16->cd();
   H_mass_algo_16->SetSelected(H_mass_algo_16);
}
