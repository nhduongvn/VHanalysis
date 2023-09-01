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
   H_mass_algo_16->Range(-80,-0.006914271,453.3333,0.06222844);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__389 = new TH1D("VbbHcc_algo_H_mass__389","",40,0,400);
   VbbHcc_algo_H_mass__389->SetBinContent(6,0.007567453);
   VbbHcc_algo_H_mass__389->SetBinContent(7,0.004402191);
   VbbHcc_algo_H_mass__389->SetBinContent(8,0.007633085);
   VbbHcc_algo_H_mass__389->SetBinContent(9,0.02227599);
   VbbHcc_algo_H_mass__389->SetBinContent(10,0.03980782);
   VbbHcc_algo_H_mass__389->SetBinContent(11,0.0501729);
   VbbHcc_algo_H_mass__389->SetBinContent(12,0.03122406);
   VbbHcc_algo_H_mass__389->SetBinContent(13,0.05268016);
   VbbHcc_algo_H_mass__389->SetBinContent(14,0.02258477);
   VbbHcc_algo_H_mass__389->SetBinContent(15,0.02864897);
   VbbHcc_algo_H_mass__389->SetBinContent(16,0.02730926);
   VbbHcc_algo_H_mass__389->SetBinContent(17,0.02027335);
   VbbHcc_algo_H_mass__389->SetBinContent(18,0.007101113);
   VbbHcc_algo_H_mass__389->SetBinContent(20,0.01266043);
   VbbHcc_algo_H_mass__389->SetBinContent(21,0.009839914);
   VbbHcc_algo_H_mass__389->SetBinContent(22,0.004520573);
   VbbHcc_algo_H_mass__389->SetBinContent(23,0.004801789);
   VbbHcc_algo_H_mass__389->SetBinContent(24,0.00777718);
   VbbHcc_algo_H_mass__389->SetBinContent(25,0.008103879);
   VbbHcc_algo_H_mass__389->SetBinContent(26,0.01397567);
   VbbHcc_algo_H_mass__389->SetBinContent(27,0.01244851);
   VbbHcc_algo_H_mass__389->SetBinContent(28,0.009195787);
   VbbHcc_algo_H_mass__389->SetBinContent(29,0.008911709);
   VbbHcc_algo_H_mass__389->SetBinContent(30,0.005797919);
   VbbHcc_algo_H_mass__389->SetBinContent(31,0.002542331);
   VbbHcc_algo_H_mass__389->SetBinContent(32,0.008324955);
   VbbHcc_algo_H_mass__389->SetBinContent(33,0.01282046);
   VbbHcc_algo_H_mass__389->SetBinContent(34,0.004267967);
   VbbHcc_algo_H_mass__389->SetBinContent(35,0.004461244);
   VbbHcc_algo_H_mass__389->SetBinContent(36,0.006326984);
   VbbHcc_algo_H_mass__389->SetBinContent(37,0.005805889);
   VbbHcc_algo_H_mass__389->SetBinContent(39,0.00449382);
   VbbHcc_algo_H_mass__389->SetBinContent(40,0.003817931);
   VbbHcc_algo_H_mass__389->SetBinContent(41,0.2866769);
   VbbHcc_algo_H_mass__389->SetBinError(6,0.003796308);
   VbbHcc_algo_H_mass__389->SetBinError(7,0.002758876);
   VbbHcc_algo_H_mass__389->SetBinError(8,0.003833086);
   VbbHcc_algo_H_mass__389->SetBinError(9,0.007462868);
   VbbHcc_algo_H_mass__389->SetBinError(10,0.009186413);
   VbbHcc_algo_H_mass__389->SetBinError(11,0.0102043);
   VbbHcc_algo_H_mass__389->SetBinError(12,0.009383203);
   VbbHcc_algo_H_mass__389->SetBinError(13,0.01133399);
   VbbHcc_algo_H_mass__389->SetBinError(14,0.007197442);
   VbbHcc_algo_H_mass__389->SetBinError(15,0.008015791);
   VbbHcc_algo_H_mass__389->SetBinError(16,0.007674957);
   VbbHcc_algo_H_mass__389->SetBinError(17,0.006570389);
   VbbHcc_algo_H_mass__389->SetBinError(18,0.004107452);
   VbbHcc_algo_H_mass__389->SetBinError(20,0.005486134);
   VbbHcc_algo_H_mass__389->SetBinError(21,0.004451042);
   VbbHcc_algo_H_mass__389->SetBinError(22,0.003204177);
   VbbHcc_algo_H_mass__389->SetBinError(23,0.002775959);
   VbbHcc_algo_H_mass__389->SetBinError(24,0.003899076);
   VbbHcc_algo_H_mass__389->SetBinError(25,0.004056435);
   VbbHcc_algo_H_mass__389->SetBinError(26,0.005500444);
   VbbHcc_algo_H_mass__389->SetBinError(27,0.005086145);
   VbbHcc_algo_H_mass__389->SetBinError(28,0.00463223);
   VbbHcc_algo_H_mass__389->SetBinError(29,0.004512593);
   VbbHcc_algo_H_mass__389->SetBinError(30,0.003448167);
   VbbHcc_algo_H_mass__389->SetBinError(31,0.002542331);
   VbbHcc_algo_H_mass__389->SetBinError(32,0.00417245);
   VbbHcc_algo_H_mass__389->SetBinError(33,0.005270789);
   VbbHcc_algo_H_mass__389->SetBinError(34,0.003019374);
   VbbHcc_algo_H_mass__389->SetBinError(35,0.003199978);
   VbbHcc_algo_H_mass__389->SetBinError(36,0.003666166);
   VbbHcc_algo_H_mass__389->SetBinError(37,0.003353967);
   VbbHcc_algo_H_mass__389->SetBinError(39,0.003178845);
   VbbHcc_algo_H_mass__389->SetBinError(40,0.002701468);
   VbbHcc_algo_H_mass__389->SetBinError(41,0.02527498);
   VbbHcc_algo_H_mass__389->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_mass__389->SetFillColor(ci);
   VbbHcc_algo_H_mass__389->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__389->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__389->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__389->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__389->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__389->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__389->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__389->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__389->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__389->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__389->Draw("HIST");
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
