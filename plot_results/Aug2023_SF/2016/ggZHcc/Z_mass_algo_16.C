#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-0.004346311,453.3333,0.0391168);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__375 = new TH1D("VbbHcc_algo_Z_mass__375","",40,0,400);
   VbbHcc_algo_Z_mass__375->SetBinContent(4,0.000215834);
   VbbHcc_algo_Z_mass__375->SetBinContent(5,0.0007534519);
   VbbHcc_algo_Z_mass__375->SetBinContent(6,0.004718028);
   VbbHcc_algo_Z_mass__375->SetBinContent(7,0.007795601);
   VbbHcc_algo_Z_mass__375->SetBinContent(8,0.01650957);
   VbbHcc_algo_Z_mass__375->SetBinContent(9,0.03311475);
   VbbHcc_algo_Z_mass__375->SetBinContent(10,0.02445662);
   VbbHcc_algo_Z_mass__375->SetBinContent(11,0.01830177);
   VbbHcc_algo_Z_mass__375->SetBinContent(12,0.01305947);
   VbbHcc_algo_Z_mass__375->SetBinContent(13,0.01101174);
   VbbHcc_algo_Z_mass__375->SetBinContent(14,0.007574291);
   VbbHcc_algo_Z_mass__375->SetBinContent(15,0.007800331);
   VbbHcc_algo_Z_mass__375->SetBinContent(16,0.00636182);
   VbbHcc_algo_Z_mass__375->SetBinContent(17,0.004557027);
   VbbHcc_algo_Z_mass__375->SetBinContent(18,0.004034799);
   VbbHcc_algo_Z_mass__375->SetBinContent(19,0.001983519);
   VbbHcc_algo_Z_mass__375->SetBinContent(20,0.004961006);
   VbbHcc_algo_Z_mass__375->SetBinContent(21,0.003456366);
   VbbHcc_algo_Z_mass__375->SetBinContent(22,0.002619222);
   VbbHcc_algo_Z_mass__375->SetBinContent(23,0.003115254);
   VbbHcc_algo_Z_mass__375->SetBinContent(24,0.003339699);
   VbbHcc_algo_Z_mass__375->SetBinContent(25,0.003547626);
   VbbHcc_algo_Z_mass__375->SetBinContent(26,0.001403442);
   VbbHcc_algo_Z_mass__375->SetBinContent(27,0.007084432);
   VbbHcc_algo_Z_mass__375->SetBinContent(28,0.00381682);
   VbbHcc_algo_Z_mass__375->SetBinContent(29,0.002975064);
   VbbHcc_algo_Z_mass__375->SetBinContent(30,0.003577653);
   VbbHcc_algo_Z_mass__375->SetBinContent(31,0.002371549);
   VbbHcc_algo_Z_mass__375->SetBinContent(32,0.002240466);
   VbbHcc_algo_Z_mass__375->SetBinContent(33,0.005153199);
   VbbHcc_algo_Z_mass__375->SetBinContent(34,0.002085198);
   VbbHcc_algo_Z_mass__375->SetBinContent(35,0.002285556);
   VbbHcc_algo_Z_mass__375->SetBinContent(36,0.002335917);
   VbbHcc_algo_Z_mass__375->SetBinContent(37,0.001566639);
   VbbHcc_algo_Z_mass__375->SetBinContent(38,0.001449804);
   VbbHcc_algo_Z_mass__375->SetBinContent(39,0.004022968);
   VbbHcc_algo_Z_mass__375->SetBinContent(40,0.0009189552);
   VbbHcc_algo_Z_mass__375->SetBinContent(41,0.08825611);
   VbbHcc_algo_Z_mass__375->SetBinError(4,0.000215834);
   VbbHcc_algo_Z_mass__375->SetBinError(5,0.0004362368);
   VbbHcc_algo_Z_mass__375->SetBinError(6,0.001137506);
   VbbHcc_algo_Z_mass__375->SetBinError(7,0.001464815);
   VbbHcc_algo_Z_mass__375->SetBinError(8,0.002145573);
   VbbHcc_algo_Z_mass__375->SetBinError(9,0.003076875);
   VbbHcc_algo_Z_mass__375->SetBinError(10,0.00263051);
   VbbHcc_algo_Z_mass__375->SetBinError(11,0.002274264);
   VbbHcc_algo_Z_mass__375->SetBinError(12,0.001916909);
   VbbHcc_algo_Z_mass__375->SetBinError(13,0.001788799);
   VbbHcc_algo_Z_mass__375->SetBinError(14,0.001453185);
   VbbHcc_algo_Z_mass__375->SetBinError(15,0.001557684);
   VbbHcc_algo_Z_mass__375->SetBinError(16,0.001364776);
   VbbHcc_algo_Z_mass__375->SetBinError(17,0.001118192);
   VbbHcc_algo_Z_mass__375->SetBinError(18,0.00105042);
   VbbHcc_algo_Z_mass__375->SetBinError(19,0.0007628555);
   VbbHcc_algo_Z_mass__375->SetBinError(20,0.001150595);
   VbbHcc_algo_Z_mass__375->SetBinError(21,0.0009714871);
   VbbHcc_algo_Z_mass__375->SetBinError(22,0.0008827291);
   VbbHcc_algo_Z_mass__375->SetBinError(23,0.0009369726);
   VbbHcc_algo_Z_mass__375->SetBinError(24,0.0009768424);
   VbbHcc_algo_Z_mass__375->SetBinError(25,0.001010338);
   VbbHcc_algo_Z_mass__375->SetBinError(26,0.0006458765);
   VbbHcc_algo_Z_mass__375->SetBinError(27,0.001441699);
   VbbHcc_algo_Z_mass__375->SetBinError(28,0.00106869);
   VbbHcc_algo_Z_mass__375->SetBinError(29,0.0008777517);
   VbbHcc_algo_Z_mass__375->SetBinError(30,0.001017814);
   VbbHcc_algo_Z_mass__375->SetBinError(31,0.0008398025);
   VbbHcc_algo_Z_mass__375->SetBinError(32,0.0008537431);
   VbbHcc_algo_Z_mass__375->SetBinError(33,0.001202342);
   VbbHcc_algo_Z_mass__375->SetBinError(34,0.000793371);
   VbbHcc_algo_Z_mass__375->SetBinError(35,0.0008109051);
   VbbHcc_algo_Z_mass__375->SetBinError(36,0.0008284466);
   VbbHcc_algo_Z_mass__375->SetBinError(37,0.0007034119);
   VbbHcc_algo_Z_mass__375->SetBinError(38,0.0006544307);
   VbbHcc_algo_Z_mass__375->SetBinError(39,0.001083507);
   VbbHcc_algo_Z_mass__375->SetBinError(40,0.0005371754);
   VbbHcc_algo_Z_mass__375->SetBinError(41,0.005080513);
   VbbHcc_algo_Z_mass__375->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass__375->SetFillColor(ci);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__375->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__375->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__375->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
