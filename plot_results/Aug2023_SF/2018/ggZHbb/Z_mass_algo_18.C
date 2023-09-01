#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:47 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-0.6907686,453.3333,6.216917);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__373 = new TH1D("VbbHcc_algo_Z_mass__373","",40,0,400);
   VbbHcc_algo_Z_mass__373->SetBinContent(3,0.001213735);
   VbbHcc_algo_Z_mass__373->SetBinContent(4,0.0441378);
   VbbHcc_algo_Z_mass__373->SetBinContent(5,0.2738264);
   VbbHcc_algo_Z_mass__373->SetBinContent(6,0.6966314);
   VbbHcc_algo_Z_mass__373->SetBinContent(7,1.367155);
   VbbHcc_algo_Z_mass__373->SetBinContent(8,2.831743);
   VbbHcc_algo_Z_mass__373->SetBinContent(9,4.830038);
   VbbHcc_algo_Z_mass__373->SetBinContent(10,5.262999);
   VbbHcc_algo_Z_mass__373->SetBinContent(11,3.858037);
   VbbHcc_algo_Z_mass__373->SetBinContent(12,3.113767);
   VbbHcc_algo_Z_mass__373->SetBinContent(13,2.498711);
   VbbHcc_algo_Z_mass__373->SetBinContent(14,1.865355);
   VbbHcc_algo_Z_mass__373->SetBinContent(15,1.356122);
   VbbHcc_algo_Z_mass__373->SetBinContent(16,1.068676);
   VbbHcc_algo_Z_mass__373->SetBinContent(17,0.9323004);
   VbbHcc_algo_Z_mass__373->SetBinContent(18,0.9483046);
   VbbHcc_algo_Z_mass__373->SetBinContent(19,0.8382543);
   VbbHcc_algo_Z_mass__373->SetBinContent(20,0.7765481);
   VbbHcc_algo_Z_mass__373->SetBinContent(21,0.7674276);
   VbbHcc_algo_Z_mass__373->SetBinContent(22,0.7176595);
   VbbHcc_algo_Z_mass__373->SetBinContent(23,0.6985151);
   VbbHcc_algo_Z_mass__373->SetBinContent(24,0.6797051);
   VbbHcc_algo_Z_mass__373->SetBinContent(25,0.6242237);
   VbbHcc_algo_Z_mass__373->SetBinContent(26,0.608305);
   VbbHcc_algo_Z_mass__373->SetBinContent(27,0.5602736);
   VbbHcc_algo_Z_mass__373->SetBinContent(28,0.5527782);
   VbbHcc_algo_Z_mass__373->SetBinContent(29,0.5385652);
   VbbHcc_algo_Z_mass__373->SetBinContent(30,0.5223221);
   VbbHcc_algo_Z_mass__373->SetBinContent(31,0.4641528);
   VbbHcc_algo_Z_mass__373->SetBinContent(32,0.4732517);
   VbbHcc_algo_Z_mass__373->SetBinContent(33,0.4600906);
   VbbHcc_algo_Z_mass__373->SetBinContent(34,0.44355);
   VbbHcc_algo_Z_mass__373->SetBinContent(35,0.4086048);
   VbbHcc_algo_Z_mass__373->SetBinContent(36,0.404133);
   VbbHcc_algo_Z_mass__373->SetBinContent(37,0.3445136);
   VbbHcc_algo_Z_mass__373->SetBinContent(38,0.3562266);
   VbbHcc_algo_Z_mass__373->SetBinContent(39,0.3336686);
   VbbHcc_algo_Z_mass__373->SetBinContent(40,0.3501384);
   VbbHcc_algo_Z_mass__373->SetBinContent(41,14.14201);
   VbbHcc_algo_Z_mass__373->SetBinError(3,0.0008635911);
   VbbHcc_algo_Z_mass__373->SetBinError(4,0.004723211);
   VbbHcc_algo_Z_mass__373->SetBinError(5,0.01178562);
   VbbHcc_algo_Z_mass__373->SetBinError(6,0.01885145);
   VbbHcc_algo_Z_mass__373->SetBinError(7,0.02655655);
   VbbHcc_algo_Z_mass__373->SetBinError(8,0.03826346);
   VbbHcc_algo_Z_mass__373->SetBinError(9,0.05013778);
   VbbHcc_algo_Z_mass__373->SetBinError(10,0.052508);
   VbbHcc_algo_Z_mass__373->SetBinError(11,0.04475855);
   VbbHcc_algo_Z_mass__373->SetBinError(12,0.04034706);
   VbbHcc_algo_Z_mass__373->SetBinError(13,0.03621125);
   VbbHcc_algo_Z_mass__373->SetBinError(14,0.03134906);
   VbbHcc_algo_Z_mass__373->SetBinError(15,0.02663017);
   VbbHcc_algo_Z_mass__373->SetBinError(16,0.02370792);
   VbbHcc_algo_Z_mass__373->SetBinError(17,0.02213903);
   VbbHcc_algo_Z_mass__373->SetBinError(18,0.02237188);
   VbbHcc_algo_Z_mass__373->SetBinError(19,0.02096685);
   VbbHcc_algo_Z_mass__373->SetBinError(20,0.02023393);
   VbbHcc_algo_Z_mass__373->SetBinError(21,0.02018342);
   VbbHcc_algo_Z_mass__373->SetBinError(22,0.01956659);
   VbbHcc_algo_Z_mass__373->SetBinError(23,0.01938319);
   VbbHcc_algo_Z_mass__373->SetBinError(24,0.01909512);
   VbbHcc_algo_Z_mass__373->SetBinError(25,0.01832951);
   VbbHcc_algo_Z_mass__373->SetBinError(26,0.01803831);
   VbbHcc_algo_Z_mass__373->SetBinError(27,0.0172906);
   VbbHcc_algo_Z_mass__373->SetBinError(28,0.01726658);
   VbbHcc_algo_Z_mass__373->SetBinError(29,0.0170809);
   VbbHcc_algo_Z_mass__373->SetBinError(30,0.01676227);
   VbbHcc_algo_Z_mass__373->SetBinError(31,0.01578012);
   VbbHcc_algo_Z_mass__373->SetBinError(32,0.01600077);
   VbbHcc_algo_Z_mass__373->SetBinError(33,0.01578853);
   VbbHcc_algo_Z_mass__373->SetBinError(34,0.01549139);
   VbbHcc_algo_Z_mass__373->SetBinError(35,0.01486333);
   VbbHcc_algo_Z_mass__373->SetBinError(36,0.01480965);
   VbbHcc_algo_Z_mass__373->SetBinError(37,0.01357662);
   VbbHcc_algo_Z_mass__373->SetBinError(38,0.0138161);
   VbbHcc_algo_Z_mass__373->SetBinError(39,0.01337581);
   VbbHcc_algo_Z_mass__373->SetBinError(40,0.01381085);
   VbbHcc_algo_Z_mass__373->SetBinError(41,0.08726931);
   VbbHcc_algo_Z_mass__373->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_mass__373->SetFillColor(ci);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
